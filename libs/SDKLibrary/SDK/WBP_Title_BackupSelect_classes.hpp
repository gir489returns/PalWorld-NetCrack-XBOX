#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x450 - 0x408)
// WidgetBlueprintGeneratedClass WBP_Title_BackupSelect.WBP_Title_BackupSelect_C
class UWBP_Title_BackupSelect_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    Text_BackupInfo;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_NothingBackup;                                // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*            WBP_PalCommonScrollList;                           // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedCloseButton;                              // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedBackup;                                   // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Title_BackupSelect_C* GetDefaultObj();

	class UWidget* CustomNavi_ToListTop(enum class EUINavigation Navigation, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Title_BackupSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	class UWidget* CustomNavi_ToCloseButton(enum class EUINavigation Navigation);
	void GetTopFocusTarget(class UWidget** TargetWidget, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWBP_Title_BackupSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnClickedBackupButton_Internal(class UWBP_Title_BackupSelect_ListContent_C* Widget);
	void SetBackupDisplayData(TArray<struct FPalUIBackupSaveDisplayData>& DisplayData, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Array_IsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWidget* CallFunc_GetChildAt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, const struct FPalUIBackupSaveDisplayData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UScrollBox* CallFunc_GetScrollBox_ScrollBox_1, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UWBP_Title_BackupSelect_ListContent_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__WBP_Title_BackupSelect_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_WBP_Title_BackupSelect(int32 EntryPoint);
	void OnClickedBackup__DelegateSignature(class UWBP_Title_BackupSelect_ListContent_C* Widget);
	void OnClickedCloseButton__DelegateSignature();
};

}


