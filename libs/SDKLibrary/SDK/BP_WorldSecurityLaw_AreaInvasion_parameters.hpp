#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldSecurityLaw_AreaInvasion

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_WorldSecurityLaw_AreaInvasion.BP_WorldSecurityLaw_AreaInvasion_C.Condition
// 0x0028 (0x0028 - 0x0000)
struct BP_WorldSecurityLaw_AreaInvasion_C_Condition final
{
public:
	class AActor*                                 InvasionActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CriminalHandle;                                    // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurityLaw_AreaInvasion_C_Condition) == 0x000008, "Wrong alignment on BP_WorldSecurityLaw_AreaInvasion_C_Condition");
static_assert(sizeof(BP_WorldSecurityLaw_AreaInvasion_C_Condition) == 0x000028, "Wrong size on BP_WorldSecurityLaw_AreaInvasion_C_Condition");
static_assert(offsetof(BP_WorldSecurityLaw_AreaInvasion_C_Condition, InvasionActor) == 0x000000, "Member 'BP_WorldSecurityLaw_AreaInvasion_C_Condition::InvasionActor' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_AreaInvasion_C_Condition, CriminalHandle) == 0x000008, "Member 'BP_WorldSecurityLaw_AreaInvasion_C_Condition::CriminalHandle' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_AreaInvasion_C_Condition, ReturnValue) == 0x000010, "Member 'BP_WorldSecurityLaw_AreaInvasion_C_Condition::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_AreaInvasion_C_Condition, K2Node_DynamicCast_AsPal_Character) == 0x000018, "Member 'BP_WorldSecurityLaw_AreaInvasion_C_Condition::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_AreaInvasion_C_Condition, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_WorldSecurityLaw_AreaInvasion_C_Condition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_WorldSecurityLaw_AreaInvasion_C_Condition, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_WorldSecurityLaw_AreaInvasion_C_Condition::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_WorldSecurityLaw_AreaInvasion.BP_WorldSecurityLaw_AreaInvasion_C.ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion
// 0x0004 (0x0004 - 0x0000)
struct BP_WorldSecurityLaw_AreaInvasion_C_ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldSecurityLaw_AreaInvasion_C_ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion) == 0x000004, "Wrong alignment on BP_WorldSecurityLaw_AreaInvasion_C_ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion");
static_assert(sizeof(BP_WorldSecurityLaw_AreaInvasion_C_ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion) == 0x000004, "Wrong size on BP_WorldSecurityLaw_AreaInvasion_C_ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion");
static_assert(offsetof(BP_WorldSecurityLaw_AreaInvasion_C_ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion, EntryPoint) == 0x000000, "Member 'BP_WorldSecurityLaw_AreaInvasion_C_ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion::EntryPoint' has a wrong offset!");

}

