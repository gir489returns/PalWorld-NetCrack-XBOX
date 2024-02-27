#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x479 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C
class UWBP_PalKeyGuideIcon_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalUIActionWidgetBase*                PalUIActionWidgetBase_24;                          // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    bindActionName;                                    // 0x420(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ECommonInputType, struct FSlateBrush> OverrideImageMap;                                  // 0x428(0x50)(Edit, BlueprintVisible)
	bool                                         EnableOverrideImage;                               // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalKeyGuideIcon_C* GetDefaultObj();

	void OverrideInputType(enum class ECommonInputType InputType);
	void SetOverrideSize(const struct FVector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void OverrideImage(TMap<enum class ECommonInputType, struct FSlateBrush> TempOverrideMap, enum class ECommonInputType Temp_byte_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, TMap<enum class ECommonInputType, struct FSlateBrush> K2Node_MakeVariable_MakeVariableOutput, const struct FSlateBrush& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FPalKeyConfigSettings& CallFunc_GetKeyConfigSettings_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FKey& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FSlateBrush& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FSlateBrush& CallFunc_GetKeyIconByKey_ReturnValue, const struct FKey& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& CallFunc_GetKeyIconByKey_ReturnValue_1, enum class ECommonInputType Temp_byte_Variable_1);
	void SetInputAction(class FName ActionName, const struct FPalDataTableRowName_UIInputAction& K2Node_MakeStruct_PalDataTableRowName_UIInputAction, const struct FDataTableRowHandle& CallFunc_GetUIInputActionRowHandle_outHandle, bool CallFunc_GetUIInputActionRowHandle_ReturnValue);
	void Construct();
	void OnInitialized();
	void BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void UpdateOverrideImage(struct FPalKeyConfigSettings& PrevSettings, struct FPalKeyConfigSettings& NewSettings);
	void ExecuteUbergraph_WBP_PalKeyGuideIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_EqualEqual_NameName_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, const struct FPalKeyConfigSettings& K2Node_CustomEvent_PrevSettings, const struct FPalKeyConfigSettings& K2Node_CustomEvent_NewSettings, bool CallFunc_IsValid_ReturnValue);
};

}


