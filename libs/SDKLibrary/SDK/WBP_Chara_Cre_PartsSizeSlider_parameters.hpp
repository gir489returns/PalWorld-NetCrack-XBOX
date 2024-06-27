#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Chara_Cre_PartsSizeSlider

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_Chara_Cre_PartsSizeSlider_C_BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Chara_Cre_PartsSizeSlider_C_BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_Chara_Cre_PartsSizeSlider_C_BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_Chara_Cre_PartsSizeSlider_C_BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_Chara_Cre_PartsSizeSlider_C_BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4880[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4881[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0020(0x0018)()
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4882[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x0050(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0068(0x0018)()
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4883[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4884[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider) == 0x000008, "Wrong alignment on WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider");
static_assert(sizeof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider) == 0x0000C0, "Wrong size on WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, EntryPoint) == 0x000000, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, K2Node_ComponentBoundEvent_Value) == 0x000014, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000020, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_MapRangeClamped_ReturnValue) == 0x000038, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_GetValue_ReturnValue) == 0x000040, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x000050, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000068, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_GetHUDService_ReturnValue_1) == 0x000080, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000088, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000098, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_GetCurrentInputType_ReturnValue) == 0x0000A0, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A1, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_MapRangeClamped_Value_ImplicitCast) == 0x0000A8, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_MapRangeClamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000B0, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0000B8, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.OnChangedValue__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Chara_Cre_PartsSizeSlider_C_OnChangedValue__DelegateSignature final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Chara_Cre_PartsSizeSlider_C_OnChangedValue__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Chara_Cre_PartsSizeSlider_C_OnChangedValue__DelegateSignature");
static_assert(sizeof(WBP_Chara_Cre_PartsSizeSlider_C_OnChangedValue__DelegateSignature) == 0x000008, "Wrong size on WBP_Chara_Cre_PartsSizeSlider_C_OnChangedValue__DelegateSignature");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_OnChangedValue__DelegateSignature, Value) == 0x000000, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_OnChangedValue__DelegateSignature::Value' has a wrong offset!");

// Function WBP_Chara_Cre_PartsSizeSlider.WBP_Chara_Cre_PartsSizeSlider_C.SetValueForce
// 0x0038 (0x0038 - 0x0000)
struct WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce final
{
public:
	double                                        Size;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0018(0x0018)()
	float                                         CallFunc_SetValue_InValue_ImplicitCast;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce) == 0x000008, "Wrong alignment on WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce");
static_assert(sizeof(WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce) == 0x000038, "Wrong size on WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce, Size) == 0x000000, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce::Size' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce, CallFunc_MapRangeClamped_ReturnValue) == 0x000008, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000018, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce, CallFunc_SetValue_InValue_ImplicitCast) == 0x000030, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce::CallFunc_SetValue_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000034, "Member 'WBP_Chara_Cre_PartsSizeSlider_C_SetValueForce::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}

