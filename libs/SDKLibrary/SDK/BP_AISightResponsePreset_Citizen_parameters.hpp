#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AISightResponsePreset_Citizen

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AISightResponsePreset_Citizen.BP_AISightResponsePreset_Citizen_C.ExecuteUbergraph_BP_AISightResponsePreset_Citizen
// 0x0068 (0x0068 - 0x0000)
struct BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47CF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_CustomEvent_SelfCharacter;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_FoundCharacter;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* SelfCharacter, class APalCharacter* FoundCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen) == 0x000008, "Wrong alignment on BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen");
static_assert(sizeof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen) == 0x000068, "Wrong size on BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen, EntryPoint) == 0x000000, "Member 'BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen, K2Node_CustomEvent_SelfCharacter) == 0x000008, "Member 'BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen::K2Node_CustomEvent_SelfCharacter' has a wrong offset!");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen, K2Node_CustomEvent_FoundCharacter) == 0x000010, "Member 'BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen::K2Node_CustomEvent_FoundCharacter' has a wrong offset!");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen, CallFunc_GetDisplayName_ReturnValue_1) == 0x000038, "Member 'BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'BP_AISightResponsePreset_Citizen_C_ExecuteUbergraph_BP_AISightResponsePreset_Citizen::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_AISightResponsePreset_Citizen.BP_AISightResponsePreset_Citizen_C.�������_0
// 0x0010 (0x0010 - 0x0000)
struct BP_AISightResponsePreset_Citizen_C__________0 final
{
public:
	class APalCharacter*                          SelfCharacter;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          FoundCharacter;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AISightResponsePreset_Citizen_C__________0) == 0x000008, "Wrong alignment on BP_AISightResponsePreset_Citizen_C__________0");
static_assert(sizeof(BP_AISightResponsePreset_Citizen_C__________0) == 0x000010, "Wrong size on BP_AISightResponsePreset_Citizen_C__________0");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C__________0, SelfCharacter) == 0x000000, "Member 'BP_AISightResponsePreset_Citizen_C__________0::SelfCharacter' has a wrong offset!");
static_assert(offsetof(BP_AISightResponsePreset_Citizen_C__________0, FoundCharacter) == 0x000008, "Member 'BP_AISightResponsePreset_Citizen_C__________0::FoundCharacter' has a wrong offset!");

}

