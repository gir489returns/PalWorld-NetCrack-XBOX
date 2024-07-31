#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExplosionAttackBase

#include "Basic.hpp"

#include "BP_ExplosionAttackBase_classes.hpp"
#include "BP_ExplosionAttackBase_parameters.hpp"


namespace SDK
{

// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.Can Damage by Ray Check
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OtherHitCollision                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CanDamage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::Can_Damage_by_Ray_Check(class UPrimitiveComponent* OtherHitCollision, bool* CanDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "Can Damage by Ray Check");

	Params::BP_ExplosionAttackBase_C_Can_Damage_by_Ray_Check Parms{};

	Parms.OtherHitCollision = OtherHitCollision;

	UObject::ProcessEvent(Func, &Parms);

	if (CanDamage != nullptr)
		*CanDamage = Parms.CanDamage;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplosionAttackBase_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "DisableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.ExecuteUbergraph_BP_ExplosionAttackBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::ExecuteUbergraph_BP_ExplosionAttackBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "ExecuteUbergraph_BP_ExplosionAttackBase");

	Params::BP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.FindAttacker
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Attacker                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::FindAttacker(class AActor** Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "FindAttacker");

	Params::BP_ExplosionAttackBase_C_FindAttacker Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Attacker != nullptr)
		*Attacker = Parms.Attacker;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.Get Attackable Friend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsFriendAttack                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::Get_Attackable_Friend(bool* IsFriendAttack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "Get Attackable Friend");

	Params::BP_ExplosionAttackBase_C_Get_Attackable_Friend Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsFriendAttack != nullptr)
		*IsFriendAttack = Parms.IsFriendAttack;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetEffectType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalAdditionalEffectType                Effect                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::GetEffectType(EPalAdditionalEffectType* Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "GetEffectType");

	Params::BP_ExplosionAttackBase_C_GetEffectType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetEffectValue
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::GetEffectValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "GetEffectValue");

	Params::BP_ExplosionAttackBase_C_GetEffectValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalElementType                         Element                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::GetElement(EPalElementType* Element)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "GetElement");

	Params::BP_ExplosionAttackBase_C_GetElement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Element != nullptr)
		*Element = Parms.Element;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetWeaponAttackType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalAttackType                          AttackType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::GetWeaponAttackType(EPalAttackType* AttackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "GetWeaponAttackType");

	Params::BP_ExplosionAttackBase_C_GetWeaponAttackType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AttackType != nullptr)
		*AttackType = Parms.AttackType;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.Is Attack Able
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Attacker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::Is_Attack_Able(class AActor* Attacker, class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool* IsHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "Is Attack Able");

	Params::BP_ExplosionAttackBase_C_Is_Attack_Able Parms{};

	Parms.Attacker = Attacker;
	Parms.HitActor = HitActor;
	Parms.HitComponent = HitComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.OnHit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyHitComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherHitActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherHitComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           FoliageIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "OnHit");

	Params::BP_ExplosionAttackBase_C_OnHit Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitActor = OtherHitActor;
	Parms.OtherHitComponent = OtherHitComponent;
	Parms.FoliageIndex = std::move(FoliageIndex);
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitCount = HitCount;

	UObject::ProcessEvent(Func, &Parms);

	FoliageIndex = std::move(Parms.FoliageIndex);
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExplosionAttackBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetBlowPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewBlowPower                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::SetBlowPower(double NewBlowPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "SetBlowPower");

	Params::BP_ExplosionAttackBase_C_SetBlowPower Parms{};

	Parms.NewBlowPower = NewBlowPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  SnakeRate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::SetPower(int32 NewParam, double SnakeRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "SetPower");

	Params::BP_ExplosionAttackBase_C_SetPower Parms{};

	Parms.NewParam = NewParam;
	Parms.SnakeRate = SnakeRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::SetRadius(int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "SetRadius");

	Params::BP_ExplosionAttackBase_C_SetRadius Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetupHitFilter
// (BlueprintCallable, BlueprintEvent)

void ABP_ExplosionAttackBase_C::SetupHitFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "SetupHitFilter");

	UObject::ProcessEvent(Func, nullptr);
}

}

