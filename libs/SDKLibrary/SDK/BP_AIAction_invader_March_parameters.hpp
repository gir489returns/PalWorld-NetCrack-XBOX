#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x151 (0x151 - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.Warp Move
struct UBP_AIAction_invader_March_C_Warp_Move_Params
{
public:
	double                                       MinDistance;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SelfPos;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x68(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.CountupNotStartTimer
struct UBP_AIAction_invader_March_C_CountupNotStartTimer_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNearTwoPoint_ReturnValue;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.Get Controller Ref
struct UBP_AIAction_invader_March_C_Get_Controller_Ref_Params
{
public:
	class APalAIController*                      AICon;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.MoveToTargetLocation
struct UBP_AIAction_invader_March_C_MoveToTargetLocation_Params
{
public:
	class APalAIController*                      CallFunc_GetPalAIController_ReturnValue;           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x5E (0x5E - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.SetupSkillSlot
struct UBP_AIAction_invader_March_C_SetupSkillSlot_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2803[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController;             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2805[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2807[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPalWazaID>                CallFunc_GetEquipWaza_ReturnValue;                 // 0x48(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalWazaID                        CallFunc_Array_Get_Item;                           // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD9 (0xD9 - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.AttackNearestMapObject
struct UBP_AIAction_invader_March_C_AttackNearestMapObject_Params
{
public:
	class APalMapObject*                         Local_NearestMapObject;                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                   Local_ActionComp;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActiveSkillSlot*                   Local_SkillSlot;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        SkillID;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2813[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2814[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalMapObject*                         CallFunc_GetNearestEnemyBuildObject_ReturnValue;   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ChoiceEnableSlotIDByRandom_ReturnValue;   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2815[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue;          // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalWazaID                        CallFunc_GetWazaType_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2816[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UPalActionBase>            CallFunc_Map_Find_Value;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2817[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_NPCAIController_Invader_C*         K2Node_DynamicCast_AsBP_NPCAIController_Invader;   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2818[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        CallFunc_PlayAction_ReturnValue;                   // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController;             // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2819[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionBase*                        CallFunc_PlayAction_ReturnValue_1;                 // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_3;                 // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                   CallFunc_GetComponentByClass_ReturnValue_2;        // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActionIsEmpty_ReturnValue;                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAA (0xAA - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.FindNearPlayer
struct UBP_AIAction_invader_March_C_FindNearPlayer_Params
{
public:
	class APalPlayerCharacter*                   Player;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       TempDistance;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   NearestPlayer;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                       NearestDistance;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_NearDistance;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SelfPos;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_281F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2820[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterImportanceManager*        CallFunc_GetCharacterImportanceManager_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                 CallFunc_GetAllPlayer_OutArray;                    // 0x48(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2821[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2823[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   K2Node_DynamicCast_AsPal_Player_Character;         // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2825[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Vector_Distance2DSquared_ReturnValue;     // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLive_ReturnValue;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetActiveActorFlag_ReturnValue;           // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.Setup
struct UBP_AIAction_invader_March_C_Setup_Params
{
public:
	struct FVector                               GoalPosition;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.StartCombatMode
struct UBP_AIAction_invader_March_C_StartCombatMode_Params
{
public:
	class UClass*                                CombatClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_Invader_C*         K2Node_DynamicCast_AsBP_NPCAIController_Invader;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_282A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBase*                      CallFunc_SetAIActionClassParameter_ReturnValue;    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                 CallFunc_GetWeaponHandle_WeaponHandle;             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UPalAIActionBase>          CallFunc_GetCombatClass_ReturnValue;               // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_FindNearPlayer_Player;                    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController;             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.ActionTick
struct UBP_AIAction_invader_March_C_ActionTick_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.ActionStart
struct UBP_AIAction_invader_March_C_ActionStart_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11C (0x11C - 0x0)
// Function BP_AIAction_invader_March.BP_AIAction_invader_March_C.ExecuteUbergraph_BP_AIAction_invader_March
struct UBP_AIAction_invader_March_C_ExecuteUbergraph_BP_AIAction_invader_March_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_283C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_ControlledPawn_1;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_283D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNearTwoPoint_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_283E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2842[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_AIController_Interface_Invader_C> K2Node_DynamicCast_AsBP_AIController_Interface_Invader; // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2845[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNearTwoPoint_ReturnValue_1;             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2847[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      CallFunc_GetPalAIController_ReturnValue;           // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;     // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_284E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PalAIBlackboard_Common_C*          CallFunc_GetMyBB_PalBrackboard;                    // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_284F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_CountupNotStartTimer_DeltaTime_ImplicitCast; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


