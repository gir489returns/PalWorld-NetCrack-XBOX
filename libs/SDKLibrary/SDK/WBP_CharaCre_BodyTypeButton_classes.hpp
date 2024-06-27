#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_BodyTypeButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_BodyTypeButton.WBP_CharaCre_BodyTypeButton_C
// 0x0070 (0x02E8 - 0x0278)
class UWBP_CharaCre_BodyTypeButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_UnselectToSelect;                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_BodyType;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    MsgId;                                             // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   Bind_Preset_Name;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    VoiceMsgID;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnmEvent_Hover();
	void AnmEvent_Select();
	void AnmEvent_Unhover();
	void AnmEvent_Unselect();
	void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_CharaCre_BodyTypeButton(int32 EntryPoint);
	void GetBindedPresetName(class FName* PresetName);
	void OnClicked__DelegateSignature(class UWBP_CharaCre_BodyTypeButton_C* Widget);
	void Setup(class FName BindPresetName, int32 ButtonIndex);
	void SetupAsVoice(int32 ButtonIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_BodyTypeButton_C">();
	}
	static class UWBP_CharaCre_BodyTypeButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_BodyTypeButton_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_BodyTypeButton_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_BodyTypeButton_C");
static_assert(sizeof(UWBP_CharaCre_BodyTypeButton_C) == 0x0002E8, "Wrong size on UWBP_CharaCre_BodyTypeButton_C");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_BodyTypeButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, Anm_UnselectToSelect) == 0x000280, "Member 'UWBP_CharaCre_BodyTypeButton_C::Anm_UnselectToSelect' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, Anm_NormalToFocus) == 0x000288, "Member 'UWBP_CharaCre_BodyTypeButton_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, Base) == 0x000290, "Member 'UWBP_CharaCre_BodyTypeButton_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, Frame) == 0x000298, "Member 'UWBP_CharaCre_BodyTypeButton_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, Text_BodyType) == 0x0002A0, "Member 'UWBP_CharaCre_BodyTypeButton_C::Text_BodyType' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, WBP_PalInvisibleButton) == 0x0002A8, "Member 'UWBP_CharaCre_BodyTypeButton_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, MsgId) == 0x0002B0, "Member 'UWBP_CharaCre_BodyTypeButton_C::MsgId' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, Bind_Preset_Name) == 0x0002C0, "Member 'UWBP_CharaCre_BodyTypeButton_C::Bind_Preset_Name' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, OnClicked) == 0x0002C8, "Member 'UWBP_CharaCre_BodyTypeButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_BodyTypeButton_C, VoiceMsgID) == 0x0002D8, "Member 'UWBP_CharaCre_BodyTypeButton_C::VoiceMsgID' has a wrong offset!");

}

