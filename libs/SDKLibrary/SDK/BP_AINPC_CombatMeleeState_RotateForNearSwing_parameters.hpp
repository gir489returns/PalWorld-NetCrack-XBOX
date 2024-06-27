#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatMeleeState_RotateForNearSwing

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AINPC_CombatMeleeState_RotateForNearSwing.BP_AINPC_CombatMeleeState_RotateForNearSwing_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing
// 0x0020 (0x0020 - 0x0000)
struct BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetTargetActor_TargetActor;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B9[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing) == 0x000008, "Wrong alignment on BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing");
static_assert(sizeof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing) == 0x000020, "Wrong size on BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing");
static_assert(offsetof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing, EntryPoint) == 0x000000, "Member 'BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing, CallFunc_GetTargetActor_TargetActor) == 0x000008, "Member 'BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing, K2Node_Event_DeltaTime) == 0x000010, "Member 'BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing, CallFunc_GetSelfActor_SelfActor) == 0x000018, "Member 'BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");

// Function BP_AINPC_CombatMeleeState_RotateForNearSwing.BP_AINPC_CombatMeleeState_RotateForNearSwing_C.StateTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick) == 0x000004, "Wrong alignment on BP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick");
static_assert(sizeof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick) == 0x000004, "Wrong size on BP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick");
static_assert(offsetof(BP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick, DeltaTime) == 0x000000, "Member 'BP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick::DeltaTime' has a wrong offset!");

}

