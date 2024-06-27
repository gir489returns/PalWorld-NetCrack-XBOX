#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_TurnAndEncount

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_TurnAndEncount_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_TurnAndEncount_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_TurnAndEncount_C_ActionAbort");
static_assert(sizeof(BP_AIAction_TurnAndEncount_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_TurnAndEncount_C_ActionAbort");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_TurnAndEncount_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_TurnAndEncount_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_TurnAndEncount_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_TurnAndEncount_C_ActionFinished");
static_assert(sizeof(BP_AIAction_TurnAndEncount_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_TurnAndEncount_C_ActionFinished");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_TurnAndEncount_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_TurnAndEncount_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_TurnAndEncount_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_TurnAndEncount_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_TurnAndEncount_C_ActionPause");
static_assert(sizeof(BP_AIAction_TurnAndEncount_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_TurnAndEncount_C_ActionPause");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_TurnAndEncount_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_TurnAndEncount_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_TurnAndEncount_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_TurnAndEncount_C_ActionResume");
static_assert(sizeof(BP_AIAction_TurnAndEncount_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_TurnAndEncount_C_ActionResume");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_TurnAndEncount_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_TurnAndEncount_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_TurnAndEncount_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_TurnAndEncount_C_ActionStart");
static_assert(sizeof(BP_AIAction_TurnAndEncount_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_TurnAndEncount_C_ActionStart");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_TurnAndEncount_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_TurnAndEncount_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_TurnAndEncount_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_TurnAndEncount_C_ActionTick");
static_assert(sizeof(BP_AIAction_TurnAndEncount_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_TurnAndEncount_C_ActionTick");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_TurnAndEncount_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_TurnAndEncount_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ExecuteUbergraph_BP_AIAction_TurnAndEncount
// 0x03A0 (0x03A0 - 0x0000)
struct BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42DE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SetAIActionClassParameter_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42DF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InFanShap_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E0[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E2[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_4;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*            CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_5;              // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsPal_ReturnValue;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E3[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E4[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSquad*                              CallFunc_GetSquad_ReturnValue;                     // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E5[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E6[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0120(0x00E0)()
	class APawn*                                  K2Node_Event_ControlledPawn_5;                     // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E7[0x5];                                     // 0x020B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_6;              // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_5;                 // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E8[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0278(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter_1;        // 0x0280(0x00E0)()
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_1;         // 0x0360(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0368(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByTypeParameter_ReturnValue;    // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_2;         // 0x0378(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E9[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_3;         // 0x0388(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_TempDeltaTime_ImplicitCast;     // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount) == 0x000010, "Wrong alignment on BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount");
static_assert(sizeof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount) == 0x0003A0, "Wrong size on BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, EntryPoint) == 0x000000, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_SetAIActionClassParameter_ReturnValue) == 0x000008, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_SetAIActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_Event_ControlledPawn_4) == 0x000010, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetController_ReturnValue) == 0x000028, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_InFanShap_ReturnValue) == 0x000038, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_InFanShap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetController_ReturnValue_1) == 0x000040, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetController_ReturnValue_2) == 0x000048, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000058, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetController_ReturnValue_3) == 0x000060, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_K2_GetPawn_ReturnValue_2) == 0x000070, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetController_ReturnValue_4) == 0x000078, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000080, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_K2_GetPawn_ReturnValue_3) == 0x000088, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_K2_GetPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000090, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000098, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetCharacterID_ReturnValue) == 0x0000A0, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetController_ReturnValue_5) == 0x0000A8, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetIsPal_ReturnValue) == 0x0000B0, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetIsPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_K2_GetPawn_ReturnValue_4) == 0x0000B8, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_K2_GetPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_DynamicCast_AsPal_AIController) == 0x0000C0, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_IsValid_ReturnValue_3) == 0x0000C9, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetSquad_ReturnValue) == 0x0000D0, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetSquad_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_IsValid_ReturnValue_4) == 0x0000D8, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_Event_ControlledPawn_3) == 0x0000E0, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_Event_ControlledPawn_2) == 0x0000E8, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_Event_WithResult) == 0x0000F0, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_Event_ControlledPawn_1) == 0x0000F8, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_Event_ControlledPawn) == 0x000100, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_BreakVector_X) == 0x000108, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_BreakVector_Y) == 0x000110, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_BreakVector_Z) == 0x000118, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_MakeStruct_ActionDynamicParameter) == 0x000120, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_Event_ControlledPawn_5) == 0x000200, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_Event_ControlledPawn_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000208, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_IsValid_ReturnValue_5) == 0x000209, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_BooleanOR_ReturnValue) == 0x00020A, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000210, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000218, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetController_ReturnValue_6) == 0x000230, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_K2_GetPawn_ReturnValue_5) == 0x000238, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_K2_GetPawn_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_IsValid_ReturnValue_6) == 0x000240, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000248, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000260, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetActionComponent_ReturnValue) == 0x000278, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_MakeStruct_ActionDynamicParameter_1) == 0x000280, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_MakeStruct_ActionDynamicParameter_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetActionComponent_ReturnValue_1) == 0x000360, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetActionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_PlayActionParameter_ReturnValue) == 0x000368, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_PlayActionByTypeParameter_ReturnValue) == 0x000370, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_PlayActionByTypeParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetActionComponent_ReturnValue_2) == 0x000378, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetActionComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_IsValid_ReturnValue_7) == 0x000380, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_GetActionComponent_ReturnValue_3) == 0x000388, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_GetActionComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, K2Node_VariableSet_TempDeltaTime_ImplicitCast) == 0x000390, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::K2Node_VariableSet_TempDeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount, CallFunc_Delay_Duration_ImplicitCast) == 0x000398, "Member 'BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

