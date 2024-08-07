#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionMining

#include "Basic.hpp"

#include "BP_ActionMining_classes.hpp"
#include "BP_ActionMining_parameters.hpp"


namespace SDK
{

// Function BP_ActionMining.BP_ActionMining_C.ExecuteUbergraph_BP_ActionMining
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionMining_C::ExecuteUbergraph_BP_ActionMining(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMining_C", "ExecuteUbergraph_BP_ActionMining");

	Params::BP_ActionMining_C_ExecuteUbergraph_BP_ActionMining Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionMining.BP_ActionMining_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionMining_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMining_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionMining.BP_ActionMining_C.OnBeginAnimNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionMining_C::OnBeginAnimNotify(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMining_C", "OnBeginAnimNotify");

	Params::BP_ActionMining_C_OnBeginAnimNotify Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionMining.BP_ActionMining_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionMining_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMining_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

