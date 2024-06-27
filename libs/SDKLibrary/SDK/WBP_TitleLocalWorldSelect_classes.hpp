#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleLocalWorldSelect

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C
// 0x00B0 (0x0530 - 0x0480)
class UWBP_TitleLocalWorldSelect_C final : public UPalUILocalWorldSelectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_69;                                          // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Root;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldMenu_Head_C*            WBP_Title_WorldMenu_Head;                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSelect_C*               WBP_Title_WorldSelect;                             // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 SelectedWorldSaveDirectoryName;                    // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWidget*                                ForceFocusTarget;                                  // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FPalUILocalWorldDisplayData> CachedDisplayInfo;                                 // 0x04C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Selected_World_Name;                               // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Options;                                           // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ________(bool bResult);
	void WBP_TitleLocalWorldSelect_AutoGenFunc(bool bResult);
	void SetupWorldList();
	void OnSetup();
	void OnInitialized();
	void OnCancelAction();
	void On_Closed_World_Setting_Window(class UPalHUDDispatchParameterBase* Param_Param);
	void On_Closed_Delete_World_Window(class UPalHUDDispatchParameterBase* Param_Param);
	void ExecuteUbergraph_WBP_TitleLocalWorldSelect(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* SelectedWorldButton);
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* SelectedWorldButton);
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_4_OnClickedDeleteWorldButton__DelegateSignature();
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnClickedWorldSettingButton__DelegateSignature();
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedStartWorldButton__DelegateSignature();
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature(class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* ButtonWidget);
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* ButtonWidget);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TitleLocalWorldSelect_C">();
	}
	static class UWBP_TitleLocalWorldSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TitleLocalWorldSelect_C>();
	}
};
static_assert(alignof(UWBP_TitleLocalWorldSelect_C) == 0x000008, "Wrong alignment on UWBP_TitleLocalWorldSelect_C");
static_assert(sizeof(UWBP_TitleLocalWorldSelect_C) == 0x000530, "Wrong size on UWBP_TitleLocalWorldSelect_C");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, UberGraphFrame) == 0x000480, "Member 'UWBP_TitleLocalWorldSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, Image_69) == 0x000488, "Member 'UWBP_TitleLocalWorldSelect_C::Image_69' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, Overlay_Root) == 0x000490, "Member 'UWBP_TitleLocalWorldSelect_C::Overlay_Root' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, WBP_Title_WorldMenu_Head) == 0x000498, "Member 'UWBP_TitleLocalWorldSelect_C::WBP_Title_WorldMenu_Head' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, WBP_Title_WorldSelect) == 0x0004A0, "Member 'UWBP_TitleLocalWorldSelect_C::WBP_Title_WorldSelect' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, SelectedWorldSaveDirectoryName) == 0x0004A8, "Member 'UWBP_TitleLocalWorldSelect_C::SelectedWorldSaveDirectoryName' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, ForceFocusTarget) == 0x0004B8, "Member 'UWBP_TitleLocalWorldSelect_C::ForceFocusTarget' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, CachedDisplayInfo) == 0x0004C0, "Member 'UWBP_TitleLocalWorldSelect_C::CachedDisplayInfo' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, Selected_World_Name) == 0x000510, "Member 'UWBP_TitleLocalWorldSelect_C::Selected_World_Name' has a wrong offset!");
static_assert(offsetof(UWBP_TitleLocalWorldSelect_C, Options) == 0x000520, "Member 'UWBP_TitleLocalWorldSelect_C::Options' has a wrong offset!");

}

