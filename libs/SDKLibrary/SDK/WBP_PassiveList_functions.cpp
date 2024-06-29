#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PassiveList

#include "Basic.hpp"

#include "WBP_PassiveList_classes.hpp"
#include "WBP_PassiveList_parameters.hpp"


namespace SDK
{

// Function WBP_PassiveList.WBP_PassiveList_C.SortPassivesByRank
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     PassiveSkillArray                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                     SortedArray                                            (Parm, OutParm)

void UWBP_PassiveList_C::SortPassivesByRank(TArray<class FName>& PassiveSkillArray, TArray<class FName>* SortedArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "SortPassivesByRank");

	Params::WBP_PassiveList_C_SortPassivesByRank Parms{};

	Parms.PassiveSkillArray = std::move(PassiveSkillArray);

	UObject::ProcessEvent(Func, &Parms);

	PassiveSkillArray = std::move(Parms.PassiveSkillArray);

	if (SortedArray != nullptr)
		*SortedArray = std::move(Parms.SortedArray);
}


// Function WBP_PassiveList.WBP_PassiveList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PassiveList_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PassiveList.WBP_PassiveList_C.RefreshAvailablePassives
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     Param_SelectedPassives                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PassiveList_C::RefreshAvailablePassives(TArray<class FName>& Param_SelectedPassives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "RefreshAvailablePassives");

	Params::WBP_PassiveList_C_RefreshAvailablePassives Parms{};

	Parms.Param_SelectedPassives = std::move(Param_SelectedPassives);

	UObject::ProcessEvent(Func, &Parms);

	Param_SelectedPassives = std::move(Parms.Param_SelectedPassives);
}


// Function WBP_PassiveList.WBP_PassiveList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "PreConstruct");

	Params::WBP_PassiveList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PassiveList.WBP_PassiveList_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveList_C::OnSelect__DelegateSignature(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "OnSelect__DelegateSignature");

	Params::WBP_PassiveList_C_OnSelect__DelegateSignature Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PassiveList.WBP_PassiveList_C.OnPassiveUnhovered
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PassiveList_C::OnPassiveUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "OnPassiveUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PassiveList.WBP_PassiveList_C.OnPassiveSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PassiveSkill_C*              Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveList_C::OnPassiveSelected(class UWBP_PassiveSkill_C* Button, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "OnPassiveSelected");

	Params::WBP_PassiveList_C_OnPassiveSelected Parms{};

	Parms.Button = Button;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PassiveList.WBP_PassiveList_C.OnPassiveHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PassiveSkill_C*              Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveList_C::OnPassiveHovered(class UWBP_PassiveSkill_C* Button, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "OnPassiveHovered");

	Params::WBP_PassiveList_C_OnPassiveHovered Parms{};

	Parms.Button = Button;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PassiveList.WBP_PassiveList_C.OnBackAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PassiveList_C::OnBackAction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "OnBackAction__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PassiveList.WBP_PassiveList_C.ExecuteUbergraph_WBP_PassiveList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveList_C::ExecuteUbergraph_WBP_PassiveList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "ExecuteUbergraph_WBP_PassiveList");

	Params::WBP_PassiveList_C_ExecuteUbergraph_WBP_PassiveList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PassiveList.WBP_PassiveList_C.Delegate_OnPassiveUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PassiveList_C::Delegate_OnPassiveUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "Delegate_OnPassiveUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PassiveList.WBP_PassiveList_C.Delegate_OnPassiveHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveList_C::Delegate_OnPassiveHovered__DelegateSignature(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "Delegate_OnPassiveHovered__DelegateSignature");

	Params::WBP_PassiveList_C_Delegate_OnPassiveHovered__DelegateSignature Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PassiveList.WBP_PassiveList_C.CreateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PassiveList_C::CreateButton(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "CreateButton");

	Params::WBP_PassiveList_C_CreateButton Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PassiveList.WBP_PassiveList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PassiveList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PassiveList.WBP_PassiveList_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PassiveList_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PassiveList.WBP_PassiveList_C.BndEvt__WBP_PassiveList_WBP_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_PassiveList_C::BndEvt__WBP_PassiveList_WBP_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "BndEvt__WBP_PassiveList_WBP_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PassiveList.WBP_PassiveList_C.AddMissingPassives
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PassiveList_C::AddMissingPassives()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PassiveList_C", "AddMissingPassives");

	UObject::ProcessEvent(Func, nullptr);
}

}
