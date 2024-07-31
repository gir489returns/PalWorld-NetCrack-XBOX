#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_WildPalDrinkWater

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ExecuteUbergraph_BP_AIAction_WildPalDrinkWater
// 0x00C0 (0x00C0 - 0x0000)
struct BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameter_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_1;         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalWildPalDrinkWaterSpotProvider*      CallFunc_GetDrinkWaterSpotProvider_ReturnValue;    // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLeader_Leader;                          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetSelfPalBlackBoard_PalBlackBoard;       // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1;     // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater) == 0x000008, "Wrong alignment on BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater");
static_assert(sizeof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater) == 0x0000C0, "Wrong size on BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, EntryPoint) == 0x000000, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_CustomEvent_MovementResult_1) == 0x000004, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_CustomEvent_MovementResult) == 0x000018, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, Temp_byte_Variable) == 0x00002C, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_Event_ControlledPawn_4) == 0x000030, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_Event_ControlledPawn_3) == 0x000038, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_Event_ControlledPawn_2) == 0x000040, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_Event_ControlledPawn_1) == 0x000048, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_Event_WithResult) == 0x000050, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, K2Node_Event_ControlledPawn) == 0x000058, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_GetCharacterParameter_ReturnValue) == 0x000060, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_GetCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_GetCharacter_ReturnValue) == 0x000068, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000070, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_GetActionComponent_ReturnValue) == 0x000080, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_PlayActionByType_ReturnValue) == 0x000088, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_GetActionComponent_ReturnValue_1) == 0x000090, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_GetActionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_GetNPCManager_ReturnValue) == 0x000098, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_GetNPCManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_GetDrinkWaterSpotProvider_ReturnValue) == 0x0000A0, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_GetDrinkWaterSpotProvider_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_IsLeader_Leader) == 0x0000A8, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_IsLeader_Leader' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_GetSelfPalBlackBoard_PalBlackBoard) == 0x0000B0, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_GetSelfPalBlackBoard_PalBlackBoard' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater, CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1) == 0x0000B8, "Member 'BP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater::CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1' has a wrong offset!");

// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_WildPalDrinkWater_C_OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildPalDrinkWater_C_OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56) == 0x000001, "Wrong alignment on BP_AIAction_WildPalDrinkWater_C_OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56");
static_assert(sizeof(BP_AIAction_WildPalDrinkWater_C_OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56) == 0x000001, "Wrong size on BP_AIAction_WildPalDrinkWater_C_OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56, MovementResult) == 0x000000, "Member 'BP_AIAction_WildPalDrinkWater_C_OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56::MovementResult' has a wrong offset!");

// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_WildPalDrinkWater_C_OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildPalDrinkWater_C_OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56) == 0x000001, "Wrong alignment on BP_AIAction_WildPalDrinkWater_C_OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56");
static_assert(sizeof(BP_AIAction_WildPalDrinkWater_C_OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56) == 0x000001, "Wrong size on BP_AIAction_WildPalDrinkWater_C_OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56, MovementResult) == 0x000000, "Member 'BP_AIAction_WildPalDrinkWater_C_OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56::MovementResult' has a wrong offset!");

// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WildPalDrinkWater_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildPalDrinkWater_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_WildPalDrinkWater_C_ActionAbort");
static_assert(sizeof(BP_AIAction_WildPalDrinkWater_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_WildPalDrinkWater_C_ActionAbort");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildPalDrinkWater_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_WildPalDrinkWater_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildPalDrinkWater_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_WildPalDrinkWater_C_ActionFinished");
static_assert(sizeof(BP_AIAction_WildPalDrinkWater_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_WildPalDrinkWater_C_ActionFinished");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildPalDrinkWater_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_WildPalDrinkWater_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WildPalDrinkWater_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildPalDrinkWater_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_WildPalDrinkWater_C_ActionPause");
static_assert(sizeof(BP_AIAction_WildPalDrinkWater_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_WildPalDrinkWater_C_ActionPause");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildPalDrinkWater_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WildPalDrinkWater_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildPalDrinkWater_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_WildPalDrinkWater_C_ActionResume");
static_assert(sizeof(BP_AIAction_WildPalDrinkWater_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_WildPalDrinkWater_C_ActionResume");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildPalDrinkWater_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_WildPalDrinkWater_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_WildPalDrinkWater_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_WildPalDrinkWater_C_ActionStart");
static_assert(sizeof(BP_AIAction_WildPalDrinkWater_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_WildPalDrinkWater_C_ActionStart");
static_assert(offsetof(BP_AIAction_WildPalDrinkWater_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_WildPalDrinkWater_C_ActionStart::ControlledPawn' has a wrong offset!");

}

