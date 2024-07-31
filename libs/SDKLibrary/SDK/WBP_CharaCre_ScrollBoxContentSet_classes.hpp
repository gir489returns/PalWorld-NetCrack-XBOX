#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContentSet

#include "Basic.hpp"

#include "E_UICharacterMakeCategory_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_CharaCre_ScrollBoxContentSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActivatableWidgetSwitcher*       CommonActivatableWidgetSwitcher_27;                // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Body_C*  WBP_CharaCre_ScrollBoxContent_Body;                // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Face_C*  WBP_CharaCre_ScrollBoxContent_Face;                // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Hair_C*  WBP_CharaCre_ScrollBoxContent_Hair;                // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Preset_C* WBP_CharaCre_ScrollBoxContent_Preset;              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Voice_C* WBP_CharaCre_ScrollBoxContent_Voice;               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnNotifyOpenSelectColorWindow;                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnNotifyCloseColorSelectWindow;                    // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_1_OnNotifyCloseSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_2_OnNotifyOpenSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_3_OnNotifyCloseSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_4_OnNotifyOpenSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_5_OnNotifyCloseSelectColorWindow__DelegateSignature();
	void ChangeMakeCategory(E_UICharacterMakeCategory NewCategory);
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet(int32 EntryPoint);
	void GetRestoreFocusTarget(E_UICharacterMakeCategory CategoryType, class UWidget** Widget);
	void GetSelectedEyeHSV(struct FLinearColor* HSV);
	void GetTopFocusTarget(E_UICharacterMakeCategory NewCategory, class UWidget** Widget);
	void GetWidgetByCategory(E_UICharacterMakeCategory TargetCategory, class UWBP_CharaCre_ScrollBoxContentBase_C** Widget);
	void OnNotifyCloseColorSelectWindow__DelegateSignature();
	void OnNotifyOpenSelectColorWindow__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_ScrollBoxContentSet_C">();
	}
	static class UWBP_CharaCre_ScrollBoxContentSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_ScrollBoxContentSet_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_ScrollBoxContentSet_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_ScrollBoxContentSet_C");
static_assert(sizeof(UWBP_CharaCre_ScrollBoxContentSet_C) == 0x0002D0, "Wrong size on UWBP_CharaCre_ScrollBoxContentSet_C");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, CommonActivatableWidgetSwitcher_27) == 0x000280, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::CommonActivatableWidgetSwitcher_27' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, WBP_CharaCre_ScrollBoxContent_Body) == 0x000288, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::WBP_CharaCre_ScrollBoxContent_Body' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, WBP_CharaCre_ScrollBoxContent_Face) == 0x000290, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::WBP_CharaCre_ScrollBoxContent_Face' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, WBP_CharaCre_ScrollBoxContent_Hair) == 0x000298, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::WBP_CharaCre_ScrollBoxContent_Hair' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, WBP_CharaCre_ScrollBoxContent_Preset) == 0x0002A0, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::WBP_CharaCre_ScrollBoxContent_Preset' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, WBP_CharaCre_ScrollBoxContent_Voice) == 0x0002A8, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::WBP_CharaCre_ScrollBoxContent_Voice' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, OnNotifyOpenSelectColorWindow) == 0x0002B0, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::OnNotifyOpenSelectColorWindow' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentSet_C, OnNotifyCloseColorSelectWindow) == 0x0002C0, "Member 'UWBP_CharaCre_ScrollBoxContentSet_C::OnNotifyCloseColorSelectWindow' has a wrong offset!");

}

