#include "Mod.h"
#include "MDML/Hooks.h"

//BPFUNCTION(WriteToFile)
//{
//	std::cout << "WriteToFile" << std::endl;
//	struct InputParams
//	{
//		UE4::FString NameTest;
//	};
//	auto Inputs = stack->GetInputParams<InputParams>();
//	stack->SetOutput<UE4::FString>("OutPutString", L"KboyGang");
//	stack->SetOutput<bool>("ReturnValue", true);
//}

void ExampleMod::OnLoad(ModContext& ctx) {
	// ctx.Self() is this mod; ctx.ForEachMod / FindMod / AddOverwriteFile / EditBlueprint can change the other mods
	// before their components are applied (see docs/guides/Modding.md).
	if (logger)
		logger->Info("{0} loaded, {1} mod(s) in the list", GetName(), mdml::mods::GetModCount());
}

void ExampleMod::OnModInitialize() {
	//REGISTER_FUNCTION(WriteToFile);
	//if you want to name them on your own do this
	//REGISTER_FUNCTION_NAMED(WriteToFile, "WriteToFile");

	// Function hooks go through MDML (it owns MinHook, no init needed), e.g.
	//mdml::platform::Hooks::Add(targetAddress, &hookFunction, &origFunction, "Class::Function");
	// MenuButton=1 in the [Core] section of mod.ini makes the Mod Loader show a button, if pressed OnModMenuButtonPressed will be called
}

bool ExampleMod::MenuBeginPlay(UE4::AActor* Actor)
{
	return false;
}

bool ExampleMod::GameLoadingBeginPlay(UE4::AActor* Actor)
{
	return false;
}

bool ExampleMod::GameBeginPlay(UE4::AActor* Actor)
{
	return false;
}

bool ExampleMod::MenuTick(float deltaTime)
{
	return false;
}

bool ExampleMod::GameTick(float deltaTime)
{
	return false;
}

bool ExampleMod::MenuInit()
{
	return false;
}

bool ExampleMod::GameInit()
{
	return false;
}

bool ExampleMod::Tick(UE4::ELevelTick tick, float DeltaTime) {

	return GameMod::Tick(tick, DeltaTime);
}

static bool showWindow = true;
void ExampleMod::OnModMenuButtonPressed() {
	showWindow = !showWindow;
}

bool ExampleMod::DrawImGui() {
	if (showWindow) {
		if (ImGui::Begin("Your Mod", &showWindow)) {
			ImGui::Text("Hello World!");
		}
		ImGui::End(); // always paired with Begin, even when the window is collapsed
	}
	return false;
}
