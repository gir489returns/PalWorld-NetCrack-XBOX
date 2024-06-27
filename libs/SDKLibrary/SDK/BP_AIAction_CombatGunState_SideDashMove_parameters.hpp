#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_CombatGunState_SideDashMove

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C.ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove
// 0x00D0 (0x00D0 - 0x0000)
struct BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetMovementComponentRef_Movement;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetMovementComponentRef_Movement_1;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_FindMoveGoal_Goal;                        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMoveGoal_Success;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A9[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon_1;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_6; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                  CallFunc_GetWeaponHandle_WeaponHandle;             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_7; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon_2;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_8; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon_3;              // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_9; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AA[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove) == 0x000008, "Wrong alignment on BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove");
static_assert(sizeof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove) == 0x0000D0, "Wrong size on BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, EntryPoint) == 0x000000, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x000008, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetMovementComponentRef_Movement) == 0x000010, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetMovementComponentRef_Movement' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1) == 0x000018, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetMovementComponentRef_Movement_1) == 0x000020, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetMovementComponentRef_Movement_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_FindMoveGoal_Goal) == 0x000028, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_FindMoveGoal_Goal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_FindMoveGoal_Success) == 0x000040, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_FindMoveGoal_Success' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, K2Node_Event_DeltaTime) == 0x000044, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2) == 0x000048, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3) == 0x000050, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetControllerRef_NPCAICon) == 0x000058, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4) == 0x000060, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5) == 0x000068, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetControllerRef_NPCAICon_1) == 0x000070, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetControllerRef_NPCAICon_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_6) == 0x000078, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_6' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetWeaponHandle_WeaponHandle) == 0x000080, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetWeaponHandle_WeaponHandle' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_7) == 0x000088, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_7' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetControllerRef_NPCAICon_2) == 0x000090, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetControllerRef_NPCAICon_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_8) == 0x000098, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_8' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetControllerRef_NPCAICon_3) == 0x0000A0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetControllerRef_NPCAICon_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_9) == 0x0000A8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_9' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C.FindMoveGoal
// 0x0350 (0x0350 - 0x0000)
struct BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal final
{
public:
	struct FVector                                Goal;                                              // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AB[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        GoalAbleList;                                      // 0x0020(0x0010)(Edit, BlueprintVisible)
	double                                        Distance_Right;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Distance_Forward;                                  // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfForward;                                       // 0x0040(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfRight;                                         // 0x0058(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfToTargetNormal;                                // 0x0070(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        GoalList;                                          // 0x0088(0x0010)(Edit, BlueprintVisible)
	struct FVector                                SelfToTarget;                                      // 0x0098(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ToTargetDistance;                                  // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeXY_ReturnValue;                      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  CallFunc_GetControllerRef_NPCAICon;                // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AC[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AD[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation; // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue; // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AE[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AF[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B0[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B1[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue_1;         // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x02C8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_3;      // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B2[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal) == 0x000008, "Wrong alignment on BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal");
static_assert(sizeof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal) == 0x000350, "Wrong size on BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, Goal) == 0x000000, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::Goal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, Success) == 0x000018, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::Success' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, GoalAbleList) == 0x000020, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::GoalAbleList' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, Distance_Right) == 0x000030, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::Distance_Right' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, Distance_Forward) == 0x000038, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::Distance_Forward' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, SelfForward) == 0x000040, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::SelfForward' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, SelfRight) == 0x000058, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::SelfRight' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, SelfToTargetNormal) == 0x000070, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::SelfToTargetNormal' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, GoalList) == 0x000088, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::GoalList' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, SelfToTarget) == 0x000098, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::SelfToTarget' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, ToTargetDistance) == 0x0000B0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::ToTargetDistance' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_VSizeXY_ReturnValue) == 0x0000B8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_VSizeXY_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Vector_Normal2D_ReturnValue) == 0x0000C0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_GetControllerRef_NPCAICon) == 0x0000D8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_GetControllerRef_NPCAICon' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_GetSelfActor_SelfActor) == 0x0000E0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_GetActorForwardVector_ReturnValue) == 0x0000E8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000100, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, Temp_int_Array_Index_Variable) == 0x000118, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Array_Length_ReturnValue) == 0x00011C, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Array_Length_ReturnValue_1) == 0x000120, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_RandomInteger_ReturnValue) == 0x000124, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Greater_IntInt_ReturnValue) == 0x000128, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Array_Get_Item) == 0x000130, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000148, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Array_Get_Item_1) == 0x000160, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Array_Length_ReturnValue_2) == 0x000178, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation) == 0x000180, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue) == 0x000198, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Array_Add_ReturnValue) == 0x00019C, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0001A0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001B8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x0001D0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0001E8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, Temp_int_Loop_Counter_Variable) == 0x000200, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Multiply_VectorVector_ReturnValue_2) == 0x000208, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Multiply_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Add_VectorVector_ReturnValue) == 0x000220, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000238, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000250, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Add_VectorVector_ReturnValue_3) == 0x000268, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Array_Add_ReturnValue_1) == 0x000280, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Array_Add_ReturnValue_2) == 0x000284, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Less_IntInt_ReturnValue) == 0x000288, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Add_IntInt_ReturnValue) == 0x00028C, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000290, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Cross_VectorVector_ReturnValue) == 0x000298, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Conv_FloatToVector_ReturnValue_1) == 0x0002B0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Conv_FloatToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x0002C8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Multiply_VectorVector_ReturnValue_3) == 0x0002D0, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Multiply_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Add_VectorVector_ReturnValue_4) == 0x0002E8, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000300, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000318, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_IsValid_ReturnValue) == 0x000330, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000338, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C.StateTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AIAction_CombatGunState_SideDashMove_C_StateTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_CombatGunState_SideDashMove_C_StateTick) == 0x000004, "Wrong alignment on BP_AIAction_CombatGunState_SideDashMove_C_StateTick");
static_assert(sizeof(BP_AIAction_CombatGunState_SideDashMove_C_StateTick) == 0x000004, "Wrong size on BP_AIAction_CombatGunState_SideDashMove_C_StateTick");
static_assert(offsetof(BP_AIAction_CombatGunState_SideDashMove_C_StateTick, DeltaTime) == 0x000000, "Member 'BP_AIAction_CombatGunState_SideDashMove_C_StateTick::DeltaTime' has a wrong offset!");

}

