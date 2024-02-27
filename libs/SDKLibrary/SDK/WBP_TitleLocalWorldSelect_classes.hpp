#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x530 - 0x480)
// WidgetBlueprintGeneratedClass WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C
class UWBP_TitleLocalWorldSelect_C : public UPalUILocalWorldSelectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_69;                                          // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Root;                                      // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldMenu_Head_C*           WBP_Title_WorldMenu_Head;                          // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSelect_C*              WBP_Title_WorldSelect;                             // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                SelectedWorldSaveDirectoryName;                    // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWidget*                               ForceFocusTarget;                                  // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FPalUILocalWorldDisplayData> CachedDisplayInfo;                                 // 0x4C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                Selected_World_Name;                               // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Options;                                           // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_TitleLocalWorldSelect_C* GetDefaultObj();

	void WBP_TitleLocalWorldSelect_AutoGenFunc(bool bResult);
	void On_Closed_Delete_World_Window(class UPalHUDDispatchParameterBase* Param, class UBP_HUDDIspatchParameter_DeleteWorld_C* K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World, bool K2Node_DynamicCast_bSuccess, TArray<struct FPalUILocalWorldDisplayData>& CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget, bool CallFunc_DeleteWorld_ReturnValue);
	void On_Closed_World_Setting_Window(class UPalHUDDispatchParameterBase* Param, class UPalHUDDispatchParameter_WorldSetting* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting, bool K2Node_DynamicCast_bSuccess, const struct FPalUILocalWorldDisplayData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalUILocalWorldDisplayData& K2Node_SetFieldsInStruct_StructOut);
	void OnCancelAction(class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget);
	void SetupWorldList(TArray<struct FPalUILocalWorldDisplayData>& CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue, class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget, TMap<class FString, struct FPalUILocalWorldDisplayData> CallFunc_GetWorldDisplayInfo_OutDisplayInfo);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget);
	void Construct();
	void OnInitialized();
	void OnSetup();
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* ButtonWidget);
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature(class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* ButtonWidget);
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedStartWorldButton__DelegateSignature();
	void Destruct();
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnClickedWorldSettingButton__DelegateSignature();
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_4_OnClickedDeleteWorldButton__DelegateSignature();
	void ________(bool bResult);
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* SelectedWorldButton);
	void BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* SelectedWorldButton);
	void ExecuteUbergraph_WBP_TitleLocalWorldSelect(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameter_SaveDataBackupSelect* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue, class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalHUDDispatchParameter_WorldSetting* CallFunc_SpawnObject_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* K2Node_ComponentBoundEvent_ButtonWidget, class UWBP_Title_WorldSelect_ListContent_C* K2Node_ComponentBoundEvent_ButtonWidget_1, const class FString& CallFunc_GetBindedSaveDirectoryName_DirectoryName, class UBP_HUDDIspatchParameter_DeleteWorld_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue_2, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalHUDDispatchParameter_WorldSetting* CallFunc_SpawnObject_ReturnValue_2, const struct FGuid& CallFunc_Push_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalOptionWorldSaveData& CallFunc_SelectWorld_OptionWorldData, bool CallFunc_SelectWorld_ReturnValue, const struct FGuid& CallFunc_Dialog_ReturnValue, bool K2Node_CustomEvent_bResult, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UWBP_Title_WorldSelect_ListContent_C* K2Node_ComponentBoundEvent_SelectedWorldButton_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetBindedSaveDirectoryName_DirectoryName_1, const struct FPalUILocalWorldDisplayData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsWindows_ReturnValue, class UWBP_Title_WorldSelect_ListContent_C* K2Node_ComponentBoundEvent_SelectedWorldButton, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetBindedSaveDirectoryName_DirectoryName_2);
};

}


