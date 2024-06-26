#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_RarePal

#include "Basic.hpp"

#include "BP_VisualEffect_RarePal_classes.hpp"
#include "BP_VisualEffect_RarePal_parameters.hpp"


namespace SDK
{

// Function BP_VisualEffect_RarePal.BP_VisualEffect_RarePal_C.ExecuteUbergraph_BP_VisualEffect_RarePal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_RarePal_C::ExecuteUbergraph_BP_VisualEffect_RarePal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_RarePal_C", "ExecuteUbergraph_BP_VisualEffect_RarePal");

	Params::BP_VisualEffect_RarePal_C_ExecuteUbergraph_BP_VisualEffect_RarePal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_RarePal.BP_VisualEffect_RarePal_C.IsEndVisualEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_VisualEffect_RarePal_C::IsEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_RarePal_C", "IsEndVisualEffect");

	Params::BP_VisualEffect_RarePal_C_IsEndVisualEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_VisualEffect_RarePal.BP_VisualEffect_RarePal_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_RarePal_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_RarePal_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_RarePal.BP_VisualEffect_RarePal_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_RarePal_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_RarePal_C", "OnEndVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_RarePal.BP_VisualEffect_RarePal_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_RarePal_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_RarePal_C", "TickVisualEffect");

	Params::BP_VisualEffect_RarePal_C_TickVisualEffect Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

