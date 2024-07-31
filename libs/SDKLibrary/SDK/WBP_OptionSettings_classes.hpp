#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionSettings.WBP_OptionSettings_C
// 0x0118 (0x0548 - 0x0430)
class UWBP_OptionSettings_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_List_OutToIn;                                  // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_CloseToOpen;                                   // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Default;                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Settings;                              // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*       WBP_OptionSettings_MenuButton_Game;                // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*       WBP_OptionSettings_MenuButton_Graphic;             // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*       WBP_OptionSettings_MenuButton_Key;                 // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*       WBP_OptionSettings_MenuButton_Other;               // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*       WBP_OptionSettings_MenuButton_Other_1;             // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_MenuButton_C*       WBP_OptionSettings_MenuButton_Sound;               // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_Tab_C*              WBP_OptionSettings_Tab;                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*             WBP_PalCommonScrollList;                           // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon_Back;                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 WBP_PalKeyGuideIcon_Default;                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Switching;                                         // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9[0x3];                                      // 0x04A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DefaultActionName;                                 // 0x04AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PreTabActionName;                                  // 0x04B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NextTabActionName;                                 // 0x04BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4[0x4];                                      // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Graphic_Settings_C*                GraphicSettings;                                   // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Sound_Settings_C*                  AudioSettings;                                     // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Key_Settings_C*                    KeySettings;                                       // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Control_Settings_C*                GameSettings;                                      // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Other_Settings_C*                  OtherSettings;                                     // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    SetDefaultMsgID;                                   // 0x04F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CloseMsgID;                                        // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FDataTableRowHandle>            ControlTabMsgIDs;                                  // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalUIActionBindData                   BackActionBinding;                                 // 0x0520(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   DefaultActionBinding;                              // 0x0524(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   PreTabActionBinding;                               // 0x0528(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                   NextTabActionBinding;                              // 0x052C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWidget*                                LastFocus;                                         // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ConflictMsgId;                                     // 0x0538(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void SwitchTabTo(int32 Param_Index);
	void SetDefaultAction();
	void SetDefault(bool Confirmed);
	void Set_Tab_Action(bool Bind);
	void PreTab();
	void OpenPanel();
	void NextTab();
	void Finished_EE961C0249D44ADFCC582DBCE988D50D();
	void Finished_E609EC2649DD5C39B8991FA76989D962();
	void Finished_A36E9B0F4ACC421F93D76BA170A1BA11();
	void Finished_657FDFA04D1EEBEC31C7FAA8DADA417B();
	void Finished_47188B3742112F703AC219B6DFD31698();
	void Finished_412D6FCC467DE29951851EB38295E8FE();
	void Finished_3DF735A247AFD17B1935A8AD119ED44F();
	void Finished_2536FBE94511E5E94401869A3ECF77EC();
	void Finished_24865DB74E2CDF7AF1AD4D9DBEE2B394();
	void Finished_2034482C493806B667AA82AE6C6A732D();
	void Finished_05846F744E202D6A15C4A8ABCE740327();
	void ExecuteUbergraph_WBP_OptionSettings(int32 EntryPoint);
	void EmptyEvent(bool bResult);
	void Construct();
	void ClosePanel();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Sound_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Other_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Other_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Key_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Graphic_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Control_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BackAction();
	void ApplySettings(bool Confirmed);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionSettings_C">();
	}
	static class UWBP_OptionSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionSettings_C>();
	}
};
static_assert(alignof(UWBP_OptionSettings_C) == 0x000008, "Wrong alignment on UWBP_OptionSettings_C");
static_assert(sizeof(UWBP_OptionSettings_C) == 0x000548, "Wrong size on UWBP_OptionSettings_C");
static_assert(offsetof(UWBP_OptionSettings_C, UberGraphFrame) == 0x000430, "Member 'UWBP_OptionSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, Anm_List_OutToIn) == 0x000438, "Member 'UWBP_OptionSettings_C::Anm_List_OutToIn' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, Anm_CloseToOpen) == 0x000440, "Member 'UWBP_OptionSettings_C::Anm_CloseToOpen' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, BP_PalTextBlock_Default) == 0x000448, "Member 'UWBP_OptionSettings_C::BP_PalTextBlock_Default' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, CanvasPanel_Settings) == 0x000450, "Member 'UWBP_OptionSettings_C::CanvasPanel_Settings' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_OptionSettings_MenuButton_Game) == 0x000458, "Member 'UWBP_OptionSettings_C::WBP_OptionSettings_MenuButton_Game' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_OptionSettings_MenuButton_Graphic) == 0x000460, "Member 'UWBP_OptionSettings_C::WBP_OptionSettings_MenuButton_Graphic' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_OptionSettings_MenuButton_Key) == 0x000468, "Member 'UWBP_OptionSettings_C::WBP_OptionSettings_MenuButton_Key' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_OptionSettings_MenuButton_Other) == 0x000470, "Member 'UWBP_OptionSettings_C::WBP_OptionSettings_MenuButton_Other' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_OptionSettings_MenuButton_Other_1) == 0x000478, "Member 'UWBP_OptionSettings_C::WBP_OptionSettings_MenuButton_Other_1' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_OptionSettings_MenuButton_Sound) == 0x000480, "Member 'UWBP_OptionSettings_C::WBP_OptionSettings_MenuButton_Sound' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_OptionSettings_Tab) == 0x000488, "Member 'UWBP_OptionSettings_C::WBP_OptionSettings_Tab' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_PalCommonScrollList) == 0x000490, "Member 'UWBP_OptionSettings_C::WBP_PalCommonScrollList' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_PalKeyGuideIcon_Back) == 0x000498, "Member 'UWBP_OptionSettings_C::WBP_PalKeyGuideIcon_Back' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, WBP_PalKeyGuideIcon_Default) == 0x0004A0, "Member 'UWBP_OptionSettings_C::WBP_PalKeyGuideIcon_Default' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, Switching) == 0x0004A8, "Member 'UWBP_OptionSettings_C::Switching' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, DefaultActionName) == 0x0004AC, "Member 'UWBP_OptionSettings_C::DefaultActionName' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, PreTabActionName) == 0x0004B4, "Member 'UWBP_OptionSettings_C::PreTabActionName' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, NextTabActionName) == 0x0004BC, "Member 'UWBP_OptionSettings_C::NextTabActionName' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, GraphicSettings) == 0x0004C8, "Member 'UWBP_OptionSettings_C::GraphicSettings' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, AudioSettings) == 0x0004D0, "Member 'UWBP_OptionSettings_C::AudioSettings' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, KeySettings) == 0x0004D8, "Member 'UWBP_OptionSettings_C::KeySettings' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, GameSettings) == 0x0004E0, "Member 'UWBP_OptionSettings_C::GameSettings' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, OtherSettings) == 0x0004E8, "Member 'UWBP_OptionSettings_C::OtherSettings' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, SetDefaultMsgID) == 0x0004F0, "Member 'UWBP_OptionSettings_C::SetDefaultMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, CloseMsgID) == 0x000500, "Member 'UWBP_OptionSettings_C::CloseMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, ControlTabMsgIDs) == 0x000510, "Member 'UWBP_OptionSettings_C::ControlTabMsgIDs' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, BackActionBinding) == 0x000520, "Member 'UWBP_OptionSettings_C::BackActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, DefaultActionBinding) == 0x000524, "Member 'UWBP_OptionSettings_C::DefaultActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, PreTabActionBinding) == 0x000528, "Member 'UWBP_OptionSettings_C::PreTabActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, NextTabActionBinding) == 0x00052C, "Member 'UWBP_OptionSettings_C::NextTabActionBinding' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, LastFocus) == 0x000530, "Member 'UWBP_OptionSettings_C::LastFocus' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_C, ConflictMsgId) == 0x000538, "Member 'UWBP_OptionSettings_C::ConflictMsgId' has a wrong offset!");

}

