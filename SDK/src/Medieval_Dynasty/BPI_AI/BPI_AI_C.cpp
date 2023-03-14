#include "../SDK.h"
#include "BPI_AI_C.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_InteractResource
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_InteractResource(bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_InteractResource");

	struct UBPI_AI_C_AI_InteractResource_Params {
		bool FlipTool;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_InteractResource_Params params;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_InteractFoliage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_InteractFoliage(bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_InteractFoliage");

	struct UBPI_AI_C_AI_InteractFoliage_Params {
		bool Timer;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_InteractFoliage_Params params;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindFoliage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetType	Type: TEnumAsByte<E_Resources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Foliage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindFoliage(TEnumAsByte<E_Resources> TargetType, struct FVector* Destination, bool* Foliage) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindFoliage");

	struct UBPI_AI_C_AI_FindFoliage_Params {
		TEnumAsByte<E_Resources> TargetType;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Foliage;			//Offset: 16 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindFoliage_Params params;
	params.TargetType = TargetType;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Foliage != nullptr)
		*Foliage = params.Foliage;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SpawnTool
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SpawnTool(TEnumAsByte<E_Tools> Tool, bool CheckInInventory, bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SpawnTool");

	struct UBPI_AI_C_AI_SpawnTool_Params {
		TEnumAsByte<E_Tools> Tool;			//Offset: 0 | ElementSize: 1
		bool CheckInInventory;			//Offset: 1 | ElementSize: 1
		bool FlipTool;			//Offset: 2 | ElementSize: 1
	};
	UBPI_AI_C_AI_SpawnTool_Params params;
	params.Tool = Tool;
	params.CheckInInventory = CheckInInventory;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SpawnOff-HandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SpawnOff_HandItem(TEnumAsByte<E_Tools> Item) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SpawnOff-HandItem");

	struct UBPI_AI_C_AI_SpawnOff_HandItem_Params {
		TEnumAsByte<E_Tools> Item;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SpawnOff_HandItem_Params params;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SpawnBow
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsBow	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SpawnBow(bool CheckInInventory, bool* IsBow) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SpawnBow");

	struct UBPI_AI_C_AI_SpawnBow_Params {
		bool CheckInInventory;			//Offset: 0 | ElementSize: 1
		bool IsBow;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_SpawnBow_Params params;
	params.CheckInInventory = CheckInInventory;

	UObject::ProcessEvent(fn, &params);
	if (IsBow != nullptr)
		*IsBow = params.IsBow;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetTargetLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxDirection	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DistanceToLastPoint	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OutsideLastPoint	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetTargetLocation(struct FVector Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetTargetLocation");

	struct UBPI_AI_C_AI_GetTargetLocation_Params {
		struct FVector Target;			//Offset: 0 | ElementSize: 12
		float MaxDistance;			//Offset: 12 | ElementSize: 4
		float MaxDirection;			//Offset: 16 | ElementSize: 4
		float DistanceToLastPoint;			//Offset: 20 | ElementSize: 4
		bool OutsideLastPoint;			//Offset: 24 | ElementSize: 1
		struct FVector Location;			//Offset: 28 | ElementSize: 12
	};
	UBPI_AI_C_AI_GetTargetLocation_Params params;
	params.Target = Target;
	params.MaxDistance = MaxDistance;
	params.MaxDirection = MaxDirection;
	params.DistanceToLastPoint = DistanceToLastPoint;
	params.OutsideLastPoint = OutsideLastPoint;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetDistanceAndDirection
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target_Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Current_Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Direction	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetDistanceAndDirection(struct FVector Target_Location, struct FVector Current_Location, float* Distance, struct FVector* Direction) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetDistanceAndDirection");

	struct UBPI_AI_C_AI_GetDistanceAndDirection_Params {
		struct FVector Target_Location;			//Offset: 0 | ElementSize: 12
		struct FVector Current_Location;			//Offset: 12 | ElementSize: 12
		float Distance;			//Offset: 24 | ElementSize: 4
		struct FVector Direction;			//Offset: 28 | ElementSize: 12
	};
	UBPI_AI_C_AI_GetDistanceAndDirection_Params params;
	params.Target_Location = Target_Location;
	params.Current_Location = Current_Location;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (Direction != nullptr)
		*Direction = params.Direction;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_ToolInteractFoliage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_ToolInteractFoliage() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_ToolInteractFoliage");

	struct UBPI_AI_C_AI_ToolInteractFoliage_Params {
	};
	UBPI_AI_C_AI_ToolInteractFoliage_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_AddSkills
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_AddSkills(TEnumAsByte<E_Skills> Skill, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_AddSkills");

	struct UBPI_AI_C_AI_AddSkills_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
	};
	UBPI_AI_C_AI_AddSkills_Params params;
	params.Skill = Skill;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindField
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Field	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TaskList	Type: struct FST_FieldTasksLists	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: IsTask	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindField");

	struct UBPI_AI_C_AI_FindField_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Field;			//Offset: 12 | ElementSize: 1
		struct FST_FieldTasksLists TaskList;			//Offset: 16 | ElementSize: 56
		bool IsTask;			//Offset: 72 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindField_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Field != nullptr)
		*Field = params.Field;
	if (TaskList != nullptr)
		*TaskList = params.TaskList;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckChildrenAffection	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetOut(bool CheckChildrenAffection) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetOut");

	struct UBPI_AI_C_AI_GetOut_Params {
		bool CheckChildrenAffection;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetOut_Params params;
	params.CheckChildrenAffection = CheckChildrenAffection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnlockThings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnlockThings() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnlockThings");

	struct UBPI_AI_C_AI_UnlockThings_Params {
	};
	UBPI_AI_C_AI_UnlockThings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_IncreaseNavInvoker
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToBig	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_IncreaseNavInvoker(bool* ToBig) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_IncreaseNavInvoker");

	struct UBPI_AI_C_AI_IncreaseNavInvoker_Params {
		bool ToBig;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_IncreaseNavInvoker_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ToBig != nullptr)
		*ToBig = params.ToBig;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_ResetNavInvoker
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_ResetNavInvoker() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_ResetNavInvoker");

	struct UBPI_AI_C_AI_ResetNavInvoker_Params {
	};
	UBPI_AI_C_AI_ResetNavInvoker_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_MoveAside
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_MoveAside() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_MoveAside");

	struct UBPI_AI_C_AI_MoveAside_Params {
	};
	UBPI_AI_C_AI_MoveAside_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetMesh
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class USkeletalMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetMesh(class USkeletalMeshComponent** Mesh) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetMesh");

	struct UBPI_AI_C_AI_GetMesh_Params {
		class USkeletalMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_GetMesh_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindHouse
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FindBed	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Occupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindHouse");

	struct UBPI_AI_C_AI_FindHouse_Params {
		bool FindBed;			//Offset: 0 | ElementSize: 1
		bool Occupy;			//Offset: 1 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Find;			//Offset: 16 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindHouse_Params params;
	params.FindBed = FindBed;
	params.Occupy = Occupy;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindAnimal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Animal	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindAnimal(struct FVector* Destination, bool* Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindAnimal");

	struct UBPI_AI_C_AI_FindAnimal_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Animal;			//Offset: 12 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindAnimal_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Animal != nullptr)
		*Animal = params.Animal;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindWorkPlace
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkRadius	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkPlace	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindWorkPlace(struct FVector* Destination, float* WorkRadius, bool* WorkPlace) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindWorkPlace");

	struct UBPI_AI_C_AI_FindWorkPlace_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		float WorkRadius;			//Offset: 12 | ElementSize: 4
		bool WorkPlace;			//Offset: 16 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindWorkPlace_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkRadius != nullptr)
		*WorkRadius = params.WorkRadius;
	if (WorkPlace != nullptr)
		*WorkPlace = params.WorkPlace;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetID(struct FString ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetID");

	struct UBPI_AI_C_AI_SetID_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
	};
	UBPI_AI_C_AI_SetID_Params params;
	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetWorkTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetWorkTask() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetWorkTask");

	struct UBPI_AI_C_AI_SetWorkTask_Params {
	};
	UBPI_AI_C_AI_SetWorkTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindClosestFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindClosestFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindClosestFurniture");

	struct UBPI_AI_C_AI_FindClosestFurniture_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 2 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsFurniture;			//Offset: 16 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindClosestFurniture_Params params;
	params.Location = Location;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetBedIndexes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BedIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BedSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetBedIndexes(int32_t BedIndex, int32_t BedSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetBedIndexes");

	struct UBPI_AI_C_AI_SetBedIndexes_Params {
		int32_t BedIndex;			//Offset: 0 | ElementSize: 4
		int32_t BedSlotIndex;			//Offset: 4 | ElementSize: 4
	};
	UBPI_AI_C_AI_SetBedIndexes_Params params;
	params.BedIndex = BedIndex;
	params.BedSlotIndex = BedSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetCharacterRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpRotation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetCharacterRotation(struct FRotator TargetRotation, bool interpRotation, float interpSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetCharacterRotation");

	struct UBPI_AI_C_AI_SetCharacterRotation_Params {
		struct FRotator TargetRotation;			//Offset: 0 | ElementSize: 12
		bool interpRotation;			//Offset: 12 | ElementSize: 1
		float interpSpeed;			//Offset: 16 | ElementSize: 4
	};
	UBPI_AI_C_AI_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.interpRotation = interpRotation;
	params.interpSpeed = interpSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckTargetFoliage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsTargetFoliage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckTargetFoliage(bool* IsTargetFoliage) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckTargetFoliage");

	struct UBPI_AI_C_AI_CheckTargetFoliage_Params {
		bool IsTargetFoliage;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckTargetFoliage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsTargetFoliage != nullptr)
		*IsTargetFoliage = params.IsTargetFoliage;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetStats
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FText	Flags: Parm, OutParm
// Name: Sex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType>* CharacterType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetStats");

	struct UBPI_AI_C_AI_GetStats_Params {
		struct FText Name;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_Sex> Sex;			//Offset: 24 | ElementSize: 1
		float Age;			//Offset: 28 | ElementSize: 4
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 32 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetStats_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
	if (Sex != nullptr)
		*Sex = params.Sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (CharacterType != nullptr)
		*CharacterType = params.CharacterType;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetIDFromNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetIDFromNPC(struct FString* NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetIDFromNPC");

	struct UBPI_AI_C_AI_GetIDFromNPC_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	UBPI_AI_C_AI_GetIDFromNPC_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_ID != nullptr)
		*NPC_ID = params.NPC_ID;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindRandomFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindRandomFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindRandomFurniture");

	struct UBPI_AI_C_AI_FindRandomFurniture_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 2 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsFurniture;			//Offset: 16 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindRandomFurniture_Params params;
	params.Location = Location;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckIsField
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsField	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckIsField(bool* IsField) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckIsField");

	struct UBPI_AI_C_AI_CheckIsField_Params {
		bool IsField;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckIsField_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsField != nullptr)
		*IsField = params.IsField;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckBuildingIsConstructed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsConstructed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckBuildingIsConstructed(bool* IsConstructed) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckBuildingIsConstructed");

	struct UBPI_AI_C_AI_CheckBuildingIsConstructed_Params {
		bool IsConstructed;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckBuildingIsConstructed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsConstructed != nullptr)
		*IsConstructed = params.IsConstructed;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetOwnership
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetOwnership(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetOwnership");

	struct UBPI_AI_C_AI_GetOwnership_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetOwnership_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetCollisionResponse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: TEnumAsByte<ECollisionResponse>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetCollisionResponse");

	struct UBPI_AI_C_AI_SetCollisionResponse_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> Response;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetCollisionResponse_Params params;
	params.Channel = Channel;
	params.Response = Response;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_OutsideInteract
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_OutsideInteract(bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_OutsideInteract");

	struct UBPI_AI_C_AI_OutsideInteract_Params {
		bool FlipTool;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_OutsideInteract_Params params;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetBedIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BedIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BedSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetBedIndex(int32_t* BedIndex, int32_t* BedSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetBedIndex");

	struct UBPI_AI_C_AI_GetBedIndex_Params {
		int32_t BedIndex;			//Offset: 0 | ElementSize: 4
		int32_t BedSlotIndex;			//Offset: 4 | ElementSize: 4
	};
	UBPI_AI_C_AI_GetBedIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BedIndex != nullptr)
		*BedIndex = params.BedIndex;
	if (BedSlotIndex != nullptr)
		*BedSlotIndex = params.BedSlotIndex;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_StopMovement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_StopMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_StopMovement");

	struct UBPI_AI_C_AI_StopMovement_Params {
	};
	UBPI_AI_C_AI_StopMovement_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindCampfire
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsCampfire	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindCampfire(TEnumAsByte<E_Ownership> Location, bool IgnoreOwnership, struct FVector* Destination, bool* IsCampfire) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindCampfire");

	struct UBPI_AI_C_AI_FindCampfire_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 1 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsCampfire;			//Offset: 16 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindCampfire_Params params;
	params.Location = Location;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsCampfire != nullptr)
		*IsCampfire = params.IsCampfire;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindNPCtoTalk
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: lookAt	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsNPC	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindNPCtoTalk");

	struct UBPI_AI_C_AI_FindNPCtoTalk_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		struct FVector lookAt;			//Offset: 12 | ElementSize: 12
		bool IsNPC;			//Offset: 24 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindNPCtoTalk_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (lookAt != nullptr)
		*lookAt = params.lookAt;
	if (IsNPC != nullptr)
		*IsNPC = params.IsNPC;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_TalkingNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_TalkingNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_TalkingNPC");

	struct UBPI_AI_C_AI_TalkingNPC_Params {
	};
	UBPI_AI_C_AI_TalkingNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetNightPatrol
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NightPatrol	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetNightPatrol(bool* NightPatrol) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetNightPatrol");

	struct UBPI_AI_C_AI_GetNightPatrol_Params {
		bool NightPatrol;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetNightPatrol_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NightPatrol != nullptr)
		*NightPatrol = params.NightPatrol;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindNPCtoPlayingTag
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: lookAt	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsNPC	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindNPCtoPlayingTag(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindNPCtoPlayingTag");

	struct UBPI_AI_C_AI_FindNPCtoPlayingTag_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		struct FVector lookAt;			//Offset: 12 | ElementSize: 12
		bool IsNPC;			//Offset: 24 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindNPCtoPlayingTag_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (lookAt != nullptr)
		*lookAt = params.lookAt;
	if (IsNPC != nullptr)
		*IsNPC = params.IsNPC;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindBuildingWorkbenches
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsWorkbenches	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindBuildingWorkbenches");

	struct UBPI_AI_C_AI_FindBuildingWorkbenches_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool IsWorkbenches;			//Offset: 12 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindBuildingWorkbenches_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsWorkbenches != nullptr)
		*IsWorkbenches = params.IsWorkbenches;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetCapsuleHalfHeight
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CapsuleHalfHeight	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetCapsuleHalfHeight");

	struct UBPI_AI_C_AI_GetCapsuleHalfHeight_Params {
		float CapsuleHalfHeight;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_GetCapsuleHalfHeight_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CapsuleHalfHeight != nullptr)
		*CapsuleHalfHeight = params.CapsuleHalfHeight;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindTavernFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Occupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindTavernFurniture(bool Occupy, struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindTavernFurniture");

	struct UBPI_AI_C_AI_FindTavernFurniture_Params {
		bool Occupy;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Find;			//Offset: 16 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindTavernFurniture_Params params;
	params.Occupy = Occupy;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetQuestBlocking
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestBlocking	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetQuestBlocking(bool* QuestBlocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetQuestBlocking");

	struct UBPI_AI_C_AI_GetQuestBlocking_Params {
		bool QuestBlocking;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetQuestBlocking_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestBlocking != nullptr)
		*QuestBlocking = params.QuestBlocking;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetPlayingTagNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetPlayingTagNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetPlayingTagNPC");

	struct UBPI_AI_C_AI_SetPlayingTagNPC_Params {
	};
	UBPI_AI_C_AI_SetPlayingTagNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetBlockTalking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlockTalking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetBlockTalking(bool BlockTalking) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetBlockTalking");

	struct UBPI_AI_C_AI_SetBlockTalking_Params {
		bool BlockTalking;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetBlockTalking_Params params;
	params.BlockTalking = BlockTalking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetAnimationState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Sitting	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Working	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TakingBreak	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working, bool* TakingBreak) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetAnimationState");

	struct UBPI_AI_C_AI_GetAnimationState_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		bool Sitting;			//Offset: 1 | ElementSize: 1
		bool Working;			//Offset: 2 | ElementSize: 1
		bool TakingBreak;			//Offset: 3 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetAnimationState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Sleeping != nullptr)
		*Sleeping = params.Sleeping;
	if (Sitting != nullptr)
		*Sitting = params.Sitting;
	if (Working != nullptr)
		*Working = params.Working;
	if (TakingBreak != nullptr)
		*TakingBreak = params.TakingBreak;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetInteractionSlotIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractionSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetInteractionSlotIndex(int32_t* InteractionSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetInteractionSlotIndex");

	struct UBPI_AI_C_AI_GetInteractionSlotIndex_Params {
		int32_t InteractionSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_GetInteractionSlotIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InteractionSlotIndex != nullptr)
		*InteractionSlotIndex = params.InteractionSlotIndex;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetInteractedActor
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetInteractedActor(class AActor* InteractedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetInteractedActor");

	struct UBPI_AI_C_AI_SetInteractedActor_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_SetInteractedActor_Params params;
	params.InteractedActor = InteractedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetInteractionSlotIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractionSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetInteractionSlotIndex(int32_t InteractionSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetInteractionSlotIndex");

	struct UBPI_AI_C_AI_SetInteractionSlotIndex_Params {
		int32_t InteractionSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_SetInteractionSlotIndex_Params params;
	params.InteractionSlotIndex = InteractionSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_EndTalking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_EndTalking() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_EndTalking");

	struct UBPI_AI_C_AI_EndTalking_Params {
	};
	UBPI_AI_C_AI_EndTalking_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetIsChangedTimeOfDay
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetIsChangedTimeOfDay");

	struct UBPI_AI_C_AI_SetIsChangedTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
		bool Value;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetIsChangedTimeOfDay
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsChanged	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool* IsChanged) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetIsChangedTimeOfDay");

	struct UBPI_AI_C_AI_GetIsChangedTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
		bool IsChanged;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(fn, &params);
	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetCollisionResponse
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Resposne	Type: TEnumAsByte<ECollisionResponse>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse>* Resposne) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetCollisionResponse");

	struct UBPI_AI_C_AI_GetCollisionResponse_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> Resposne;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetCollisionResponse_Params params;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
	if (Resposne != nullptr)
		*Resposne = params.Resposne;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetOptimizationBlackboards
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OptimizationBlackboards	Type: struct FST_SAVE_NPC_Blackboards	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetOptimizationBlackboards");

	struct UBPI_AI_C_AI_GetOptimizationBlackboards_Params {
		struct FST_SAVE_NPC_Blackboards OptimizationBlackboards;			//Offset: 0 | ElementSize: 40
	};
	UBPI_AI_C_AI_GetOptimizationBlackboards_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OptimizationBlackboards != nullptr)
		*OptimizationBlackboards = params.OptimizationBlackboards;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetDead
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsDead	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetDead(bool* IsDead) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetDead");

	struct UBPI_AI_C_AI_GetDead_Params {
		bool IsDead;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetDead_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_EnableDeadMethods
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_EnableDeadMethods() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_EnableDeadMethods");

	struct UBPI_AI_C_AI_EnableDeadMethods_Params {
	};
	UBPI_AI_C_AI_EnableDeadMethods_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetMontages
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetMontages(class UAnimMontage** WorkMontage, class UAnimMontage** BreakMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetMontages");

	struct UBPI_AI_C_AI_GetMontages_Params {
		class UAnimMontage* WorkMontage;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* BreakMontage;			//Offset: 8 | ElementSize: 8
	};
	UBPI_AI_C_AI_GetMontages_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkMontage != nullptr)
		*WorkMontage = params.WorkMontage;
	if (BreakMontage != nullptr)
		*BreakMontage = params.BreakMontage;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetIsGetOut
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GetOut	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetIsGetOut(bool* GetOut) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetIsGetOut");

	struct UBPI_AI_C_AI_GetIsGetOut_Params {
		bool GetOut;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetIsGetOut_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GetOut != nullptr)
		*GetOut = params.GetOut;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetWorkHours
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: StartWorkingTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StopWorkingTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetWorkHours");

	struct UBPI_AI_C_AI_GetWorkHours_Params {
		struct FST_Hour StartWorkingTime;			//Offset: 0 | ElementSize: 12
		struct FST_Hour StopWorkingTime;			//Offset: 12 | ElementSize: 12
	};
	UBPI_AI_C_AI_GetWorkHours_Params params;

	UObject::ProcessEvent(fn, &params);
	if (StartWorkingTime != nullptr)
		*StartWorkingTime = params.StartWorkingTime;
	if (StopWorkingTime != nullptr)
		*StopWorkingTime = params.StopWorkingTime;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetNPC_MustBeDeactivated
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_MustBeDeactivated	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetNPC_MustBeDeactivated");

	struct UBPI_AI_C_AI_GetNPC_MustBeDeactivated_Params {
		bool NPC_MustBeDeactivated;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetNPC_MustBeDeactivated_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_MustBeDeactivated != nullptr)
		*NPC_MustBeDeactivated = params.NPC_MustBeDeactivated;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetNPC_MustBeDeactivated
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_MustBeDeactivated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetNPC_MustBeDeactivated");

	struct UBPI_AI_C_AI_SetNPC_MustBeDeactivated_Params {
		bool NPC_MustBeDeactivated;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetNPC_MustBeDeactivated_Params params;
	params.NPC_MustBeDeactivated = NPC_MustBeDeactivated;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindFishingPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindFishingPoint(struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindFishingPoint");

	struct UBPI_AI_C_AI_FindFishingPoint_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Find;			//Offset: 12 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindFishingPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetOptimizationStage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: optimizationStage	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetOptimizationStage(int32_t* optimizationStage) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetOptimizationStage");

	struct UBPI_AI_C_AI_GetOptimizationStage_Params {
		int32_t optimizationStage;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_GetOptimizationStage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (optimizationStage != nullptr)
		*optimizationStage = params.optimizationStage;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetOutsideNPC_Ownership
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OutsideNPC_Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership>* OutsideNPC_Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetOutsideNPC_Ownership");

	struct UBPI_AI_C_AI_GetOutsideNPC_Ownership_Params {
		TEnumAsByte<E_Ownership> OutsideNPC_Ownership;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetOutsideNPC_Ownership_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OutsideNPC_Ownership != nullptr)
		*OutsideNPC_Ownership = params.OutsideNPC_Ownership;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckSeedsInChest
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: RemoveItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BagSeeds	Type: TEnumAsByte<E_BagMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsBag	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode> BagSeeds, bool* IsBag) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckSeedsInChest");

	struct UBPI_AI_C_AI_CheckSeedsInChest_Params {
		bool RemoveItem;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_BagMode> BagSeeds;			//Offset: 1 | ElementSize: 1
		bool IsBag;			//Offset: 2 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckSeedsInChest_Params params;
	params.RemoveItem = RemoveItem;
	params.BagSeeds = BagSeeds;

	UObject::ProcessEvent(fn, &params);
	if (IsBag != nullptr)
		*IsBag = params.IsBag;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetNPC_Status
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Status	Type: TEnumAsByte<E_NPCStatus>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetNPC_Status(TEnumAsByte<E_NPCStatus> NPC_Status) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetNPC_Status");

	struct UBPI_AI_C_AI_SetNPC_Status_Params {
		TEnumAsByte<E_NPCStatus> NPC_Status;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetNPC_Status_Params params;
	params.NPC_Status = NPC_Status;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetOutsideNPC_Type
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Outside_NPC_Type	Type: TEnumAsByte<E_OutsideNPCTypes>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetOutsideNPC_Type(TEnumAsByte<E_OutsideNPCTypes>* Outside_NPC_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetOutsideNPC_Type");

	struct UBPI_AI_C_AI_GetOutsideNPC_Type_Params {
		TEnumAsByte<E_OutsideNPCTypes> Outside_NPC_Type;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetOutsideNPC_Type_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Outside_NPC_Type != nullptr)
		*Outside_NPC_Type = params.Outside_NPC_Type;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetNPC_Status
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Status	Type: TEnumAsByte<E_NPCStatus>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NeedTool	Type: TEnumAsByte<E_Tools_Activity>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NeedItem	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetNPC_Status(TEnumAsByte<E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity>* NeedTool, struct FName* NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetNPC_Status");

	struct UBPI_AI_C_AI_GetNPC_Status_Params {
		TEnumAsByte<E_NPCStatus> NPC_Status;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Tools_Activity> NeedTool;			//Offset: 1 | ElementSize: 1
		struct FName NeedItem;			//Offset: 4 | ElementSize: 8
	};
	UBPI_AI_C_AI_GetNPC_Status_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_Status != nullptr)
		*NPC_Status = params.NPC_Status;
	if (NeedTool != nullptr)
		*NeedTool = params.NeedTool;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetNeedItemName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NeedItem	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetNeedItemName(struct FName* NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetNeedItemName");

	struct UBPI_AI_C_AI_GetNeedItemName_Params {
		struct FName NeedItem;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_GetNeedItemName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetNeedItemName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NeedItem	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetNeedItemName(struct FName NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetNeedItemName");

	struct UBPI_AI_C_AI_SetNeedItemName_Params {
		struct FName NeedItem;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_SetNeedItemName_Params params;
	params.NeedItem = NeedItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetProfessionClothes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetProfessionClothes(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetProfessionClothes");

	struct UBPI_AI_C_AI_SetProfessionClothes_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetProfessionClothes_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetCasualClothes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetCasualClothes(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetCasualClothes");

	struct UBPI_AI_C_AI_SetCasualClothes_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetCasualClothes_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetFieldTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Field_Task	Type: struct FST_FieldTasksLists	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetFieldTask(struct FST_FieldTasksLists Field_Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetFieldTask");

	struct UBPI_AI_C_AI_SetFieldTask_Params {
		struct FST_FieldTasksLists Field_Task;			//Offset: 0 | ElementSize: 56
	};
	UBPI_AI_C_AI_SetFieldTask_Params params;
	params.Field_Task = Field_Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindAnimalsBreederPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Point	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindAnimalsBreederPoint");

	struct UBPI_AI_C_AI_FindAnimalsBreederPoint_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Point;			//Offset: 12 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindAnimalsBreederPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Point != nullptr)
		*Point = params.Point;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_RemoveAnimalReference
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_RemoveAnimalReference() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_RemoveAnimalReference");

	struct UBPI_AI_C_AI_RemoveAnimalReference_Params {
	};
	UBPI_AI_C_AI_RemoveAnimalReference_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SnapToFurnitureSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToFinishSlot	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SnapToFurnitureSlot");

	struct UBPI_AI_C_AI_SnapToFurnitureSlot_Params {
		bool ToFinishSlot;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_SnapToFurnitureSlot_Params params;
	params.ToFinishSlot = ToFinishSlot;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckIsChunkInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckIsChunkInteractable(bool* Interactable) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckIsChunkInteractable");

	struct UBPI_AI_C_AI_CheckIsChunkInteractable_Params {
		bool Interactable;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckIsChunkInteractable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_RemovePathsPoint
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_RemovePathsPoint(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_RemovePathsPoint");

	struct UBPI_AI_C_AI_RemovePathsPoint_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_RemovePathsPoint_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_AfterRemovalFromHouse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_AfterRemovalFromHouse() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_AfterRemovalFromHouse");

	struct UBPI_AI_C_AI_AfterRemovalFromHouse_Params {
	};
	UBPI_AI_C_AI_AfterRemovalFromHouse_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_AfterRemovalFromWorkplace
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_AfterRemovalFromWorkplace() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_AfterRemovalFromWorkplace");

	struct UBPI_AI_C_AI_AfterRemovalFromWorkplace_Params {
	};
	UBPI_AI_C_AI_AfterRemovalFromWorkplace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_HideHeldItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UpdateToolType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_HideHeldItem(bool IsWorking, bool UpdateToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_HideHeldItem");

	struct UBPI_AI_C_AI_HideHeldItem_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
		bool UpdateToolType;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_HideHeldItem_Params params;
	params.IsWorking = IsWorking;
	params.UpdateToolType = UpdateToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_HideOff-HandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_HideOff_HandItem(bool IsWorking) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_HideOff-HandItem");

	struct UBPI_AI_C_AI_HideOff_HandItem_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_HideOff_HandItem_Params params;
	params.IsWorking = IsWorking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_HideItemsInHands
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_HideItemsInHands(bool IsWorking) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_HideItemsInHands");

	struct UBPI_AI_C_AI_HideItemsInHands_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_HideItemsInHands_Params params;
	params.IsWorking = IsWorking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetIsLookAtTargetRotation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsLookAtTargetRotation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetIsLookAtTargetRotation");

	struct UBPI_AI_C_AI_GetIsLookAtTargetRotation_Params {
		bool IsLookAtTargetRotation;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetIsLookAtTargetRotation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsLookAtTargetRotation != nullptr)
		*IsLookAtTargetRotation = params.IsLookAtTargetRotation;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetIsLookAtTargetRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsLookAtTargetRotation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetIsLookAtTargetRotation");

	struct UBPI_AI_C_AI_SetIsLookAtTargetRotation_Params {
		bool IsLookAtTargetRotation;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetIsLookAtTargetRotation_Params params;
	params.IsLookAtTargetRotation = IsLookAtTargetRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetCanAffectNavigation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAffectNavigation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetCanAffectNavigation(bool CanAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetCanAffectNavigation");

	struct UBPI_AI_C_AI_SetCanAffectNavigation_Params {
		bool CanAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetCanAffectNavigation_Params params;
	params.CanAffectNavigation = CanAffectNavigation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetCanAffectNavigation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAffectNavigation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetCanAffectNavigation(bool* CanAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetCanAffectNavigation");

	struct UBPI_AI_C_AI_GetCanAffectNavigation_Params {
		bool CanAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetCanAffectNavigation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanAffectNavigation != nullptr)
		*CanAffectNavigation = params.CanAffectNavigation;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindWorkSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindWorkSlot");

	struct UBPI_AI_C_AI_FindWorkSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool WorkSlot;			//Offset: 12 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindWorkSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkSlot != nullptr)
		*WorkSlot = params.WorkSlot;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetActivity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpecifiedActivities	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetActivity(const TArray<int32_t>& SpecifiedActivities) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetActivity");

	struct UBPI_AI_C_AI_SetActivity_Params {
		TArray<int32_t> SpecifiedActivities;			//Offset: 0 | ElementSize: 16
	};
	UBPI_AI_C_AI_SetActivity_Params params;
	params.SpecifiedActivities = SpecifiedActivities;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetGoHome_Activity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GoHome_Activity	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetGoHome_Activity(bool* GoHome_Activity) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetGoHome_Activity");

	struct UBPI_AI_C_AI_GetGoHome_Activity_Params {
		bool GoHome_Activity;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetGoHome_Activity_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GoHome_Activity != nullptr)
		*GoHome_Activity = params.GoHome_Activity;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetGoHome_Activity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: GoHome_Activity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetGoHome_Activity(bool GoHome_Activity) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetGoHome_Activity");

	struct UBPI_AI_C_AI_SetGoHome_Activity_Params {
		bool GoHome_Activity;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetGoHome_Activity_Params params;
	params.GoHome_Activity = GoHome_Activity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetPaths
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Paths	Type: TArray<struct FVector>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetPaths(TArray<struct FVector>* Paths) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetPaths");

	struct UBPI_AI_C_AI_GetPaths_Params {
		TArray<struct FVector> Paths;			//Offset: 0 | ElementSize: 16
	};
	UBPI_AI_C_AI_GetPaths_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Paths != nullptr)
		*Paths = params.Paths;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetPathsPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Succes	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PathsPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetPathsPoint(bool* Succes, struct FVector* PathsPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetPathsPoint");

	struct UBPI_AI_C_AI_GetPathsPoint_Params {
		bool Succes;			//Offset: 0 | ElementSize: 1
		struct FVector PathsPoint;			//Offset: 4 | ElementSize: 12
	};
	UBPI_AI_C_AI_GetPathsPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Succes != nullptr)
		*Succes = params.Succes;
	if (PathsPoint != nullptr)
		*PathsPoint = params.PathsPoint;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindBreakSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindBreakSlot(struct FVector* Destination, bool* BreakSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindBreakSlot");

	struct UBPI_AI_C_AI_FindBreakSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool BreakSlot;			//Offset: 12 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindBreakSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (BreakSlot != nullptr)
		*BreakSlot = params.BreakSlot;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindApprenticeSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ApprenticeSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindApprenticeSlot(struct FVector* Destination, bool* ApprenticeSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindApprenticeSlot");

	struct UBPI_AI_C_AI_FindApprenticeSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool ApprenticeSlot;			//Offset: 12 | ElementSize: 1
	};
	UBPI_AI_C_AI_FindApprenticeSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (ApprenticeSlot != nullptr)
		*ApprenticeSlot = params.ApprenticeSlot;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindVillageCenter
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: VillageCenter	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindVillageCenter(struct FVector* VillageCenter) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindVillageCenter");

	struct UBPI_AI_C_AI_FindVillageCenter_Params {
		struct FVector VillageCenter;			//Offset: 0 | ElementSize: 12
	};
	UBPI_AI_C_AI_FindVillageCenter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (VillageCenter != nullptr)
		*VillageCenter = params.VillageCenter;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetWhetherAffectNavigation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WhetherAffectNavigation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetWhetherAffectNavigation(bool WhetherAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetWhetherAffectNavigation");

	struct UBPI_AI_C_AI_SetWhetherAffectNavigation_Params {
		bool WhetherAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetWhetherAffectNavigation_Params params;
	params.WhetherAffectNavigation = WhetherAffectNavigation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindPOIFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindPOIFurniture(bool* IsFurniture, struct FVector* Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindPOIFurniture");

	struct UBPI_AI_C_AI_FindPOIFurniture_Params {
		bool IsFurniture;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
	};
	UBPI_AI_C_AI_FindPOIFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
	if (Destination != nullptr)
		*Destination = params.Destination;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetBanditType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetBanditType(TEnumAsByte<E_BanditType>* BanditType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetBanditType");

	struct UBPI_AI_C_AI_GetBanditType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetBanditType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BanditType != nullptr)
		*BanditType = params.BanditType;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetBanditType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetBanditType(TEnumAsByte<E_BanditType> BanditType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetBanditType");

	struct UBPI_AI_C_AI_SetBanditType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetBanditType_Params params;
	params.BanditType = BanditType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindGetOutPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GetOutPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindGetOutPoint(struct FVector* GetOutPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindGetOutPoint");

	struct UBPI_AI_C_AI_FindGetOutPoint_Params {
		struct FVector GetOutPoint;			//Offset: 0 | ElementSize: 12
	};
	UBPI_AI_C_AI_FindGetOutPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GetOutPoint != nullptr)
		*GetOutPoint = params.GetOutPoint;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetWorkSlotIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetWorkSlotIndex(int32_t* WorkSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetWorkSlotIndex");

	struct UBPI_AI_C_AI_GetWorkSlotIndex_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_GetWorkSlotIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkSlotIndex != nullptr)
		*WorkSlotIndex = params.WorkSlotIndex;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetWorkSlotIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetWorkSlotIndex(int32_t WorkSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetWorkSlotIndex");

	struct UBPI_AI_C_AI_SetWorkSlotIndex_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_SetWorkSlotIndex_Params params;
	params.WorkSlotIndex = WorkSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetWhetherAffectNavigation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WhetherAffectNavigation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetWhetherAffectNavigation(bool* WhetherAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetWhetherAffectNavigation");

	struct UBPI_AI_C_AI_GetWhetherAffectNavigation_Params {
		bool WhetherAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetWhetherAffectNavigation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WhetherAffectNavigation != nullptr)
		*WhetherAffectNavigation = params.WhetherAffectNavigation;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetBuildingType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidBuilding	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BuildingType	Type: TEnumAsByte<E_Buildings>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetBuildingType(bool* IsValidBuilding, TEnumAsByte<E_Buildings>* BuildingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetBuildingType");

	struct UBPI_AI_C_AI_GetBuildingType_Params {
		bool IsValidBuilding;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Buildings> BuildingType;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetBuildingType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidBuilding != nullptr)
		*IsValidBuilding = params.IsValidBuilding;
	if (BuildingType != nullptr)
		*BuildingType = params.BuildingType;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SpawnCrossbow
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCrossBow	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SpawnCrossbow(bool CheckInInventory, bool* IsCrossBow) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SpawnCrossbow");

	struct UBPI_AI_C_AI_SpawnCrossbow_Params {
		bool CheckInInventory;			//Offset: 0 | ElementSize: 1
		bool IsCrossBow;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_SpawnCrossbow_Params params;
	params.CheckInInventory = CheckInInventory;

	UObject::ProcessEvent(fn, &params);
	if (IsCrossBow != nullptr)
		*IsCrossBow = params.IsCrossBow;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetBuildingsWorkSlotWorldTransforms
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Slot	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetBuildingsWorkSlotWorldTransforms(bool* IsValidSlot, struct FTransform* Slot, struct FTransform* StartPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetBuildingsWorkSlotWorldTransforms");

	struct UBPI_AI_C_AI_GetBuildingsWorkSlotWorldTransforms_Params {
		bool IsValidSlot;			//Offset: 0 | ElementSize: 1
		struct FTransform Slot;			//Offset: 16 | ElementSize: 48
		struct FTransform StartPoint;			//Offset: 64 | ElementSize: 48
	};
	UBPI_AI_C_AI_GetBuildingsWorkSlotWorldTransforms_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidSlot != nullptr)
		*IsValidSlot = params.IsValidSlot;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetVendor
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Vendor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetVendor(bool* Vendor) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetVendor");

	struct UBPI_AI_C_AI_GetVendor_Params {
		bool Vendor;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetVendor_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Vendor != nullptr)
		*Vendor = params.Vendor;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetSpawnerLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidSpawner	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SpawnerLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetSpawnerLocation(bool* IsValidSpawner, struct FVector* SpawnerLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetSpawnerLocation");

	struct UBPI_AI_C_AI_GetSpawnerLocation_Params {
		bool IsValidSpawner;			//Offset: 0 | ElementSize: 1
		struct FVector SpawnerLocation;			//Offset: 4 | ElementSize: 12
	};
	UBPI_AI_C_AI_GetSpawnerLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidSpawner != nullptr)
		*IsValidSpawner = params.IsValidSpawner;
	if (SpawnerLocation != nullptr)
		*SpawnerLocation = params.SpawnerLocation;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnoccupyBuildingWorkSlot
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnoccupyBuildingWorkSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnoccupyBuildingWorkSlot");

	struct UBPI_AI_C_AI_UnoccupyBuildingWorkSlot_Params {
	};
	UBPI_AI_C_AI_UnoccupyBuildingWorkSlot_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnoccupyNPC_FieldTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnoccupyNPC_FieldTask() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnoccupyNPC_FieldTask");

	struct UBPI_AI_C_AI_UnoccupyNPC_FieldTask_Params {
	};
	UBPI_AI_C_AI_UnoccupyNPC_FieldTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FlipTool
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnFlip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_FlipTool(bool UnFlip) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FlipTool");

	struct UBPI_AI_C_AI_FlipTool_Params {
		bool UnFlip;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_FlipTool_Params params;
	params.UnFlip = UnFlip;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.CharacterVoice
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ST_CharacterVoice	Type: struct FST_CharacterVoiceCues	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::CharacterVoice(struct FST_CharacterVoiceCues* ST_CharacterVoice) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.CharacterVoice");

	struct UBPI_AI_C_CharacterVoice_Params {
		struct FST_CharacterVoiceCues ST_CharacterVoice;			//Offset: 0 | ElementSize: 24
	};
	UBPI_AI_C_CharacterVoice_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ST_CharacterVoice != nullptr)
		*ST_CharacterVoice = params.ST_CharacterVoice;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetBreakAnimID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BreakAnimID	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetBreakAnimID(unsigned char* BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetBreakAnimID");

	struct UBPI_AI_C_AI_GetBreakAnimID_Params {
		unsigned char BreakAnimID;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetBreakAnimID_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BreakAnimID != nullptr)
		*BreakAnimID = params.BreakAnimID;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_LightCampfire
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_LightCampfire() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_LightCampfire");

	struct UBPI_AI_C_AI_LightCampfire_Params {
	};
	UBPI_AI_C_AI_LightCampfire_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetMontages
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetMontages(class UAnimMontage* WorkMontage, class UAnimMontage* BreakMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetMontages");

	struct UBPI_AI_C_AI_SetMontages_Params {
		class UAnimMontage* WorkMontage;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* BreakMontage;			//Offset: 8 | ElementSize: 8
	};
	UBPI_AI_C_AI_SetMontages_Params params;
	params.WorkMontage = WorkMontage;
	params.BreakMontage = BreakMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetBreakAnimType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BreakAnimType	Type: TEnumAsByte<E_AnimBreakType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetBreakAnimType(TEnumAsByte<E_AnimBreakType>* BreakAnimType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetBreakAnimType");

	struct UBPI_AI_C_AI_GetBreakAnimType_Params {
		TEnumAsByte<E_AnimBreakType> BreakAnimType;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetBreakAnimType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BreakAnimType != nullptr)
		*BreakAnimType = params.BreakAnimType;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetWakeUpAndSleepTimes
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BeginWakeUpTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BeginSleepTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetWakeUpAndSleepTimes(struct FST_Hour* BeginWakeUpTime, struct FST_Hour* BeginSleepTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetWakeUpAndSleepTimes");

	struct UBPI_AI_C_AI_GetWakeUpAndSleepTimes_Params {
		struct FST_Hour BeginWakeUpTime;			//Offset: 0 | ElementSize: 12
		struct FST_Hour BeginSleepTime;			//Offset: 12 | ElementSize: 12
	};
	UBPI_AI_C_AI_GetWakeUpAndSleepTimes_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BeginWakeUpTime != nullptr)
		*BeginWakeUpTime = params.BeginWakeUpTime;
	if (BeginSleepTime != nullptr)
		*BeginSleepTime = params.BeginSleepTime;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetBeginWakeUpTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetBeginWakeUpTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetBeginWakeUpTime");

	struct UBPI_AI_C_AI_SetBeginWakeUpTime_Params {
	};
	UBPI_AI_C_AI_SetBeginWakeUpTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetBeginSleepTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetBeginSleepTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetBeginSleepTime");

	struct UBPI_AI_C_AI_SetBeginSleepTime_Params {
	};
	UBPI_AI_C_AI_SetBeginSleepTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetWorkStateLoops
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentWorkStateLoop	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkStateLoops	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetWorkStateLoops(int32_t* CurrentWorkStateLoop, int32_t* WorkStateLoops) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetWorkStateLoops");

	struct UBPI_AI_C_AI_GetWorkStateLoops_Params {
		int32_t CurrentWorkStateLoop;			//Offset: 0 | ElementSize: 4
		int32_t WorkStateLoops;			//Offset: 4 | ElementSize: 4
	};
	UBPI_AI_C_AI_GetWorkStateLoops_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CurrentWorkStateLoop != nullptr)
		*CurrentWorkStateLoop = params.CurrentWorkStateLoop;
	if (WorkStateLoops != nullptr)
		*WorkStateLoops = params.WorkStateLoops;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetCurrentWorkStateLoop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentWorkStateLoop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetCurrentWorkStateLoop(int32_t CurrentWorkStateLoop) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetCurrentWorkStateLoop");

	struct UBPI_AI_C_AI_SetCurrentWorkStateLoop_Params {
		int32_t CurrentWorkStateLoop;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_SetCurrentWorkStateLoop_Params params;
	params.CurrentWorkStateLoop = CurrentWorkStateLoop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetDistanceToPlayer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetDistanceToPlayer(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetDistanceToPlayer");

	struct UBPI_AI_C_AI_GetDistanceToPlayer_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_GetDistanceToPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetPath
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckDistance	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Distance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Destination	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetPath(bool CheckDistance, float Distance, struct FVector Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetPath");

	struct UBPI_AI_C_AI_SetPath_Params {
		bool CheckDistance;			//Offset: 0 | ElementSize: 1
		float Distance;			//Offset: 4 | ElementSize: 4
		struct FVector Destination;			//Offset: 8 | ElementSize: 12
	};
	UBPI_AI_C_AI_SetPath_Params params;
	params.CheckDistance = CheckDistance;
	params.Distance = Distance;
	params.Destination = Destination;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_InteractWithFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_InteractWithFurniture(struct FHitResult Hit, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_InteractWithFurniture");

	struct UBPI_AI_C_AI_InteractWithFurniture_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
		bool Timer;			//Offset: 136 | ElementSize: 1
	};
	UBPI_AI_C_AI_InteractWithFurniture_Params params;
	params.Hit = Hit;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CancelInteractWithFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_CancelInteractWithFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CancelInteractWithFurniture");

	struct UBPI_AI_C_AI_CancelInteractWithFurniture_Params {
	};
	UBPI_AI_C_AI_CancelInteractWithFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetAnimationState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Sitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Working	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TakingBreak	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetAnimationState(bool Sleeping, bool Sitting, bool Working, bool TakingBreak) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetAnimationState");

	struct UBPI_AI_C_AI_SetAnimationState_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		bool Sitting;			//Offset: 1 | ElementSize: 1
		bool Working;			//Offset: 2 | ElementSize: 1
		bool TakingBreak;			//Offset: 3 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetAnimationState_Params params;
	params.Sleeping = Sleeping;
	params.Sitting = Sitting;
	params.Working = Working;
	params.TakingBreak = TakingBreak;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetCustomNPC_DTHandler
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CustomNPC_DTHandler	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetCustomNPC_DTHandler(struct FDataTableRowHandle* CustomNPC_DTHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetCustomNPC_DTHandler");

	struct UBPI_AI_C_AI_GetCustomNPC_DTHandler_Params {
		struct FDataTableRowHandle CustomNPC_DTHandler;			//Offset: 0 | ElementSize: 16
	};
	UBPI_AI_C_AI_GetCustomNPC_DTHandler_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CustomNPC_DTHandler != nullptr)
		*CustomNPC_DTHandler = params.CustomNPC_DTHandler;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_FindOutsidePoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OutsidePoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_FindOutsidePoint(struct FVector* OutsidePoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_FindOutsidePoint");

	struct UBPI_AI_C_AI_FindOutsidePoint_Params {
		struct FVector OutsidePoint;			//Offset: 0 | ElementSize: 12
	};
	UBPI_AI_C_AI_FindOutsidePoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OutsidePoint != nullptr)
		*OutsidePoint = params.OutsidePoint;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetTalkingCharacter
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TalkingCharacter	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetTalkingCharacter(bool* Success, class AActor** TalkingCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetTalkingCharacter");

	struct UBPI_AI_C_AI_GetTalkingCharacter_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		class AActor* TalkingCharacter;			//Offset: 8 | ElementSize: 8
	};
	UBPI_AI_C_AI_GetTalkingCharacter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (TalkingCharacter != nullptr)
		*TalkingCharacter = params.TalkingCharacter;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_BindEventToWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_BindEventToWorkMontageComplete(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_BindEventToWorkMontageComplete");

	struct UBPI_AI_C_AI_BindEventToWorkMontageComplete_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_BindEventToWorkMontageComplete_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindEventFromWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindEventFromWorkMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindEventFromWorkMontageComplete");

	struct UBPI_AI_C_AI_UnbindEventFromWorkMontageComplete_Params {
	};
	UBPI_AI_C_AI_UnbindEventFromWorkMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindAllEventsFromWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindAllEventsFromWorkMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindAllEventsFromWorkMontageComplete");

	struct UBPI_AI_C_AI_UnbindAllEventsFromWorkMontageComplete_Params {
	};
	UBPI_AI_C_AI_UnbindAllEventsFromWorkMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_BindEventToBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_BindEventToBreakMontageComplete(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_BindEventToBreakMontageComplete");

	struct UBPI_AI_C_AI_BindEventToBreakMontageComplete_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_BindEventToBreakMontageComplete_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindEventFromBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindEventFromBreakMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindEventFromBreakMontageComplete");

	struct UBPI_AI_C_AI_UnbindEventFromBreakMontageComplete_Params {
	};
	UBPI_AI_C_AI_UnbindEventFromBreakMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_DestroyOnGetOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_DestroyOnGetOut() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_DestroyOnGetOut");

	struct UBPI_AI_C_AI_DestroyOnGetOut_Params {
	};
	UBPI_AI_C_AI_DestroyOnGetOut_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckIsPlayerPartner
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPlayerPartner	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckIsPlayerPartner(bool* IsPlayerPartner) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckIsPlayerPartner");

	struct UBPI_AI_C_AI_CheckIsPlayerPartner_Params {
		bool IsPlayerPartner;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckIsPlayerPartner_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsPlayerPartner != nullptr)
		*IsPlayerPartner = params.IsPlayerPartner;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindAllEventsFromBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindAllEventsFromBreakMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindAllEventsFromBreakMontageComplete");

	struct UBPI_AI_C_AI_UnbindAllEventsFromBreakMontageComplete_Params {
	};
	UBPI_AI_C_AI_UnbindAllEventsFromBreakMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_BindEventToOnIdleAnimFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_BindEventToOnIdleAnimFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_BindEventToOnIdleAnimFinished");

	struct UBPI_AI_C_AI_BindEventToOnIdleAnimFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_BindEventToOnIdleAnimFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindEventsFromOnIdleAnimFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindEventsFromOnIdleAnimFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindEventsFromOnIdleAnimFinished");

	struct UBPI_AI_C_AI_UnbindEventsFromOnIdleAnimFinished_Params {
	};
	UBPI_AI_C_AI_UnbindEventsFromOnIdleAnimFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_TeleportToHouseOrWorkplace
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToHouse	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_TeleportToHouseOrWorkplace(bool ToHouse, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_TeleportToHouseOrWorkplace");

	struct UBPI_AI_C_AI_TeleportToHouseOrWorkplace_Params {
		bool ToHouse;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_TeleportToHouseOrWorkplace_Params params;
	params.ToHouse = ToHouse;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetTimeOfDay
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetTimeOfDay(TEnumAsByte<E_TimeOfDay>* TimeOfDay) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetTimeOfDay");

	struct UBPI_AI_C_AI_GetTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetTimeOfDay_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TimeOfDay != nullptr)
		*TimeOfDay = params.TimeOfDay;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckCanMove
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanMove	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckCanMove(bool* CanMove) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckCanMove");

	struct UBPI_AI_C_AI_CheckCanMove_Params {
		bool CanMove;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckCanMove_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanMove != nullptr)
		*CanMove = params.CanMove;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetGetOutSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetGetOutSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetGetOutSettings");

	struct UBPI_AI_C_AI_SetGetOutSettings_Params {
	};
	UBPI_AI_C_AI_SetGetOutSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_BindEventToOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_BindEventToOnSleepFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_BindEventToOnSleepFinished");

	struct UBPI_AI_C_AI_BindEventToOnSleepFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_BindEventToOnSleepFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindEventFromOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindEventFromOnSleepFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindEventFromOnSleepFinished");

	struct UBPI_AI_C_AI_UnbindEventFromOnSleepFinished_Params {
	};
	UBPI_AI_C_AI_UnbindEventFromOnSleepFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindAllEventsFromOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindAllEventsFromOnSleepFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindAllEventsFromOnSleepFinished");

	struct UBPI_AI_C_AI_UnbindAllEventsFromOnSleepFinished_Params {
	};
	UBPI_AI_C_AI_UnbindAllEventsFromOnSleepFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_BindEventToOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_BindEventToOnSitFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_BindEventToOnSitFinished");

	struct UBPI_AI_C_AI_BindEventToOnSitFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_BindEventToOnSitFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindEventFromOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindEventFromOnSitFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindEventFromOnSitFinished");

	struct UBPI_AI_C_AI_UnbindEventFromOnSitFinished_Params {
	};
	UBPI_AI_C_AI_UnbindEventFromOnSitFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_UnbindAllEventsFromOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_UnbindAllEventsFromOnSitFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_UnbindAllEventsFromOnSitFinished");

	struct UBPI_AI_C_AI_UnbindAllEventsFromOnSitFinished_Params {
	};
	UBPI_AI_C_AI_UnbindAllEventsFromOnSitFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_ResetBehaviorOnWakeUp
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_ResetBehaviorOnWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_ResetBehaviorOnWakeUp");

	struct UBPI_AI_C_AI_ResetBehaviorOnWakeUp_Params {
	};
	UBPI_AI_C_AI_ResetBehaviorOnWakeUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetSound
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: TAssetPtr<class USoundBase>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetSound(TAssetPtr<class USoundBase> Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetSound");

	struct UBPI_AI_C_AI_SetSound_Params {
		TAssetPtr<class USoundBase> Sound;			//Offset: 0 | ElementSize: 40
	};
	UBPI_AI_C_AI_SetSound_Params params;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_PlayAudio
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_PlayAudio(float StartTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_PlayAudio");

	struct UBPI_AI_C_AI_PlayAudio_Params {
		float StartTime;			//Offset: 0 | ElementSize: 4
	};
	UBPI_AI_C_AI_PlayAudio_Params params;
	params.StartTime = StartTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_StopAudio
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_StopAudio() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_StopAudio");

	struct UBPI_AI_C_AI_StopAudio_Params {
	};
	UBPI_AI_C_AI_StopAudio_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_StopFurnitureAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_StopFurnitureAnimation(class AActor* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_StopFurnitureAnimation");

	struct UBPI_AI_C_AI_StopFurnitureAnimation_Params {
		class AActor* Furniture;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_StopFurnitureAnimation_Params params;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetChangeCollision
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChangeCollision	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetChangeCollision(bool ChangeCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetChangeCollision");

	struct UBPI_AI_C_AI_SetChangeCollision_Params {
		bool ChangeCollision;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetChangeCollision_Params params;
	params.ChangeCollision = ChangeCollision;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetNPCAfterGetOrWakeUp
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetNPCAfterGetOrWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetNPCAfterGetOrWakeUp");

	struct UBPI_AI_C_AI_SetNPCAfterGetOrWakeUp_Params {
	};
	UBPI_AI_C_AI_SetNPCAfterGetOrWakeUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetHasInfant
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HasInfant	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetHasInfant(bool* HasInfant) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetHasInfant");

	struct UBPI_AI_C_AI_GetHasInfant_Params {
		bool HasInfant;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetHasInfant_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HasInfant != nullptr)
		*HasInfant = params.HasInfant;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetHasInfant
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HasInfant	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetHasInfant(bool HasInfant) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetHasInfant");

	struct UBPI_AI_C_AI_SetHasInfant_Params {
		bool HasInfant;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetHasInfant_Params params;
	params.HasInfant = HasInfant;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetToys
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Toys	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetToys(TArray<struct FName>* Toys) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetToys");

	struct UBPI_AI_C_AI_GetToys_Params {
		TArray<struct FName> Toys;			//Offset: 0 | ElementSize: 16
	};
	UBPI_AI_C_AI_GetToys_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Toys != nullptr)
		*Toys = params.Toys;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckCanTalk
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckResourceState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CanTalk	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckCanTalk(bool CheckResourceState, bool* CanTalk) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckCanTalk");

	struct UBPI_AI_C_AI_CheckCanTalk_Params {
		bool CheckResourceState;			//Offset: 0 | ElementSize: 1
		bool CanTalk;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckCanTalk_Params params;
	params.CheckResourceState = CheckResourceState;

	UObject::ProcessEvent(fn, &params);
	if (CanTalk != nullptr)
		*CanTalk = params.CanTalk;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetRotationManaged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsRotationManaged	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetRotationManaged(bool IsRotationManaged) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetRotationManaged");

	struct UBPI_AI_C_AI_SetRotationManaged_Params {
		bool IsRotationManaged;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetRotationManaged_Params params;
	params.IsRotationManaged = IsRotationManaged;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_GetRotationManaged
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsRotationManaged	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_GetRotationManaged(bool* IsRotationManaged) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_GetRotationManaged");

	struct UBPI_AI_C_AI_GetRotationManaged_Params {
		bool IsRotationManaged;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_GetRotationManaged_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsRotationManaged != nullptr)
		*IsRotationManaged = params.IsRotationManaged;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI Start Combat
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_Start_Combat(class AActor*& Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI Start Combat");

	struct UBPI_AI_C_AI_Start_Combat_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	UBPI_AI_C_AI_Start_Combat_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetWaitTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckDayActivities	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetWaitTask(bool CheckDayActivities) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetWaitTask");

	struct UBPI_AI_C_AI_SetWaitTask_Params {
		bool CheckDayActivities;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetWaitTask_Params params;
	params.CheckDayActivities = CheckDayActivities;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetCanChangeMovementActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanChangeMovementActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetCanChangeMovementActive(bool CanChangeMovementActive) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetCanChangeMovementActive");

	struct UBPI_AI_C_AI_SetCanChangeMovementActive_Params {
		bool CanChangeMovementActive;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetCanChangeMovementActive_Params params;
	params.CanChangeMovementActive = CanChangeMovementActive;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckIsInGoToCenterTask
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckIsInGoToCenterTask(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckIsInGoToCenterTask");

	struct UBPI_AI_C_AI_CheckIsInGoToCenterTask_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckIsInGoToCenterTask_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetQuestBlocking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestBlocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetQuestBlocking(bool QuestBlocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetQuestBlocking");

	struct UBPI_AI_C_AI_SetQuestBlocking_Params {
		bool QuestBlocking;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_SetQuestBlocking_Params params;
	params.QuestBlocking = QuestBlocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetPerceptionActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TickInterval	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetPerceptionActive(bool Enabled, float TickInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetPerceptionActive");

	struct UBPI_AI_C_AI_SetPerceptionActive_Params {
		bool Enabled;			//Offset: 0 | ElementSize: 1
		float TickInterval;			//Offset: 4 | ElementSize: 4
	};
	UBPI_AI_C_AI_SetPerceptionActive_Params params;
	params.Enabled = Enabled;
	params.TickInterval = TickInterval;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_ChangeHeiressToHeir
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_ChangeHeiressToHeir(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_ChangeHeiressToHeir");

	struct UBPI_AI_C_AI_ChangeHeiressToHeir_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_ChangeHeiressToHeir_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_ChangeSex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_ChangeSex(TEnumAsByte<E_Sex> TargetSex, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_ChangeSex");

	struct UBPI_AI_C_AI_ChangeSex_Params {
		TEnumAsByte<E_Sex> TargetSex;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	UBPI_AI_C_AI_ChangeSex_Params params;
	params.TargetSex = TargetSex;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_SetMotherParameters
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::AI_SetMotherParameters() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_SetMotherParameters");

	struct UBPI_AI_C_AI_SetMotherParameters_Params {
	};
	UBPI_AI_C_AI_SetMotherParameters_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.AI_CheckIsWorkHours
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_AI_C::AI_CheckIsWorkHours(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.AI_CheckIsWorkHours");

	struct UBPI_AI_C_AI_CheckIsWorkHours_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	UBPI_AI_C_AI_CheckIsWorkHours_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BPI_AI.BPI_AI_C.NPCsStartTimer_Stamina_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_AI_C::NPCsStartTimer_Stamina_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AI.BPI_AI_C.NPCsStartTimer_Stamina_BPI");

	struct UBPI_AI_C_NPCsStartTimer_Stamina_BPI_Params {
	};
	UBPI_AI_C_NPCsStartTimer_Stamina_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}