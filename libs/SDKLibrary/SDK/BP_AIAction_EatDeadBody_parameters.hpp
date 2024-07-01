#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_EatDeadBody

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_EatDeadBody_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_EatDeadBody_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_EatDeadBody_C_ActionFinished");
static_assert(sizeof(BP_AIAction_EatDeadBody_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_EatDeadBody_C_ActionFinished");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_EatDeadBody_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_EatDeadBody_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_EatDeadBody_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_EatDeadBody_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_EatDeadBody_C_ActionPause");
static_assert(sizeof(BP_AIAction_EatDeadBody_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_EatDeadBody_C_ActionPause");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_EatDeadBody_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_EatDeadBody_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_EatDeadBody_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_EatDeadBody_C_ActionStart");
static_assert(sizeof(BP_AIAction_EatDeadBody_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_EatDeadBody_C_ActionStart");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_EatDeadBody_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_EatDeadBody_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_EatDeadBody_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_EatDeadBody_C_ActionTick");
static_assert(sizeof(BP_AIAction_EatDeadBody_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_EatDeadBody_C_ActionTick");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_EatDeadBody_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_EatDeadBody_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ExecuteUbergraph_BP_AIAction_EatDeadBody
// 0x0110 (0x0110 - 0x0000)
struct BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A98[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A99[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_SelfPawn_SelfPawn;                        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SelfPawn_SelfPawn_1;                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SelfPawn_SelfPawn_2;                      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InFanShap_ReturnValue;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9A[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_SelfPawn_SelfPawn_3;                      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9B[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActionIsEmpty_ReturnValue;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9C[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SelfPawn_SelfPawn_4;                      // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SelfPawn_SelfPawn_5;                      // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActionIsEmpty_ReturnValue_1;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActorWithRadius_ReturnValue;     // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9D[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9E[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9F[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController_1;           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AA0[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AA1[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GeneralTurnToActor_WithMovementRotationSpeed_DeltaTime_ImplicitCast; // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AA2[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_TempDeltaTime_ImplicitCast;     // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody) == 0x000008, "Wrong alignment on BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody");
static_assert(sizeof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody) == 0x000110, "Wrong size on BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, EntryPoint) == 0x000000, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_DynamicCast_AsPal_AIController) == 0x000010, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_SelfPawn_SelfPawn) == 0x000020, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_SelfPawn_SelfPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_SelfPawn_SelfPawn_1) == 0x000028, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_SelfPawn_SelfPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_SelfPawn_SelfPawn_2) == 0x000030, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_SelfPawn_SelfPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_GetController_ReturnValue_1) == 0x000038, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_InFanShap_ReturnValue) == 0x000040, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_InFanShap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_SelfPawn_SelfPawn_3) == 0x000048, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_SelfPawn_SelfPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_Event_ControlledPawn_3) == 0x000050, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_Event_WithResult) == 0x000058, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_PlayActionByType_ReturnValue) == 0x000068, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_ActionIsEmpty_ReturnValue) == 0x000070, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_ActionIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_Event_ControlledPawn_2) == 0x000078, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_SelfPawn_SelfPawn_4) == 0x000080, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_SelfPawn_SelfPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_SelfPawn_SelfPawn_5) == 0x000088, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_SelfPawn_SelfPawn_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000090, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000098, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_ActionIsEmpty_ReturnValue_1) == 0x0000A0, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_ActionIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_IsNearTwoActorWithRadius_ReturnValue) == 0x0000A1, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_IsNearTwoActorWithRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_DynamicCast_AsPal_Character) == 0x0000B8, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000C8, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_GetController_ReturnValue_2) == 0x0000D0, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_DynamicCast_AsPal_AIController_1) == 0x0000D8, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_DynamicCast_AsPal_AIController_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_DynamicCast_bSuccess_2) == 0x0000E0, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_Event_ControlledPawn_1) == 0x0000E8, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_Event_ControlledPawn) == 0x0000F0, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_Event_DeltaSeconds) == 0x0000F8, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_IsValid_ReturnValue) == 0x0000FC, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000FD, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, CallFunc_GeneralTurnToActor_WithMovementRotationSpeed_DeltaTime_ImplicitCast) == 0x000100, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::CallFunc_GeneralTurnToActor_WithMovementRotationSpeed_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody, K2Node_VariableSet_TempDeltaTime_ImplicitCast) == 0x000108, "Member 'BP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody::K2Node_VariableSet_TempDeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.RecoverHP
// 0x0030 (0x0030 - 0x0000)
struct BP_AIAction_EatDeadBody_C_RecoverHP final
{
public:
	struct FFixedPoint64                          CallFunc_Convert_FloatToFixedPoint64_ReturnValue;  // 0x0000(0x0008)(NoDestructor)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x0020(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue; // 0x0028(0x0008)(NoDestructor)
};
static_assert(alignof(BP_AIAction_EatDeadBody_C_RecoverHP) == 0x000008, "Wrong alignment on BP_AIAction_EatDeadBody_C_RecoverHP");
static_assert(sizeof(BP_AIAction_EatDeadBody_C_RecoverHP) == 0x000030, "Wrong size on BP_AIAction_EatDeadBody_C_RecoverHP");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_RecoverHP, CallFunc_Convert_FloatToFixedPoint64_ReturnValue) == 0x000000, "Member 'BP_AIAction_EatDeadBody_C_RecoverHP::CallFunc_Convert_FloatToFixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_RecoverHP, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_EatDeadBody_C_RecoverHP::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_RecoverHP, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_AIAction_EatDeadBody_C_RecoverHP::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_RecoverHP, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_AIAction_EatDeadBody_C_RecoverHP::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_RecoverHP, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x000020, "Member 'BP_AIAction_EatDeadBody_C_RecoverHP::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_RecoverHP, CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue) == 0x000028, "Member 'BP_AIAction_EatDeadBody_C_RecoverHP::CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");

// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.SelfPawn
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_EatDeadBody_C_SelfPawn final
{
public:
	class AActor*                                 Param_SelfPawn;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_EatDeadBody_C_SelfPawn) == 0x000008, "Wrong alignment on BP_AIAction_EatDeadBody_C_SelfPawn");
static_assert(sizeof(BP_AIAction_EatDeadBody_C_SelfPawn) == 0x000018, "Wrong size on BP_AIAction_EatDeadBody_C_SelfPawn");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_SelfPawn, Param_SelfPawn) == 0x000000, "Member 'BP_AIAction_EatDeadBody_C_SelfPawn::Param_SelfPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_SelfPawn, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_EatDeadBody_C_SelfPawn::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_EatDeadBody_C_SelfPawn, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_AIAction_EatDeadBody_C_SelfPawn::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");

}

