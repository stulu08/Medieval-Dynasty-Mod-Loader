#include "../SDK.h"
#include "RichTextBlockImageDecorator.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ImageSet
// Declaration: class UDataTable* ImageSet
class UDataTable* URichTextBlockImageDecorator::M_GetImageSet() const {
	return Read<class UDataTable*>((byte*)this + 40);
}
class UDataTable** URichTextBlockImageDecorator::M_PtrGetImageSet() {
	return reinterpret_cast<class UDataTable**>((byte*)this + 40);
}
void URichTextBlockImageDecorator::M_SetImageSet(const class UDataTable*& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}