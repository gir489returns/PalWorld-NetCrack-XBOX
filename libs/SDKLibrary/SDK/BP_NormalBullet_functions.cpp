#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NormalBullet

#include "Basic.hpp"

#include "BP_NormalBullet_classes.hpp"
#include "BP_NormalBullet_parameters.hpp"


namespace SDK
{

// Function BP_NormalBullet.BP_NormalBullet_C.ExecuteUbergraph_BP_NormalBullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalBullet_C::ExecuteUbergraph_BP_NormalBullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NormalBullet_C", "ExecuteUbergraph_BP_NormalBullet");

	Params::BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NormalBullet.BP_NormalBullet_C.GetHitEffect
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*                   NiagaraEffect                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalBullet_C::GetHitEffect(class UNiagaraSystem** NiagaraEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NormalBullet_C", "GetHitEffect");

	Params::BP_NormalBullet_C_GetHitEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraEffect != nullptr)
		*NiagaraEffect = Parms.NiagaraEffect;
}


// Function BP_NormalBullet.BP_NormalBullet_C.OnDestroy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_NormalBullet_C::OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NormalBullet_C", "OnDestroy");

	Params::BP_NormalBullet_C_OnDestroy Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherCharacter = OtherCharacter;
	Parms.OtherComp = OtherComp;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NormalBullet.BP_NormalBullet_C.SpawnHitEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ImpactPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpactNormal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalBullet_C::SpawnHitEffects(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NormalBullet_C", "SpawnHitEffects");

	Params::BP_NormalBullet_C_SpawnHitEffects Parms{};

	Parms.ImpactPoint = std::move(ImpactPoint);
	Parms.ImpactNormal = std::move(ImpactNormal);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NormalBullet.BP_NormalBullet_C.SpawnHitEffectsInStun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ImpactPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalBullet_C::SpawnHitEffectsInStun(const struct FVector& ImpactPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NormalBullet_C", "SpawnHitEffectsInStun");

	Params::BP_NormalBullet_C_SpawnHitEffectsInStun Parms{};

	Parms.ImpactPoint = std::move(ImpactPoint);

	UObject::ProcessEvent(Func, &Parms);
}

}

