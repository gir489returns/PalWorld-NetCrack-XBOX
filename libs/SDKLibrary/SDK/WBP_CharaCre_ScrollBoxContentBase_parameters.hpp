#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContentBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.ApplyMakeInfo
// 0x0150 (0x0150 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo final
{
public:
	struct FPalPlayerDataCharacterMakeInfo        MakeInfo;                                          // 0x0000(0x0150)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo) == 0x000150, "Wrong size on WBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo, MakeInfo) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo::MakeInfo' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.GetRestoreFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget) == 0x000008, "Wrong size on WBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget, Widget) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget::Widget' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.GetTopFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget) == 0x000008, "Wrong size on WBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget, Widget) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget::Widget' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.OnClosedSelectColorWindow_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal final
{
public:
	class UPalHUDDispatchParameterBase*           Param_Param;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal) == 0x000008, "Wrong size on WBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal, Param_Param) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal::Param_Param' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.OpenColorSelectWindow
// 0x0030 (0x0030 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow final
{
public:
	class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* Parameter;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalHUDDispatchParameterBase* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A1C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x001C(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow) == 0x000030, "Wrong size on WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow, Parameter) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow, CallFunc_Push_ReturnValue) == 0x00001C, "Member 'WBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow::CallFunc_Push_ReturnValue' has a wrong offset!");

}

