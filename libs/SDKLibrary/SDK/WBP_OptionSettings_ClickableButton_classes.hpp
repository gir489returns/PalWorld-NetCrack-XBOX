#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_ClickableButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionSettings_ClickableButton.WBP_OptionSettings_ClickableButton_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_OptionSettings_ClickableButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Click;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_ON;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Hover;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_OptionSettings_ClickableButton(int32 EntryPoint);
	void BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionSettings_ClickableButton_C">();
	}
	static class UWBP_OptionSettings_ClickableButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionSettings_ClickableButton_C>();
	}
};
static_assert(alignof(UWBP_OptionSettings_ClickableButton_C) == 0x000008, "Wrong alignment on UWBP_OptionSettings_ClickableButton_C");
static_assert(sizeof(UWBP_OptionSettings_ClickableButton_C) == 0x0002A8, "Wrong size on UWBP_OptionSettings_ClickableButton_C");
static_assert(offsetof(UWBP_OptionSettings_ClickableButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_OptionSettings_ClickableButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ClickableButton_C, Anm_Click) == 0x000280, "Member 'UWBP_OptionSettings_ClickableButton_C::Anm_Click' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ClickableButton_C, Button_ON) == 0x000288, "Member 'UWBP_OptionSettings_ClickableButton_C::Button_ON' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ClickableButton_C, CanvasPanel_Hover) == 0x000290, "Member 'UWBP_OptionSettings_ClickableButton_C::CanvasPanel_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_ClickableButton_C, OnClicked) == 0x000298, "Member 'UWBP_OptionSettings_ClickableButton_C::OnClicked' has a wrong offset!");

}

