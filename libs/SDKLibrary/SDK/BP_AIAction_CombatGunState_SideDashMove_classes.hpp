#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_CombatGunState_SideDashMove

#include "Basic.hpp"

#include "BP_AINPC_CombatState_Base_classes.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C
// 0x0060 (0x0098 - 0x0038)
class UBP_AIAction_CombatGunState_SideDashMove_C final : public UBP_AINPC_CombatState_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EPalCharacterMovementCustomMode               Sprint;                                            // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GoalPos;                                           // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Timer;                                             // 0x0060(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfPos;                                           // 0x0078(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PathFindSuccess;                                   // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove(int32 EntryPoint);
	void FindMoveGoal(struct FVector* Goal, bool* Success);
	void StateEnter();
	void StateExit();
	void StateTick(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_CombatGunState_SideDashMove_C">();
	}
	static class UBP_AIAction_CombatGunState_SideDashMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_CombatGunState_SideDashMove_C>();
	}
};
static_assert(alignof(UBP_AIAction_CombatGunState_SideDashMove_C) == 0x000008, "Wrong alignment on UBP_AIAction_CombatGunState_SideDashMove_C");
static_assert(sizeof(UBP_AIAction_CombatGunState_SideDashMove_C) == 0x000098, "Wrong size on UBP_AIAction_CombatGunState_SideDashMove_C");
static_assert(offsetof(UBP_AIAction_CombatGunState_SideDashMove_C, UberGraphFrame) == 0x000038, "Member 'UBP_AIAction_CombatGunState_SideDashMove_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatGunState_SideDashMove_C, Sprint) == 0x000040, "Member 'UBP_AIAction_CombatGunState_SideDashMove_C::Sprint' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatGunState_SideDashMove_C, GoalPos) == 0x000048, "Member 'UBP_AIAction_CombatGunState_SideDashMove_C::GoalPos' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatGunState_SideDashMove_C, Timer) == 0x000060, "Member 'UBP_AIAction_CombatGunState_SideDashMove_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatGunState_SideDashMove_C, SelfPos) == 0x000078, "Member 'UBP_AIAction_CombatGunState_SideDashMove_C::SelfPos' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CombatGunState_SideDashMove_C, PathFindSuccess) == 0x000090, "Member 'UBP_AIAction_CombatGunState_SideDashMove_C::PathFindSuccess' has a wrong offset!");

}

