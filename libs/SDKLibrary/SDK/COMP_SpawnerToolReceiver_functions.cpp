#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: COMP_SpawnerToolReceiver

#include "Basic.hpp"

#include "COMP_SpawnerToolReceiver_classes.hpp"
#include "COMP_SpawnerToolReceiver_parameters.hpp"


namespace SDK
{

// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.SpawnCharacter_ToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIndividualCharacterSaveParameterCharacterParams                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFNetSpawnInfo                   SpawnInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::SpawnCharacter_ToServer(const struct FPalIndividualCharacterSaveParameter& CharacterParams, const struct FFNetSpawnInfo& SpawnInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "SpawnCharacter_ToServer");

	Params::COMP_SpawnerToolReceiver_C_SpawnCharacter_ToServer Parms{};

	Parms.CharacterParams = std::move(CharacterParams);
	Parms.SpawnInfo = std::move(SpawnInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UCOMP_SpawnerToolReceiver_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.SendPlayerList_ToClient
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Players                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCOMP_SpawnerToolReceiver_C::SendPlayerList_ToClient(const TArray<class FString>& Players)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "SendPlayerList_ToClient");

	Params::COMP_SpawnerToolReceiver_C_SendPlayerList_ToClient Parms{};

	Parms.Players = std::move(Players);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.SendItemLog_ToClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalStaticItemIdAndNum           ItemIDAndNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCOMP_SpawnerToolReceiver_C::SendItemLog_ToClient(const struct FPalStaticItemIdAndNum& ItemIDAndNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "SendItemLog_ToClient");

	Params::COMP_SpawnerToolReceiver_C_SendItemLog_ToClient Parms{};

	Parms.ItemIDAndNum = std::move(ItemIDAndNum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCOMP_SpawnerToolReceiver_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.PrintToModLoader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::PrintToModLoader(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "PrintToModLoader");

	Params::COMP_SpawnerToolReceiver_C_PrintToModLoader Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.OnSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::OnSpawn(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "OnSpawn");

	Params::COMP_SpawnerToolReceiver_C_OnSpawn Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.Log
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UCOMP_SpawnerToolReceiver_C::Log(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "Log");

	Params::COMP_SpawnerToolReceiver_C_Log Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.HandleSpawn
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NetworkOwner                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalIndividualCharacterSaveParameterSaveParam                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFNetSpawnInfo                   SpawnInfo                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::HandleSpawn(class AActor* NetworkOwner, const struct FPalIndividualCharacterSaveParameter& SaveParam, const struct FFNetSpawnInfo& SpawnInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "HandleSpawn");

	Params::COMP_SpawnerToolReceiver_C_HandleSpawn Parms{};

	Parms.NetworkOwner = NetworkOwner;
	Parms.SaveParam = std::move(SaveParam);
	Parms.SpawnInfo = std::move(SpawnInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.HandleCapture_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::HandleCapture_Internal(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "HandleCapture_Internal");

	Params::COMP_SpawnerToolReceiver_C_HandleCapture_Internal Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.HandleCapture
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIndividualCharacterSaveParameterSaveParam                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bShouldObtainAsEgg                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::HandleCapture(const struct FPalIndividualCharacterSaveParameter& SaveParam, bool bShouldObtainAsEgg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "HandleCapture");

	Params::COMP_SpawnerToolReceiver_C_HandleCapture Parms{};

	Parms.SaveParam = std::move(SaveParam);
	Parms.bShouldObtainAsEgg = bShouldObtainAsEgg;

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.HandleAddRelic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::HandleAddRelic(class APalPlayerState* PlayerState, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "HandleAddRelic");

	Params::COMP_SpawnerToolReceiver_C_HandleAddRelic Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.HandleAddItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::HandleAddItem(class APalPlayerState* PlayerState, class FName ItemId, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "HandleAddItem");

	Params::COMP_SpawnerToolReceiver_C_HandleAddItem Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.HandleAddEggCustom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIndividualCharacterSaveParameterSaveParameter                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCOMP_SpawnerToolReceiver_C::HandleAddEggCustom(const struct FPalIndividualCharacterSaveParameter& SaveParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "HandleAddEggCustom");

	Params::COMP_SpawnerToolReceiver_C_HandleAddEggCustom Parms{};

	Parms.SaveParameter = std::move(SaveParameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.HandleAddEgg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerState*                  PalPlayerState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             EggId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::HandleAddEgg(class APalPlayerState* PalPlayerState, class FName EggId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "HandleAddEgg");

	Params::COMP_SpawnerToolReceiver_C_HandleAddEgg Parms{};

	Parms.PalPlayerState = PalPlayerState;
	Parms.EggId = EggId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.FetchPlayerList_ToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UCOMP_SpawnerToolReceiver_C::FetchPlayerList_ToServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "FetchPlayerList_ToServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.ExecuteUbergraph_COMP_SpawnerToolReceiver
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::ExecuteUbergraph_COMP_SpawnerToolReceiver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "ExecuteUbergraph_COMP_SpawnerToolReceiver");

	Params::COMP_SpawnerToolReceiver_C_ExecuteUbergraph_COMP_SpawnerToolReceiver Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.CM_AddItemLog
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalStaticItemIdAndNum           ItemIDAndNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCOMP_SpawnerToolReceiver_C::CM_AddItemLog(const struct FPalStaticItemIdAndNum& ItemIDAndNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "CM_AddItemLog");

	Params::COMP_SpawnerToolReceiver_C_CM_AddItemLog Parms{};

	Parms.ItemIDAndNum = std::move(ItemIDAndNum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMP_SpawnerToolReceiver.COMP_SpawnerToolReceiver_C.AddItem_ToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFTargetData                     TargetData                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCOMP_SpawnerToolReceiver_C::AddItem_ToServer(class FName ID, int32 Count, const struct FFTargetData& TargetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMP_SpawnerToolReceiver_C", "AddItem_ToServer");

	Params::COMP_SpawnerToolReceiver_C_AddItem_ToServer Parms{};

	Parms.ID = ID;
	Parms.Count = Count;
	Parms.TargetData = std::move(TargetData);

	UObject::ProcessEvent(Func, &Parms);
}

}
