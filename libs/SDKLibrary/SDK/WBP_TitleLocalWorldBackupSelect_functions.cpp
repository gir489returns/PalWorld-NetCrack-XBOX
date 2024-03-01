#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C
// (None)

class UClass* UWBP_TitleLocalWorldBackupSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TitleLocalWorldBackupSelect_C");

	return Clss;
}


// WBP_TitleLocalWorldBackupSelect_C WBP_TitleLocalWorldBackupSelect.Default__WBP_TitleLocalWorldBackupSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TitleLocalWorldBackupSelect_C* UWBP_TitleLocalWorldBackupSelect_C::GetDefaultObj()
{
	static class UWBP_TitleLocalWorldBackupSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TitleLocalWorldBackupSelect_C*>(UWBP_TitleLocalWorldBackupSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OnCloseSuccessDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::OnCloseSuccessDialog(bool bResult, class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "OnCloseSuccessDialog");

	Params::UWBP_TitleLocalWorldBackupSelect_C_OnCloseSuccessDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OnCloseFailedDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Get_Focus_Target_Internal_Widget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::OnCloseFailedDialog(bool bResult, class UWidget* CallFunc_Get_Focus_Target_Internal_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "OnCloseFailedDialog");

	Params::UWBP_TitleLocalWorldBackupSelect_C_OnCloseFailedDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_Get_Focus_Target_Internal_Widget = CallFunc_Get_Focus_Target_Internal_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OnClosedCheckDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Get_Focus_Target_Internal_Widget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIBackupSaveDisplayData CallFunc_GetDisplayData_DIsplayData                              (None)
// enum class EPalSaveDataRestoreResultTypeCallFunc_RestoreSaveData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::OnClosedCheckDialog(bool bResult, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_Get_Focus_Target_Internal_Widget, bool CallFunc_IsValid_ReturnValue_1, const struct FPalUIBackupSaveDisplayData& CallFunc_GetDisplayData_DIsplayData, enum class EPalSaveDataRestoreResultType CallFunc_RestoreSaveData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "OnClosedCheckDialog");

	Params::UWBP_TitleLocalWorldBackupSelect_C_OnClosedCheckDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Focus_Target_Internal_Widget = CallFunc_Get_Focus_Target_Internal_Widget;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDisplayData_DIsplayData = CallFunc_GetDisplayData_DIsplayData;
	Parms.CallFunc_RestoreSaveData_ReturnValue = CallFunc_RestoreSaveData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OpenFailedDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FGuid                       CallFunc_Dialog_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::OpenFailedDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FGuid& CallFunc_Dialog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "OpenFailedDialog");

	Params::UWBP_TitleLocalWorldBackupSelect_C_OpenFailedDialog_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Dialog_ReturnValue = CallFunc_Dialog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OpenSuccessDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FGuid                       CallFunc_Dialog_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::OpenSuccessDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FGuid& CallFunc_Dialog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "OpenSuccessDialog");

	Params::UWBP_TitleLocalWorldBackupSelect_C_OpenSuccessDialog_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Dialog_ReturnValue = CallFunc_Dialog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OpenCheckDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIBackupSaveDisplayData CallFunc_GetDisplayData_DIsplayData                              (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FGuid                       CallFunc_Dialog_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::OpenCheckDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIBackupSaveDisplayData& CallFunc_GetDisplayData_DIsplayData, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FGuid& CallFunc_Dialog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "OpenCheckDialog");

	Params::UWBP_TitleLocalWorldBackupSelect_C_OpenCheckDialog_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDisplayData_DIsplayData = CallFunc_GetDisplayData_DIsplayData;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Dialog_ReturnValue = CallFunc_Dialog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.Get Focus Target Internal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_TargetWidget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::Get_Focus_Target_Internal(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_TargetWidget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "Get Focus Target Internal");

	Params::UWBP_TitleLocalWorldBackupSelect_C_Get_Focus_Target_Internal_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_TargetWidget = CallFunc_GetTopFocusTarget_TargetWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Get_Focus_Target_Internal_Widget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_TitleLocalWorldBackupSelect_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_Get_Focus_Target_Internal_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_TitleLocalWorldBackupSelect_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_Get_Focus_Target_Internal_Widget = CallFunc_Get_Focus_Target_Internal_Widget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalUIBackupSaveDisplayData>CallFunc_GetBackupDisplayData_OutDisplayData                     (ReferenceParm)
// class UWidget*                     CallFunc_GetTopFocusTarget_TargetWidget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::Setup(TArray<struct FPalUIBackupSaveDisplayData>& CallFunc_GetBackupDisplayData_OutDisplayData, class UWidget* CallFunc_GetTopFocusTarget_TargetWidget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "Setup");

	Params::UWBP_TitleLocalWorldBackupSelect_C_Setup_Params Parms{};

	Parms.CallFunc_GetBackupDisplayData_OutDisplayData = CallFunc_GetBackupDisplayData_OutDisplayData;
	Parms.CallFunc_GetTopFocusTarget_TargetWidget = CallFunc_GetTopFocusTarget_TargetWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldBackupSelect_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldBackupSelect_C::BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_1_OnClickedBackup__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Title_BackupSelect_ListContent_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_1_OnClickedBackup__DelegateSignature(class UWBP_Title_BackupSelect_ListContent_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_1_OnClickedBackup__DelegateSignature");

	Params::UWBP_TitleLocalWorldBackupSelect_C_BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_1_OnClickedBackup__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldBackupSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.ExecuteUbergraph_WBP_TitleLocalWorldBackupSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Title_BackupSelect_ListContent_C*K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldBackupSelect_C::ExecuteUbergraph_WBP_TitleLocalWorldBackupSelect(int32 EntryPoint, class UWBP_Title_BackupSelect_ListContent_C* K2Node_ComponentBoundEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldBackupSelect_C", "ExecuteUbergraph_WBP_TitleLocalWorldBackupSelect");

	Params::UWBP_TitleLocalWorldBackupSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldBackupSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


