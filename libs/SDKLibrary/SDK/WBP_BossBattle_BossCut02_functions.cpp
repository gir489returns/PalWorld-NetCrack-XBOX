#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BossBattle_BossCut02

#include "Basic.hpp"

#include "WBP_BossBattle_BossCut02_classes.hpp"
#include "WBP_BossBattle_BossCut02_parameters.hpp"


namespace SDK
{

// Function WBP_BossBattle_BossCut02.WBP_BossBattle_BossCut02_C.SetTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MainName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             SubName                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BossBattle_BossCut02_C::SetTexts(const class FText& MainName, const class FText& SubName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BossBattle_BossCut02_C", "SetTexts");

	Params::WBP_BossBattle_BossCut02_C_SetTexts Parms{};

	Parms.MainName = std::move(MainName);
	Parms.SubName = std::move(SubName);

	UObject::ProcessEvent(Func, &Parms);
}

}

