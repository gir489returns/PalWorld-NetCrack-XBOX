#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_LargeDown

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_LargeDown.BP_AIAction_LargeDown_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_LargeDown_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_LargeDown_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_LargeDown_C_ActionAbort");
static_assert(sizeof(BP_AIAction_LargeDown_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_LargeDown_C_ActionAbort");
static_assert(offsetof(BP_AIAction_LargeDown_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_LargeDown_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_LargeDown.BP_AIAction_LargeDown_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_LargeDown_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_LargeDown_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_LargeDown_C_ActionFinished");
static_assert(sizeof(BP_AIAction_LargeDown_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_LargeDown_C_ActionFinished");
static_assert(offsetof(BP_AIAction_LargeDown_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_LargeDown_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_LargeDown_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_LargeDown.BP_AIAction_LargeDown_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_LargeDown_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_LargeDown_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_LargeDown_C_ActionPause");
static_assert(sizeof(BP_AIAction_LargeDown_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_LargeDown_C_ActionPause");
static_assert(offsetof(BP_AIAction_LargeDown_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_LargeDown_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_LargeDown.BP_AIAction_LargeDown_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_LargeDown_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_LargeDown_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_LargeDown_C_ActionStart");
static_assert(sizeof(BP_AIAction_LargeDown_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_LargeDown_C_ActionStart");
static_assert(offsetof(BP_AIAction_LargeDown_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_LargeDown_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_LargeDown.BP_AIAction_LargeDown_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_LargeDown_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_LargeDown_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_LargeDown_C_ActionTick");
static_assert(sizeof(BP_AIAction_LargeDown_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_LargeDown_C_ActionTick");
static_assert(offsetof(BP_AIAction_LargeDown_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_LargeDown_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_LargeDown_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_LargeDown.BP_AIAction_LargeDown_C.ExecuteUbergraph_BP_AIAction_LargeDown
// 0x0078 (0x0078 - 0x0000)
struct BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionByType_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_1;         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameter_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue_2;         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExistMontage_Exist;                       // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown) == 0x000008, "Wrong alignment on BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown");
static_assert(sizeof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown) == 0x000078, "Wrong size on BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, EntryPoint) == 0x000000, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, K2Node_Event_ControlledPawn_4) == 0x000008, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, K2Node_Event_ControlledPawn_3) == 0x000010, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, K2Node_Event_WithResult) == 0x000018, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, K2Node_Event_ControlledPawn_2) == 0x000020, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, K2Node_Event_ControlledPawn_1) == 0x000028, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_GetActionComponent_ReturnValue) == 0x000030, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_PlayActionByType_ReturnValue) == 0x000038, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_PlayActionByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_GetActionComponent_ReturnValue_1) == 0x000048, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_GetActionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_GetCharacterParameter_ReturnValue) == 0x000050, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_GetCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_IsDead_ReturnValue) == 0x000058, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_GetActionComponent_ReturnValue_2) == 0x000060, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_GetActionComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, K2Node_Event_ControlledPawn) == 0x000068, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, K2Node_Event_DeltaSeconds) == 0x000070, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_IsValid_ReturnValue_1) == 0x000074, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown, CallFunc_ExistMontage_Exist) == 0x000075, "Member 'BP_AIAction_LargeDown_C_ExecuteUbergraph_BP_AIAction_LargeDown::CallFunc_ExistMontage_Exist' has a wrong offset!");

// Function BP_AIAction_LargeDown.BP_AIAction_LargeDown_C.ExistMontage
// 0x0028 (0x0028 - 0x0000)
struct BP_AIAction_LargeDown_C_ExistMontage final
{
public:
	bool                                          Exist;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGeneralMontageType                        Temp_byte_Variable;                                // 0x0001(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4E[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_LargeDown_C_ExistMontage) == 0x000008, "Wrong alignment on BP_AIAction_LargeDown_C_ExistMontage");
static_assert(sizeof(BP_AIAction_LargeDown_C_ExistMontage) == 0x000028, "Wrong size on BP_AIAction_LargeDown_C_ExistMontage");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExistMontage, Exist) == 0x000000, "Member 'BP_AIAction_LargeDown_C_ExistMontage::Exist' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExistMontage, Temp_byte_Variable) == 0x000001, "Member 'BP_AIAction_LargeDown_C_ExistMontage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExistMontage, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_AIAction_LargeDown_C_ExistMontage::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExistMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_AIAction_LargeDown_C_ExistMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExistMontage, CallFunc_Map_Find_Value) == 0x000018, "Member 'BP_AIAction_LargeDown_C_ExistMontage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExistMontage, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'BP_AIAction_LargeDown_C_ExistMontage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_LargeDown_C_ExistMontage, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_AIAction_LargeDown_C_ExistMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
