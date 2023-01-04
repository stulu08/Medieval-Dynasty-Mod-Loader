#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "CoreUObject_parameters.hpp"
namespace UE4
{
	//---------------------------------------------------------------------------
	//Functions
	//---------------------------------------------------------------------------


	//---------------------------------------------------------------------------
	//UObject Functions
	//---------------------------------------------------------------------------

	std::string UObject::GetName() const
	{
		auto Name = *reinterpret_cast<FName*>((byte*)this + GameProfile::SelectedGameProfile.defs.UObject.Name);
		std::string name(Name.GetName());
		if (Name.Number > 0)
		{
			name += '_' + std::to_string(Name.Number);
		}

		auto pos = name.rfind('/');
		if (pos == std::string::npos)
		{
			return name;
		}

		return name.substr(pos + 1);
	}

	std::string UObject::GetFullName() const
	{
		std::string name;
		auto Class = GetClass();
		if (Class != nullptr)
		{
			std::string temp;
			for (auto p = GetOuter(); p; p = p->GetOuter())
			{
				temp = p->GetName() + "." + temp;
			}

			name = Class->GetName();
			name += " ";
			name += temp;
			name += GetName();
		}

		return name;
	}

	int32_t UObject::GetIndex() const 
	{ 
		return Read<int32_t>((byte*)this + GameProfile::SelectedGameProfile.defs.UObject.Index); 
	};

	UClass* UObject::GetClass() const 
	{ 
		return Read<class UClass*>((byte*)this + GameProfile::SelectedGameProfile.defs.UObject.Class); 
	};

	UObject* UObject::GetOuter() const 
	{ 
		return Read<UObject*>((byte*)this + GameProfile::SelectedGameProfile.defs.UObject.Outer); 
	};

	bool UObject::IsA(UClass* cmp) const
	{
		for (auto super = GetClass(); super; super = static_cast<UClass*>(super->GetSuperField()))
		{
			if (super == cmp)
			{
				return true;
			}
		}

		return false;
	}

	void UObject::ExecuteUbergraph(int EntryPoint)
	{
		static auto fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");

		UObject_ExecuteUbergraph_Params params;
		params.EntryPoint = EntryPoint;

		//auto flags = fn->FunctionFlags;

		UObject::ProcessEvent(fn, &params);

		//fn->FunctionFlags = flags;
	}

	bool UObject::DoesObjectContainFunction(std::string Function)
	{
		if (IsChunkedArray())
		{
			for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
			{
				auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetName() == Function)
				{
					if (object->GetOuter() == this->GetClass())
					{
						return true;
					}
				}
			}
			return false;
		}
		else
		{
			for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
			{
				auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetName() == Function)
				{
					if (object->GetOuter() == this->GetClass())
					{
						return true;
					}
				}
			}
			return false;
		}
		return false;
	}

	class UFunction* UObject::GetFunction(std::string Function)
	{
		if (IsChunkedArray())
		{
			for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
			{
				auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetName() == Function)
				{
					if (object->GetOuter() == this->GetClass())
					{
						return (UFunction*)object;
					}
				}
			}
			return nullptr;
		}
		else
		{
			for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
			{
				auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetName() == Function)
				{
					if (object->GetOuter() == this->GetClass())
					{
						return (UFunction*)object;
					}
				}
			}
			return nullptr;
		}
		return nullptr;
	}

	void UObject::ProcessEvent(class UFunction* function, void* parms) {
		if (function)
			return reinterpret_cast<void(*)(UObject*, class UFunction*, void*)>(GameProfile::SelectedGameProfile.ProcessEvent)(this, function, parms);
		else
			Log::Error_MDML("Function not valid");
	}

	UObject* UObject::StaticLoadObject(class UClass* uclass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, unsigned int LoadFlags, void* Sandbox, bool bAllowObjectReconciliation)
	{
		return reinterpret_cast<UObject * (__fastcall*)(class UClass*, UObject*, const wchar_t*, const wchar_t*, unsigned int, void*, bool)>(GameProfile::SelectedGameProfile.StaticLoadObject)(uclass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation);
	}

	UObject* UObject::StaticConstructObject_Internal(UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags, EInternalObjectFlags InternalSetFlags, UObject* Template, bool bCopyTransientsFromClassDefaults, void* InstanceGraph, bool bAssumeTemplateIsArchetype)
	{
		if (GameProfile::SelectedGameProfile.StaticConstructObject_Internal)
		{
			if (GameProfile::SelectedGameProfile.IsUsingUpdatedStaticConstruct)
			{
				FStaticConstructObjectParameters StaticConstructObjectParameters;
				StaticConstructObjectParameters.Class = Class;
				StaticConstructObjectParameters.Outer = InOuter;
				StaticConstructObjectParameters.Name = Name;
				StaticConstructObjectParameters.SetFlags = SetFlags;
				StaticConstructObjectParameters.InternalSetFlags = InternalSetFlags;
				StaticConstructObjectParameters.Template = Template;
				StaticConstructObjectParameters.bCopyTransientsFromClassDefaults = bCopyTransientsFromClassDefaults;
				StaticConstructObjectParameters.InstanceGraph = InstanceGraph;
				StaticConstructObjectParameters.bAssumeTemplateIsArchetype = bAssumeTemplateIsArchetype;
				return reinterpret_cast<UObject * (__fastcall*)(const FStaticConstructObjectParameters*)>(GameProfile::SelectedGameProfile.StaticConstructObject_Internal)(&StaticConstructObjectParameters);
			}
			else
			{
				return reinterpret_cast<UObject * (__fastcall*)(UClass*, UObject*, FName, unsigned int, unsigned int, UObject*, bool, void*, bool)>(GameProfile::SelectedGameProfile.StaticConstructObject_Internal)(Class, InOuter, Name, SetFlags, InternalSetFlags, Template, bCopyTransientsFromClassDefaults, InstanceGraph, bAssumeTemplateIsArchetype);
			}
		}
		else
		{
			Log::Error("StaticConstructObject_Internal Called But Not Found!");
		}
		return nullptr;
	}

	bool UObject::CallFunctionByNameWithArguments(const wchar_t* Str, void* Ar, UE4::UObject* Executor, bool bForceCallWithNonExec)
	{
		return reinterpret_cast<bool (*)(UE4::UObject*, const wchar_t*, void*, UE4::UObject*, bool)>(GameProfile::SelectedGameProfile.CallFunctionByNameWithArguments)(this, Str, Ar, Executor, bForceCallWithNonExec);
	}

	//---------------------------------------------------------------------------
	//UField Functions
	//---------------------------------------------------------------------------

	UField* UField::GetNext() const 
	{ 
		return Read<UField*>((byte*)this + GameProfile::SelectedGameProfile.defs.UField.Next); 
	};

	//---------------------------------------------------------------------------
	//UClass Functions
	//---------------------------------------------------------------------------

	UClass* UClass::LoadClassFromString(const wchar_t* InName, bool bAllowObjectReconciliation)
	{
		return (UClass*)UObject::StaticLoadObject(UClass::StaticClass(), nullptr, InName, nullptr, 0, nullptr, bAllowObjectReconciliation);
	}

	//---------------------------------------------------------------------------
	//UStruct Functions
	//---------------------------------------------------------------------------

	UStruct* UStruct::GetSuperField() const 
	{ 
		return Read<UStruct*>((byte*)this + GameProfile::SelectedGameProfile.defs.UStruct.SuperStruct); 
	};

	UField* UStruct::GetChildren() const 
	{ 
		return Read<UField*>((byte*)this + GameProfile::SelectedGameProfile.defs.UStruct.Children); 
	};

	int32_t UStruct::GetPropertySize() const 
	{ 
		return Read<int32_t>((byte*)this + GameProfile::SelectedGameProfile.defs.UStruct.PropertiesSize); 
	};

	//---------------------------------------------------------------------------
	//UFunction Functions
	//---------------------------------------------------------------------------

	EFunctionFlags UFunction::GetFunctionFlags() const { 
		return (EFunctionFlags)Read<uint32_t>((byte*)this + GameProfile::SelectedGameProfile.defs.UFunction.FunctionFlags);
	}
	uint8 UFunction::GetNumParms() const {
		return Read<uint8>((byte*)this + GameProfile::SelectedGameProfile.defs.UFunction.NumParams);
	}
	uint16 UFunction::GetParamsSize() const {
		return Read<uint16>((byte*)this + GameProfile::SelectedGameProfile.defs.UFunction.ParamsSize);
	}
	uint16 UFunction::GetReturnValueOffset() const {
		return Read<uint16>((byte*)this + GameProfile::SelectedGameProfile.defs.UFunction.ReturnValueOffset);
	}
	;
	void* UFunction::GetFunction() const { return Read<void*>((byte*)this + GameProfile::SelectedGameProfile.defs.UFunction.Func); };

	//---------------------------------------------------------------------------
	//UEProperty Functions
	//---------------------------------------------------------------------------

	int32_t UEProperty::GetArrayDim() const
	{
		return Read<int32_t>((byte*)this + GameProfile::SelectedGameProfile.defs.Property.ArrayDim);
	};
	/*
	int32_t UEProperty::GetElementSize() const
	{
		return Read<int32_t>((byte*)this + GameProfile::SelectedGameProfile.defs.Property.ElementSize);
	};
	*/

	int32_t UEProperty::GetOffset() const
	{
		return Read<int32_t>((byte*)this + GameProfile::SelectedGameProfile.defs.Property.Offset);
	};

	//---------------------------------------------------------------------------
	//FField Functions
	//---------------------------------------------------------------------------

	FField* FField::GetNext() const
	{
		return Read<class FField*>((byte*)this + GameProfile::SelectedGameProfile.defs.FField.Next);
	};

	std::string FField::GetName() const
	{
		auto Name = *reinterpret_cast<FName*>((byte*)this + GameProfile::SelectedGameProfile.defs.FField.Name);
		if (UE4::FName::GetFNamePool().IsValidIndex(Name.ComparisonIndex))
		{
			return Name.GetName();
		}
		return "nullptr";
	};

	//---------------------------------------------------------------------------
	//UWorld Functions
	//---------------------------------------------------------------------------

	AActor* UWorld::SpawnActor(UClass* uclass, const  FTransform* transform, const FActorSpawnParameters* params)
	{
		return reinterpret_cast<AActor * (*)(UWorld*, UClass*, const FTransform*, const FActorSpawnParameters*)>(GameProfile::SelectedGameProfile.SpawnActorFTrans)(this, uclass, transform, params);
	}

	//---------------------------------------------------------------------------
	//Actor Functions
	//---------------------------------------------------------------------------

#define CHECK_FUNCTION(FName, NullReturn) \
{ \
	if(fn == nullptr) { \
		Log::Critical_MDML("Function {0} not found", #FName); \
		return NullReturn; \
	} \
}
#define GET_FUNCTION(FullName, NullReturn) \
static UE4::UFunction* fn = UObject::FindObject<UFunction>("Function " #FullName); \
CHECK_FUNCTION(FullName, NullReturn);

	FTransform AActor::GetTransform()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");
		struct
		{
			FTransform ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FRotator AActor::GetActorRotation()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");
		struct
		{
			FRotator ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FVector AActor::GetActorLocation()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FVector AActor::GetActorScale3D()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	FVector AActor::GetActorForwardVector() {
		GET_FUNCTION(Engine.Actor.GetActorForwardVector, UE4::FVector());
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FVector AActor::GetActorUpVector() {
		GET_FUNCTION(Engine.Actor.GetActorUpVector, UE4::FVector());
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	FVector AActor::GetActorRightVector() {
		GET_FUNCTION(Engine.Actor.GetActorRightVector, UE4::FVector());
		struct
		{
			FVector ReturnValue;
		}params;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	void AActor::SetActorScale3D(const FVector& NewScale3D) {
		GET_FUNCTION(Engine.Actor.SetActorScale3D,);
		struct
		{
			FRotator NewScale3D;
		}params;
		params.NewScale3D = NewScale3D;
		UObject::ProcessEvent(fn, &params);
		return;
	}
	bool AActor::K2_SetActorTransform(const FTransform& NewTransform, bool bSweep, FHitResult& _SweepHitResult, bool bTeleport) {
		GET_FUNCTION(Engine.Actor.K2_SetActorTransform, false);
		struct A
		{
			struct FTransform NewTransform = FTransform();
			bool bSweep = false;
			struct FHitResult& SweepHitResult;
			bool bTeleport = false;
			bool ReturnValue = false;

			explicit A(FHitResult& d) : SweepHitResult(d) {}
		}params(_SweepHitResult);
		params.NewTransform = NewTransform;
		params.bSweep = bSweep;
		params.SweepHitResult = _SweepHitResult;
		params.bTeleport = bTeleport;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	bool AActor::K2_SetActorLocation(const FVector& NewLocation, bool bSweep, FHitResult& _SweepHitResult, bool bTeleport) {
		GET_FUNCTION(Engine.Actor.K2_SetActorLocation, false);
		struct A
		{
			struct FVector NewTransform = FVector();
			bool bSweep = false;
			struct FHitResult& SweepHitResult;
			bool bTeleport = false;
			bool ReturnValue = false;

			explicit A(FHitResult& d) : SweepHitResult(d) {}
		}params(_SweepHitResult);
		params.NewTransform = NewLocation;
		params.bSweep = bSweep;
		params.SweepHitResult = _SweepHitResult;
		params.bTeleport = bTeleport;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	bool AActor::K2_SetActorRotation(const FRotator& NewRotation, bool bTeleportPhysics) {
		GET_FUNCTION(Engine.Actor.K2_SetActorRotation, false);
		struct
		{
			FRotator NewRotation;
			bool bTeleportPhysics;
			bool ReturnValue = false; 
		}params;
		params.NewRotation = NewRotation;
		params.bTeleportPhysics = bTeleportPhysics;
		UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	//---------------------------------------------------------------------------
	//GameplayStatics Functions
	//---------------------------------------------------------------------------

	class AActor* UGameplayStatics::BeginDeferredActorSpawnFromClass(class UClass* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.BeginDeferredActorSpawnFromClass");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			class UClass* ActorClass;
			struct FTransform SpawnTransform;
			ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
			class AActor* Owner;
			class AActor* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		params.ActorClass = ActorClass;
		params.SpawnTransform = SpawnTransform;
		params.CollisionHandlingOverride = CollisionHandlingOverride;
		params.Owner = Owner;
		GameplayStatics->UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class FString UGameplayStatics::GetCurrentLevelName(bool bRemovePrefixString)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetCurrentLevelName");
		//auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		auto GameplayStatics = UE4::UObject::GetDefaultObjectFromArray<UE4::UGameplayStatics>(UE4::UGameplayStatics::StaticClass());
		struct
		{
			class UObject* WorldContextObject;
			bool bRemovePrefixString;
			class FString ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		params.bRemovePrefixString = bRemovePrefixString;
		GameplayStatics->UObject::ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class AGameState* UGameplayStatics::GetGameState()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameState");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct UGameplayStatics_GetGameState_Params
		{
			class UObject* WorldContextObject;
			class AGameState* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class AGameMode* UGameplayStatics::GetGameMode()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameMode");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			class AGameMode* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class UGameInstance* UGameplayStatics::GetGameInstance()
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetGameInstance");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			class UGameInstance* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class APawn* UGameplayStatics::GetPlayerPawn(int PlayerIndex)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerPawn");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			int PlayerIndex;
			class APawn* ReturnValue;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		params.PlayerIndex = PlayerIndex;
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}

	class APlayerController* UGameplayStatics::GetPlayerController(int PlayerIndex)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.GameplayStatics.GetPlayerController");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			int PlayerIndex;
			class APlayerController* ReturnValue;
		}params;
		
		params.WorldContextObject = UWorld::GetWorld();
		params.PlayerIndex = PlayerIndex;
		GameplayStatics->ProcessEvent(fn, &params);
		return params.ReturnValue;
	}


	void UGameplayStatics::ExecuteConsoleCommand(const class FString& Command, class APlayerController* SpecificPlayer)
	{
		static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.ExecuteConsoleCommand");
		auto GameplayStatics = (UE4::UGameplayStatics*)UE4::UGameplayStatics::StaticClass()->CreateDefaultObject();
		struct
		{
			class UObject* WorldContextObject;
			class FString Command;
			class APlayerController* SpecificPlayer;
		}params;
		params.WorldContextObject = UWorld::GetWorld();
		params.Command = Command;
		params.SpecificPlayer = SpecificPlayer;
		GameplayStatics->ProcessEvent(fn, &params);
	}
}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
