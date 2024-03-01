#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C
// (None)

class UClass* UWBP_PalKeyGuideIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalKeyGuideIcon_C");

	return Clss;
}


// WBP_PalKeyGuideIcon_C WBP_PalKeyGuideIcon.Default__WBP_PalKeyGuideIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalKeyGuideIcon_C* UWBP_PalKeyGuideIcon_C::GetDefaultObj()
{
	static class UWBP_PalKeyGuideIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalKeyGuideIcon_C*>(UWBP_PalKeyGuideIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OverrideInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::OverrideInputType(enum class ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "OverrideInputType");

	Params::UWBP_PalKeyGuideIcon_C_OverrideInputType_Params Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.SetOverrideSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::SetOverrideSize(const struct FVector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "SetOverrideSize");

	Params::UWBP_PalKeyGuideIcon_C_SetOverrideSize_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OverrideImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class ECommonInputType, struct FSlateBrush>TempOverrideMap                                                  (Edit, BlueprintVisible)
// enum class ECommonInputType        Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class ECommonInputType, struct FSlateBrush>K2Node_MakeVariable_MakeVariableOutput                           (None)
// struct FSlateBrush                 CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FPalKeyConfigSettings       CallFunc_GetKeyConfigSettings_ReturnValue                        (ConstParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetKeyIconByKey_ReturnValue                             (None)
// struct FKey                        CallFunc_Map_Find_Value_3                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetIcon_ReturnValue                                     (None)
// struct FSlateBrush                 CallFunc_GetKeyIconByKey_ReturnValue_1                           (None)
// enum class ECommonInputType        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::OverrideImage(TMap<enum class ECommonInputType, struct FSlateBrush> TempOverrideMap, enum class ECommonInputType Temp_byte_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, TMap<enum class ECommonInputType, struct FSlateBrush> K2Node_MakeVariable_MakeVariableOutput, const struct FSlateBrush& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FPalKeyConfigSettings& CallFunc_GetKeyConfigSettings_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FKey& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FSlateBrush& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FSlateBrush& CallFunc_GetKeyIconByKey_ReturnValue, const struct FKey& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& CallFunc_GetKeyIconByKey_ReturnValue_1, enum class ECommonInputType Temp_byte_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "OverrideImage");

	Params::UWBP_PalKeyGuideIcon_C_OverrideImage_Params Parms{};

	Parms.TempOverrideMap = TempOverrideMap;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetKeyConfigSettings_ReturnValue = CallFunc_GetKeyConfigSettings_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_GetKeyIconByKey_ReturnValue = CallFunc_GetKeyIconByKey_ReturnValue;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.CallFunc_GetKeyIconByKey_ReturnValue_1 = CallFunc_GetKeyIconByKey_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.SetInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_UIInputActionK2Node_MakeStruct_PalDataTableRowName_UIInputAction              (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetUIInputActionRowHandle_outHandle                     (NoDestructor)
// bool                               CallFunc_GetUIInputActionRowHandle_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::SetInputAction(class FName ActionName, const struct FPalDataTableRowName_UIInputAction& K2Node_MakeStruct_PalDataTableRowName_UIInputAction, const struct FDataTableRowHandle& CallFunc_GetUIInputActionRowHandle_outHandle, bool CallFunc_GetUIInputActionRowHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "SetInputAction");

	Params::UWBP_PalKeyGuideIcon_C_SetInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.K2Node_MakeStruct_PalDataTableRowName_UIInputAction = K2Node_MakeStruct_PalDataTableRowName_UIInputAction;
	Parms.CallFunc_GetUIInputActionRowHandle_outHandle = CallFunc_GetUIInputActionRowHandle_outHandle;
	Parms.CallFunc_GetUIInputActionRowHandle_ReturnValue = CallFunc_GetUIInputActionRowHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalKeyGuideIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalKeyGuideIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UWBP_PalKeyGuideIcon_C_BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.UpdateOverrideImage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalKeyConfigSettings       PrevSettings                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPalKeyConfigSettings       NewSettings                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalKeyGuideIcon_C::UpdateOverrideImage(struct FPalKeyConfigSettings& PrevSettings, struct FPalKeyConfigSettings& NewSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "UpdateOverrideImage");

	Params::UWBP_PalKeyGuideIcon_C_UpdateOverrideImage_Params Parms{};

	Parms.PrevSettings = PrevSettings;
	Parms.NewSettings = NewSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.ExecuteUbergraph_WBP_PalKeyGuideIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalKeyConfigSettings       K2Node_CustomEvent_PrevSettings                                  (ConstParm)
// struct FPalKeyConfigSettings       K2Node_CustomEvent_NewSettings                                   (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::ExecuteUbergraph_WBP_PalKeyGuideIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_EqualEqual_NameName_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, const struct FPalKeyConfigSettings& K2Node_CustomEvent_PrevSettings, const struct FPalKeyConfigSettings& K2Node_CustomEvent_NewSettings, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "ExecuteUbergraph_WBP_PalKeyGuideIcon");

	Params::UWBP_PalKeyGuideIcon_C_ExecuteUbergraph_WBP_PalKeyGuideIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_PrevSettings = K2Node_CustomEvent_PrevSettings;
	Parms.K2Node_CustomEvent_NewSettings = K2Node_CustomEvent_NewSettings;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


