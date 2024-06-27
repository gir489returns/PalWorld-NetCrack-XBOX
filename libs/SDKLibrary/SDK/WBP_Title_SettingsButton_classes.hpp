#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_SettingsButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_SettingsButton.WBP_Title_SettingsButton_C
// 0x0090 (0x0308 - 0x0278)
class UWBP_Title_SettingsButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_DisableToEnable;                               // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_AttentionNormalToFocus;                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Dot_0;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_1;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_2;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_3;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocusFrame;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Main;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     DisplayActionName;                                 // 0x02E0(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    MsgId;                                             // 0x02F8(0x0010)(Edit, BlueprintVisible, NoDestructor)

public:
	void OnInitialized();
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Title_SettingsButton(int32 EntryPoint);
	void BndEvt__WBP_Title_SettingsButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_SettingsButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_SettingsButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_SettingsButton_C">();
	}
	static class UWBP_Title_SettingsButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_SettingsButton_C>();
	}
};
static_assert(alignof(UWBP_Title_SettingsButton_C) == 0x000008, "Wrong alignment on UWBP_Title_SettingsButton_C");
static_assert(sizeof(UWBP_Title_SettingsButton_C) == 0x000308, "Wrong size on UWBP_Title_SettingsButton_C");
static_assert(offsetof(UWBP_Title_SettingsButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Title_SettingsButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Anm_DisableToEnable) == 0x000280, "Member 'UWBP_Title_SettingsButton_C::Anm_DisableToEnable' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Anm_AttentionNormalToFocus) == 0x000288, "Member 'UWBP_Title_SettingsButton_C::Anm_AttentionNormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Anm_NormalToFocus) == 0x000290, "Member 'UWBP_Title_SettingsButton_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Dot_0) == 0x000298, "Member 'UWBP_Title_SettingsButton_C::Dot_0' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Dot_1) == 0x0002A0, "Member 'UWBP_Title_SettingsButton_C::Dot_1' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Dot_2) == 0x0002A8, "Member 'UWBP_Title_SettingsButton_C::Dot_2' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Dot_3) == 0x0002B0, "Member 'UWBP_Title_SettingsButton_C::Dot_3' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, FocusFrame) == 0x0002B8, "Member 'UWBP_Title_SettingsButton_C::FocusFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Frame) == 0x0002C0, "Member 'UWBP_Title_SettingsButton_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, Text_Main) == 0x0002C8, "Member 'UWBP_Title_SettingsButton_C::Text_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, WBP_PalInvisibleButton) == 0x0002D0, "Member 'UWBP_Title_SettingsButton_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, WBP_PalKeyGuideIcon) == 0x0002D8, "Member 'UWBP_Title_SettingsButton_C::WBP_PalKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, DisplayActionName) == 0x0002E0, "Member 'UWBP_Title_SettingsButton_C::DisplayActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, OnClicked) == 0x0002E8, "Member 'UWBP_Title_SettingsButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Title_SettingsButton_C, MsgId) == 0x0002F8, "Member 'UWBP_Title_SettingsButton_C::MsgId' has a wrong offset!");

}

