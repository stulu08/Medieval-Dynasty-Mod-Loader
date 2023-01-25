#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/UserWidget.h"
/////////////////////////////////////////////
// WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C
// Super: Class UMG.UserWidget
// Size: 904
// Size inherited: 608
/////////////////////////////////////////////
namespace UE4 {
class UUI_MainMenu_C : public UUserWidget {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 608	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UWidgetAnimation*	fade;		//Offset: 616	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
	class UWidgetAnimation* M_Getfade() const;
	class UWidgetAnimation** M_PtrGetfade();
	void M_Setfade(const class UWidgetAnimation*& value);

	//class UImage*	BackgroundImage;		//Offset: 624	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UImage* M_GetBackgroundImage() const;
	class UImage** M_PtrGetBackgroundImage();
	void M_SetBackgroundImage(const class UImage*& value);

	//class UBorder*	BorderQuitAcceptation;		//Offset: 632	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UBorder* M_GetBorderQuitAcceptation() const;
	class UBorder** M_PtrGetBorderQuitAcceptation();
	void M_SetBorderQuitAcceptation(const class UBorder*& value);

	//class UUI_MenuButton_C*	btn_Continue;		//Offset: 640	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UUI_MenuButton_C* M_Getbtn_Continue() const;
	class UUI_MenuButton_C** M_PtrGetbtn_Continue();
	void M_Setbtn_Continue(const class UUI_MenuButton_C*& value);

	//class UUI_MenuButton_C*	btn_Credits;		//Offset: 648	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UUI_MenuButton_C* M_Getbtn_Credits() const;
	class UUI_MenuButton_C** M_PtrGetbtn_Credits();
	void M_Setbtn_Credits(const class UUI_MenuButton_C*& value);

	//class UUI_MenuButton_C*	btn_LoadGame;		//Offset: 656	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UUI_MenuButton_C* M_Getbtn_LoadGame() const;
	class UUI_MenuButton_C** M_PtrGetbtn_LoadGame();
	void M_Setbtn_LoadGame(const class UUI_MenuButton_C*& value);

	//class UUI_MenuButton_C*	btn_NewGame;		//Offset: 664	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UUI_MenuButton_C* M_Getbtn_NewGame() const;
	class UUI_MenuButton_C** M_PtrGetbtn_NewGame();
	void M_Setbtn_NewGame(const class UUI_MenuButton_C*& value);

	//class UUI_MenuButton_C*	btn_Quit;		//Offset: 672	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UUI_MenuButton_C* M_Getbtn_Quit() const;
	class UUI_MenuButton_C** M_PtrGetbtn_Quit();
	void M_Setbtn_Quit(const class UUI_MenuButton_C*& value);

	//class UUI_MenuButton_C*	btn_Settings;		//Offset: 680	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UUI_MenuButton_C* M_Getbtn_Settings() const;
	class UUI_MenuButton_C** M_PtrGetbtn_Settings();
	void M_Setbtn_Settings(const class UUI_MenuButton_C*& value);

	//class UHorizontalBox*	ConsoleUserBox;		//Offset: 688	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UHorizontalBox* M_GetConsoleUserBox() const;
	class UHorizontalBox** M_PtrGetConsoleUserBox();
	void M_SetConsoleUserBox(const class UHorizontalBox*& value);

	//class UBorder*	CreditsBorder;		//Offset: 696	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UBorder* M_GetCreditsBorder() const;
	class UBorder** M_PtrGetCreditsBorder();
	void M_SetCreditsBorder(const class UBorder*& value);

	//class UImage*	Img_ConsoleUserInput;		//Offset: 704	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UImage* M_GetImg_ConsoleUserInput() const;
	class UImage** M_PtrGetImg_ConsoleUserInput();
	void M_SetImg_ConsoleUserInput(const class UImage*& value);

	//class UImage*	Logo;		//Offset: 712	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UImage* M_GetLogo() const;
	class UImage** M_PtrGetLogo();
	void M_SetLogo(const class UImage*& value);

	//class UImage*	LowerMenuBar;		//Offset: 720	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UImage* M_GetLowerMenuBar() const;
	class UImage** M_PtrGetLowerMenuBar();
	void M_SetLowerMenuBar(const class UImage*& value);

	//class UVerticalBox*	Main;		//Offset: 728	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UVerticalBox* M_GetMain() const;
	class UVerticalBox** M_PtrGetMain();
	void M_SetMain(const class UVerticalBox*& value);

	//class UBorder*	NewGameConfigBorder;		//Offset: 736	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UBorder* M_GetNewGameConfigBorder() const;
	class UBorder** M_PtrGetNewGameConfigBorder();
	void M_SetNewGameConfigBorder(const class UBorder*& value);

	//class UBorder*	OldSaveContinueBorder;		//Offset: 744	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UBorder* M_GetOldSaveContinueBorder() const;
	class UBorder** M_PtrGetOldSaveContinueBorder();
	void M_SetOldSaveContinueBorder(const class UBorder*& value);

	//class UUI_OptionsVerticalMenu_C*	SettingsField;		//Offset: 752	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UUI_OptionsVerticalMenu_C* M_GetSettingsField() const;
	class UUI_OptionsVerticalMenu_C** M_PtrGetSettingsField();
	void M_SetSettingsField(const class UUI_OptionsVerticalMenu_C*& value);

	//class UBorder*	TestVersionBorder;		//Offset: 760	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UBorder* M_GetTestVersionBorder() const;
	class UBorder** M_PtrGetTestVersionBorder();
	void M_SetTestVersionBorder(const class UBorder*& value);

	//class UTextBlock*	txt_ConsoleStartText;		//Offset: 768	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UTextBlock* M_Gettxt_ConsoleStartText() const;
	class UTextBlock** M_PtrGettxt_ConsoleStartText();
	void M_Settxt_ConsoleStartText(const class UTextBlock*& value);

	//class UTextBlock*	txt_ConsoleUser;		//Offset: 776	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UTextBlock* M_Gettxt_ConsoleUser() const;
	class UTextBlock** M_PtrGettxt_ConsoleUser();
	void M_Settxt_ConsoleUser(const class UTextBlock*& value);

	//class UTextBlock*	txt_GameVersion;		//Offset: 784	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UTextBlock* M_Gettxt_GameVersion() const;
	class UTextBlock** M_PtrGettxt_GameVersion();
	void M_Settxt_GameVersion(const class UTextBlock*& value);

	//class UUI_LoadMenu_C*	UI_LoadMenu;		//Offset: 792	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UUI_LoadMenu_C* M_GetUI_LoadMenu() const;
	class UUI_LoadMenu_C** M_PtrGetUI_LoadMenu();
	void M_SetUI_LoadMenu(const class UUI_LoadMenu_C*& value);

	//class UImage*	UpperMenuBar;		//Offset: 800	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
	class UImage* M_GetUpperMenuBar() const;
	class UImage** M_PtrGetUpperMenuBar();
	void M_SetUpperMenuBar(const class UImage*& value);

	//int32_t	GameMenuIndex;		//Offset: 808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetGameMenuIndex() const;
	int32_t* M_PtrGetGameMenuIndex();
	void M_SetGameMenuIndex(const int32_t& value);

	//TArray<class UUI_MenuButton_C*>	Buttons;		//Offset: 816	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<class UUI_MenuButton_C*> M_GetButtons() const;
	TArray<class UUI_MenuButton_C*>* M_PtrGetButtons();
	void M_SetButtons(const TArray<class UUI_MenuButton_C*>& value);

	//struct FVector2D	OldMousePosition;		//Offset: 832	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector2D M_GetOldMousePosition() const;
	struct FVector2D* M_PtrGetOldMousePosition();
	void M_SetOldMousePosition(const struct FVector2D& value);

	//bool	tmp_IsHovered;		//Offset: 840	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_Gettmp_IsHovered() const;
	bool* M_PtrGettmp_IsHovered();
	void M_Settmp_IsHovered(const bool& value);

	//bool	WasAcceptationOpened;		//Offset: 841	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWasAcceptationOpened() const;
	bool* M_PtrGetWasAcceptationOpened();
	void M_SetWasAcceptationOpened(const bool& value);

	//class UUI_NewGameConfigurationMenu_C*	NewGameConfigMenuReference;		//Offset: 848	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_NewGameConfigurationMenu_C* M_GetNewGameConfigMenuReference() const;
	class UUI_NewGameConfigurationMenu_C** M_PtrGetNewGameConfigMenuReference();
	void M_SetNewGameConfigMenuReference(const class UUI_NewGameConfigurationMenu_C*& value);

	//bool	ConsoleVersion;		//Offset: 856	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetConsoleVersion() const;
	bool* M_PtrGetConsoleVersion();
	void M_SetConsoleVersion(const bool& value);

	//class UGI_MedievalDynasty_C*	GameInstanceReference;		//Offset: 864	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UGI_MedievalDynasty_C* M_GetGameInstanceReference() const;
	class UGI_MedievalDynasty_C** M_PtrGetGameInstanceReference();
	void M_SetGameInstanceReference(const class UGI_MedievalDynasty_C*& value);

	//bool	CanAnyKeyBePressed;		//Offset: 872	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanAnyKeyBePressed() const;
	bool* M_PtrGetCanAnyKeyBePressed();
	void M_SetCanAnyKeyBePressed(const bool& value);

	//TArray<struct FString>	UserInfo;		//Offset: 880	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetUserInfo() const;
	TArray<struct FString>* M_PtrGetUserInfo();
	void M_SetUserInfo(const TArray<struct FString>& value);

	//class UAudioComponent*	MenuMusic;		//Offset: 896	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetMenuMusic() const;
	class UAudioComponent** M_PtrGetMenuMusic();
	void M_SetMenuMusic(const class UAudioComponent*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_UI_MainMenu(int32_t EntryPoint);

	void StopMusic();

	void ChangeSteeringType_Event_1(bool Gamepad);

	void SkipMenu(E_MessageReason messageReason);

	void AnyKey();

	void ChangeUser();

	void Additional();

	void Drop();

	void Prev_Section();

	void Next_Section();

	void Right();

	void Left();

	void Down();

	void Up();

	void Fade_Animation(bool Reverse);

	void Credits();

	void Continue();

	void Tick(struct FGeometry MyGeometry, float InDeltaTime);

	void SetActivityOnHovered();

	void Settings();

	void Load();

	void Quit();

	void NewGame();

	void Construct();

	void Play_Animation();

	void ChangeAdditionalIndex(int32_t Index);

	void ChangeIndex(int32_t Index);

	void QuickSlot8();

	void QuickSlot7();

	void QuickSlot6();

	void QuickSlot5();

	void QuickSlot4();

	void QuickSlot3();

	void QuickSlot2();

	void QuickSlot1();

	void Close();

	void OnSuccess_248A8EAA41034AAFBFA769AE115F6437(class APlayerController* PlayerController);

	void OnFailure_248A8EAA41034AAFBFA769AE115F6437(class APlayerController* PlayerController);

	void OnSuccess_090DA0BA4F1FC58F9FF0159325CA0572(class APlayerController* PlayerController);

	void OnFailure_090DA0BA4F1FC58F9FF0159325CA0572(class APlayerController* PlayerController);

	void IncreaseIndex();

	void DecreaseIndex();

	void ConfirmSelection();

	void MakeButtonsUnactive();

	void MakeButtonActive(int32_t Index);

	void CancelAction();

	void DropAction();

	void AdditionalAction();

	void GetSaveFileNameForContinue(struct FString* SaveSlotName, bool* SaveSlotFound, struct FString* SaveSlotVersion);

	void CheckContinueVisibility();

	void NextSection();

	void PreviousSection();

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	void ShowPressAnyButton();

	void DoSaveGameExistConsoles(int32_t UserIndex, bool* Exist);

	void GetSaveFilesPS5(int32_t UserIndex, TArray<struct FString>* SaveFiles, bool* SaveExist);

	void CanBeClose(bool* Value);

	void Cancel(bool* InputHandled);

	void Confirm(bool* InputHandled);

	void Fade_INST();

	void WidgetTree();

#pragma endregion
};
};