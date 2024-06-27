#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalInGameMenuItemSlot

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.ExecuteUbergraph_WBP_PalInGameMenuItemSlot
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalItemSlot* TargetSlot)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_420E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           K2Node_CustomEvent_targetSlot;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x0030(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackCount_ReturnValue;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_420F[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemData                           CallFunc_GetItemData_ReturnValue;                  // 0x0080(0x0010)(ConstParm, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot) == 0x000008, "Wrong alignment on WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot");
static_assert(sizeof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot) == 0x0000A8, "Wrong size on WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, EntryPoint) == 0x000000, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, K2Node_CustomEvent_targetSlot) == 0x000028, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::K2Node_CustomEvent_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, CallFunc_GetItemId_ReturnValue) == 0x000030, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, CallFunc_GetStackCount_ReturnValue) == 0x000058, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::CallFunc_GetStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, CallFunc_Greater_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, CallFunc_GetItemIDManager_ReturnValue) == 0x000078, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, CallFunc_GetItemData_ReturnValue) == 0x000080, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, K2Node_CreateDelegate_OutputDelegate_2) == 0x000090, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'WBP_PalInGameMenuItemSlot_C_ExecuteUbergraph_WBP_PalInGameMenuItemSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.RegisterItemIconWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget final
{
public:
	class UWBP_PalItemIconBase_C*                 IconWidget;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget) == 0x000008, "Wrong alignment on WBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget");
static_assert(sizeof(WBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget) == 0x000008, "Wrong size on WBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget, IconWidget) == 0x000000, "Member 'WBP_PalInGameMenuItemSlot_C_RegisterItemIconWidget::IconWidget' has a wrong offset!");

// Function WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C.UpdateSlotEvent
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalInGameMenuItemSlot_C_UpdateSlotEvent final
{
public:
	class UPalItemSlot*                           Param_TargetSlot;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalInGameMenuItemSlot_C_UpdateSlotEvent) == 0x000008, "Wrong alignment on WBP_PalInGameMenuItemSlot_C_UpdateSlotEvent");
static_assert(sizeof(WBP_PalInGameMenuItemSlot_C_UpdateSlotEvent) == 0x000008, "Wrong size on WBP_PalInGameMenuItemSlot_C_UpdateSlotEvent");
static_assert(offsetof(WBP_PalInGameMenuItemSlot_C_UpdateSlotEvent, Param_TargetSlot) == 0x000000, "Member 'WBP_PalInGameMenuItemSlot_C_UpdateSlotEvent::Param_TargetSlot' has a wrong offset!");

}

