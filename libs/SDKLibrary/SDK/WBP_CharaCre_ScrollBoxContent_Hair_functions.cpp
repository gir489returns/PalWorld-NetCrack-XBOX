#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContent_Hair

#include "Basic.hpp"

#include "WBP_CharaCre_ScrollBoxContent_Hair_classes.hpp"
#include "WBP_CharaCre_ScrollBoxContent_Hair_parameters.hpp"


namespace SDK
{

// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfo  MakeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "ApplyMakeInfo");

	Params::WBP_CharaCre_ScrollBoxContent_Hair_C_ApplyMakeInfo Parms{};

	Parms.MakeInfo = std::move(MakeInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_ColorSelect_sq_C*   Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::WBP_CharaCre_ScrollBoxContent_Hair_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair");

	Params::WBP_CharaCre_ScrollBoxContent_Hair_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::GetRestoreFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "GetRestoreFocusTarget");

	Params::WBP_CharaCre_ScrollBoxContent_Hair_C_GetRestoreFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnChangedHairColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::OnChangedHairColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "OnChangedHairColor");

	Params::WBP_CharaCre_ScrollBoxContent_Hair_C_OnChangedHairColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnClosedHairColorSelectWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*     Param_Param                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::OnClosedHairColorSelectWindow(class UPalHUDDispatchParameterBase* Param_Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "OnClosedHairColorSelectWindow");

	Params::WBP_CharaCre_ScrollBoxContent_Hair_C_OnClosedHairColorSelectWindow Parms{};

	Parms.Param_Param = Param_Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnSelectedHairColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     HSV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::OnSelectedHairColor__DelegateSignature(const struct FLinearColor& HSV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "OnSelectedHairColor__DelegateSignature");

	Params::WBP_CharaCre_ScrollBoxContent_Hair_C_OnSelectedHairColor__DelegateSignature Parms{};

	Parms.HSV = std::move(HSV);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::GetTopFocusTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "GetTopFocusTarget");

	Params::WBP_CharaCre_ScrollBoxContent_Hair_C_GetTopFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

