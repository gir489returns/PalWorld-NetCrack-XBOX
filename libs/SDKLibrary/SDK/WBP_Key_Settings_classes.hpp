#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Key_Settings

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Key_Settings.WBP_Key_Settings_C
// 0x0430 (0x06A8 - 0x0278)
class UWBP_Key_Settings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_GP;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_GP_Action;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_GP_UI;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_KM;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_KM_Action;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_KM_UI;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          SomethingChanged;                                  // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVerticalBox*>                   VerticalBoxs;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_PalCommonButtonBase_C*>     FirstRows;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         Current;                                           // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UWBP_OptionSettings_ListContent_C*> InputActionsMap_KM;                                // 0x02E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, class UWBP_OptionSettings_ListContent_C*> InputActionsMap_GP;                                // 0x0330(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, class UWBP_OptionSettings_ListContent_C*> UIActionsMap_KM;                                   // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, class UWBP_OptionSettings_ListContent_C*> UIActionsMap_GP;                                   // 0x03D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FPalKeyConfigSettings                  KeyConfigSettingsCache;                            // 0x0420(0x0160)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FPalKeyAction>       AxisMap;                                           // 0x0580(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FPalKeyAction, class FName>       ReverseAxisMap;                                    // 0x05D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          BackFromSetting;                                   // 0x0620(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_621[0x7];                                      // 0x0621(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CachedSettingKey;                                  // 0x0628(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           FilterActionKeys;                                  // 0x0640(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          KeyConflict_KM;                                    // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UIKeyConflict_KM;                                  // 0x0651(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeyConflict_GP;                                    // 0x0652(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UIKeyConflict_GP;                                  // 0x0653(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_654[0x4];                                      // 0x0654(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FName>                MultiKeyMap;                                       // 0x0658(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

public:
	void UI_Key_Conflict_Check(EPalKeyConfigCategory FilterType);
	void SwitchTab(bool Next);
	void SwitchPanel(int32 Param_Index);
	void SetDefault();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnInitialized();
	void On_UI_Key_Config_Changing(class FName KeyName, ECommonInputType InputType, EPalKeyConfigAxisFilterType AxisType);
	void On_UI_Action_Key_Changed(class FName ActionName, const struct FKey& NewKey, EPalKeyConfigCategory InputType, EPalKeyConfigAxisFilterType AxisType);
	void On_Key_Config_Changing(class FName KeyName, ECommonInputType InputType, EPalKeyConfigAxisFilterType AxisType);
	void On_Action_Key_Changed(class FName ActionName, const struct FKey& NewKey, EPalKeyConfigCategory InputType, EPalKeyConfigAxisFilterType AxisType);
	void Multi_Key_Setting(const TMap<class FName, struct FPalKeyConfigKeys>& TargetMap, const class FName& ActionName, const struct FPalKeyConfigKeys& Key);
	void Key_Conflict_Check(EPalKeyConfigCategory FilterType);
	bool IsSetableAction(const struct FPalKeyAction& Key, ECommonInputType InputType);
	void GetKeybyAction(const struct FPalKeyAction& PalKeyAction, EPalKeyConfigCategory FilterType, struct FKey* Key);
	void GetDesiredFocusTarget(class UWidget** Target);
	void Get_UI_Conflict_Actions(const class FName& CheckingAction, EPalKeyConfigCategory FilterType, TArray<class FName>* KeyActions);
	void Get_Conflict_Actions(const struct FPalKeyAction& CheckingAction, EPalKeyConfigCategory FilterType, TArray<struct FPalKeyAction>* KeyActions);
	void Get_Actions_By_Key(const struct FKey& Key, ECommonInputType InputType, TArray<struct FPalKeyAction>* KeyActions);
	void ExecuteUbergraph_WBP_Key_Settings(int32 EntryPoint);
	void Construct();
	void ApplySettings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Key_Settings_C">();
	}
	static class UWBP_Key_Settings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Key_Settings_C>();
	}
};
static_assert(alignof(UWBP_Key_Settings_C) == 0x000008, "Wrong alignment on UWBP_Key_Settings_C");
static_assert(sizeof(UWBP_Key_Settings_C) == 0x0006A8, "Wrong size on UWBP_Key_Settings_C");
static_assert(offsetof(UWBP_Key_Settings_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Key_Settings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, VerticalBox_GP) == 0x000280, "Member 'UWBP_Key_Settings_C::VerticalBox_GP' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, VerticalBox_GP_Action) == 0x000288, "Member 'UWBP_Key_Settings_C::VerticalBox_GP_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, VerticalBox_GP_UI) == 0x000290, "Member 'UWBP_Key_Settings_C::VerticalBox_GP_UI' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, VerticalBox_KM) == 0x000298, "Member 'UWBP_Key_Settings_C::VerticalBox_KM' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, VerticalBox_KM_Action) == 0x0002A0, "Member 'UWBP_Key_Settings_C::VerticalBox_KM_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, VerticalBox_KM_UI) == 0x0002A8, "Member 'UWBP_Key_Settings_C::VerticalBox_KM_UI' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, SomethingChanged) == 0x0002B0, "Member 'UWBP_Key_Settings_C::SomethingChanged' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, VerticalBoxs) == 0x0002B8, "Member 'UWBP_Key_Settings_C::VerticalBoxs' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, FirstRows) == 0x0002C8, "Member 'UWBP_Key_Settings_C::FirstRows' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, Current) == 0x0002D8, "Member 'UWBP_Key_Settings_C::Current' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, InputActionsMap_KM) == 0x0002E0, "Member 'UWBP_Key_Settings_C::InputActionsMap_KM' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, InputActionsMap_GP) == 0x000330, "Member 'UWBP_Key_Settings_C::InputActionsMap_GP' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, UIActionsMap_KM) == 0x000380, "Member 'UWBP_Key_Settings_C::UIActionsMap_KM' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, UIActionsMap_GP) == 0x0003D0, "Member 'UWBP_Key_Settings_C::UIActionsMap_GP' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, KeyConfigSettingsCache) == 0x000420, "Member 'UWBP_Key_Settings_C::KeyConfigSettingsCache' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, AxisMap) == 0x000580, "Member 'UWBP_Key_Settings_C::AxisMap' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, ReverseAxisMap) == 0x0005D0, "Member 'UWBP_Key_Settings_C::ReverseAxisMap' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, BackFromSetting) == 0x000620, "Member 'UWBP_Key_Settings_C::BackFromSetting' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, CachedSettingKey) == 0x000628, "Member 'UWBP_Key_Settings_C::CachedSettingKey' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, FilterActionKeys) == 0x000640, "Member 'UWBP_Key_Settings_C::FilterActionKeys' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, KeyConflict_KM) == 0x000650, "Member 'UWBP_Key_Settings_C::KeyConflict_KM' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, UIKeyConflict_KM) == 0x000651, "Member 'UWBP_Key_Settings_C::UIKeyConflict_KM' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, KeyConflict_GP) == 0x000652, "Member 'UWBP_Key_Settings_C::KeyConflict_GP' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, UIKeyConflict_GP) == 0x000653, "Member 'UWBP_Key_Settings_C::UIKeyConflict_GP' has a wrong offset!");
static_assert(offsetof(UWBP_Key_Settings_C, MultiKeyMap) == 0x000658, "Member 'UWBP_Key_Settings_C::MultiKeyMap' has a wrong offset!");

}

