#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Leave_BackStep

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_Leave_BackStep.BP_AIAction_Leave_BackStep_C
// 0x0028 (0x0170 - 0x0148)
class UBP_AIAction_Leave_BackStep_C final : public UPalAIAction_LeaveBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0148(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          EndAble;                                           // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TurnAble;                                          // 0x0151(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C7[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        GoalLocationList;                                  // 0x0158(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          JumpFailure;                                       // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void AddGoalArray(double Right, double DistanceRate, const struct FVector& BackVector, const struct FVector& RightVector);
	void CheckReachable(const struct FVector& GoalPos, bool* Success, struct FVector* HitLocation);
	void ExecuteUbergraph_BP_AIAction_Leave_BackStep(int32 EntryPoint);
	void FindGoalLocation(struct FVector* GoalPos, bool* Success);
	void OnChildActionFinished(class UPawnAction* Action, EPawnActionResult WithResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Leave_BackStep_C">();
	}
	static class UBP_AIAction_Leave_BackStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Leave_BackStep_C>();
	}
};
static_assert(alignof(UBP_AIAction_Leave_BackStep_C) == 0x000008, "Wrong alignment on UBP_AIAction_Leave_BackStep_C");
static_assert(sizeof(UBP_AIAction_Leave_BackStep_C) == 0x000170, "Wrong size on UBP_AIAction_Leave_BackStep_C");
static_assert(offsetof(UBP_AIAction_Leave_BackStep_C, UberGraphFrame) == 0x000148, "Member 'UBP_AIAction_Leave_BackStep_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Leave_BackStep_C, EndAble) == 0x000150, "Member 'UBP_AIAction_Leave_BackStep_C::EndAble' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Leave_BackStep_C, TurnAble) == 0x000151, "Member 'UBP_AIAction_Leave_BackStep_C::TurnAble' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Leave_BackStep_C, GoalLocationList) == 0x000158, "Member 'UBP_AIAction_Leave_BackStep_C::GoalLocationList' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Leave_BackStep_C, JumpFailure) == 0x000168, "Member 'UBP_AIAction_Leave_BackStep_C::JumpFailure' has a wrong offset!");

}

