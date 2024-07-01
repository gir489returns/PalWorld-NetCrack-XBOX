#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SimpleColorFade

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.ExecuteUbergraph_WBP_SimpleColorFade
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B82[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B83[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B84[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B85[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B86[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Visible)>                 K2Node_CreateDelegate_OutputDelegate_2;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Visiable;                       // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B87[0x5];                                     // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast; // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade) == 0x000008, "Wrong alignment on WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade");
static_assert(sizeof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade) == 0x0000A8, "Wrong size on WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, EntryPoint) == 0x000000, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, Temp_bool_Variable) == 0x000014, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, Temp_byte_Variable) == 0x000015, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, Temp_byte_Variable_1) == 0x000016, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000018, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000020, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000029, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00002A, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000050, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000058, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000068, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, K2Node_CreateDelegate_OutputDelegate_2) == 0x000070, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, K2Node_CustomEvent_Visiable) == 0x000081, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::K2Node_CustomEvent_Visiable' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, K2Node_Select_Default) == 0x000082, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1) == 0x000090, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000098, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade, CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast) == 0x0000A0, "Member 'WBP_SimpleColorFade_C_ExecuteUbergraph_WBP_SimpleColorFade::CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast' has a wrong offset!");

// Function WBP_SimpleColorFade.WBP_SimpleColorFade_C.ToggleVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_SimpleColorFade_C_ToggleVisibility final
{
public:
	bool                                          Visiable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleColorFade_C_ToggleVisibility) == 0x000001, "Wrong alignment on WBP_SimpleColorFade_C_ToggleVisibility");
static_assert(sizeof(WBP_SimpleColorFade_C_ToggleVisibility) == 0x000001, "Wrong size on WBP_SimpleColorFade_C_ToggleVisibility");
static_assert(offsetof(WBP_SimpleColorFade_C_ToggleVisibility, Visiable) == 0x000000, "Member 'WBP_SimpleColorFade_C_ToggleVisibility::Visiable' has a wrong offset!");

}

