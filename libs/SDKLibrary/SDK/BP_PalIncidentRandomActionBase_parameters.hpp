#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalIncidentRandomActionBase

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.ExecuteUbergraph_BP_PalIncidentRandomActionBase
// 0x0004 (0x0004 - 0x0000)
struct BP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase) == 0x000004, "Wrong alignment on BP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase");
static_assert(sizeof(BP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase) == 0x000004, "Wrong size on BP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase, EntryPoint) == 0x000000, "Member 'BP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase::EntryPoint' has a wrong offset!");

// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetOwnerIncident
// 0x0020 (0x0020 - 0x0000)
struct BP_PalIncidentRandomActionBase_C_GetOwnerIncident final
{
public:
	class UBP_PalIncidentRandom_C*                Incident;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentRandom_C*                K2Node_DynamicCast_AsBP_Pal_Incident_Random;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionBase_C_GetOwnerIncident) == 0x000008, "Wrong alignment on BP_PalIncidentRandomActionBase_C_GetOwnerIncident");
static_assert(sizeof(BP_PalIncidentRandomActionBase_C_GetOwnerIncident) == 0x000020, "Wrong size on BP_PalIncidentRandomActionBase_C_GetOwnerIncident");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetOwnerIncident, Incident) == 0x000000, "Member 'BP_PalIncidentRandomActionBase_C_GetOwnerIncident::Incident' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetOwnerIncident, CallFunc_GetOuterObject_ReturnValue) == 0x000008, "Member 'BP_PalIncidentRandomActionBase_C_GetOwnerIncident::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetOwnerIncident, K2Node_DynamicCast_AsBP_Pal_Incident_Random) == 0x000010, "Member 'BP_PalIncidentRandomActionBase_C_GetOwnerIncident::K2Node_DynamicCast_AsBP_Pal_Incident_Random' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetOwnerIncident, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PalIncidentRandomActionBase_C_GetOwnerIncident::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetParameter
// 0x0028 (0x0028 - 0x0000)
struct BP_PalIncidentRandomActionBase_C_GetParameter final
{
public:
	class UPalIncidentDynamicParameterRandom*     DynamicParameter;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentRandom_C*                CallFunc_GetOwnerIncident_Incident;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameter*           CallFunc_GetDynamicParameter_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterRandom*     K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionBase_C_GetParameter) == 0x000008, "Wrong alignment on BP_PalIncidentRandomActionBase_C_GetParameter");
static_assert(sizeof(BP_PalIncidentRandomActionBase_C_GetParameter) == 0x000028, "Wrong size on BP_PalIncidentRandomActionBase_C_GetParameter");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetParameter, DynamicParameter) == 0x000000, "Member 'BP_PalIncidentRandomActionBase_C_GetParameter::DynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetParameter, CallFunc_GetOwnerIncident_Incident) == 0x000008, "Member 'BP_PalIncidentRandomActionBase_C_GetParameter::CallFunc_GetOwnerIncident_Incident' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetParameter, CallFunc_GetDynamicParameter_ReturnValue) == 0x000010, "Member 'BP_PalIncidentRandomActionBase_C_GetParameter::CallFunc_GetDynamicParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetParameter, K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random) == 0x000018, "Member 'BP_PalIncidentRandomActionBase_C_GetParameter::K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetParameter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_PalIncidentRandomActionBase_C_GetParameter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetSettingTableRow
// 0x0088 (0x0088 - 0x0000)
struct BP_PalIncidentRandomActionBase_C_GetSettingTableRow final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46CA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalRandomIncidentSettings             Data;                                              // 0x0008(0x0030)(Parm, OutParm)
	class UBP_PalIncidentRandom_C*                CallFunc_GetOwnerIncident_Incident;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Setting_Table_Row_Result;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46CB[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalRandomIncidentSettings             CallFunc_Get_Setting_Table_Row_Data;               // 0x0048(0x0030)()
	class UBP_PalIncidentRandom_C*                CallFunc_GetOwnerIncident_Incident_1;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow) == 0x000008, "Wrong alignment on BP_PalIncidentRandomActionBase_C_GetSettingTableRow");
static_assert(sizeof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow) == 0x000088, "Wrong size on BP_PalIncidentRandomActionBase_C_GetSettingTableRow");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow, Result) == 0x000000, "Member 'BP_PalIncidentRandomActionBase_C_GetSettingTableRow::Result' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow, Data) == 0x000008, "Member 'BP_PalIncidentRandomActionBase_C_GetSettingTableRow::Data' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow, CallFunc_GetOwnerIncident_Incident) == 0x000038, "Member 'BP_PalIncidentRandomActionBase_C_GetSettingTableRow::CallFunc_GetOwnerIncident_Incident' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow, CallFunc_Get_Setting_Table_Row_Result) == 0x000040, "Member 'BP_PalIncidentRandomActionBase_C_GetSettingTableRow::CallFunc_Get_Setting_Table_Row_Result' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow, CallFunc_Get_Setting_Table_Row_Data) == 0x000048, "Member 'BP_PalIncidentRandomActionBase_C_GetSettingTableRow::CallFunc_Get_Setting_Table_Row_Data' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow, CallFunc_GetOwnerIncident_Incident_1) == 0x000078, "Member 'BP_PalIncidentRandomActionBase_C_GetSettingTableRow::CallFunc_GetOwnerIncident_Incident_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSettingTableRow, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_PalIncidentRandomActionBase_C_GetSettingTableRow::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetSpawner
// 0x0020 (0x0020 - 0x0000)
struct BP_PalIncidentRandomActionBase_C_GetSpawner final
{
public:
	class APalRandomIncidentNPCSpawner*           Spawmer;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentRandom_C*                K2Node_DynamicCast_AsBP_Pal_Incident_Random;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionBase_C_GetSpawner) == 0x000008, "Wrong alignment on BP_PalIncidentRandomActionBase_C_GetSpawner");
static_assert(sizeof(BP_PalIncidentRandomActionBase_C_GetSpawner) == 0x000020, "Wrong size on BP_PalIncidentRandomActionBase_C_GetSpawner");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSpawner, Spawmer) == 0x000000, "Member 'BP_PalIncidentRandomActionBase_C_GetSpawner::Spawmer' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSpawner, CallFunc_GetOuterObject_ReturnValue) == 0x000008, "Member 'BP_PalIncidentRandomActionBase_C_GetSpawner::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSpawner, K2Node_DynamicCast_AsBP_Pal_Incident_Random) == 0x000010, "Member 'BP_PalIncidentRandomActionBase_C_GetSpawner::K2Node_DynamicCast_AsBP_Pal_Incident_Random' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionBase_C_GetSpawner, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PalIncidentRandomActionBase_C_GetSpawner::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

