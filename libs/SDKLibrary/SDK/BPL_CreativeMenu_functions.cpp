#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_CreativeMenu

#include "Basic.hpp"

#include "BPL_CreativeMenu_classes.hpp"
#include "BPL_CreativeMenu_parameters.hpp"


namespace SDK
{

// Function BPL_CreativeMenu.BPL_CreativeMenu_C.GetEggLotteryDataManager
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EggLotteryDataManager_C*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class ABP_EggLotteryDataManager_C* UBPL_CreativeMenu_C::GetEggLotteryDataManager(const class UObject* WorldContextObject, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CreativeMenu_C", "GetEggLotteryDataManager");

	Params::BPL_CreativeMenu_C_GetEggLotteryDataManager Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_CreativeMenu.BPL_CreativeMenu_C.CM_LogToFile
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ELoggingLevel                           LogLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPL_CreativeMenu_C::CM_LogToFile(const class FString& Message, ELoggingLevel LogLevel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_CreativeMenu_C", "CM_LogToFile");

	Params::BPL_CreativeMenu_C_CM_LogToFile Parms{};

	Parms.Message = std::move(Message);
	Parms.LogLevel = LogLevel;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_CreativeMenu.BPL_CreativeMenu_C.WazaStringToArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           WazaString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<EPalWazaID>                      ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<EPalWazaID> UBPL_CreativeMenu_C::WazaStringToArray(const class FString& WazaString, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPL_CreativeMenu_C", "WazaStringToArray");

	Params::BPL_CreativeMenu_C_WazaStringToArray Parms{};

	Parms.WazaString = std::move(WazaString);
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_CreativeMenu.BPL_CreativeMenu_C.PassiveStringToArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           PassiveString                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class FName> UBPL_CreativeMenu_C::PassiveStringToArray(const class FString& PassiveString, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPL_CreativeMenu_C", "PassiveStringToArray");

	Params::BPL_CreativeMenu_C_PassiveStringToArray Parms{};

	Parms.PassiveString = std::move(PassiveString);
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_CreativeMenu.BPL_CreativeMenu_C.ParseStringToParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           String                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalIndividualCharacterSaveParameterReturnValue                                            (Parm, OutParm, ReturnParm)

struct FPalIndividualCharacterSaveParameter UBPL_CreativeMenu_C::ParseStringToParam(const class UObject* WorldContextObject, const class FString& String, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPL_CreativeMenu_C", "ParseStringToParam");

	Params::BPL_CreativeMenu_C_ParseStringToParam Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.String = std::move(String);
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_CreativeMenu.BPL_CreativeMenu_C.GetItemTypeB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             StaticItemId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalItemTypeB                           Type_B                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_CreativeMenu_C::GetItemTypeB(const class UObject* WorldContextObject, const class FName StaticItemId, class UObject* __WorldContext, EPalItemTypeB* Type_B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPL_CreativeMenu_C", "GetItemTypeB");

	Params::BPL_CreativeMenu_C_GetItemTypeB Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticItemId = StaticItemId;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Type_B != nullptr)
		*Type_B = Parms.Type_B;
}

}
