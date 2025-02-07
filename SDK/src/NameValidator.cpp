#include "Core.h"
#include "NameValidator.h"
#include "UE4.h"

#define FAST_CHECK 1
std::string NameValidator::MakeValidName(std::string&& name) {
	std::string valid(name);

	for (auto i = 0u; i < name.length(); ++i)
	{
		if (valid[i] == ' '
			|| valid[i] == '?'
			|| valid[i] == '+'
			|| valid[i] == '-'
			|| valid[i] == ':'
			|| valid[i] == '/'
			|| valid[i] == '^'
			|| valid[i] == '('
			|| valid[i] == ')'
			|| valid[i] == '['
			|| valid[i] == ']'
			|| valid[i] == '<'
			|| valid[i] == '>'
			|| valid[i] == '&'
			|| valid[i] == '.'
			|| valid[i] == '#'
			|| valid[i] == '\''
			|| valid[i] == '"'
			|| valid[i] == '%')
		{
			valid[i] = '_';
		}
	}

	if (!valid.empty())
	{
		if (std::isdigit(valid[0]))
		{
			valid = '_' + valid;
		}
	}

	return valid;
}
std::string NameValidator::SimplifyEnumName(std::string&& name) {
	const auto index = name.find_last_of(':');
	if (index == std::string::npos)
	{
		return name;
	}

	return name.substr(index + 1);
}
template<typename T>
std::string MakeUniqueCppNameImpl(const T* t) {
	std::string name;
#if !FAST_CHECK
	if (UE4::UObject::CountObjectByTypeAndName<T>(t->GetName()) > 1)
	{
		name += NameValidator::MakeValidName(t->GetOuter()->GetName()) + "_";
	}
#endif // NO_CHECK
	return name + NameValidator::MakeValidName(t->GetName());
}
std::string NameValidator::MakeUniqueCppName(const UE4::UEnum* e)
{
	auto name = MakeUniqueCppNameImpl(e);
	if (!name.empty() && name[0] != 'E')
	{
		name = 'E' + name;
	}
	return name;
}
std::string NameValidator::MakeUniqueCppName(const UE4::UStruct* ss)
{
	std::string name;
#if !FAST_CHECK
	if (UE4::UObject::CountObjectByTypeAndName<UE4::UStruct>(ss->GetName()) > 1)
	{
		name += MakeValidName(ss->GetOuter()->GetCPPName()) + "_";
	}
#endif
	return name + MakeValidName(ss->GetCPPName());
}