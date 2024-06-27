#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalIncidentRandomActionMerchantwithPAL

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalIncidentRandomActionMerchantwithPAL.BP_PalIncidentRandomActionMerchantwithPAL_C.BindOnDamage
// 0x0050 (0x0050 - 0x0000)
struct BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46FE[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalNPC*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46FF[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalNPC*                                CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage) == 0x000008, "Wrong alignment on BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage");
static_assert(sizeof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage) == 0x000050, "Wrong size on BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage, CallFunc_Less_IntInt_ReturnValue_1) == 0x00004C, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_BindOnDamage::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_PalIncidentRandomActionMerchantwithPAL.BP_PalIncidentRandomActionMerchantwithPAL_C.CollectSpawnCharacter
// 0x0060 (0x0060 - 0x0000)
struct BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4700[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalRandomIncidentNPCSpawner*           CallFunc_GetSpawner_Spawmer;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetSpawnedCharacters_SpawnedCharacters;   // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4701[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4702[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalNPC*                                K2Node_DynamicCast_AsPal_NPC;                      // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4703[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   K2Node_DynamicCast_AsPal_Monster_Character;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4704[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter) == 0x000008, "Wrong alignment on BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter");
static_assert(sizeof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter) == 0x000060, "Wrong size on BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, CallFunc_GetSpawner_Spawmer) == 0x000010, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::CallFunc_GetSpawner_Spawmer' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, CallFunc_GetSpawnedCharacters_SpawnedCharacters) == 0x000018, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::CallFunc_GetSpawnedCharacters_SpawnedCharacters' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, K2Node_DynamicCast_AsPal_NPC) == 0x000040, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::K2Node_DynamicCast_AsPal_NPC' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, CallFunc_Array_Add_ReturnValue) == 0x00004C, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, K2Node_DynamicCast_AsPal_Monster_Character) == 0x000050, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::K2Node_DynamicCast_AsPal_Monster_Character' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter, CallFunc_Array_Add_ReturnValue_1) == 0x00005C, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_CollectSpawnCharacter::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function BP_PalIncidentRandomActionMerchantwithPAL.BP_PalIncidentRandomActionMerchantwithPAL_C.ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL
// 0x0004 (0x0004 - 0x0000)
struct BP_PalIncidentRandomActionMerchantwithPAL_C_ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionMerchantwithPAL_C_ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL) == 0x000004, "Wrong alignment on BP_PalIncidentRandomActionMerchantwithPAL_C_ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL");
static_assert(sizeof(BP_PalIncidentRandomActionMerchantwithPAL_C_ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL) == 0x000004, "Wrong size on BP_PalIncidentRandomActionMerchantwithPAL_C_ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL, EntryPoint) == 0x000000, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_ExecuteUbergraph_BP_PalIncidentRandomActionMerchantwithPAL::EntryPoint' has a wrong offset!");

// Function BP_PalIncidentRandomActionMerchantwithPAL.BP_PalIncidentRandomActionMerchantwithPAL_C.OnDamage
// 0x00B8 (0x00B8 - 0x0000)
struct BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class AActor*                                 Attacker;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalNPC*                                CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          CallFunc_GetAIController_ReturnValue_1;            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_MarchantPal_C*  K2Node_DynamicCast_AsBP_Monster_AIController_Marchant_Pal; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4705[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPCAIController_C*                  K2Node_DynamicCast_AsBP_NPCAIController;           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4706[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage) == 0x000008, "Wrong alignment on BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage");
static_assert(sizeof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage) == 0x0000B8, "Wrong size on BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, DamageResult) == 0x000000, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::DamageResult' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, Attacker) == 0x000050, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::Attacker' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, Temp_int_Loop_Counter_Variable_1) == 0x000060, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, Temp_int_Array_Index_Variable) == 0x000068, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, Temp_int_Array_Index_Variable_1) == 0x00006C, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_Array_Get_Item) == 0x000070, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_GetAIController_ReturnValue) == 0x000080, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_GetAIController_ReturnValue_1) == 0x000088, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_GetAIController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, K2Node_DynamicCast_AsBP_Monster_AIController_Marchant_Pal) == 0x000090, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::K2Node_DynamicCast_AsBP_Monster_AIController_Marchant_Pal' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, K2Node_DynamicCast_AsBP_NPCAIController) == 0x0000A0, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::K2Node_DynamicCast_AsBP_NPCAIController' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_IsValid_ReturnValue) == 0x0000A9, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_IsValid_ReturnValue_1) == 0x0000AA, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_Array_Length_ReturnValue) == 0x0000AC, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_Array_Length_ReturnValue_1) == 0x0000B0, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_Less_IntInt_ReturnValue) == 0x0000B4, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B5, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_OnDamage::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_PalIncidentRandomActionMerchantwithPAL.BP_PalIncidentRandomActionMerchantwithPAL_C.UnbindOnDamage
// 0x0048 (0x0048 - 0x0000)
struct BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalNPC*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalNPC*                                CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4707[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage) == 0x000008, "Wrong alignment on BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage");
static_assert(sizeof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage) == 0x000048, "Wrong size on BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, Temp_int_Loop_Counter_Variable_1) == 0x00000C, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_Array_Length_ReturnValue_1) == 0x000040, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage, CallFunc_Less_IntInt_ReturnValue_1) == 0x000045, "Member 'BP_PalIncidentRandomActionMerchantwithPAL_C_UnbindOnDamage::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

