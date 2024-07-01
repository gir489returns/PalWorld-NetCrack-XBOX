#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PalBossBattleSequence_Combat

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.CheckCombatFinish
// 0x0090 (0x0090 - 0x0000)
struct PalBossBattleSequence_Combat_C_CheckCombatFinish final
{
public:
	class UPalBossBattleSequencer*                Sequencer;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetBossCharacter_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllPlayerDead_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetBossCharacter_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482B[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482C[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetBossCharacter_ReturnValue_2;           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482D[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Combat_C_CheckCombatFinish) == 0x000008, "Wrong alignment on PalBossBattleSequence_Combat_C_CheckCombatFinish");
static_assert(sizeof(PalBossBattleSequence_Combat_C_CheckCombatFinish) == 0x000090, "Wrong size on PalBossBattleSequence_Combat_C_CheckCombatFinish");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, Sequencer) == 0x000000, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::Sequencer' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_GetBossCharacter_ReturnValue) == 0x000028, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_GetBossCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_IsAllPlayerDead_ReturnValue) == 0x000038, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_IsAllPlayerDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_GetBossCharacter_ReturnValue_1) == 0x000040, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_GetBossCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000048, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000050, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, K2Node_CreateDelegate_OutputDelegate_2) == 0x000054, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_GetBossCharacter_ReturnValue_2) == 0x000068, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_GetBossCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000070, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000078, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_IsServer_ReturnValue) == 0x000079, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_GetOuterSequencer_ReturnValue) == 0x000080, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_CheckCombatFinish, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'PalBossBattleSequence_Combat_C_CheckCombatFinish::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.ExecuteUbergraph_PalBossBattleSequence_Combat
// 0x0098 (0x0098 - 0x0000)
struct PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue_1;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDeadInfo                           K2Node_CustomEvent_DeadInfo;                       // 0x0018(0x0050)(NoDestructor)
	class APalCharacter*                          CallFunc_GetBossCharacter_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_482F[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0084(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat) == 0x000008, "Wrong alignment on PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat");
static_assert(sizeof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat) == 0x000098, "Wrong size on PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, EntryPoint) == 0x000000, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::EntryPoint' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, CallFunc_GetOuterSequencer_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, CallFunc_GetOuterSequencer_ReturnValue_1) == 0x000010, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::CallFunc_GetOuterSequencer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, K2Node_CustomEvent_DeadInfo) == 0x000018, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::K2Node_CustomEvent_DeadInfo' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, CallFunc_GetBossCharacter_ReturnValue) == 0x000068, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::CallFunc_GetBossCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, CallFunc_IsServer_ReturnValue) == 0x000070, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, CallFunc_GetComponentByClass_ReturnValue) == 0x000078, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, K2Node_Event_DeltaTime) == 0x000080, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat, K2Node_CreateDelegate_OutputDelegate) == 0x000084, "Member 'PalBossBattleSequence_Combat_C_ExecuteUbergraph_PalBossBattleSequence_Combat::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.OnDeadBoss
// 0x0050 (0x0050 - 0x0000)
struct PalBossBattleSequence_Combat_C_OnDeadBoss final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(PalBossBattleSequence_Combat_C_OnDeadBoss) == 0x000008, "Wrong alignment on PalBossBattleSequence_Combat_C_OnDeadBoss");
static_assert(sizeof(PalBossBattleSequence_Combat_C_OnDeadBoss) == 0x000050, "Wrong size on PalBossBattleSequence_Combat_C_OnDeadBoss");
static_assert(offsetof(PalBossBattleSequence_Combat_C_OnDeadBoss, DeadInfo) == 0x000000, "Member 'PalBossBattleSequence_Combat_C_OnDeadBoss::DeadInfo' has a wrong offset!");

// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.SetTimerEnable
// 0x0010 (0x0010 - 0x0000)
struct PalBossBattleSequence_Combat_C_SetTimerEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4830[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleSequencer*                CallFunc_GetOuterSequencer_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Combat_C_SetTimerEnable) == 0x000008, "Wrong alignment on PalBossBattleSequence_Combat_C_SetTimerEnable");
static_assert(sizeof(PalBossBattleSequence_Combat_C_SetTimerEnable) == 0x000010, "Wrong size on PalBossBattleSequence_Combat_C_SetTimerEnable");
static_assert(offsetof(PalBossBattleSequence_Combat_C_SetTimerEnable, IsEnable) == 0x000000, "Member 'PalBossBattleSequence_Combat_C_SetTimerEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(PalBossBattleSequence_Combat_C_SetTimerEnable, CallFunc_GetOuterSequencer_ReturnValue) == 0x000008, "Member 'PalBossBattleSequence_Combat_C_SetTimerEnable::CallFunc_GetOuterSequencer_ReturnValue' has a wrong offset!");

// Function PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C.TickSequence
// 0x0004 (0x0004 - 0x0000)
struct PalBossBattleSequence_Combat_C_TickSequence final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PalBossBattleSequence_Combat_C_TickSequence) == 0x000004, "Wrong alignment on PalBossBattleSequence_Combat_C_TickSequence");
static_assert(sizeof(PalBossBattleSequence_Combat_C_TickSequence) == 0x000004, "Wrong size on PalBossBattleSequence_Combat_C_TickSequence");
static_assert(offsetof(PalBossBattleSequence_Combat_C_TickSequence, DeltaTime) == 0x000000, "Member 'PalBossBattleSequence_Combat_C_TickSequence::DeltaTime' has a wrong offset!");

}

