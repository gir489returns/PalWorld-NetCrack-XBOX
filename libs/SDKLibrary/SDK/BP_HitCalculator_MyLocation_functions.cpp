#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitCalculator_MyLocation

#include "Basic.hpp"

#include "BP_HitCalculator_MyLocation_classes.hpp"
#include "BP_HitCalculator_MyLocation_parameters.hpp"


namespace SDK
{

// Function BP_HitCalculator_MyLocation.BP_HitCalculator_MyLocation_C.CalcLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyHitComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherHitComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_HitCalculator_MyLocation_C::CalcLocation(class UPrimitiveComponent* MyHitComponent, class UPrimitiveComponent* OtherHitComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitCalculator_MyLocation_C", "CalcLocation");

	Params::BP_HitCalculator_MyLocation_C_CalcLocation Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitComponent = OtherHitComponent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

