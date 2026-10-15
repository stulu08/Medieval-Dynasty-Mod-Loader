// Offline compile test for the MDML generator output (docs/SDK_GENERATOR.md, "Offline proof").
// Built as part of the solution (project DevTools.SDKCompileTest, a DLL that links MDML.lib) so that
//  * the hand-written sample in Sample/ - written exactly as MDMLGenerator emits it - compiles against the core, and
//  * every exported helper the generated code uses resolves at link time.
// The DLL is never deployed or loaded; nothing here runs.
#include "MDML_SDK.hpp"

#include <type_traits>

// Mod-style usage of the generated API. Exported so the linker keeps every reference.
extern "C" __declspec(dllexport) int MDMLSDKCompileTest(UE4::UObject* Object)
{
	using namespace UE4;

	auto Character = mdml::sdk::Cast<ABP_BaseCharacter_C>(Object);
	if (!Character)
		return 0;

	// members: field-like access through __declspec(property)
	UInventoryComponent_C* Inventory = Character->InventoryComponent;
	Character->EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99 = 0.5f;
	Character->EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99 += 1.0f;
	ETimelineDirection Direction = Character->EyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99;
	(void)Direction;
	Character->bIsInDialogue = true;                       // member of a native super class
	Character->Skills.Level = 3;                           // struct member by reference (namespaced, colliding name)
	Character->LastLocations[1] = FVector();               // static array member
	auto& Opaque = Character->UnknownTypeExample;
	(void)Opaque;

	// bitfields
	const bool bWasHidden = Character->bHidden;
	Character->bHidden = !bWasHidden;

	// TArray / TMap members
	int32_t NumTags = Character->Tags.Num();
	TMap<FName, FST_InventoryItemsArray> Items;
	if (Inventory) {
		Items = Inventory->Inventory;
		Inventory->GetInventoryItems_BPI(&Items);
		int32_t AddedAt = -1;
		Inventory->AddItemToInventory_BPI(false, FName(), 1, true, 100.f, 100.f, 0, 1.f, E_Ownership::NewEnumerator0, false, true, false, 0.f, &AddedAt);
		NumTags += AddedAt;
	}

	// functions: plain, const with return value, static, out-reference
	Character->RemoveItemFromInventoryTransferServer(Inventory, 1, false, false, true, 0, FName());
	FVector Location = Character->K2_GetActorLocation();
	FVector Free = Character->CheckAvailabilityOfLocation(Location, nullptr);
	(void)Free;
	FString GameName = UKismetSystemLibrary::GetGameName();
	(void)GameName;
	TArray<FName> Keys;
	TArray<FST_InventoryItemsArray> Values;
	Character->ReplicateInventoryForNonCharacter_Server(Keys, Values, Inventory);

	// ScriptStructs: real layout, used by value
	FST_ItemInventorys Item{};
	Item.Count_5_C53A69004BB01EEBBA02CD86D4CBA6C6 = 2;
	Item.Ownership_35_F523F1234479AEFF223E218C1C3E8338 = E_Ownership::E_MAX;
	const bool bLayoutOk = FST_ItemInventorys::ValidateLayout() && FST_InventoryItemsArray::ValidateLayout();

	// classes stay offset-free views (no data members)
	static_assert(std::is_empty<ABP_BaseCharacter_C>::value, "generated classes must not add data members");
	UClass* Class = ABP_BaseCharacter_C::StaticClass();

	Character->K2_DestroyActor();
	return NumTags + (bLayoutOk ? 1 : 0) + (Class ? 1 : 0) + Item.Count_5_C53A69004BB01EEBBA02CD86D4CBA6C6;
}
