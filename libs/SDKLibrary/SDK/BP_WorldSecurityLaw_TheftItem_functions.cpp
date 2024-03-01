#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WorldSecurityLaw_TheftItem.BP_WorldSecurityLaw_TheftItem_C
// (None)

class UClass* UBP_WorldSecurityLaw_TheftItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorldSecurityLaw_TheftItem_C");

	return Clss;
}


// BP_WorldSecurityLaw_TheftItem_C BP_WorldSecurityLaw_TheftItem.Default__BP_WorldSecurityLaw_TheftItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WorldSecurityLaw_TheftItem_C* UBP_WorldSecurityLaw_TheftItem_C::GetDefaultObj()
{
	static class UBP_WorldSecurityLaw_TheftItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WorldSecurityLaw_TheftItem_C*>(UBP_WorldSecurityLaw_TheftItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WorldSecurityLaw_TheftItem.BP_WorldSecurityLaw_TheftItem_C.Condition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalItemOperationInfo_Move  EventInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_WorldSecurityLaw_TheftItem_C::Condition(struct FPalItemOperationInfo_Move& EventInfo, bool CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue, bool CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WorldSecurityLaw_TheftItem_C", "Condition");

	Params::UBP_WorldSecurityLaw_TheftItem_C_Condition_Params Parms{};

	Parms.EventInfo = EventInfo;
	Parms.CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue = CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue;
	Parms.CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue_1 = CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


