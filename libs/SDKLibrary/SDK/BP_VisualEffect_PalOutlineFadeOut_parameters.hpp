#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_PalOutlineFadeOut

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_PalOutlineFadeOut.BP_VisualEffect_PalOutlineFadeOut_C.ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut
// 0x00D8 (0x00D8 - 0x0000)
struct BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A8F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A90[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APostProcessVolume*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A91[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APostProcessVolume*                     CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A92[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     CallFunc_Array_Get_Item_1;                         // 0x0050(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A93[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      K2Node_DynamicCast_AsMaterial_Instance;            // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A94[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A95[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     K2Node_SetFieldsInStruct_StructOut;                // 0x0090(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A96[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A97[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A98[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut) == 0x000008, "Wrong alignment on BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut");
static_assert(sizeof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut) == 0x0000D8, "Wrong size on BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, K2Node_Event_DeltaTime) == 0x000024, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, K2Node_DynamicCast_AsMaterial_Instance) == 0x000068, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::K2Node_DynamicCast_AsMaterial_Instance' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000078, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000080, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, K2Node_SetFieldsInStruct_StructOut) == 0x000090, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Array_Length_ReturnValue_1) == 0x0000A0, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A4, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_FClamp_ReturnValue) == 0x0000C0, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_IsValid_ReturnValue_1) == 0x0000C8, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000CC, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000D0, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_PalOutlineFadeOut.BP_VisualEffect_PalOutlineFadeOut_C.TickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_PalOutlineFadeOut_C_TickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_PalOutlineFadeOut_C_TickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_PalOutlineFadeOut_C_TickVisualEffect");
static_assert(sizeof(BP_VisualEffect_PalOutlineFadeOut_C_TickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_PalOutlineFadeOut_C_TickVisualEffect");
static_assert(offsetof(BP_VisualEffect_PalOutlineFadeOut_C_TickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_PalOutlineFadeOut_C_TickVisualEffect::DeltaTime' has a wrong offset!");

}

