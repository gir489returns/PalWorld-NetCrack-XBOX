#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Invader_StandbyBaseCamp

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick");
static_assert(sizeof(BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SightCheckAndResponse_ChangeNextAction;   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D0F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp) == 0x000008, "Wrong alignment on BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp");
static_assert(sizeof(BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp) == 0x000018, "Wrong size on BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp, EntryPoint) == 0x000000, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp, CallFunc_SightCheckAndResponse_ChangeNextAction) == 0x000004, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp::CallFunc_SightCheckAndResponse_ChangeNextAction' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.Fun_Damage_AIResponse
// 0x0080 (0x0080 - 0x0000)
struct BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class APalCharacter*                          TempTarget;                                        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D10[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse) == 0x000008, "Wrong alignment on BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse");
static_assert(sizeof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse) == 0x000080, "Wrong size on BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse, DamageResult) == 0x000000, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse::DamageResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse, TempTarget) == 0x000050, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse::TempTarget' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse, K2Node_DynamicCast_AsPal_Character) == 0x000058, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse, CallFunc_GetController_ReturnValue) == 0x000068, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse, CallFunc_GetBattleManager_ReturnValue) == 0x000070, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse, CallFunc_K2_GetPawn_ReturnValue) == 0x000078, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");

// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.OnSquadMemberDeadEvent
// 0x0050 (0x0050 - 0x0000)
struct BP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent final
{
public:
	struct FPalDeadInfo                           DeadInbfo;                                         // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent) == 0x000008, "Wrong alignment on BP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent");
static_assert(sizeof(BP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent) == 0x000050, "Wrong size on BP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent, DeadInbfo) == 0x000000, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent::DeadInbfo' has a wrong offset!");

// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.SightCheckAndResponse
// 0x0048 (0x0048 - 0x0000)
struct BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse final
{
public:
	EPalAIResponseType                            Current;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OverrideIsDamage;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangeNextAction;                                  // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D11[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCheatManager*                       CallFunc_GetPalCheatManager_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDisableEnemyEyeSight_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D12[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_SightCheckAllPlayer_InSightPlayers;       // 0x0028(0x0010)(ReferenceParm)
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse) == 0x000008, "Wrong alignment on BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse");
static_assert(sizeof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse) == 0x000048, "Wrong size on BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, Current) == 0x000000, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::Current' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, OverrideIsDamage) == 0x000001, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::OverrideIsDamage' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, ChangeNextAction) == 0x000002, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::ChangeNextAction' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, CallFunc_GetPalCheatManager_ReturnValue) == 0x000010, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::CallFunc_GetPalCheatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, CallFunc_IsDisableEnemyEyeSight_ReturnValue) == 0x000020, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::CallFunc_IsDisableEnemyEyeSight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, CallFunc_SightCheckAllPlayer_InSightPlayers) == 0x000028, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::CallFunc_SightCheckAllPlayer_InSightPlayers' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000044, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.SoundEvent
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent final
{
public:
	struct FVector                                EmitLocation;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent) == 0x000008, "Wrong alignment on BP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent");
static_assert(sizeof(BP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent) == 0x000018, "Wrong size on BP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent");
static_assert(offsetof(BP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent, EmitLocation) == 0x000000, "Member 'BP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent::EmitLocation' has a wrong offset!");

}

