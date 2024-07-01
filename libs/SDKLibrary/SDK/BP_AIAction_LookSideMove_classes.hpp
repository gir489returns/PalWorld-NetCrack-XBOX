#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_LookSideMove

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C
// 0x0060 (0x0190 - 0x0130)
class UBP_AIAction_LookSideMove_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                SelfToTarget;                                      // 0x0138(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Rate;                                              // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Right;                                             // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRightMoving;                                     // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_393E[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentMoveGoal;                                   // 0x0168(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          SelfActor;                                         // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCheckWalkableSuccess;                            // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
	void CheckWalkable(bool IsRight, bool* Success, struct FVector* GoalPos);
	void ExecuteUbergraph_BP_AIAction_LookSideMove(int32 EntryPoint);
	void OnChildActionFinished(class UPawnAction* Action, EPawnActionResult WithResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_LookSideMove_C">();
	}
	static class UBP_AIAction_LookSideMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_LookSideMove_C>();
	}
};
static_assert(alignof(UBP_AIAction_LookSideMove_C) == 0x000008, "Wrong alignment on UBP_AIAction_LookSideMove_C");
static_assert(sizeof(UBP_AIAction_LookSideMove_C) == 0x000190, "Wrong size on UBP_AIAction_LookSideMove_C");
static_assert(offsetof(UBP_AIAction_LookSideMove_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_LookSideMove_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_LookSideMove_C, SelfToTarget) == 0x000138, "Member 'UBP_AIAction_LookSideMove_C::SelfToTarget' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_LookSideMove_C, Rate) == 0x000150, "Member 'UBP_AIAction_LookSideMove_C::Rate' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_LookSideMove_C, Right) == 0x000158, "Member 'UBP_AIAction_LookSideMove_C::Right' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_LookSideMove_C, IsRightMoving) == 0x000160, "Member 'UBP_AIAction_LookSideMove_C::IsRightMoving' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_LookSideMove_C, CurrentMoveGoal) == 0x000168, "Member 'UBP_AIAction_LookSideMove_C::CurrentMoveGoal' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_LookSideMove_C, SelfActor) == 0x000180, "Member 'UBP_AIAction_LookSideMove_C::SelfActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_LookSideMove_C, IsCheckWalkableSuccess) == 0x000188, "Member 'UBP_AIAction_LookSideMove_C::IsCheckWalkableSuccess' has a wrong offset!");

}

