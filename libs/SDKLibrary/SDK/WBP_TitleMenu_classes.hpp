#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TitleMenu.WBP_TitleMenu_C
// 0x0118 (0x0390 - 0x0278)
class UWBP_TitleMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_TitleClose;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_TitleOpen;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_118;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_EarlyAccess;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Ver;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Ver_UserInfo;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                WBP_Title_MenuButton_Credit;                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                WBP_Title_MenuButton_ExitGame;                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                WBP_Title_MenuButton_News;                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                WBP_Title_MenuButton_Option;                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                WBP_Title_MenuButton_StartLocalGame;               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                WBP_Title_MenuButton_StartMultiGame_InviteCode;    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                WBP_Title_MenuButton_StartMultiGame_JoinServer;    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*                WBP_Title_MenuButton_Tips;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedMenu;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FString, class FString>            BuildConfigDisplayTextMap;                         // 0x0300(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                    EarlyAccessDialogMsgID_GDK;                        // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    EarlyAccessMsgID_GDK;                              // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    EarlyAccessMsgID_Windows;                          // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ServerNoticeMsgID;                                 // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ________(bool bResult);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnClickedMenu__DelegateSignature(class UWBP_Title_MenuButton_C* ButtonWidget);
	void GetTopButton(class UWidget** TargetWidget);
	void ExecuteUbergraph_WBP_TitleMenu(int32 EntryPoint);
	void Construct();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_Tips_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_StartMultiGame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_StartMultiGame_InviteCode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_StartLocalGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_Option_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_News_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_ExitGame_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_Credit_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TitleMenu_C">();
	}
	static class UWBP_TitleMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TitleMenu_C>();
	}
};
static_assert(alignof(UWBP_TitleMenu_C) == 0x000008, "Wrong alignment on UWBP_TitleMenu_C");
static_assert(sizeof(UWBP_TitleMenu_C) == 0x000390, "Wrong size on UWBP_TitleMenu_C");
static_assert(offsetof(UWBP_TitleMenu_C, UberGraphFrame) == 0x000278, "Member 'UWBP_TitleMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, Anm_TitleClose) == 0x000280, "Member 'UWBP_TitleMenu_C::Anm_TitleClose' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, Anm_TitleOpen) == 0x000288, "Member 'UWBP_TitleMenu_C::Anm_TitleOpen' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, Image_118) == 0x000290, "Member 'UWBP_TitleMenu_C::Image_118' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, Text_EarlyAccess) == 0x000298, "Member 'UWBP_TitleMenu_C::Text_EarlyAccess' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, Text_Ver) == 0x0002A0, "Member 'UWBP_TitleMenu_C::Text_Ver' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, Text_Ver_UserInfo) == 0x0002A8, "Member 'UWBP_TitleMenu_C::Text_Ver_UserInfo' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, WBP_Title_MenuButton_Credit) == 0x0002B0, "Member 'UWBP_TitleMenu_C::WBP_Title_MenuButton_Credit' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, WBP_Title_MenuButton_ExitGame) == 0x0002B8, "Member 'UWBP_TitleMenu_C::WBP_Title_MenuButton_ExitGame' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, WBP_Title_MenuButton_News) == 0x0002C0, "Member 'UWBP_TitleMenu_C::WBP_Title_MenuButton_News' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, WBP_Title_MenuButton_Option) == 0x0002C8, "Member 'UWBP_TitleMenu_C::WBP_Title_MenuButton_Option' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, WBP_Title_MenuButton_StartLocalGame) == 0x0002D0, "Member 'UWBP_TitleMenu_C::WBP_Title_MenuButton_StartLocalGame' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, WBP_Title_MenuButton_StartMultiGame_InviteCode) == 0x0002D8, "Member 'UWBP_TitleMenu_C::WBP_Title_MenuButton_StartMultiGame_InviteCode' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, WBP_Title_MenuButton_StartMultiGame_JoinServer) == 0x0002E0, "Member 'UWBP_TitleMenu_C::WBP_Title_MenuButton_StartMultiGame_JoinServer' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, WBP_Title_MenuButton_Tips) == 0x0002E8, "Member 'UWBP_TitleMenu_C::WBP_Title_MenuButton_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, OnClickedMenu) == 0x0002F0, "Member 'UWBP_TitleMenu_C::OnClickedMenu' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, BuildConfigDisplayTextMap) == 0x000300, "Member 'UWBP_TitleMenu_C::BuildConfigDisplayTextMap' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, EarlyAccessDialogMsgID_GDK) == 0x000350, "Member 'UWBP_TitleMenu_C::EarlyAccessDialogMsgID_GDK' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, EarlyAccessMsgID_GDK) == 0x000360, "Member 'UWBP_TitleMenu_C::EarlyAccessMsgID_GDK' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, EarlyAccessMsgID_Windows) == 0x000370, "Member 'UWBP_TitleMenu_C::EarlyAccessMsgID_Windows' has a wrong offset!");
static_assert(offsetof(UWBP_TitleMenu_C, ServerNoticeMsgID) == 0x000380, "Member 'UWBP_TitleMenu_C::ServerNoticeMsgID' has a wrong offset!");

}

