#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalSpawnerInfoReporter

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalSpawnerInfoReporter.BP_PalSpawnerInfoReporter_C.GetDebugInfoString
// 0x0138 (0x0138 - 0x0000)
struct BP_PalSpawnerInfoReporter_C_GetDebugInfoString final
{
public:
	class APalNPCSpawnerBase*                     Spawner;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class ABP_PalSpawner_Standard_C*              LocalSpawner;                                      // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FString                                 TempString;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ABP_PalSpawner_Standard_C*              K2Node_DynamicCast_AsBP_Pal_Spawner_Standard;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSpawnDisable_ReturnValue;               // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWorldPartitionLoadComplete_IsLoading;   // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCharacterLoading_IsLoading;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B22[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalSpawnerGroupInfo                   CallFunc_GetFixedSpawnInfo_Group;                  // 0x0040(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalSpawnerOneTribeInfo                CallFunc_Array_Get_Item;                           // 0x0060(0x0020)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B23[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B24[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B25[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSpawnDisableDebugInfo_ReturnValue;     // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString) == 0x000008, "Wrong alignment on BP_PalSpawnerInfoReporter_C_GetDebugInfoString");
static_assert(sizeof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString) == 0x000138, "Wrong size on BP_PalSpawnerInfoReporter_C_GetDebugInfoString");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, Spawner) == 0x000000, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::Spawner' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, ReturnValue) == 0x000008, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, LocalSpawner) == 0x000018, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::LocalSpawner' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, TempString) == 0x000020, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::TempString' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, K2Node_DynamicCast_AsBP_Pal_Spawner_Standard) == 0x000030, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::K2Node_DynamicCast_AsBP_Pal_Spawner_Standard' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, Temp_bool_True_if_break_was_hit_Variable) == 0x000039, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_IsSpawnDisable_ReturnValue) == 0x00003B, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_IsSpawnDisable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_IsWorldPartitionLoadComplete_IsLoading) == 0x00003C, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_IsWorldPartitionLoadComplete_IsLoading' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_IsCharacterLoading_IsLoading) == 0x00003D, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_IsCharacterLoading_IsLoading' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_GetFixedSpawnInfo_Group) == 0x000040, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_GetFixedSpawnInfo_Group' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, Temp_int_Array_Index_Variable) == 0x000058, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Conv_NameToString_ReturnValue) == 0x000088, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_BooleanAND_ReturnValue) == 0x0000A0, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_GetSpawnDisableDebugInfo_ReturnValue) == 0x0000A8, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_GetSpawnDisableDebugInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C8, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D8, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000E8, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000F8, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000108, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000118, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PalSpawnerInfoReporter_C_GetDebugInfoString, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000128, "Member 'BP_PalSpawnerInfoReporter_C_GetDebugInfoString::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");

}

