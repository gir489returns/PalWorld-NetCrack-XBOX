#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_SliderBase

#include "Basic.hpp"

#include "WBP_CharaCre_SliderBase_classes.hpp"
#include "WBP_CharaCre_SliderBase_parameters.hpp"


namespace SDK
{

// Function WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C.ExecuteUbergraph_WBP_CharaCre_SliderBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_SliderBase_C::ExecuteUbergraph_WBP_CharaCre_SliderBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_SliderBase_C", "ExecuteUbergraph_WBP_CharaCre_SliderBase");

	Params::WBP_CharaCre_SliderBase_C_ExecuteUbergraph_WBP_CharaCre_SliderBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_SliderBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_SliderBase_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_SliderBase.WBP_CharaCre_SliderBase_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_SliderBase_C::SetValue(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_SliderBase_C", "SetValue");

	Params::WBP_CharaCre_SliderBase_C_SetValue Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

