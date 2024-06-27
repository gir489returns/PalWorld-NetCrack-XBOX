#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUDDispatchParameter_KeyConfig

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function BP_HUDDispatchParameter_KeyConfig.BP_HUDDispatchParameter_KeyConfig_C.OnKeyChanged__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature final
{
public:
	class FName                                   Param_ActionName;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   NewKey;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	EPalKeyConfigCategory                         Param_InputType;                                   // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalKeyConfigAxisFilterType                   Param_AxisType;                                    // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature) == 0x000008, "Wrong alignment on BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature");
static_assert(sizeof(BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature) == 0x000028, "Wrong size on BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature");
static_assert(offsetof(BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature, Param_ActionName) == 0x000000, "Member 'BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature::Param_ActionName' has a wrong offset!");
static_assert(offsetof(BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature, NewKey) == 0x000008, "Member 'BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature::NewKey' has a wrong offset!");
static_assert(offsetof(BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature, Param_InputType) == 0x000020, "Member 'BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature::Param_InputType' has a wrong offset!");
static_assert(offsetof(BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature, Param_AxisType) == 0x000021, "Member 'BP_HUDDispatchParameter_KeyConfig_C_OnKeyChanged__DelegateSignature::Param_AxisType' has a wrong offset!");

}

