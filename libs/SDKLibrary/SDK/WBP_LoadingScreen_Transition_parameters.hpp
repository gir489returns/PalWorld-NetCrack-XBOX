#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingScreen_Transition

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.ExecuteUbergraph_WBP_LoadingScreen_Transition
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_490E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWBP_LoadingScreen_Transition_C*  Temp_object_Variable;                              // 0x0008(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_490F[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalGameInstance_C*                  K2Node_DynamicCast_AsBP_Pal_Game_Instance;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4910[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4911[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalGameInstance_C*                  K2Node_DynamicCast_AsBP_Pal_Game_Instance_1;       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4912[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4913[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalGameInstance_C*                  K2Node_DynamicCast_AsBP_Pal_Game_Instance_2;       // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4914[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Visible)>                 K2Node_CreateDelegate_OutputDelegate_2;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Visiable;                       // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition) == 0x000008, "Wrong alignment on WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition");
static_assert(sizeof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition) == 0x0000C8, "Wrong size on WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, EntryPoint) == 0x000000, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, Temp_object_Variable) == 0x000008, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, Temp_bool_Variable) == 0x000020, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, Temp_byte_Variable) == 0x000021, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, Temp_byte_Variable_1) == 0x000022, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000030, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000038, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_DynamicCast_AsBP_Pal_Game_Instance) == 0x000040, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_DynamicCast_AsBP_Pal_Game_Instance' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000060, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000068, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_GetGameInstance_ReturnValue_1) == 0x000070, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_DynamicCast_AsBP_Pal_Game_Instance_1) == 0x000078, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_DynamicCast_AsBP_Pal_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_IsValid_ReturnValue_1) == 0x000081, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_GetGameInstance_ReturnValue_2) == 0x000088, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_IsValid_ReturnValue_2) == 0x000090, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_DynamicCast_AsBP_Pal_Game_Instance_2) == 0x000098, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_DynamicCast_AsBP_Pal_Game_Instance_2' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_IsValid_ReturnValue_3) == 0x0000A1, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_GetPalDebugSetting_ReturnValue) == 0x0000A8, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000B0, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, CallFunc_IsValid_ReturnValue_4) == 0x0000C0, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_CustomEvent_Visiable) == 0x0000C1, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_CustomEvent_Visiable' has a wrong offset!");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition, K2Node_Select_Default) == 0x0000C2, "Member 'WBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition::K2Node_Select_Default' has a wrong offset!");

// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.SetBgColor
// 0x0010 (0x0010 - 0x0000)
struct WBP_LoadingScreen_Transition_C_SetBgColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadingScreen_Transition_C_SetBgColor) == 0x000004, "Wrong alignment on WBP_LoadingScreen_Transition_C_SetBgColor");
static_assert(sizeof(WBP_LoadingScreen_Transition_C_SetBgColor) == 0x000010, "Wrong size on WBP_LoadingScreen_Transition_C_SetBgColor");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_SetBgColor, Color) == 0x000000, "Member 'WBP_LoadingScreen_Transition_C_SetBgColor::Color' has a wrong offset!");

// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.ToggleVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_LoadingScreen_Transition_C_ToggleVisibility final
{
public:
	bool                                          Visiable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadingScreen_Transition_C_ToggleVisibility) == 0x000001, "Wrong alignment on WBP_LoadingScreen_Transition_C_ToggleVisibility");
static_assert(sizeof(WBP_LoadingScreen_Transition_C_ToggleVisibility) == 0x000001, "Wrong size on WBP_LoadingScreen_Transition_C_ToggleVisibility");
static_assert(offsetof(WBP_LoadingScreen_Transition_C_ToggleVisibility, Visiable) == 0x000000, "Member 'WBP_LoadingScreen_Transition_C_ToggleVisibility::Visiable' has a wrong offset!");

}

