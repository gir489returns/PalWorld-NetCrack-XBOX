#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x490 - 0x430)
// WidgetBlueprintGeneratedClass WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C
class UWBP_TitleLocalWorldBackupSelect_C : public UPalUIWorldBackupSelect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_69;                                          // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Root;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_BackupSelect_C*             WBP_Title_BackupSelect;                            // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldMenu_Head_C*           WBP_Title_WorldMenu_Head;                          // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_BackupSelect_ListContent_C* LastClickedButton;                                 // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CheckDialogMsgID;                                  // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SuccessDialogMsgID;                                // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FailedDialogMsgID;                                 // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_TitleLocalWorldBackupSelect_C* GetDefaultObj();

	void OnCloseSuccessDialog(bool bResult, class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void OnCloseFailedDialog(bool bResult, class UWidget* CallFunc_Get_Focus_Target_Internal_Widget);
	void OnClosedCheckDialog(bool bResult, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_Get_Focus_Target_Internal_Widget, bool CallFunc_IsValid_ReturnValue_1, const struct FPalUIBackupSaveDisplayData& CallFunc_GetDisplayData_DIsplayData, enum class EPalSaveDataRestoreResultType CallFunc_RestoreSaveData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	void OpenFailedDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FGuid& CallFunc_Dialog_ReturnValue);
	void OpenSuccessDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FGuid& CallFunc_Dialog_ReturnValue);
	void OpenCheckDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIBackupSaveDisplayData& CallFunc_GetDisplayData_DIsplayData, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FGuid& CallFunc_Dialog_ReturnValue);
	void Get_Focus_Target_Internal(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_TargetWidget, bool CallFunc_IsValid_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_Get_Focus_Target_Internal_Widget);
	void Setup(TArray<struct FPalUIBackupSaveDisplayData>& CallFunc_GetBackupDisplayData_OutDisplayData, class UWidget* CallFunc_GetTopFocusTarget_TargetWidget, bool CallFunc_IsValid_ReturnValue);
	void OnSetup();
	void BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
	void BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_1_OnClickedBackup__DelegateSignature(class UWBP_Title_BackupSelect_ListContent_C* Widget);
	void Destruct();
	void ExecuteUbergraph_WBP_TitleLocalWorldBackupSelect(int32 EntryPoint, class UWBP_Title_BackupSelect_ListContent_C* K2Node_ComponentBoundEvent_Widget);
};

}


