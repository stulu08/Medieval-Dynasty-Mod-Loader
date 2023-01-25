#include "../SDK.h"
#include "UI_MainMenu_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UUI_MainMenu_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 608);
}
struct FPointerToUberGraphFrame* UUI_MainMenu_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 608);
}
void UUI_MainMenu_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of fade
// Declaration: class UWidgetAnimation* fade
class UWidgetAnimation* UUI_MainMenu_C::M_Getfade() const {
	return Read<class UWidgetAnimation*>((byte*)this + 616);
}
class UWidgetAnimation** UUI_MainMenu_C::M_PtrGetfade() {
	return reinterpret_cast<class UWidgetAnimation**>((byte*)this + 616);
}
void UUI_MainMenu_C::M_Setfade(const class UWidgetAnimation*& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of BackgroundImage
// Declaration: class UImage* BackgroundImage
class UImage* UUI_MainMenu_C::M_GetBackgroundImage() const {
	return Read<class UImage*>((byte*)this + 624);
}
class UImage** UUI_MainMenu_C::M_PtrGetBackgroundImage() {
	return reinterpret_cast<class UImage**>((byte*)this + 624);
}
void UUI_MainMenu_C::M_SetBackgroundImage(const class UImage*& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of BorderQuitAcceptation
// Declaration: class UBorder* BorderQuitAcceptation
class UBorder* UUI_MainMenu_C::M_GetBorderQuitAcceptation() const {
	return Read<class UBorder*>((byte*)this + 632);
}
class UBorder** UUI_MainMenu_C::M_PtrGetBorderQuitAcceptation() {
	return reinterpret_cast<class UBorder**>((byte*)this + 632);
}
void UUI_MainMenu_C::M_SetBorderQuitAcceptation(const class UBorder*& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of btn_Continue
// Declaration: class UUI_MenuButton_C* btn_Continue
class UUI_MenuButton_C* UUI_MainMenu_C::M_Getbtn_Continue() const {
	return Read<class UUI_MenuButton_C*>((byte*)this + 640);
}
class UUI_MenuButton_C** UUI_MainMenu_C::M_PtrGetbtn_Continue() {
	return reinterpret_cast<class UUI_MenuButton_C**>((byte*)this + 640);
}
void UUI_MainMenu_C::M_Setbtn_Continue(const class UUI_MenuButton_C*& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of btn_Credits
// Declaration: class UUI_MenuButton_C* btn_Credits
class UUI_MenuButton_C* UUI_MainMenu_C::M_Getbtn_Credits() const {
	return Read<class UUI_MenuButton_C*>((byte*)this + 648);
}
class UUI_MenuButton_C** UUI_MainMenu_C::M_PtrGetbtn_Credits() {
	return reinterpret_cast<class UUI_MenuButton_C**>((byte*)this + 648);
}
void UUI_MainMenu_C::M_Setbtn_Credits(const class UUI_MenuButton_C*& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of btn_LoadGame
// Declaration: class UUI_MenuButton_C* btn_LoadGame
class UUI_MenuButton_C* UUI_MainMenu_C::M_Getbtn_LoadGame() const {
	return Read<class UUI_MenuButton_C*>((byte*)this + 656);
}
class UUI_MenuButton_C** UUI_MainMenu_C::M_PtrGetbtn_LoadGame() {
	return reinterpret_cast<class UUI_MenuButton_C**>((byte*)this + 656);
}
void UUI_MainMenu_C::M_Setbtn_LoadGame(const class UUI_MenuButton_C*& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of btn_NewGame
// Declaration: class UUI_MenuButton_C* btn_NewGame
class UUI_MenuButton_C* UUI_MainMenu_C::M_Getbtn_NewGame() const {
	return Read<class UUI_MenuButton_C*>((byte*)this + 664);
}
class UUI_MenuButton_C** UUI_MainMenu_C::M_PtrGetbtn_NewGame() {
	return reinterpret_cast<class UUI_MenuButton_C**>((byte*)this + 664);
}
void UUI_MainMenu_C::M_Setbtn_NewGame(const class UUI_MenuButton_C*& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of btn_Quit
// Declaration: class UUI_MenuButton_C* btn_Quit
class UUI_MenuButton_C* UUI_MainMenu_C::M_Getbtn_Quit() const {
	return Read<class UUI_MenuButton_C*>((byte*)this + 672);
}
class UUI_MenuButton_C** UUI_MainMenu_C::M_PtrGetbtn_Quit() {
	return reinterpret_cast<class UUI_MenuButton_C**>((byte*)this + 672);
}
void UUI_MainMenu_C::M_Setbtn_Quit(const class UUI_MenuButton_C*& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of btn_Settings
// Declaration: class UUI_MenuButton_C* btn_Settings
class UUI_MenuButton_C* UUI_MainMenu_C::M_Getbtn_Settings() const {
	return Read<class UUI_MenuButton_C*>((byte*)this + 680);
}
class UUI_MenuButton_C** UUI_MainMenu_C::M_PtrGetbtn_Settings() {
	return reinterpret_cast<class UUI_MenuButton_C**>((byte*)this + 680);
}
void UUI_MainMenu_C::M_Setbtn_Settings(const class UUI_MenuButton_C*& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of ConsoleUserBox
// Declaration: class UHorizontalBox* ConsoleUserBox
class UHorizontalBox* UUI_MainMenu_C::M_GetConsoleUserBox() const {
	return Read<class UHorizontalBox*>((byte*)this + 688);
}
class UHorizontalBox** UUI_MainMenu_C::M_PtrGetConsoleUserBox() {
	return reinterpret_cast<class UHorizontalBox**>((byte*)this + 688);
}
void UUI_MainMenu_C::M_SetConsoleUserBox(const class UHorizontalBox*& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of CreditsBorder
// Declaration: class UBorder* CreditsBorder
class UBorder* UUI_MainMenu_C::M_GetCreditsBorder() const {
	return Read<class UBorder*>((byte*)this + 696);
}
class UBorder** UUI_MainMenu_C::M_PtrGetCreditsBorder() {
	return reinterpret_cast<class UBorder**>((byte*)this + 696);
}
void UUI_MainMenu_C::M_SetCreditsBorder(const class UBorder*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of Img_ConsoleUserInput
// Declaration: class UImage* Img_ConsoleUserInput
class UImage* UUI_MainMenu_C::M_GetImg_ConsoleUserInput() const {
	return Read<class UImage*>((byte*)this + 704);
}
class UImage** UUI_MainMenu_C::M_PtrGetImg_ConsoleUserInput() {
	return reinterpret_cast<class UImage**>((byte*)this + 704);
}
void UUI_MainMenu_C::M_SetImg_ConsoleUserInput(const class UImage*& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of Logo
// Declaration: class UImage* Logo
class UImage* UUI_MainMenu_C::M_GetLogo() const {
	return Read<class UImage*>((byte*)this + 712);
}
class UImage** UUI_MainMenu_C::M_PtrGetLogo() {
	return reinterpret_cast<class UImage**>((byte*)this + 712);
}
void UUI_MainMenu_C::M_SetLogo(const class UImage*& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of LowerMenuBar
// Declaration: class UImage* LowerMenuBar
class UImage* UUI_MainMenu_C::M_GetLowerMenuBar() const {
	return Read<class UImage*>((byte*)this + 720);
}
class UImage** UUI_MainMenu_C::M_PtrGetLowerMenuBar() {
	return reinterpret_cast<class UImage**>((byte*)this + 720);
}
void UUI_MainMenu_C::M_SetLowerMenuBar(const class UImage*& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of Main
// Declaration: class UVerticalBox* Main
class UVerticalBox* UUI_MainMenu_C::M_GetMain() const {
	return Read<class UVerticalBox*>((byte*)this + 728);
}
class UVerticalBox** UUI_MainMenu_C::M_PtrGetMain() {
	return reinterpret_cast<class UVerticalBox**>((byte*)this + 728);
}
void UUI_MainMenu_C::M_SetMain(const class UVerticalBox*& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of NewGameConfigBorder
// Declaration: class UBorder* NewGameConfigBorder
class UBorder* UUI_MainMenu_C::M_GetNewGameConfigBorder() const {
	return Read<class UBorder*>((byte*)this + 736);
}
class UBorder** UUI_MainMenu_C::M_PtrGetNewGameConfigBorder() {
	return reinterpret_cast<class UBorder**>((byte*)this + 736);
}
void UUI_MainMenu_C::M_SetNewGameConfigBorder(const class UBorder*& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of OldSaveContinueBorder
// Declaration: class UBorder* OldSaveContinueBorder
class UBorder* UUI_MainMenu_C::M_GetOldSaveContinueBorder() const {
	return Read<class UBorder*>((byte*)this + 744);
}
class UBorder** UUI_MainMenu_C::M_PtrGetOldSaveContinueBorder() {
	return reinterpret_cast<class UBorder**>((byte*)this + 744);
}
void UUI_MainMenu_C::M_SetOldSaveContinueBorder(const class UBorder*& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of SettingsField
// Declaration: class UUI_OptionsVerticalMenu_C* SettingsField
class UUI_OptionsVerticalMenu_C* UUI_MainMenu_C::M_GetSettingsField() const {
	return Read<class UUI_OptionsVerticalMenu_C*>((byte*)this + 752);
}
class UUI_OptionsVerticalMenu_C** UUI_MainMenu_C::M_PtrGetSettingsField() {
	return reinterpret_cast<class UUI_OptionsVerticalMenu_C**>((byte*)this + 752);
}
void UUI_MainMenu_C::M_SetSettingsField(const class UUI_OptionsVerticalMenu_C*& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of TestVersionBorder
// Declaration: class UBorder* TestVersionBorder
class UBorder* UUI_MainMenu_C::M_GetTestVersionBorder() const {
	return Read<class UBorder*>((byte*)this + 760);
}
class UBorder** UUI_MainMenu_C::M_PtrGetTestVersionBorder() {
	return reinterpret_cast<class UBorder**>((byte*)this + 760);
}
void UUI_MainMenu_C::M_SetTestVersionBorder(const class UBorder*& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of txt_ConsoleStartText
// Declaration: class UTextBlock* txt_ConsoleStartText
class UTextBlock* UUI_MainMenu_C::M_Gettxt_ConsoleStartText() const {
	return Read<class UTextBlock*>((byte*)this + 768);
}
class UTextBlock** UUI_MainMenu_C::M_PtrGettxt_ConsoleStartText() {
	return reinterpret_cast<class UTextBlock**>((byte*)this + 768);
}
void UUI_MainMenu_C::M_Settxt_ConsoleStartText(const class UTextBlock*& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of txt_ConsoleUser
// Declaration: class UTextBlock* txt_ConsoleUser
class UTextBlock* UUI_MainMenu_C::M_Gettxt_ConsoleUser() const {
	return Read<class UTextBlock*>((byte*)this + 776);
}
class UTextBlock** UUI_MainMenu_C::M_PtrGettxt_ConsoleUser() {
	return reinterpret_cast<class UTextBlock**>((byte*)this + 776);
}
void UUI_MainMenu_C::M_Settxt_ConsoleUser(const class UTextBlock*& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of txt_GameVersion
// Declaration: class UTextBlock* txt_GameVersion
class UTextBlock* UUI_MainMenu_C::M_Gettxt_GameVersion() const {
	return Read<class UTextBlock*>((byte*)this + 784);
}
class UTextBlock** UUI_MainMenu_C::M_PtrGettxt_GameVersion() {
	return reinterpret_cast<class UTextBlock**>((byte*)this + 784);
}
void UUI_MainMenu_C::M_Settxt_GameVersion(const class UTextBlock*& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of UI_LoadMenu
// Declaration: class UUI_LoadMenu_C* UI_LoadMenu
class UUI_LoadMenu_C* UUI_MainMenu_C::M_GetUI_LoadMenu() const {
	return Read<class UUI_LoadMenu_C*>((byte*)this + 792);
}
class UUI_LoadMenu_C** UUI_MainMenu_C::M_PtrGetUI_LoadMenu() {
	return reinterpret_cast<class UUI_LoadMenu_C**>((byte*)this + 792);
}
void UUI_MainMenu_C::M_SetUI_LoadMenu(const class UUI_LoadMenu_C*& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of UpperMenuBar
// Declaration: class UImage* UpperMenuBar
class UImage* UUI_MainMenu_C::M_GetUpperMenuBar() const {
	return Read<class UImage*>((byte*)this + 800);
}
class UImage** UUI_MainMenu_C::M_PtrGetUpperMenuBar() {
	return reinterpret_cast<class UImage**>((byte*)this + 800);
}
void UUI_MainMenu_C::M_SetUpperMenuBar(const class UImage*& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of GameMenuIndex
// Declaration: int32_t GameMenuIndex
int32_t UUI_MainMenu_C::M_GetGameMenuIndex() const {
	return Read<int32_t>((byte*)this + 808);
}
int32_t* UUI_MainMenu_C::M_PtrGetGameMenuIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 808);
}
void UUI_MainMenu_C::M_SetGameMenuIndex(const int32_t& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of Buttons
// Declaration: TArray<class UUI_MenuButton_C*> Buttons
TArray<class UUI_MenuButton_C*> UUI_MainMenu_C::M_GetButtons() const {
	return Read<TArray<class UUI_MenuButton_C*>>((byte*)this + 816);
}
TArray<class UUI_MenuButton_C*>* UUI_MainMenu_C::M_PtrGetButtons() {
	return reinterpret_cast<TArray<class UUI_MenuButton_C*>*>((byte*)this + 816);
}
void UUI_MainMenu_C::M_SetButtons(const TArray<class UUI_MenuButton_C*>& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of OldMousePosition
// Declaration: struct FVector2D OldMousePosition
struct FVector2D UUI_MainMenu_C::M_GetOldMousePosition() const {
	return Read<struct FVector2D>((byte*)this + 832);
}
struct FVector2D* UUI_MainMenu_C::M_PtrGetOldMousePosition() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 832);
}
void UUI_MainMenu_C::M_SetOldMousePosition(const struct FVector2D& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of tmp_IsHovered
// Declaration: bool tmp_IsHovered
bool UUI_MainMenu_C::M_Gettmp_IsHovered() const {
	return Read<bool>((byte*)this + 840);
}
bool* UUI_MainMenu_C::M_PtrGettmp_IsHovered() {
	return reinterpret_cast<bool*>((byte*)this + 840);
}
void UUI_MainMenu_C::M_Settmp_IsHovered(const bool& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of WasAcceptationOpened
// Declaration: bool WasAcceptationOpened
bool UUI_MainMenu_C::M_GetWasAcceptationOpened() const {
	return Read<bool>((byte*)this + 841);
}
bool* UUI_MainMenu_C::M_PtrGetWasAcceptationOpened() {
	return reinterpret_cast<bool*>((byte*)this + 841);
}
void UUI_MainMenu_C::M_SetWasAcceptationOpened(const bool& value) {
	Write((byte*)this + 841, value);
}
// Member Getter and Setter of NewGameConfigMenuReference
// Declaration: class UUI_NewGameConfigurationMenu_C* NewGameConfigMenuReference
class UUI_NewGameConfigurationMenu_C* UUI_MainMenu_C::M_GetNewGameConfigMenuReference() const {
	return Read<class UUI_NewGameConfigurationMenu_C*>((byte*)this + 848);
}
class UUI_NewGameConfigurationMenu_C** UUI_MainMenu_C::M_PtrGetNewGameConfigMenuReference() {
	return reinterpret_cast<class UUI_NewGameConfigurationMenu_C**>((byte*)this + 848);
}
void UUI_MainMenu_C::M_SetNewGameConfigMenuReference(const class UUI_NewGameConfigurationMenu_C*& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of ConsoleVersion
// Declaration: bool ConsoleVersion
bool UUI_MainMenu_C::M_GetConsoleVersion() const {
	return Read<bool>((byte*)this + 856);
}
bool* UUI_MainMenu_C::M_PtrGetConsoleVersion() {
	return reinterpret_cast<bool*>((byte*)this + 856);
}
void UUI_MainMenu_C::M_SetConsoleVersion(const bool& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of GameInstanceReference
// Declaration: class UGI_MedievalDynasty_C* GameInstanceReference
class UGI_MedievalDynasty_C* UUI_MainMenu_C::M_GetGameInstanceReference() const {
	return Read<class UGI_MedievalDynasty_C*>((byte*)this + 864);
}
class UGI_MedievalDynasty_C** UUI_MainMenu_C::M_PtrGetGameInstanceReference() {
	return reinterpret_cast<class UGI_MedievalDynasty_C**>((byte*)this + 864);
}
void UUI_MainMenu_C::M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of CanAnyKeyBePressed
// Declaration: bool CanAnyKeyBePressed
bool UUI_MainMenu_C::M_GetCanAnyKeyBePressed() const {
	return Read<bool>((byte*)this + 872);
}
bool* UUI_MainMenu_C::M_PtrGetCanAnyKeyBePressed() {
	return reinterpret_cast<bool*>((byte*)this + 872);
}
void UUI_MainMenu_C::M_SetCanAnyKeyBePressed(const bool& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of UserInfo
// Declaration: TArray<struct FString> UserInfo
TArray<struct FString> UUI_MainMenu_C::M_GetUserInfo() const {
	return Read<TArray<struct FString>>((byte*)this + 880);
}
TArray<struct FString>* UUI_MainMenu_C::M_PtrGetUserInfo() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 880);
}
void UUI_MainMenu_C::M_SetUserInfo(const TArray<struct FString>& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of MenuMusic
// Declaration: class UAudioComponent* MenuMusic
class UAudioComponent* UUI_MainMenu_C::M_GetMenuMusic() const {
	return Read<class UAudioComponent*>((byte*)this + 896);
}
class UAudioComponent** UUI_MainMenu_C::M_PtrGetMenuMusic() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 896);
}
void UUI_MainMenu_C::M_SetMenuMusic(const class UAudioComponent*& value) {
	Write((byte*)this + 896, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu");

	struct UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.StopMusic
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::StopMusic() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.StopMusic");

	struct UUI_MainMenu_C_StopMusic_Params {
	};
	UUI_MainMenu_C_StopMusic_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.ChangeSteeringType_Event_1
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Gamepad	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UUI_MainMenu_C::ChangeSteeringType_Event_1(bool Gamepad) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ChangeSteeringType_Event_1");

	struct UUI_MainMenu_C_ChangeSteeringType_Event_1_Params {
		bool Gamepad;			//Offset: 0 | ElementSize: 1
	};
	UUI_MainMenu_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.SkipMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: messageReason	Type: E_MessageReason	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::SkipMenu(E_MessageReason messageReason) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.SkipMenu");

	struct UUI_MainMenu_C_SkipMenu_Params {
		E_MessageReason messageReason;			//Offset: 0 | ElementSize: 1
	};
	UUI_MainMenu_C_SkipMenu_Params params;
	params.messageReason = messageReason;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.AnyKey
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::AnyKey() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.AnyKey");

	struct UUI_MainMenu_C_AnyKey_Params {
	};
	UUI_MainMenu_C_AnyKey_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.ChangeUser
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::ChangeUser() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ChangeUser");

	struct UUI_MainMenu_C_ChangeUser_Params {
	};
	UUI_MainMenu_C_ChangeUser_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Additional
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Additional() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Additional");

	struct UUI_MainMenu_C_Additional_Params {
	};
	UUI_MainMenu_C_Additional_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Drop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Drop() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Drop");

	struct UUI_MainMenu_C_Drop_Params {
	};
	UUI_MainMenu_C_Drop_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Prev_Section
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Prev_Section() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Prev_Section");

	struct UUI_MainMenu_C_Prev_Section_Params {
	};
	UUI_MainMenu_C_Prev_Section_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Next_Section
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Next_Section() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Next_Section");

	struct UUI_MainMenu_C_Next_Section_Params {
	};
	UUI_MainMenu_C_Next_Section_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Right
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Right() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Right");

	struct UUI_MainMenu_C_Right_Params {
	};
	UUI_MainMenu_C_Right_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Left
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Left() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Left");

	struct UUI_MainMenu_C_Left_Params {
	};
	UUI_MainMenu_C_Left_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Down
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Down() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Down");

	struct UUI_MainMenu_C_Down_Params {
	};
	UUI_MainMenu_C_Down_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Up
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Up() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Up");

	struct UUI_MainMenu_C_Up_Params {
	};
	UUI_MainMenu_C_Up_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Fade_Animation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Reverse	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UUI_MainMenu_C::Fade_Animation(bool Reverse) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Fade_Animation");

	struct UUI_MainMenu_C_Fade_Animation_Params {
		bool Reverse;			//Offset: 0 | ElementSize: 1
	};
	UUI_MainMenu_C_Fade_Animation_Params params;
	params.Reverse = Reverse;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Credits
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Credits() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Credits");

	struct UUI_MainMenu_C_Credits_Params {
	};
	UUI_MainMenu_C_Credits_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Continue
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Continue() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Continue");

	struct UUI_MainMenu_C_Continue_Params {
	};
	UUI_MainMenu_C_Continue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Tick
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: InDeltaTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Tick");

	struct UUI_MainMenu_C_Tick_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		float InDeltaTime;			//Offset: 56 | ElementSize: 4
	};
	UUI_MainMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.SetActivityOnHovered
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::SetActivityOnHovered() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.SetActivityOnHovered");

	struct UUI_MainMenu_C_SetActivityOnHovered_Params {
	};
	UUI_MainMenu_C_SetActivityOnHovered_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Settings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Settings() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Settings");

	struct UUI_MainMenu_C_Settings_Params {
	};
	UUI_MainMenu_C_Settings_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Load
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Load() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Load");

	struct UUI_MainMenu_C_Load_Params {
	};
	UUI_MainMenu_C_Load_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Quit
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Quit() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Quit");

	struct UUI_MainMenu_C_Quit_Params {
	};
	UUI_MainMenu_C_Quit_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.NewGame
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::NewGame() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.NewGame");

	struct UUI_MainMenu_C_NewGame_Params {
	};
	UUI_MainMenu_C_NewGame_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Construct
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Construct");

	struct UUI_MainMenu_C_Construct_Params {
	};
	UUI_MainMenu_C_Construct_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Play_Animation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Play_Animation() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Play_Animation");

	struct UUI_MainMenu_C_Play_Animation_Params {
	};
	UUI_MainMenu_C_Play_Animation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.ChangeAdditionalIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::ChangeAdditionalIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ChangeAdditionalIndex");

	struct UUI_MainMenu_C_ChangeAdditionalIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UUI_MainMenu_C_ChangeAdditionalIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.ChangeIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::ChangeIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ChangeIndex");

	struct UUI_MainMenu_C_ChangeIndex_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UUI_MainMenu_C_ChangeIndex_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.QuickSlot8
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::QuickSlot8() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.QuickSlot8");

	struct UUI_MainMenu_C_QuickSlot8_Params {
	};
	UUI_MainMenu_C_QuickSlot8_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.QuickSlot7
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::QuickSlot7() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.QuickSlot7");

	struct UUI_MainMenu_C_QuickSlot7_Params {
	};
	UUI_MainMenu_C_QuickSlot7_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.QuickSlot6
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::QuickSlot6() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.QuickSlot6");

	struct UUI_MainMenu_C_QuickSlot6_Params {
	};
	UUI_MainMenu_C_QuickSlot6_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.QuickSlot5
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::QuickSlot5() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.QuickSlot5");

	struct UUI_MainMenu_C_QuickSlot5_Params {
	};
	UUI_MainMenu_C_QuickSlot5_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.QuickSlot4
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::QuickSlot4() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.QuickSlot4");

	struct UUI_MainMenu_C_QuickSlot4_Params {
	};
	UUI_MainMenu_C_QuickSlot4_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.QuickSlot3
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::QuickSlot3() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.QuickSlot3");

	struct UUI_MainMenu_C_QuickSlot3_Params {
	};
	UUI_MainMenu_C_QuickSlot3_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.QuickSlot2
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::QuickSlot2() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.QuickSlot2");

	struct UUI_MainMenu_C_QuickSlot2_Params {
	};
	UUI_MainMenu_C_QuickSlot2_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.QuickSlot1
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::QuickSlot1() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.QuickSlot1");

	struct UUI_MainMenu_C_QuickSlot1_Params {
	};
	UUI_MainMenu_C_QuickSlot1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Close
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Close");

	struct UUI_MainMenu_C_Close_Params {
	};
	UUI_MainMenu_C_Close_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.OnSuccess_248A8EAA41034AAFBFA769AE115F6437
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::OnSuccess_248A8EAA41034AAFBFA769AE115F6437(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSuccess_248A8EAA41034AAFBFA769AE115F6437");

	struct UUI_MainMenu_C_OnSuccess_248A8EAA41034AAFBFA769AE115F6437_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UUI_MainMenu_C_OnSuccess_248A8EAA41034AAFBFA769AE115F6437_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.OnFailure_248A8EAA41034AAFBFA769AE115F6437
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::OnFailure_248A8EAA41034AAFBFA769AE115F6437(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnFailure_248A8EAA41034AAFBFA769AE115F6437");

	struct UUI_MainMenu_C_OnFailure_248A8EAA41034AAFBFA769AE115F6437_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UUI_MainMenu_C_OnFailure_248A8EAA41034AAFBFA769AE115F6437_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.OnSuccess_090DA0BA4F1FC58F9FF0159325CA0572
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::OnSuccess_090DA0BA4F1FC58F9FF0159325CA0572(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSuccess_090DA0BA4F1FC58F9FF0159325CA0572");

	struct UUI_MainMenu_C_OnSuccess_090DA0BA4F1FC58F9FF0159325CA0572_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UUI_MainMenu_C_OnSuccess_090DA0BA4F1FC58F9FF0159325CA0572_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.OnFailure_090DA0BA4F1FC58F9FF0159325CA0572
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::OnFailure_090DA0BA4F1FC58F9FF0159325CA0572(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnFailure_090DA0BA4F1FC58F9FF0159325CA0572");

	struct UUI_MainMenu_C_OnFailure_090DA0BA4F1FC58F9FF0159325CA0572_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UUI_MainMenu_C_OnFailure_090DA0BA4F1FC58F9FF0159325CA0572_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.IncreaseIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::IncreaseIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.IncreaseIndex");

	struct UUI_MainMenu_C_IncreaseIndex_Params {
	};
	UUI_MainMenu_C_IncreaseIndex_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.DecreaseIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::DecreaseIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.DecreaseIndex");

	struct UUI_MainMenu_C_DecreaseIndex_Params {
	};
	UUI_MainMenu_C_DecreaseIndex_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.ConfirmSelection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::ConfirmSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ConfirmSelection");

	struct UUI_MainMenu_C_ConfirmSelection_Params {
	};
	UUI_MainMenu_C_ConfirmSelection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.MakeButtonsUnactive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::MakeButtonsUnactive() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.MakeButtonsUnactive");

	struct UUI_MainMenu_C_MakeButtonsUnactive_Params {
	};
	UUI_MainMenu_C_MakeButtonsUnactive_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.MakeButtonActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::MakeButtonActive(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.MakeButtonActive");

	struct UUI_MainMenu_C_MakeButtonActive_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UUI_MainMenu_C_MakeButtonActive_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.CancelAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::CancelAction() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CancelAction");

	struct UUI_MainMenu_C_CancelAction_Params {
	};
	UUI_MainMenu_C_CancelAction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.DropAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::DropAction() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.DropAction");

	struct UUI_MainMenu_C_DropAction_Params {
	};
	UUI_MainMenu_C_DropAction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.AdditionalAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::AdditionalAction() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.AdditionalAction");

	struct UUI_MainMenu_C_AdditionalAction_Params {
	};
	UUI_MainMenu_C_AdditionalAction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.GetSaveFileNameForContinue
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveSlotName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
// Name: SaveSlotFound	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SaveSlotVersion	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UUI_MainMenu_C::GetSaveFileNameForContinue(struct FString* SaveSlotName, bool* SaveSlotFound, struct FString* SaveSlotVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetSaveFileNameForContinue");

	struct UUI_MainMenu_C_GetSaveFileNameForContinue_Params {
		struct FString SaveSlotName;			//Offset: 0 | ElementSize: 16
		bool SaveSlotFound;			//Offset: 16 | ElementSize: 1
		struct FString SaveSlotVersion;			//Offset: 24 | ElementSize: 16
	};
	UUI_MainMenu_C_GetSaveFileNameForContinue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SaveSlotName != nullptr)
		*SaveSlotName = params.SaveSlotName;
	if (SaveSlotFound != nullptr)
		*SaveSlotFound = params.SaveSlotFound;
	if (SaveSlotVersion != nullptr)
		*SaveSlotVersion = params.SaveSlotVersion;
}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.CheckContinueVisibility
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::CheckContinueVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CheckContinueVisibility");

	struct UUI_MainMenu_C_CheckContinueVisibility_Params {
	};
	UUI_MainMenu_C_CheckContinueVisibility_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.NextSection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::NextSection() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.NextSection");

	struct UUI_MainMenu_C_NextSection_Params {
	};
	UUI_MainMenu_C_NextSection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.PreviousSection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::PreviousSection() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.PreviousSection");

	struct UUI_MainMenu_C_PreviousSection_Params {
	};
	UUI_MainMenu_C_PreviousSection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.OnKeyDown
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: MyGeometry	Type: struct FGeometry	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: InKeyEvent	Type: struct FKeyEvent	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm
/////////////////////////////////////////////
struct FEventReply UUI_MainMenu_C::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnKeyDown");

	struct UUI_MainMenu_C_OnKeyDown_Params {
		struct FGeometry MyGeometry;			//Offset: 0 | ElementSize: 56
		struct FKeyEvent InKeyEvent;			//Offset: 56 | ElementSize: 56
		struct FEventReply ReturnValue;			//Offset: 112 | ElementSize: 184
	};
	UUI_MainMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.ShowPressAnyButton
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::ShowPressAnyButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ShowPressAnyButton");

	struct UUI_MainMenu_C_ShowPressAnyButton_Params {
	};
	UUI_MainMenu_C_ShowPressAnyButton_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.DoSaveGameExistConsoles
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: UserIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Exist	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UUI_MainMenu_C::DoSaveGameExistConsoles(int32_t UserIndex, bool* Exist) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.DoSaveGameExistConsoles");

	struct UUI_MainMenu_C_DoSaveGameExistConsoles_Params {
		int32_t UserIndex;			//Offset: 0 | ElementSize: 4
		bool Exist;			//Offset: 4 | ElementSize: 1
	};
	UUI_MainMenu_C_DoSaveGameExistConsoles_Params params;
	params.UserIndex = UserIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Exist != nullptr)
		*Exist = params.Exist;
}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.GetSaveFilesPS5
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: UserIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SaveFiles	Type: TArray<struct FString>	Flags: Parm, OutParm
// Name: SaveExist	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UUI_MainMenu_C::GetSaveFilesPS5(int32_t UserIndex, TArray<struct FString>* SaveFiles, bool* SaveExist) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetSaveFilesPS5");

	struct UUI_MainMenu_C_GetSaveFilesPS5_Params {
		int32_t UserIndex;			//Offset: 0 | ElementSize: 4
		TArray<struct FString> SaveFiles;			//Offset: 8 | ElementSize: 16
		bool SaveExist;			//Offset: 24 | ElementSize: 1
	};
	UUI_MainMenu_C_GetSaveFilesPS5_Params params;
	params.UserIndex = UserIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SaveFiles != nullptr)
		*SaveFiles = params.SaveFiles;
	if (SaveExist != nullptr)
		*SaveExist = params.SaveExist;
}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.CanBeClose
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UUI_MainMenu_C::CanBeClose(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CanBeClose");

	struct UUI_MainMenu_C_CanBeClose_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UUI_MainMenu_C_CanBeClose_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Cancel
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InputHandled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UUI_MainMenu_C::Cancel(bool* InputHandled) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Cancel");

	struct UUI_MainMenu_C_Cancel_Params {
		bool InputHandled;			//Offset: 0 | ElementSize: 1
	};
	UUI_MainMenu_C_Cancel_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;
}

/////////////////////////////////////////////
// Function UI_MainMenu.UI_MainMenu_C.Confirm
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InputHandled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UUI_MainMenu_C::Confirm(bool* InputHandled) {
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Confirm");

	struct UUI_MainMenu_C_Confirm_Params {
		bool InputHandled;			//Offset: 0 | ElementSize: 1
	};
	UUI_MainMenu_C_Confirm_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;
}

/////////////////////////////////////////////
// WidgetAnimation UI_MainMenu.UI_MainMenu_C.Fade_INST
// Flags: Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, MulticastDelegate, Private, Protected, HasOutParms
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::Fade_INST() {
	static auto fn = UObject::FindObject<UFunction>("WidgetAnimation UI_MainMenu.UI_MainMenu_C.Fade_INST");

	struct UUI_MainMenu_C_Fade_INST_Params {
	};
	UUI_MainMenu_C_Fade_INST_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// WidgetTree UI_MainMenu.UI_MainMenu_C.WidgetTree
// Flags: HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
/////////////////////////////////////////////
void UUI_MainMenu_C::WidgetTree() {
	static auto fn = UObject::FindObject<UFunction>("WidgetTree UI_MainMenu.UI_MainMenu_C.WidgetTree");

	struct UUI_MainMenu_C_WidgetTree_Params {
	};
	UUI_MainMenu_C_WidgetTree_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}