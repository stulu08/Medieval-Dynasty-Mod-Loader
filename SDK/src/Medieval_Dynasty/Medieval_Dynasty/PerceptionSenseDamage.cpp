#include "../SDK.h"
#include "PerceptionSenseDamage.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.PerceptionSenseDamage.OnTakeAnyDamage
// Flags: Final, Native, Protected
// Params:
// Name: DamagedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Damage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InstigatedBy	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UPerceptionSenseDamage::OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.PerceptionSenseDamage.OnTakeAnyDamage");

	struct UPerceptionSenseDamage_OnTakeAnyDamage_Params {
		class AActor* DamagedActor;			//Offset: 0 | ElementSize: 8
		float Damage;			//Offset: 8 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 16 | ElementSize: 8
		class AController* InstigatedBy;			//Offset: 24 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 32 | ElementSize: 8
	};
	UPerceptionSenseDamage_OnTakeAnyDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}