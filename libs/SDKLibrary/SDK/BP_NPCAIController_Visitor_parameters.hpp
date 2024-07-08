#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAIController_Visitor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.BindArriveEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_Visitor_C_BindArriveEvent final
{
public:
	class UBP_AIAction_Visitor_TravelToBaseCamp_C* Action;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_Visitor_C_BindArriveEvent) == 0x000008, "Wrong alignment on BP_NPCAIController_Visitor_C_BindArriveEvent");
static_assert(sizeof(BP_NPCAIController_Visitor_C_BindArriveEvent) == 0x000008, "Wrong size on BP_NPCAIController_Visitor_C_BindArriveEvent");
static_assert(offsetof(BP_NPCAIController_Visitor_C_BindArriveEvent, Action) == 0x000000, "Member 'BP_NPCAIController_Visitor_C_BindArriveEvent::Action' has a wrong offset!");

// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.BindWaitFinishEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_Visitor_C_BindWaitFinishEvent final
{
public:
	class UBP_AIAction_Visitor_WaitInBaseCamp_C*  Action;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_Visitor_C_BindWaitFinishEvent) == 0x000008, "Wrong alignment on BP_NPCAIController_Visitor_C_BindWaitFinishEvent");
static_assert(sizeof(BP_NPCAIController_Visitor_C_BindWaitFinishEvent) == 0x000008, "Wrong size on BP_NPCAIController_Visitor_C_BindWaitFinishEvent");
static_assert(offsetof(BP_NPCAIController_Visitor_C_BindWaitFinishEvent, Action) == 0x000000, "Member 'BP_NPCAIController_Visitor_C_BindWaitFinishEvent::Action' has a wrong offset!");

// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.ExecuteUbergraph_BP_NPCAIController_Visitor
// 0x0050 (0x0050 - 0x0000)
struct BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_Visitor_TravelToBaseCamp_C* K2Node_CustomEvent_action_1;                       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_Visitor_WaitInBaseCamp_C*  K2Node_CustomEvent_action;                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor) == 0x000008, "Wrong alignment on BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor");
static_assert(sizeof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor) == 0x000050, "Wrong size on BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor");
static_assert(offsetof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor, EntryPoint) == 0x000000, "Member 'BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor, K2Node_CustomEvent_action_1) == 0x000028, "Member 'BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor::K2Node_CustomEvent_action_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor, K2Node_CustomEvent_action) == 0x000030, "Member 'BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor::K2Node_CustomEvent_action' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.FindTargetPlayer
// 0x00A8 (0x00A8 - 0x0000)
struct BP_NPCAIController_Visitor_C_FindTargetPlayer final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        MinLength;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers;        // 0x0030(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeSquared_ReturnValue;                 // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_Visitor_C_FindTargetPlayer) == 0x000008, "Wrong alignment on BP_NPCAIController_Visitor_C_FindTargetPlayer");
static_assert(sizeof(BP_NPCAIController_Visitor_C_FindTargetPlayer) == 0x0000A8, "Wrong size on BP_NPCAIController_Visitor_C_FindTargetPlayer");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, TargetActor) == 0x000000, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, MinLength) == 0x000008, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::MinLength' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, Target) == 0x000010, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::Target' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_Not_PreBool_ReturnValue) == 0x000025, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_K2_GetPawn_ReturnValue) == 0x000028, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_GetAllPlayerCharacters_OutPlayers) == 0x000030, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_GetAllPlayerCharacters_OutPlayers' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000068, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000080, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_VSizeSquared_ReturnValue) == 0x000098, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_FindTargetPlayer, CallFunc_BooleanOR_ReturnValue) == 0x0000A1, "Member 'BP_NPCAIController_Visitor_C_FindTargetPlayer::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.StartDefaultAIAction
// 0x0078 (0x0078 - 0x0000)
struct BP_NPCAIController_Visitor_C_StartDefaultAIAction final
{
public:
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0000(0x0050)(NoDestructor)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_Visitor_TravelToBaseCamp_C* K2Node_DynamicCast_AsBP_AIAction_Visitor_Travel_to_Base_Camp; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_Visitor_C_StartDefaultAIAction) == 0x000008, "Wrong alignment on BP_NPCAIController_Visitor_C_StartDefaultAIAction");
static_assert(sizeof(BP_NPCAIController_Visitor_C_StartDefaultAIAction) == 0x000078, "Wrong size on BP_NPCAIController_Visitor_C_StartDefaultAIAction");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartDefaultAIAction, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000000, "Member 'BP_NPCAIController_Visitor_C_StartDefaultAIAction::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartDefaultAIAction, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000050, "Member 'BP_NPCAIController_Visitor_C_StartDefaultAIAction::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartDefaultAIAction, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_NPCAIController_Visitor_C_StartDefaultAIAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartDefaultAIAction, CallFunc_SetActionClassParameter_ReturnValue) == 0x000060, "Member 'BP_NPCAIController_Visitor_C_StartDefaultAIAction::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartDefaultAIAction, K2Node_DynamicCast_AsBP_AIAction_Visitor_Travel_to_Base_Camp) == 0x000068, "Member 'BP_NPCAIController_Visitor_C_StartDefaultAIAction::K2Node_DynamicCast_AsBP_AIAction_Visitor_Travel_to_Base_Camp' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartDefaultAIAction, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BP_NPCAIController_Visitor_C_StartDefaultAIAction::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.StartRaid
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCAIController_Visitor_C_StartRaid final
{
public:
	class AActor*                                 CallFunc_FindTargetPlayer_TargetActor;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_Visitor_C_StartRaid) == 0x000008, "Wrong alignment on BP_NPCAIController_Visitor_C_StartRaid");
static_assert(sizeof(BP_NPCAIController_Visitor_C_StartRaid) == 0x000008, "Wrong size on BP_NPCAIController_Visitor_C_StartRaid");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartRaid, CallFunc_FindTargetPlayer_TargetActor) == 0x000000, "Member 'BP_NPCAIController_Visitor_C_StartRaid::CallFunc_FindTargetPlayer_TargetActor' has a wrong offset!");

// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.StartReturnToSpawnedPointAction
// 0x0070 (0x0070 - 0x0000)
struct BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction final
{
public:
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetMyBB_PalBrackboard;                    // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0018(0x0050)(NoDestructor)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction) == 0x000008, "Wrong alignment on BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction");
static_assert(sizeof(BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction) == 0x000070, "Wrong size on BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction, CallFunc_GetMyBB_PalBrackboard) == 0x000000, "Member 'BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction::CallFunc_GetMyBB_PalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000008, "Member 'BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000018, "Member 'BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction, CallFunc_SetActionClassParameter_ReturnValue) == 0x000068, "Member 'BP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.StartWaitAction
// 0x0070 (0x0070 - 0x0000)
struct BP_NPCAIController_Visitor_C_StartWaitAction final
{
public:
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0008(0x0050)(NoDestructor)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_Visitor_WaitInBaseCamp_C*  K2Node_DynamicCast_AsBP_AIAction_Visitor_Wait_in_Base_Camp; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCAIController_Visitor_C_StartWaitAction) == 0x000008, "Wrong alignment on BP_NPCAIController_Visitor_C_StartWaitAction");
static_assert(sizeof(BP_NPCAIController_Visitor_C_StartWaitAction) == 0x000070, "Wrong size on BP_NPCAIController_Visitor_C_StartWaitAction");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartWaitAction, CallFunc_GetComponentByClass_ReturnValue) == 0x000000, "Member 'BP_NPCAIController_Visitor_C_StartWaitAction::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartWaitAction, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000008, "Member 'BP_NPCAIController_Visitor_C_StartWaitAction::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartWaitAction, CallFunc_SetActionClassParameter_ReturnValue) == 0x000058, "Member 'BP_NPCAIController_Visitor_C_StartWaitAction::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartWaitAction, K2Node_DynamicCast_AsBP_AIAction_Visitor_Wait_in_Base_Camp) == 0x000060, "Member 'BP_NPCAIController_Visitor_C_StartWaitAction::K2Node_DynamicCast_AsBP_AIAction_Visitor_Wait_in_Base_Camp' has a wrong offset!");
static_assert(offsetof(BP_NPCAIController_Visitor_C_StartWaitAction, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_NPCAIController_Visitor_C_StartWaitAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

