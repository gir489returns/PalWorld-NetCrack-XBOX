#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalCaptureJudgeObject

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalCaptureJudgeObject.BP_PalCaptureJudgeObject_C.ExecuteUbergraph_BP_PalCaptureJudgeObject
// 0x0330 (0x0330 - 0x0000)
struct BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class APalCharacter*                    K2Node_Event_character_2;                          // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCaptureResult                         K2Node_Event_result_2;                             // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x00D0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class APalCharacter*                    K2Node_Event_character_1;                          // 0x0130(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCaptureResult                         K2Node_Event_result_1;                             // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B7[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class APalCharacter*                    K2Node_Event_character;                            // 0x0198(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCaptureResult                         K2Node_Event_result;                               // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B8[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_2;               // 0x01B0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_2;                // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;                // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_2;                   // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B9[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_2;      // 0x0260(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41BA[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_3;               // 0x0270(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_3;                // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_3;                // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_3;                   // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_3;      // 0x0318(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ReturnOwnerMovement_DeltaTime_ImplicitCast; // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject) == 0x000010, "Wrong alignment on BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject");
static_assert(sizeof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject) == 0x000330, "Wrong size on BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, EntryPoint) == 0x000000, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, K2Node_Event_character_2) == 0x000008, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::K2Node_Event_character_2' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, K2Node_Event_result_2) == 0x000010, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::K2Node_Event_result_2' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Location) == 0x000080, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Rotation) == 0x000098, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Scale) == 0x0000B0, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000C8, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_GetTransform_ReturnValue_1) == 0x0000D0, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, K2Node_Event_character_1) == 0x000130, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::K2Node_Event_character_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, K2Node_Event_result_1) == 0x000138, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::K2Node_Event_result_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Location_1) == 0x000148, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Rotation_1) == 0x000160, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Scale_1) == 0x000178, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x000190, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, K2Node_Event_character) == 0x000198, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::K2Node_Event_character' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, K2Node_Event_result) == 0x0001A0, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::K2Node_Event_result' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_GetTransform_ReturnValue_2) == 0x0001B0, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_GetTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Location_2) == 0x000210, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Rotation_2) == 0x000228, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Scale_2) == 0x000240, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, K2Node_Event_DeltaSeconds) == 0x000258, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_SpawnSystemAtLocation_ReturnValue_2) == 0x000260, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_SpawnSystemAtLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_GetTransform_ReturnValue_3) == 0x000270, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_GetTransform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Location_3) == 0x0002D0, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Location_3' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Rotation_3) == 0x0002E8, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Rotation_3' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_BreakTransform_Scale_3) == 0x000300, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_BreakTransform_Scale_3' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_SpawnSystemAtLocation_ReturnValue_3) == 0x000318, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_SpawnSystemAtLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject, CallFunc_ReturnOwnerMovement_DeltaTime_ImplicitCast) == 0x000320, "Member 'BP_PalCaptureJudgeObject_C_ExecuteUbergraph_BP_PalCaptureJudgeObject::CallFunc_ReturnOwnerMovement_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_PalCaptureJudgeObject.BP_PalCaptureJudgeObject_C.OnCaptureSuccess
// 0x0018 (0x0018 - 0x0000)
struct BP_PalCaptureJudgeObject_C_OnCaptureSuccess final
{
public:
	const class APalCharacter*                    Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCaptureResult                         Result;                                            // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PalCaptureJudgeObject_C_OnCaptureSuccess) == 0x000008, "Wrong alignment on BP_PalCaptureJudgeObject_C_OnCaptureSuccess");
static_assert(sizeof(BP_PalCaptureJudgeObject_C_OnCaptureSuccess) == 0x000018, "Wrong size on BP_PalCaptureJudgeObject_C_OnCaptureSuccess");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_OnCaptureSuccess, Character) == 0x000000, "Member 'BP_PalCaptureJudgeObject_C_OnCaptureSuccess::Character' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_OnCaptureSuccess, Result) == 0x000008, "Member 'BP_PalCaptureJudgeObject_C_OnCaptureSuccess::Result' has a wrong offset!");

// Function BP_PalCaptureJudgeObject.BP_PalCaptureJudgeObject_C.OnFailedByMP
// 0x0018 (0x0018 - 0x0000)
struct BP_PalCaptureJudgeObject_C_OnFailedByMP final
{
public:
	const class APalCharacter*                    Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCaptureResult                         Result;                                            // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PalCaptureJudgeObject_C_OnFailedByMP) == 0x000008, "Wrong alignment on BP_PalCaptureJudgeObject_C_OnFailedByMP");
static_assert(sizeof(BP_PalCaptureJudgeObject_C_OnFailedByMP) == 0x000018, "Wrong size on BP_PalCaptureJudgeObject_C_OnFailedByMP");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_OnFailedByMP, Character) == 0x000000, "Member 'BP_PalCaptureJudgeObject_C_OnFailedByMP::Character' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_OnFailedByMP, Result) == 0x000008, "Member 'BP_PalCaptureJudgeObject_C_OnFailedByMP::Result' has a wrong offset!");

// Function BP_PalCaptureJudgeObject.BP_PalCaptureJudgeObject_C.OnFailedByTest
// 0x0018 (0x0018 - 0x0000)
struct BP_PalCaptureJudgeObject_C_OnFailedByTest final
{
public:
	const class APalCharacter*                    Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCaptureResult                         Result;                                            // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PalCaptureJudgeObject_C_OnFailedByTest) == 0x000008, "Wrong alignment on BP_PalCaptureJudgeObject_C_OnFailedByTest");
static_assert(sizeof(BP_PalCaptureJudgeObject_C_OnFailedByTest) == 0x000018, "Wrong size on BP_PalCaptureJudgeObject_C_OnFailedByTest");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_OnFailedByTest, Character) == 0x000000, "Member 'BP_PalCaptureJudgeObject_C_OnFailedByTest::Character' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_OnFailedByTest, Result) == 0x000008, "Member 'BP_PalCaptureJudgeObject_C_OnFailedByTest::Result' has a wrong offset!");

// Function BP_PalCaptureJudgeObject.BP_PalCaptureJudgeObject_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalCaptureJudgeObject_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCaptureJudgeObject_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalCaptureJudgeObject_C_ReceiveTick");
static_assert(sizeof(BP_PalCaptureJudgeObject_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalCaptureJudgeObject_C_ReceiveTick");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalCaptureJudgeObject_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalCaptureJudgeObject.BP_PalCaptureJudgeObject_C.ReturnOwnerMovement
// 0x02E0 (0x02E0 - 0x0000)
struct BP_PalCaptureJudgeObject_C_ReturnOwnerMovement final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetPosition;                                    // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41BB[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_NormalUnsafe_ReturnValue;          // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x01F0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement) == 0x000010, "Wrong alignment on BP_PalCaptureJudgeObject_C_ReturnOwnerMovement");
static_assert(sizeof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement) == 0x0002E0, "Wrong size on BP_PalCaptureJudgeObject_C_ReturnOwnerMovement");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, DeltaTime) == 0x000000, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, TargetPosition) == 0x000008, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::TargetPosition' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_BreakTransform_Location) == 0x000080, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_BreakTransform_Rotation) == 0x000098, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_BreakTransform_Scale) == 0x0000B0, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000C8, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D0, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000E8, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_VSize_ReturnValue) == 0x000100, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000108, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000110, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_FClamp_ReturnValue) == 0x000118, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000120, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000138, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000140, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000158, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000170, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_Vector_NormalUnsafe_ReturnValue) == 0x000178, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_Vector_NormalUnsafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000190, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001A8, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_Add_VectorVector_ReturnValue) == 0x0001C0, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0001D8, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0001F0, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalCaptureJudgeObject_C_ReturnOwnerMovement, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0002D8, "Member 'BP_PalCaptureJudgeObject_C_ReturnOwnerMovement::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

}

