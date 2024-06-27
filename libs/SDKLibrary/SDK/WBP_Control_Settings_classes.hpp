#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Control_Settings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Control_Settings.WBP_Control_Settings_C
// 0x0228 (0x04A0 - 0x0278)
class UWBP_Control_Settings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_Common;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_GP;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_KM;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_AIM;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Common_Disable_AutoPickItem;    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Common_Disable_GuildRequest;    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Dash;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_GP_AIM;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_GP_Dash;                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_GP_ToggleLongPress;             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_HideChat;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_ReticlePreview_C* WBP_OptionSettings_ListContent_ReticlePreview;     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_LStick_Threshold;               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RStick_Sensitivity;             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RStick_Threshold;               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RStick_X;                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_RStick_Y;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Sensitivity;                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_ToggleLongPress;                // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_ChatUICloseDelay;            // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_DamageScale;                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_MaxDamageDisplayNum;         // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_ReticleColor;                // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_ReticleOutlineOpacity;       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_UI_TutorialDisplay;             // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Vibration;                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_X;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*      WBP_OptionSettings_Y;                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalOptionAudioSettings                AudioSettingCache;                                 // 0x0360(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_1224[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDataTableRowHandle>            LevelMsgIds;                                       // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SomethingChanged;                                  // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1225[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionKeyboardSettings             KeyboardSettingCache;                              // 0x0394(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalOptionLocalStaticSettings          LocalStaticSettingCache;                           // 0x03A8(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalOptionPadSettings                  PadSettingCache;                                   // 0x0400(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_1226[0x4];                                     // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVerticalBox*>                   VerticalBoxs;                                      // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_PalCommonButtonBase_C*>     FirstRows;                                         // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         Current;                                           // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionUISettings                   UISettingCache;                                    // 0x0444(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_1227[0x4];                                     // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionCommonSettings               CommonSettingCache;                                // 0x0460(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>            ColorSelections;                                   // 0x0490(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

public:
	void SwitchTab(bool Next);
	void SwitchPanel(int32 Param_Index);
	void SetDefault();
	void OnVibChanged(bool IsOn);
	void OnTutorialDisplayChanged(bool IsOn);
	void OnToggleLongPressChanged_GP(bool IsOn);
	void OnToggleLongPressChanged(bool IsOn);
	void OnRStickYChanged(bool IsOn);
	void OnRStickXChanged(bool IsOn);
	void OnRStickThreChanged(double Value);
	void OnRStickSensiChanged(double Value);
	void OnMouseYChanged(bool IsOn);
	void OnMouseXChanged(bool IsOn);
	void OnMouseSensiChanged(double Value);
	void OnMouseAIMChanged(double Value);
	void OnLStickThreChanged(double Value);
	void OnHideChatChanged(bool IsOn);
	void OnGPDashChanged(bool IsOn);
	void OnGPAimChanged(double Value);
	void OnDashChanged(bool IsOn);
	void OnChatUICloseDelayChanged(double Value);
	void OnChangedReticleOutline(double Value);
	void OnChangedReticleColor(int32 ColorIndex);
	void OnChangedMaxDamageDisplayNum(double Value);
	void OnChangedDisableGuildJoined(bool IsOn);
	void OnChangedDisableAutoItemPick(bool IsOn);
	void OnChangedDamageTextScale(double Value);
	void GetDesiredFocusTarget(class UWidget** Target);
	void ExecuteUbergraph_WBP_Control_Settings(int32 EntryPoint);
	void Construct();
	void ApplySettings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Control_Settings_C">();
	}
	static class UWBP_Control_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Control_Settings_C>();
	}
};
static_assert(alignof(UWBP_Control_Settings_C) == 0x000008, "Wrong alignment on UWBP_Control_Settings_C");
static_assert(sizeof(UWBP_Control_Settings_C) == 0x0004A0, "Wrong size on UWBP_Control_Settings_C");
static_assert(offsetof(UWBP_Control_Settings_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Control_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, VerticalBox_Common) == 0x000280, "Member 'UWBP_Control_Settings_C::VerticalBox_Common' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, VerticalBox_GP) == 0x000288, "Member 'UWBP_Control_Settings_C::VerticalBox_GP' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, VerticalBox_KM) == 0x000290, "Member 'UWBP_Control_Settings_C::VerticalBox_KM' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_AIM) == 0x000298, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_AIM' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Common_Disable_AutoPickItem) == 0x0002A0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Common_Disable_AutoPickItem' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Common_Disable_GuildRequest) == 0x0002A8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Common_Disable_GuildRequest' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Dash) == 0x0002B0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Dash' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_GP_AIM) == 0x0002B8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_GP_AIM' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_GP_Dash) == 0x0002C0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_GP_Dash' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_GP_ToggleLongPress) == 0x0002C8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_GP_ToggleLongPress' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_HideChat) == 0x0002D0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_HideChat' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_ListContent_ReticlePreview) == 0x0002D8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_ListContent_ReticlePreview' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_LStick_Threshold) == 0x0002E0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_LStick_Threshold' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_RStick_Sensitivity) == 0x0002E8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_RStick_Sensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_RStick_Threshold) == 0x0002F0, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_RStick_Threshold' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_RStick_X) == 0x0002F8, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_RStick_X' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_RStick_Y) == 0x000300, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_RStick_Y' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Sensitivity) == 0x000308, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Sensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_ToggleLongPress) == 0x000310, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_ToggleLongPress' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_ChatUICloseDelay) == 0x000318, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_ChatUICloseDelay' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_DamageScale) == 0x000320, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_DamageScale' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_MaxDamageDisplayNum) == 0x000328, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_MaxDamageDisplayNum' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_ReticleColor) == 0x000330, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_ReticleColor' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_ReticleOutlineOpacity) == 0x000338, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_ReticleOutlineOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_UI_TutorialDisplay) == 0x000340, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_UI_TutorialDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Vibration) == 0x000348, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Vibration' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_X) == 0x000350, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_X' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, WBP_OptionSettings_Y) == 0x000358, "Member 'UWBP_Control_Settings_C::WBP_OptionSettings_Y' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, AudioSettingCache) == 0x000360, "Member 'UWBP_Control_Settings_C::AudioSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, LevelMsgIds) == 0x000380, "Member 'UWBP_Control_Settings_C::LevelMsgIds' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, SomethingChanged) == 0x000390, "Member 'UWBP_Control_Settings_C::SomethingChanged' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, KeyboardSettingCache) == 0x000394, "Member 'UWBP_Control_Settings_C::KeyboardSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, LocalStaticSettingCache) == 0x0003A8, "Member 'UWBP_Control_Settings_C::LocalStaticSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, PadSettingCache) == 0x000400, "Member 'UWBP_Control_Settings_C::PadSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, VerticalBoxs) == 0x000420, "Member 'UWBP_Control_Settings_C::VerticalBoxs' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, FirstRows) == 0x000430, "Member 'UWBP_Control_Settings_C::FirstRows' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, Current) == 0x000440, "Member 'UWBP_Control_Settings_C::Current' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, UISettingCache) == 0x000444, "Member 'UWBP_Control_Settings_C::UISettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, CommonSettingCache) == 0x000460, "Member 'UWBP_Control_Settings_C::CommonSettingCache' has a wrong offset!");
static_assert(offsetof(UWBP_Control_Settings_C, ColorSelections) == 0x000490, "Member 'UWBP_Control_Settings_C::ColorSelections' has a wrong offset!");

}

