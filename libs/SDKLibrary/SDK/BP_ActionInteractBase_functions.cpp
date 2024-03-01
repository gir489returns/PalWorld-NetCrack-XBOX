#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionInteractBase.BP_ActionInteractBase_C
// (None)

class UClass* UBP_ActionInteractBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionInteractBase_C");

	return Clss;
}


// BP_ActionInteractBase_C BP_ActionInteractBase.Default__BP_ActionInteractBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionInteractBase_C* UBP_ActionInteractBase_C::GetDefaultObj()
{
	static class UBP_ActionInteractBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionInteractBase_C*>(UBP_ActionInteractBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.OnJumpDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalCharacterMovementComponent*Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionInteractBase_C::OnJumpDelegate(class UPalCharacterMovementComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "OnJumpDelegate");

	Params::UBP_ActionInteractBase_C_OnJumpDelegate_Params Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.EnableMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionInteractBase_C::EnableMove(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "EnableMove");

	Params::UBP_ActionInteractBase_C_EnableMove_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue = CallFunc_GetPalCharacterMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionInteractBase_C::UnbindDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "UnbindDelegates");

	Params::UBP_ActionInteractBase_C_UnbindDelegates_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.CancelInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInteractComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteracting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionInteractBase_C::CancelInteract(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsInteracting_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "CancelInteract");

	Params::UBP_ActionInteractBase_C_CancelInteract_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsInteracting_ReturnValue = CallFunc_IsInteracting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionInteractBase_C::BindDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "BindDelegates");

	Params::UBP_ActionInteractBase_C_BindDelegates_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.SetPlayerFlags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInteractComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsToggleInteracting_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionInteractBase_C::SetPlayerFlags(bool IsDisable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsToggleInteracting_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "SetPlayerFlags");

	Params::UBP_ActionInteractBase_C_SetPlayerFlags_Params Parms{};

	Parms.IsDisable = IsDisable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsToggleInteracting_ReturnValue = CallFunc_IsToggleInteracting_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionInteractBase_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionInteractBase_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionInteractBase.BP_ActionInteractBase_C.ExecuteUbergraph_BP_ActionInteractBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionInteractBase_C::ExecuteUbergraph_BP_ActionInteractBase(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionInteractBase_C", "ExecuteUbergraph_BP_ActionInteractBase");

	Params::UBP_ActionInteractBase_C_ExecuteUbergraph_BP_ActionInteractBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Character_1 = K2Node_DynamicCast_AsPal_Player_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


