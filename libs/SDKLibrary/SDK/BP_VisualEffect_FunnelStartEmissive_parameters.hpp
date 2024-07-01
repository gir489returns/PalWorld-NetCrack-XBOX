#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_FunnelStartEmissive

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive
// 0x0110 (0x0110 - 0x0000)
struct BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_397C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_397D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_GetMainMeshMaterials_ReturnValue;         // 0x0020(0x0010)(ReferenceParm)
	float                                         K2Node_Event_DeltaTime;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       CallFunc_GetMainMeshMaterials_ReturnValue_1;       // 0x0050(0x0010)(ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_397E[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_397F[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3980[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLive_ReturnValue;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3981[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue_1;               // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue_2;               // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3982[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3983[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive) == 0x000008, "Wrong alignment on BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive");
static_assert(sizeof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive) == 0x000110, "Wrong size on BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_GetMainMeshMaterials_ReturnValue) == 0x000020, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_GetMainMeshMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, K2Node_Event_DeltaTime) == 0x000030, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_FClamp_ReturnValue) == 0x000048, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_GetMainMeshMaterials_ReturnValue_1) == 0x000050, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_GetMainMeshMaterials_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Array_Length_ReturnValue_1) == 0x000068, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Lerp_ReturnValue) == 0x000070, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, Temp_int_Array_Index_Variable_1) == 0x000078, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000088, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_GetOwner_ReturnValue) == 0x000098, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_IsLive_ReturnValue) == 0x0000A8, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_IsLive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_FClamp_ReturnValue_1) == 0x0000B0, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_GetCharacter_ReturnValue_1) == 0x0000B8, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_GetCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_GetCharacter_ReturnValue_2) == 0x0000C0, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_GetCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C8, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000E0, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, Temp_int_Loop_Counter_Variable_1) == 0x0000E8, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000EC, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000F0, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0000F8, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_Add_DoubleDouble_A_ImplicitCast_1) == 0x000100, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_Add_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000108, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.ModifyEffectBySize
// 0x0010 (0x0010 - 0x0000)
struct BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize final
{
public:
	class UNiagaraComponent*                      Effect;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalSizeType                                  Size;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize) == 0x000008, "Wrong alignment on BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize");
static_assert(sizeof(BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize) == 0x000010, "Wrong size on BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize, Effect) == 0x000000, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize::Effect' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize, Size) == 0x000008, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize::Size' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize, K2Node_SwitchEnum_CmpSuccess) == 0x000009, "Member 'BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.SetScale
// 0x0020 (0x0020 - 0x0000)
struct BP_VisualEffect_FunnelStartEmissive_C_SetScale final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3984[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetRuntimeScale_scale_ImplicitCast;       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_FunnelStartEmissive_C_SetScale) == 0x000008, "Wrong alignment on BP_VisualEffect_FunnelStartEmissive_C_SetScale");
static_assert(sizeof(BP_VisualEffect_FunnelStartEmissive_C_SetScale) == 0x000020, "Wrong size on BP_VisualEffect_FunnelStartEmissive_C_SetScale");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_SetScale, Value) == 0x000000, "Member 'BP_VisualEffect_FunnelStartEmissive_C_SetScale::Value' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_SetScale, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_FunnelStartEmissive_C_SetScale::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_SetScale, K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component) == 0x000010, "Member 'BP_VisualEffect_FunnelStartEmissive_C_SetScale::K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_SetScale, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_VisualEffect_FunnelStartEmissive_C_SetScale::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_SetScale, CallFunc_SetRuntimeScale_scale_ImplicitCast) == 0x00001C, "Member 'BP_VisualEffect_FunnelStartEmissive_C_SetScale::CallFunc_SetRuntimeScale_scale_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.TickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_FunnelStartEmissive_C_TickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_FunnelStartEmissive_C_TickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_FunnelStartEmissive_C_TickVisualEffect");
static_assert(sizeof(BP_VisualEffect_FunnelStartEmissive_C_TickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_FunnelStartEmissive_C_TickVisualEffect");
static_assert(offsetof(BP_VisualEffect_FunnelStartEmissive_C_TickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_FunnelStartEmissive_C_TickVisualEffect::DeltaTime' has a wrong offset!");

}

