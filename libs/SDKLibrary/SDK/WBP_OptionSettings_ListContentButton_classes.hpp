#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C
class UWBP_OptionSettings_ListContentButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_Warning;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Key;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                WBP_PalKeyGuideIcon;                               // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OptionSettings_ListContentButton_C* GetDefaultObj();

	void GetCurrentIcon(struct FSlateBrush* Brush, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void SetIcon(const struct FSlateBrush& KeyIcon);
	void EnableWarning(bool IsEnable);
	void SetUIIcon(struct FSlateBrush& InBrush, class FName ActionName, enum class ECommonInputType InputType);
	void ExecuteUbergraph_WBP_OptionSettings_ListContentButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, const struct FSlateBrush& K2Node_CustomEvent_KeyIcon, bool K2Node_CustomEvent_IsEnable, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& K2Node_CustomEvent_InBrush, class FName K2Node_CustomEvent_ActionName, enum class ECommonInputType K2Node_CustomEvent_InputType, bool CallFunc_NotEqual_NameName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
};

}


