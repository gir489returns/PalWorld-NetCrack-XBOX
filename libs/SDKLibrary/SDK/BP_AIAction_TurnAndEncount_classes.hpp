#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_TurnAndEncount

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C
// 0x0050 (0x0180 - 0x0130)
class UBP_AIAction_TurnAndEncount_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 TargetAct;                                         // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Turning;                                           // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Propagated;                                        // 0x0141(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42C3[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnAction_BlueprintBase*              TempAction;                                        // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCanceled;                                        // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDelayStop;                                       // 0x0151(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42C4[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TurnTimer;                                         // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_TurnEndTime;                                 // 0x0160(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         TurnAction;                                        // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TempDeltaTime;                                     // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UPalAIActionBase>           CombatAIActionClass;                               // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_TurnAndEncount(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_TurnAndEncount_C">();
	}
	static class UBP_AIAction_TurnAndEncount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_TurnAndEncount_C>();
	}
};
static_assert(alignof(UBP_AIAction_TurnAndEncount_C) == 0x000008, "Wrong alignment on UBP_AIAction_TurnAndEncount_C");
static_assert(sizeof(UBP_AIAction_TurnAndEncount_C) == 0x000180, "Wrong size on UBP_AIAction_TurnAndEncount_C");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_TurnAndEncount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, TargetAct) == 0x000138, "Member 'UBP_AIAction_TurnAndEncount_C::TargetAct' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, Turning) == 0x000140, "Member 'UBP_AIAction_TurnAndEncount_C::Turning' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, Propagated) == 0x000141, "Member 'UBP_AIAction_TurnAndEncount_C::Propagated' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, TempAction) == 0x000148, "Member 'UBP_AIAction_TurnAndEncount_C::TempAction' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, IsCanceled) == 0x000150, "Member 'UBP_AIAction_TurnAndEncount_C::IsCanceled' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, IsDelayStop) == 0x000151, "Member 'UBP_AIAction_TurnAndEncount_C::IsDelayStop' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, TurnTimer) == 0x000158, "Member 'UBP_AIAction_TurnAndEncount_C::TurnTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, Const_TurnEndTime) == 0x000160, "Member 'UBP_AIAction_TurnAndEncount_C::Const_TurnEndTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, TurnAction) == 0x000168, "Member 'UBP_AIAction_TurnAndEncount_C::TurnAction' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, TempDeltaTime) == 0x000170, "Member 'UBP_AIAction_TurnAndEncount_C::TempDeltaTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_TurnAndEncount_C, CombatAIActionClass) == 0x000178, "Member 'UBP_AIAction_TurnAndEncount_C::CombatAIActionClass' has a wrong offset!");

}

