#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_Tab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_OptionSettings_Tab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OptionSettings_TabButton_C*        WBP_OptionSettings_TabButton;                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_TabButton_C*        WBP_OptionSettings_TabButton_1;                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_TabButton_C*        WBP_OptionSettings_TabButton_2;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_OptionSettings_TabButton_C*> Tabs;                                              // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_OptionSettings_TabButton_C*> ActiveTabs;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         Current;                                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SwitchTabTo(int32 Param_Index);
	void SwitchTab(bool Next);
	void SetupTabs(const TArray<struct FDataTableRowHandle>& Names);
	void Setup(class UWBP_OptionSettings_C* SettingPanel);
	void ExecuteUbergraph_WBP_OptionSettings_Tab(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionSettings_Tab_C">();
	}
	static class UWBP_OptionSettings_Tab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionSettings_Tab_C>();
	}
};
static_assert(alignof(UWBP_OptionSettings_Tab_C) == 0x000008, "Wrong alignment on UWBP_OptionSettings_Tab_C");
static_assert(sizeof(UWBP_OptionSettings_Tab_C) == 0x0002C0, "Wrong size on UWBP_OptionSettings_Tab_C");
static_assert(offsetof(UWBP_OptionSettings_Tab_C, UberGraphFrame) == 0x000278, "Member 'UWBP_OptionSettings_Tab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_Tab_C, WBP_OptionSettings_TabButton) == 0x000280, "Member 'UWBP_OptionSettings_Tab_C::WBP_OptionSettings_TabButton' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_Tab_C, WBP_OptionSettings_TabButton_1) == 0x000288, "Member 'UWBP_OptionSettings_Tab_C::WBP_OptionSettings_TabButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_Tab_C, WBP_OptionSettings_TabButton_2) == 0x000290, "Member 'UWBP_OptionSettings_Tab_C::WBP_OptionSettings_TabButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_Tab_C, Tabs) == 0x000298, "Member 'UWBP_OptionSettings_Tab_C::Tabs' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_Tab_C, ActiveTabs) == 0x0002A8, "Member 'UWBP_OptionSettings_Tab_C::ActiveTabs' has a wrong offset!");
static_assert(offsetof(UWBP_OptionSettings_Tab_C, Current) == 0x0002B8, "Member 'UWBP_OptionSettings_Tab_C::Current' has a wrong offset!");

}

