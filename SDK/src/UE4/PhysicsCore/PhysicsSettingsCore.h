#pragma once
#include "Structs.h"
#include "DeveloperSettings/DeveloperSettings.h"
/////////////////////////////////////////////
// Class PhysicsCore.PhysicsSettingsCore
// Super: Class DeveloperSettings.DeveloperSettings
// Size: 224
// Size inherited: 56
/////////////////////////////////////////////
namespace UE4 {
class UPhysicsSettingsCore : public UDeveloperSettings {
public:
#pragma region Members
	//float	DefaultGravityZ;		//Offset: 56	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDefaultGravityZ() const;
	float* M_PtrGetDefaultGravityZ();
	void M_SetDefaultGravityZ(const float& value);

	//float	DefaultTerminalVelocity;		//Offset: 60	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDefaultTerminalVelocity() const;
	float* M_PtrGetDefaultTerminalVelocity();
	void M_SetDefaultTerminalVelocity(const float& value);

	//float	DefaultFluidFriction;		//Offset: 64	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetDefaultFluidFriction() const;
	float* M_PtrGetDefaultFluidFriction();
	void M_SetDefaultFluidFriction(const float& value);

	//int32_t	SimulateScratchMemorySize;		//Offset: 68	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetSimulateScratchMemorySize() const;
	int32_t* M_PtrGetSimulateScratchMemorySize();
	void M_SetSimulateScratchMemorySize(const int32_t& value);

	//int32_t	RagdollAggregateThreshold;		//Offset: 72	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetRagdollAggregateThreshold() const;
	int32_t* M_PtrGetRagdollAggregateThreshold();
	void M_SetRagdollAggregateThreshold(const int32_t& value);

	//float	TriangleMeshTriangleMinAreaThreshold;		//Offset: 76	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTriangleMeshTriangleMinAreaThreshold() const;
	float* M_PtrGetTriangleMeshTriangleMinAreaThreshold();
	void M_SetTriangleMeshTriangleMinAreaThreshold(const float& value);

	//bool	bEnableShapeSharing;		//Offset: 80	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbEnableShapeSharing() const;
	bool* M_PtrGetbEnableShapeSharing();
	void M_SetbEnableShapeSharing(const bool& value);

	//bool	bEnablePCM;		//Offset: 81	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbEnablePCM() const;
	bool* M_PtrGetbEnablePCM();
	void M_SetbEnablePCM(const bool& value);

	//bool	bEnableStabilization;		//Offset: 82	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbEnableStabilization() const;
	bool* M_PtrGetbEnableStabilization();
	void M_SetbEnableStabilization(const bool& value);

	//bool	bWarnMissingLocks;		//Offset: 83	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbWarnMissingLocks() const;
	bool* M_PtrGetbWarnMissingLocks();
	void M_SetbWarnMissingLocks(const bool& value);

	//bool	bEnable2DPhysics;		//Offset: 84	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbEnable2DPhysics() const;
	bool* M_PtrGetbEnable2DPhysics();
	void M_SetbEnable2DPhysics(const bool& value);

	//bool	bDefaultHasComplexCollision;		//Offset: 85	Size: 1	Flags: ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbDefaultHasComplexCollision() const;
	bool* M_PtrGetbDefaultHasComplexCollision();
	void M_SetbDefaultHasComplexCollision(const bool& value);

	//float	BounceThresholdVelocity;		//Offset: 88	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetBounceThresholdVelocity() const;
	float* M_PtrGetBounceThresholdVelocity();
	void M_SetBounceThresholdVelocity(const float& value);

	//TEnumAsByte<EFrictionCombineMode>	FrictionCombineMode;		//Offset: 92	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EFrictionCombineMode> M_GetFrictionCombineMode() const;
	TEnumAsByte<EFrictionCombineMode>* M_PtrGetFrictionCombineMode();
	void M_SetFrictionCombineMode(const TEnumAsByte<EFrictionCombineMode>& value);

	//TEnumAsByte<EFrictionCombineMode>	RestitutionCombineMode;		//Offset: 93	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EFrictionCombineMode> M_GetRestitutionCombineMode() const;
	TEnumAsByte<EFrictionCombineMode>* M_PtrGetRestitutionCombineMode();
	void M_SetRestitutionCombineMode(const TEnumAsByte<EFrictionCombineMode>& value);

	//float	MaxAngularVelocity;		//Offset: 96	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxAngularVelocity() const;
	float* M_PtrGetMaxAngularVelocity();
	void M_SetMaxAngularVelocity(const float& value);

	//float	MaxDepenetrationVelocity;		//Offset: 100	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxDepenetrationVelocity() const;
	float* M_PtrGetMaxDepenetrationVelocity();
	void M_SetMaxDepenetrationVelocity(const float& value);

	//float	ContactOffsetMultiplier;		//Offset: 104	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetContactOffsetMultiplier() const;
	float* M_PtrGetContactOffsetMultiplier();
	void M_SetContactOffsetMultiplier(const float& value);

	//float	MinContactOffset;		//Offset: 108	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinContactOffset() const;
	float* M_PtrGetMinContactOffset();
	void M_SetMinContactOffset(const float& value);

	//float	MaxContactOffset;		//Offset: 112	Size: 4	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxContactOffset() const;
	float* M_PtrGetMaxContactOffset();
	void M_SetMaxContactOffset(const float& value);

	//bool	bSimulateSkeletalMeshOnDedicatedServer;		//Offset: 116	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbSimulateSkeletalMeshOnDedicatedServer() const;
	bool* M_PtrGetbSimulateSkeletalMeshOnDedicatedServer();
	void M_SetbSimulateSkeletalMeshOnDedicatedServer(const bool& value);

	//TEnumAsByte<ECollisionTraceFlag>	DefaultShapeComplexity;		//Offset: 117	Size: 1	Flags: Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionTraceFlag> M_GetDefaultShapeComplexity() const;
	TEnumAsByte<ECollisionTraceFlag>* M_PtrGetDefaultShapeComplexity();
	void M_SetDefaultShapeComplexity(const TEnumAsByte<ECollisionTraceFlag>& value);

	//struct FChaosSolverConfiguration	SolverOptions;		//Offset: 120	Size: 104	Flags: Edit, Config, NoDestructor, NativeAccessSpecifierPublic
	struct FChaosSolverConfiguration M_GetSolverOptions() const;
	struct FChaosSolverConfiguration* M_PtrGetSolverOptions();
	void M_SetSolverOptions(const struct FChaosSolverConfiguration& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class PhysicsCore.PhysicsSettingsCore");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};