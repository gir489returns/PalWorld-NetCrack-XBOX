#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Trap_LegHold

#include "Basic.hpp"

#include "BP_AIAction_Trap_LegHold_classes.hpp"
#include "BP_AIAction_Trap_LegHold_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_LegHold_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Trap_LegHold_C", "ActionAbort");

	Params::BP_AIAction_Trap_LegHold_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_LegHold_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Trap_LegHold_C", "ActionFinished");

	Params::BP_AIAction_Trap_LegHold_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_LegHold_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Trap_LegHold_C", "ActionPause");

	Params::BP_AIAction_Trap_LegHold_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_LegHold_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Trap_LegHold_C", "ActionResume");

	Params::BP_AIAction_Trap_LegHold_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_LegHold_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Trap_LegHold_C", "ActionStart");

	Params::BP_AIAction_Trap_LegHold_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.ExecuteUbergraph_BP_AIAction_Trap_LegHold
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_LegHold_C::ExecuteUbergraph_BP_AIAction_Trap_LegHold(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Trap_LegHold_C", "ExecuteUbergraph_BP_AIAction_Trap_LegHold");

	Params::BP_AIAction_Trap_LegHold_C_ExecuteUbergraph_BP_AIAction_Trap_LegHold Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.GetCPC
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalCharacterParameterComponent*  CPC                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_LegHold_C::GetCPC(class UPalCharacterParameterComponent** CPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Trap_LegHold_C", "GetCPC");

	Params::BP_AIAction_Trap_LegHold_C_GetCPC Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CPC != nullptr)
		*CPC = Parms.CPC;
}


// Function BP_AIAction_Trap_LegHold.BP_AIAction_Trap_LegHold_C.OnChangeTrapExist
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Exist                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_LegHold_C::OnChangeTrapExist(bool Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Trap_LegHold_C", "OnChangeTrapExist");

	Params::BP_AIAction_Trap_LegHold_C_OnChangeTrapExist Parms{};

	Parms.Exist = Exist;

	UObject::ProcessEvent(Func, &Parms);
}

}

