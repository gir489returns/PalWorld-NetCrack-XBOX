#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_EatDeadBody

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AIAction_CanCombatBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C
// 0x0028 (0x0180 - 0x0158)
class UBP_AIAction_EatDeadBody_C final : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_EatDeadBody_C;          // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 TargetDeadBody;                                    // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TempDeltaTime;                                     // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EatTimer;                                          // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RecoverTimer;                                      // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_EatDeadBody(int32 EntryPoint);
	void RecoverHP();
	void SelfPawn(class AActor** Param_SelfPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_EatDeadBody_C">();
	}
	static class UBP_AIAction_EatDeadBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_EatDeadBody_C>();
	}
};
static_assert(alignof(UBP_AIAction_EatDeadBody_C) == 0x000008, "Wrong alignment on UBP_AIAction_EatDeadBody_C");
static_assert(sizeof(UBP_AIAction_EatDeadBody_C) == 0x000180, "Wrong size on UBP_AIAction_EatDeadBody_C");
static_assert(offsetof(UBP_AIAction_EatDeadBody_C, UberGraphFrame_BP_AIAction_EatDeadBody_C) == 0x000158, "Member 'UBP_AIAction_EatDeadBody_C::UberGraphFrame_BP_AIAction_EatDeadBody_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_EatDeadBody_C, TargetDeadBody) == 0x000160, "Member 'UBP_AIAction_EatDeadBody_C::TargetDeadBody' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_EatDeadBody_C, TempDeltaTime) == 0x000168, "Member 'UBP_AIAction_EatDeadBody_C::TempDeltaTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_EatDeadBody_C, EatTimer) == 0x000170, "Member 'UBP_AIAction_EatDeadBody_C::EatTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_EatDeadBody_C, RecoverTimer) == 0x000178, "Member 'UBP_AIAction_EatDeadBody_C::RecoverTimer' has a wrong offset!");

}

