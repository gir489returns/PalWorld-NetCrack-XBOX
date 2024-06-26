#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPC_Relax_SalesPerson

#include "Basic.hpp"

#include "BP_AIAction_NPC_RelaxBase_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_NPC_Relax_SalesPerson.BP_AIAction_NPC_Relax_SalesPerson_C
// 0x0000 (0x01F8 - 0x01F8)
class UBP_AIAction_NPC_Relax_SalesPerson_C final : public UBP_AIAction_NPC_RelaxBase_C
{
public:
	void GetTransitionableJudgementType(TArray<EPalAISightJudgementType>* JudgeTypeList);
	void SoundEvent(const struct FVector& EmitLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NPC_Relax_SalesPerson_C">();
	}
	static class UBP_AIAction_NPC_Relax_SalesPerson_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NPC_Relax_SalesPerson_C>();
	}
};
static_assert(alignof(UBP_AIAction_NPC_Relax_SalesPerson_C) == 0x000008, "Wrong alignment on UBP_AIAction_NPC_Relax_SalesPerson_C");
static_assert(sizeof(UBP_AIAction_NPC_Relax_SalesPerson_C) == 0x0001F8, "Wrong size on UBP_AIAction_NPC_Relax_SalesPerson_C");

}

