#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AINPC_CombatState_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.AttackAblePlayerCamera
// 0x0020 (0x0020 - 0x0000)
struct BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera final
{
public:
	bool                                          AttackAble;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4607[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetTargetActor_TargetActor;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera) == 0x000008, "Wrong alignment on BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera");
static_assert(sizeof(BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera) == 0x000020, "Wrong size on BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera, AttackAble) == 0x000000, "Member 'BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera::AttackAble' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera, CallFunc_GetSelfActor_SelfActor) == 0x000008, "Member 'BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera, CallFunc_GetTargetActor_TargetActor) == 0x000010, "Member 'BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera, CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue) == 0x000018, "Member 'BP_AINPC_CombatState_Base_C_AttackAblePlayerCamera::CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue' has a wrong offset!");

// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetCombatAIActionRef
// 0x0020 (0x0020 - 0x0000)
struct BP_AINPC_CombatState_Base_C_GetCombatAIActionRef final
{
public:
	class UBP_AIAction_NPC_CombatBase_C*          BPAIActionNPCCombat;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base;  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatState_Base_C_GetCombatAIActionRef) == 0x000008, "Wrong alignment on BP_AINPC_CombatState_Base_C_GetCombatAIActionRef");
static_assert(sizeof(BP_AINPC_CombatState_Base_C_GetCombatAIActionRef) == 0x000020, "Wrong size on BP_AINPC_CombatState_Base_C_GetCombatAIActionRef");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetCombatAIActionRef, BPAIActionNPCCombat) == 0x000000, "Member 'BP_AINPC_CombatState_Base_C_GetCombatAIActionRef::BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetCombatAIActionRef, CallFunc_GetOuterObject_ReturnValue) == 0x000008, "Member 'BP_AINPC_CombatState_Base_C_GetCombatAIActionRef::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetCombatAIActionRef, K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base) == 0x000010, "Member 'BP_AINPC_CombatState_Base_C_GetCombatAIActionRef::K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetCombatAIActionRef, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AINPC_CombatState_Base_C_GetCombatAIActionRef::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetControllerRef
// 0x0018 (0x0018 - 0x0000)
struct BP_AINPC_CombatState_Base_C_GetControllerRef final
{
public:
	class ABP_NPCAIController_C*                  NPCAICon;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatState_Base_C_GetControllerRef) == 0x000008, "Wrong alignment on BP_AINPC_CombatState_Base_C_GetControllerRef");
static_assert(sizeof(BP_AINPC_CombatState_Base_C_GetControllerRef) == 0x000018, "Wrong size on BP_AINPC_CombatState_Base_C_GetControllerRef");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetControllerRef, NPCAICon) == 0x000000, "Member 'BP_AINPC_CombatState_Base_C_GetControllerRef::NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetControllerRef, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x000008, "Member 'BP_AINPC_CombatState_Base_C_GetControllerRef::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetControllerRef, CallFunc_GetControllerRef_NPCAICon) == 0x000010, "Member 'BP_AINPC_CombatState_Base_C_GetControllerRef::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");

// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetSelfActor
// 0x0010 (0x0010 - 0x0000)
struct BP_AINPC_CombatState_Base_C_GetSelfActor final
{
public:
	class APalCharacter*                          SelfActor;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatState_Base_C_GetSelfActor) == 0x000008, "Wrong alignment on BP_AINPC_CombatState_Base_C_GetSelfActor");
static_assert(sizeof(BP_AINPC_CombatState_Base_C_GetSelfActor) == 0x000010, "Wrong size on BP_AINPC_CombatState_Base_C_GetSelfActor");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetSelfActor, SelfActor) == 0x000000, "Member 'BP_AINPC_CombatState_Base_C_GetSelfActor::SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetSelfActor, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x000008, "Member 'BP_AINPC_CombatState_Base_C_GetSelfActor::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");

// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetShooterComponent
// 0x0018 (0x0018 - 0x0000)
struct BP_AINPC_CombatState_Base_C_GetShooterComponent final
{
public:
	class UPalShooterComponent*                   ShooterComp;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatState_Base_C_GetShooterComponent) == 0x000008, "Wrong alignment on BP_AINPC_CombatState_Base_C_GetShooterComponent");
static_assert(sizeof(BP_AINPC_CombatState_Base_C_GetShooterComponent) == 0x000018, "Wrong size on BP_AINPC_CombatState_Base_C_GetShooterComponent");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetShooterComponent, ShooterComp) == 0x000000, "Member 'BP_AINPC_CombatState_Base_C_GetShooterComponent::ShooterComp' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetShooterComponent, CallFunc_GetSelfActor_SelfActor) == 0x000008, "Member 'BP_AINPC_CombatState_Base_C_GetShooterComponent::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetShooterComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_AINPC_CombatState_Base_C_GetShooterComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetTargetActor
// 0x0010 (0x0010 - 0x0000)
struct BP_AINPC_CombatState_Base_C_GetTargetActor final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatState_Base_C_GetTargetActor) == 0x000008, "Wrong alignment on BP_AINPC_CombatState_Base_C_GetTargetActor");
static_assert(sizeof(BP_AINPC_CombatState_Base_C_GetTargetActor) == 0x000010, "Wrong size on BP_AINPC_CombatState_Base_C_GetTargetActor");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetTargetActor, TargetActor) == 0x000000, "Member 'BP_AINPC_CombatState_Base_C_GetTargetActor::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_GetTargetActor, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x000008, "Member 'BP_AINPC_CombatState_Base_C_GetTargetActor::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");

// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.IsEndSelfState
// 0x0001 (0x0001 - 0x0000)
struct BP_AINPC_CombatState_Base_C_IsEndSelfState final
{
public:
	bool                                          IsEnd;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatState_Base_C_IsEndSelfState) == 0x000001, "Wrong alignment on BP_AINPC_CombatState_Base_C_IsEndSelfState");
static_assert(sizeof(BP_AINPC_CombatState_Base_C_IsEndSelfState) == 0x000001, "Wrong size on BP_AINPC_CombatState_Base_C_IsEndSelfState");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_IsEndSelfState, IsEnd) == 0x000000, "Member 'BP_AINPC_CombatState_Base_C_IsEndSelfState::IsEnd' has a wrong offset!");

// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.ShootAbleSlefForwardDot
// 0x0040 (0x0040 - 0x0000)
struct BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot final
{
public:
	bool                                          ShootAble;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4608[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetTargetActor_TargetActor;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InFanShapAimTarget_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4609[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor_1;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_460A[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetTargetActor_TargetActor_1;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot) == 0x000008, "Wrong alignment on BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot");
static_assert(sizeof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot) == 0x000040, "Wrong size on BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot, ShootAble) == 0x000000, "Member 'BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot::ShootAble' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot, CallFunc_GetSelfActor_SelfActor) == 0x000008, "Member 'BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot, CallFunc_GetTargetActor_TargetActor) == 0x000010, "Member 'BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot, CallFunc_InFanShapAimTarget_ReturnValue) == 0x000018, "Member 'BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot::CallFunc_InFanShapAimTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot, CallFunc_GetSelfActor_SelfActor_1) == 0x000020, "Member 'BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot::CallFunc_GetSelfActor_SelfActor_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot, CallFunc_GetTargetActor_TargetActor_1) == 0x000030, "Member 'BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot::CallFunc_GetTargetActor_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

