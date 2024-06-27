#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ColorSliderWin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaCre_ColorSliderWin_C_BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature final
{
public:
	struct FLinearColor                           HSV;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ColorSliderWin_C_BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature) == 0x000004, "Wrong alignment on WBP_CharaCre_ColorSliderWin_C_BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature");
static_assert(sizeof(WBP_CharaCre_ColorSliderWin_C_BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature) == 0x000010, "Wrong size on WBP_CharaCre_ColorSliderWin_C_BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature, HSV) == 0x000000, "Member 'WBP_CharaCre_ColorSliderWin_C_BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature::HSV' has a wrong offset!");

// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.ExecuteUbergraph_WBP_CharaCre_ColorSliderWin
// 0x0078 (0x0078 - 0x0000)
struct WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4962[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4963[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4964[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4965[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_ComponentBoundEvent_HSV;                    // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x005C(0x0004)(NoDestructor)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_Widget;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin) == 0x000008, "Wrong alignment on WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin");
static_assert(sizeof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin) == 0x000078, "Wrong size on WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, EntryPoint) == 0x000000, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, CallFunc_GetParam_ReturnValue) == 0x000018, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter) == 0x000028, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, K2Node_ComponentBoundEvent_HSV) == 0x000034, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::K2Node_ComponentBoundEvent_HSV' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, CallFunc_Conv_StringToName_ReturnValue) == 0x000044, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, CallFunc_RegisterActionBinding_ReturnValue) == 0x00005C, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, K2Node_CreateDelegate_OutputDelegate_1) == 0x000060, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin, CallFunc_GetTopFocusTarget_Widget) == 0x000070, "Member 'WBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin::CallFunc_GetTopFocusTarget_Widget' has a wrong offset!");

// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.OnInputMethodChanged
// 0x0002 (0x0002 - 0x0000)
struct WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged");
static_assert(sizeof(WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged) == 0x000002, "Wrong size on WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.OnMouseButtonDown_0
// 0x0248 (0x0248 - 0x0000)
struct WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0190(0x00B8)()
};
static_assert(alignof(WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0) == 0x000008, "Wrong alignment on WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0");
static_assert(sizeof(WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0) == 0x000248, "Wrong size on WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0, MyGeometry) == 0x000000, "Member 'WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0, MouseEvent) == 0x000040, "Member 'WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0, ReturnValue) == 0x0000D8, "Member 'WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'WBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_Widget;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget, CallFunc_GetTopFocusTarget_Widget) == 0x000008, "Member 'WBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget::CallFunc_GetTopFocusTarget_Widget' has a wrong offset!");

}

