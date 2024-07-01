#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_MenuButton

#include "Basic.hpp"

#include "E_PalUITitleMenuButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_MenuButton.WBP_Title_MenuButton_C
// 0x00C8 (0x0340 - 0x0278)
class UWBP_Title_MenuButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Disable;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Push;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Focus;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseLineB;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseLineT;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseSel;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_161;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Test_Content;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_PalUITitleMenuButtonType                    buttonType;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411F[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_PalUITitleMenuButtonType, struct FDataTableRowHandle> MsgIDMap;                                          // 0x02F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void OnClicked__DelegateSignature();
	void GetMenuType(E_PalUITitleMenuButtonType* BindedMenuType);
	void ExecuteUbergraph_WBP_Title_MenuButton(int32 EntryPoint);
	void BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_MenuButton_C">();
	}
	static class UWBP_Title_MenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_MenuButton_C>();
	}
};
static_assert(alignof(UWBP_Title_MenuButton_C) == 0x000008, "Wrong alignment on UWBP_Title_MenuButton_C");
static_assert(sizeof(UWBP_Title_MenuButton_C) == 0x000340, "Wrong size on UWBP_Title_MenuButton_C");
static_assert(offsetof(UWBP_Title_MenuButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Title_MenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, Anm_Disable) == 0x000280, "Member 'UWBP_Title_MenuButton_C::Anm_Disable' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, Anm_Push) == 0x000288, "Member 'UWBP_Title_MenuButton_C::Anm_Push' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, Anm_Focus) == 0x000290, "Member 'UWBP_Title_MenuButton_C::Anm_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, Anm_Normal) == 0x000298, "Member 'UWBP_Title_MenuButton_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, Base) == 0x0002A0, "Member 'UWBP_Title_MenuButton_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, BaseLineB) == 0x0002A8, "Member 'UWBP_Title_MenuButton_C::BaseLineB' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, BaseLineT) == 0x0002B0, "Member 'UWBP_Title_MenuButton_C::BaseLineT' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, BaseSel) == 0x0002B8, "Member 'UWBP_Title_MenuButton_C::BaseSel' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, Image_161) == 0x0002C0, "Member 'UWBP_Title_MenuButton_C::Image_161' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, Test_Content) == 0x0002C8, "Member 'UWBP_Title_MenuButton_C::Test_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, WBP_PalInvisibleButton) == 0x0002D0, "Member 'UWBP_Title_MenuButton_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, OnClicked) == 0x0002D8, "Member 'UWBP_Title_MenuButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, buttonType) == 0x0002E8, "Member 'UWBP_Title_MenuButton_C::buttonType' has a wrong offset!");
static_assert(offsetof(UWBP_Title_MenuButton_C, MsgIDMap) == 0x0002F0, "Member 'UWBP_Title_MenuButton_C::MsgIDMap' has a wrong offset!");

}

