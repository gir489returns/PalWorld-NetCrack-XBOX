#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_MenuButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_UICharacterMakeCategory_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_MenuButton.WBP_CharaCre_MenuButton_C
// 0x00B8 (0x0330 - 0x0278)
class UWBP_CharaCre_MenuButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Dot_0;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_1;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_2;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot_3;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocusFrame;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Main;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_UICharacterMakeCategory                     BindCategory;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48A0[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_UICharacterMakeCategory, struct FDataTableRowHandle> MsgIDMap;                                          // 0x02E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AnmEvent_Normal();
	void AnmEvent_Reset();
	void AnmEvent_Select();
	void BndEvt__WBP_CharaCre_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_CharaCre_MenuButton(int32 EntryPoint);
	void GetBindedCategory(E_UICharacterMakeCategory* CategoryType);
	void OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_MenuButton_C">();
	}
	static class UWBP_CharaCre_MenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_MenuButton_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_MenuButton_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_MenuButton_C");
static_assert(sizeof(UWBP_CharaCre_MenuButton_C) == 0x000330, "Wrong size on UWBP_CharaCre_MenuButton_C");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaCre_MenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, Anm_NormalToFocus) == 0x000280, "Member 'UWBP_CharaCre_MenuButton_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, Dot_0) == 0x000288, "Member 'UWBP_CharaCre_MenuButton_C::Dot_0' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, Dot_1) == 0x000290, "Member 'UWBP_CharaCre_MenuButton_C::Dot_1' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, Dot_2) == 0x000298, "Member 'UWBP_CharaCre_MenuButton_C::Dot_2' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, Dot_3) == 0x0002A0, "Member 'UWBP_CharaCre_MenuButton_C::Dot_3' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, FocusFrame) == 0x0002A8, "Member 'UWBP_CharaCre_MenuButton_C::FocusFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, Frame) == 0x0002B0, "Member 'UWBP_CharaCre_MenuButton_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, Text_Main) == 0x0002B8, "Member 'UWBP_CharaCre_MenuButton_C::Text_Main' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, WBP_PalInvisibleButton) == 0x0002C0, "Member 'UWBP_CharaCre_MenuButton_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, OnClicked) == 0x0002C8, "Member 'UWBP_CharaCre_MenuButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, BindCategory) == 0x0002D8, "Member 'UWBP_CharaCre_MenuButton_C::BindCategory' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_MenuButton_C, MsgIDMap) == 0x0002E0, "Member 'UWBP_CharaCre_MenuButton_C::MsgIDMap' has a wrong offset!");

}

