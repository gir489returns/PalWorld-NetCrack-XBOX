#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Relax_PathWalk

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "F_NPC_PathWalkPoint_structs.hpp"
#include "Engine_structs.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_ActionPause");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_ActionPause");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionPostTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick) == 0x000010, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ActionPostTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionResume
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_ActionResume final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_ActionResume) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_ActionResume");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_ActionResume) == 0x000008, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_ActionResume");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ActionResume, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ActionResume::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_ActionStart");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_ActionStart");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk
// 0x01A0 (0x01A0 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkPoint                   CallFunc_Array_Get_Item;                           // 0x0098(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkPoint                   CallFunc_Array_Get_Item_1;                         // 0x00C8(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkPoint                   CallFunc_Array_Get_Item_2;                         // 0x00F8(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue_1;             // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17B[0x5];                                      // 0x017B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_DeltaTime_ImplicitCast;         // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk) == 0x0001A0, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, EntryPoint) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, K2Node_Event_ControlledPawn_2) == 0x000018, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_GetController_ReturnValue_1) == 0x000040, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_IsNearTwoPoint_ReturnValue) == 0x000048, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, K2Node_Event_ControlledPawn_1) == 0x000050, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_GetComponentByClass_ReturnValue) == 0x000060, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_IsFalling_ReturnValue) == 0x000068, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, K2Node_Event_ControlledPawn_3) == 0x000070, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, K2Node_Event_WithResult) == 0x000078, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_GetActionComponent_ReturnValue) == 0x000080, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, K2Node_Event_ControlledPawn_4) == 0x000090, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_Array_Get_Item) == 0x000098, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_Array_Get_Item_1) == 0x0000C8, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_Array_Get_Item_2) == 0x0000F8, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000128, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000130, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000148, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000160, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_IsNearTwoPoint_ReturnValue_1) == 0x000178, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_IsNearTwoPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_Not_PreBool_ReturnValue) == 0x000179, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00017A, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000180, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_Not_PreBool_ReturnValue_1) == 0x000188, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, K2Node_VariableSet_DeltaTime_ImplicitCast) == 0x000190, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::K2Node_VariableSet_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk, CallFunc_Delay_Duration_ImplicitCast) == 0x000198, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.PlayWaitAction
// 0x01F0 (0x01F0 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction final
{
public:
	struct FF_NPC_PathWalkPoint                   CallFunc_Array_Get_Item;                           // 0x0000(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkPoint                   CallFunc_Array_Get_Item_1;                         // 0x0030(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00F8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x3];                                      // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction) == 0x000010, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction) == 0x0001F0, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_Array_Get_Item) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_GetController_ReturnValue) == 0x000060, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_K2_GetPawn_ReturnValue) == 0x000068, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_MakeRotator_ReturnValue) == 0x000070, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_GetComponentByClass_ReturnValue) == 0x000088, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_PlayActionByType_ReturnValue) == 0x0000F0, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000F8, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0001E0, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0001E4, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_PlayWaitAction::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.SetupWalkPath
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_SetupWalkPath final
{
public:
	struct FF_NPC_PathWalkArray                   PathInfo;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_SetupWalkPath) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_SetupWalkPath");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_SetupWalkPath) == 0x000010, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_SetupWalkPath");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_SetupWalkPath, PathInfo) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_SetupWalkPath::PathInfo' has a wrong offset!");

// Function BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C.UpdateNextTargetPoint
// 0x0060 (0x0060 - 0x0000)
struct BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_NPC_PathWalkPoint                   CallFunc_Array_Get_Item;                           // 0x0030(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint) == 0x000008, "Wrong alignment on BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint");
static_assert(sizeof(BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint) == 0x000060, "Wrong size on BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_AIAction_NPC_Relax_PathWalk_C_UpdateNextTargetPoint::CallFunc_Array_Get_Item' has a wrong offset!");

}

