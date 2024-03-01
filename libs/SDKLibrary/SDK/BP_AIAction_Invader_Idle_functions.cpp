#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C
// (None)

class UClass* UBP_AIAction_Invader_Idle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Invader_Idle_C");

	return Clss;
}


// BP_AIAction_Invader_Idle_C BP_AIAction_Invader_Idle.Default__BP_AIAction_Invader_Idle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Invader_Idle_C* UBP_AIAction_Invader_Idle_C::GetDefaultObj()
{
	static class UBP_AIAction_Invader_Idle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Invader_Idle_C*>(UBP_AIAction_Invader_Idle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_Idle_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_Idle_C", "ActionStart");

	Params::UBP_AIAction_Invader_Idle_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C.ExecuteUbergraph_BP_AIAction_Invader_Idle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_GetPalAIBlackboard_C>K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetMyBB_PalBrackboard                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_Idle_C::ExecuteUbergraph_BP_AIAction_Invader_Idle(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_Idle_C", "ExecuteUbergraph_BP_AIAction_Invader_Idle");

	Params::UBP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard = K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetMyBB_PalBrackboard = CallFunc_GetMyBB_PalBrackboard;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


