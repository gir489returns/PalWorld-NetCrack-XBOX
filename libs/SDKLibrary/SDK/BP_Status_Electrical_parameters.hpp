#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Electrical

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_Status_Electrical.BP_Status_Electrical_C.ExecuteUbergraph_BP_Status_Electrical
// 0x0008 (0x0008 - 0x0000)
struct BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreElement_Ignore;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical) == 0x000004, "Wrong alignment on BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical");
static_assert(sizeof(BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical) == 0x000008, "Wrong size on BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical");
static_assert(offsetof(BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical, EntryPoint) == 0x000000, "Member 'BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical, CallFunc_IsIgnoreElement_Ignore) == 0x000004, "Member 'BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical::CallFunc_IsIgnoreElement_Ignore' has a wrong offset!");

// Function BP_Status_Electrical.BP_Status_Electrical_C.PlayElecShockAction
// 0x0088 (0x0088 - 0x0000)
struct BP_Status_Electrical_C_PlayElecShockAction final
{
public:
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0000(0x0050)(NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Electrical_C_PlayElecShockAction) == 0x000008, "Wrong alignment on BP_Status_Electrical_C_PlayElecShockAction");
static_assert(sizeof(BP_Status_Electrical_C_PlayElecShockAction) == 0x000088, "Wrong size on BP_Status_Electrical_C_PlayElecShockAction");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000000, "Member 'BP_Status_Electrical_C_PlayElecShockAction::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'BP_Status_Electrical_C_PlayElecShockAction::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, CallFunc_GetOwner_ReturnValue_1) == 0x000058, "Member 'BP_Status_Electrical_C_PlayElecShockAction::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, CallFunc_GetController_ReturnValue) == 0x000060, "Member 'BP_Status_Electrical_C_PlayElecShockAction::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, CallFunc_HasAuthority_ReturnValue) == 0x000068, "Member 'BP_Status_Electrical_C_PlayElecShockAction::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'BP_Status_Electrical_C_PlayElecShockAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, CallFunc_GetComponentByClass_ReturnValue) == 0x000070, "Member 'BP_Status_Electrical_C_PlayElecShockAction::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, CallFunc_SetActionClassParameter_ReturnValue) == 0x000078, "Member 'BP_Status_Electrical_C_PlayElecShockAction::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Electrical_C_PlayElecShockAction, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'BP_Status_Electrical_C_PlayElecShockAction::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

