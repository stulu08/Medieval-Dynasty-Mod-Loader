#include "Mod.h"
#include "Utilities/MinHook.h"

#include "BaseMod.h"

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

void ExampleMod::OnModInitilize() {
	//REGISTER_FUNCTION(WriteToFile);
	//if you want to name them on your own do this
	//REGISTER_FUNCTION_NAMED(WriteToFile, "WriteToFile");

	//MinHook::Init(); //Uncomment if you plan to do hooks
	UseMenuButton = true; // Allows Mod Loader To Show a Button, if pressed OnModMenuButtonPressed will be called
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

bool ExampleMod::Tick(UE4::ELevelTick tick, float DelatTime) {

	return GameMod::Tick(tick, DelatTime);
}

static bool showWindow = true;
void ExampleMod::OnModMenuButtonPressed() {
	showWindow = !showWindow;
}

bool ExampleMod::DrawImGui() {
	if (showWindow) {
		if (ImGui::Begin("Your Mod", &showWindow)) {
			ImGui::Text("Hello World!");
			ImGui::End();
		}
		return false;
	}
}
