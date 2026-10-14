#include "Core.h"
#include "EngineHelpers.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"
#include "EngineMemory.h"

namespace UE4 {
	UWorld* GetWorld()
	{
		// GWorld is a UWorldProxy, whose only member is the UWorld*.
		if (!mdml::Addresses.GWorld)
			return nullptr;
		return *reinterpret_cast<UWorld**>(mdml::Addresses.GWorld);
	}

	AActor* SpawnActor(UClass* Class, const FTransform& Transform, const FActorSpawnParameters& Parameters)
	{
		UWorld* World = GetWorld();
		if (!World || !Class || !mdml::Addresses.SpawnActorFTrans)
			return nullptr;
		using FSpawnActor = AActor * (*)(UWorld*, UClass*, const FTransform*, const FActorSpawnParameters*);
		return reinterpret_cast<FSpawnActor>(mdml::Addresses.SpawnActorFTrans)(World, Class, &Transform, &Parameters);
	}

	bool IsUserDefinedEnum(const UEnum* Enum)
	{
		static UClass* UserDefinedEnumClass = nullptr;
		if (!UserDefinedEnumClass)
			UserDefinedEnumClass = UObject::FindClass("Class Engine.UserDefinedEnum");
		return Enum && UserDefinedEnumClass && const_cast<UEnum*>(Enum)->IsA(UserDefinedEnumClass);
	}

	FText GetUserDefinedEnumDisplayNameText(const UEnum* Enum, int32_t Index)
	{
		// virtual FText UUserDefinedEnum::GetDisplayNameTextByIndex(int32 InIndex) const: returned through a hidden
		// result pointer (rdx); the function returns that pointer.
		FText Out = FText();
		if (!mdml::Addresses.GetDisplayNameTextByIndex || !IsUserDefinedEnum(Enum))
			return Out;
		using FGetDisplayName = FText * (__fastcall*)(__int64, __int64, int32_t);
		Out = *reinterpret_cast<FGetDisplayName>(mdml::Addresses.GetDisplayNameTextByIndex)((__int64)Enum, (__int64)(&Out), Index);
		return Out;
	}

	std::vector<std::string> GetUserDefinedEnumDisplayNames(const UEnum* Enum)
	{
		if (!Enum)
			return {};
		std::vector<std::string> Names = Enum->GetNamesParsed();
		if (!IsUserDefinedEnum(Enum))
			return Names;
		for (int32_t i = 0; i < static_cast<int32_t>(Names.size()); i++) {
			FText Display = GetUserDefinedEnumDisplayNameText(Enum, i);
			std::string Text = Display.ToString();
			if (!Text.empty())
				Names[i] = std::move(Text);
			// The FText returned by value holds one reference; drop it (leaked before Wave 3D, code inventory C23).
			Display.Release();
		}
		return Names;
	}

	TMap<FName, uint8_t*> GetDataTableRowMap(const UObject* DataTable)
	{
		if (!DataTable)
			return TMap<FName, uint8_t*>();
		return mdml::mem::LoadField<TMap<FName, uint8_t*>>(DataTable, mdml::layout::UDataTable::RowMap);
	}
}
