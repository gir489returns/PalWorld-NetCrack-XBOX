#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C
// (None)

class UClass* UWBP_Title_BackupSelect_ListContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_BackupSelect_ListContent_C");

	return Clss;
}


// WBP_Title_BackupSelect_ListContent_C WBP_Title_BackupSelect_ListContent.Default__WBP_Title_BackupSelect_ListContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_BackupSelect_ListContent_C* UWBP_Title_BackupSelect_ListContent_C::GetDefaultObj()
{
	static class UWBP_Title_BackupSelect_ListContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_BackupSelect_ListContent_C*>(UWBP_Title_BackupSelect_ListContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.GetDisplayData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalUIBackupSaveDisplayData DisplayData                                                      (Parm, OutParm)

void UWBP_Title_BackupSelect_ListContent_C::GetDisplayData(struct FPalUIBackupSaveDisplayData* DisplayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_BackupSelect_ListContent_C", "GetDisplayData");

	Params::UWBP_Title_BackupSelect_ListContent_C_GetDisplayData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DisplayData != nullptr)
		*DisplayData = std::move(Parms.DisplayData);

}


// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIBackupSaveDisplayData DisplayData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_Title_BackupSelect_ListContent_C::Setup(const struct FPalUIBackupSaveDisplayData& DisplayData, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_BackupSelect_ListContent_C", "Setup");

	Params::UWBP_Title_BackupSelect_ListContent_C_Setup_Params Parms{};

	Parms.DisplayData = DisplayData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.AnmEvent_Unselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_BackupSelect_ListContent_C::AnmEvent_Unselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_BackupSelect_ListContent_C", "AnmEvent_Unselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_BackupSelect_ListContent_C::BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_BackupSelect_ListContent_C", "BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_BackupSelect_ListContent_C::BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_BackupSelect_ListContent_C", "BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_BackupSelect_ListContent_C::BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_BackupSelect_ListContent_C", "BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Title_BackupSelect_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.ExecuteUbergraph_WBP_Title_BackupSelect_ListContent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_BackupSelect_ListContent_C::ExecuteUbergraph_WBP_Title_BackupSelect_ListContent(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_BackupSelect_ListContent_C", "ExecuteUbergraph_WBP_Title_BackupSelect_ListContent");

	Params::UWBP_Title_BackupSelect_ListContent_C_ExecuteUbergraph_WBP_Title_BackupSelect_ListContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_BackupSelect_ListContent.WBP_Title_BackupSelect_ListContent_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Title_BackupSelect_ListContent_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_BackupSelect_ListContent_C::OnClicked__DelegateSignature(class UWBP_Title_BackupSelect_ListContent_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_BackupSelect_ListContent_C", "OnClicked__DelegateSignature");

	Params::UWBP_Title_BackupSelect_ListContent_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


