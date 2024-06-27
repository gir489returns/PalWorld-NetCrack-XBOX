#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_SpawnFadeIn

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C.ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn
// 0x0048 (0x0048 - 0x0000)
struct BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40BB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40BC[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn) == 0x000008, "Wrong alignment on BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn");
static_assert(sizeof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn) == 0x000048, "Wrong size on BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn, CallFunc_FClamp_ReturnValue) == 0x000030, "Member 'BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'BP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C.SetOpacity
// 0x0020 (0x0020 - 0x0000)
struct BP_VisualEffect_SpawnFadeIn_C_SetOpacity final
{
public:
	double                                        Intensity;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40BD[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetOpacityForCharacter_opacityIntensity_ImplicitCast; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_SpawnFadeIn_C_SetOpacity) == 0x000008, "Wrong alignment on BP_VisualEffect_SpawnFadeIn_C_SetOpacity");
static_assert(sizeof(BP_VisualEffect_SpawnFadeIn_C_SetOpacity) == 0x000020, "Wrong size on BP_VisualEffect_SpawnFadeIn_C_SetOpacity");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_SetOpacity, Intensity) == 0x000000, "Member 'BP_VisualEffect_SpawnFadeIn_C_SetOpacity::Intensity' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_SetOpacity, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_SpawnFadeIn_C_SetOpacity::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_SetOpacity, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'BP_VisualEffect_SpawnFadeIn_C_SetOpacity::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_SetOpacity, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_VisualEffect_SpawnFadeIn_C_SetOpacity::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_SpawnFadeIn_C_SetOpacity, CallFunc_SetOpacityForCharacter_opacityIntensity_ImplicitCast) == 0x00001C, "Member 'BP_VisualEffect_SpawnFadeIn_C_SetOpacity::CallFunc_SetOpacityForCharacter_opacityIntensity_ImplicitCast' has a wrong offset!");

}

