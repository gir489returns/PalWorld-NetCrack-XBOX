#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_NPC_SpawnOtomo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C.ExecuteUbergraph_BP_Action_NPC_SpawnOtomo
// 0x00C8 (0x00C8 - 0x0000)
struct BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0074(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A15[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestSpawnPal_Success;                  // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A16[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo) == 0x000008, "Wrong alignment on BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo");
static_assert(sizeof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo) == 0x0000C8, "Wrong size on BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, EntryPoint) == 0x000000, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CustomEvent_NotifyName_3) == 0x00000C, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CustomEvent_NotifyName_2) == 0x000024, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CustomEvent_NotifyName_1) == 0x00003C, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CustomEvent_NotifyName) == 0x000054, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CreateDelegate_OutputDelegate_3) == 0x00005C, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, Temp_name_Variable) == 0x00006C, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, Temp_byte_Variable) == 0x000074, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_GetActionCharacter_ReturnValue) == 0x000078, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_GetComponentByClass_ReturnValue) == 0x000090, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000098, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_GetMainMesh_ReturnValue) == 0x0000A0, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_Map_Find_Value) == 0x0000A8, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_Map_Find_ReturnValue) == 0x0000B0, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_RequestSpawnPal_Success) == 0x0000B1, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_RequestSpawnPal_Success' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000B8, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo, CallFunc_IsValid_ReturnValue_1) == 0x0000C1, "Member 'BP_Action_NPC_SpawnOtomo_C_ExecuteUbergraph_BP_Action_NPC_SpawnOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C.OnBlendOut_179C21574A41916954EAF49176A11F1A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_SpawnOtomo_C_OnBlendOut_179C21574A41916954EAF49176A11F1A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_SpawnOtomo_C_OnBlendOut_179C21574A41916954EAF49176A11F1A) == 0x000004, "Wrong alignment on BP_Action_NPC_SpawnOtomo_C_OnBlendOut_179C21574A41916954EAF49176A11F1A");
static_assert(sizeof(BP_Action_NPC_SpawnOtomo_C_OnBlendOut_179C21574A41916954EAF49176A11F1A) == 0x000008, "Wrong size on BP_Action_NPC_SpawnOtomo_C_OnBlendOut_179C21574A41916954EAF49176A11F1A");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_OnBlendOut_179C21574A41916954EAF49176A11F1A, NotifyName) == 0x000000, "Member 'BP_Action_NPC_SpawnOtomo_C_OnBlendOut_179C21574A41916954EAF49176A11F1A::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C.OnCompleted_179C21574A41916954EAF49176A11F1A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_SpawnOtomo_C_OnCompleted_179C21574A41916954EAF49176A11F1A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_SpawnOtomo_C_OnCompleted_179C21574A41916954EAF49176A11F1A) == 0x000004, "Wrong alignment on BP_Action_NPC_SpawnOtomo_C_OnCompleted_179C21574A41916954EAF49176A11F1A");
static_assert(sizeof(BP_Action_NPC_SpawnOtomo_C_OnCompleted_179C21574A41916954EAF49176A11F1A) == 0x000008, "Wrong size on BP_Action_NPC_SpawnOtomo_C_OnCompleted_179C21574A41916954EAF49176A11F1A");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_OnCompleted_179C21574A41916954EAF49176A11F1A, NotifyName) == 0x000000, "Member 'BP_Action_NPC_SpawnOtomo_C_OnCompleted_179C21574A41916954EAF49176A11F1A::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C.OnInterrupted_179C21574A41916954EAF49176A11F1A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_SpawnOtomo_C_OnInterrupted_179C21574A41916954EAF49176A11F1A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_SpawnOtomo_C_OnInterrupted_179C21574A41916954EAF49176A11F1A) == 0x000004, "Wrong alignment on BP_Action_NPC_SpawnOtomo_C_OnInterrupted_179C21574A41916954EAF49176A11F1A");
static_assert(sizeof(BP_Action_NPC_SpawnOtomo_C_OnInterrupted_179C21574A41916954EAF49176A11F1A) == 0x000008, "Wrong size on BP_Action_NPC_SpawnOtomo_C_OnInterrupted_179C21574A41916954EAF49176A11F1A");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_OnInterrupted_179C21574A41916954EAF49176A11F1A, NotifyName) == 0x000000, "Member 'BP_Action_NPC_SpawnOtomo_C_OnInterrupted_179C21574A41916954EAF49176A11F1A::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C.OnNotifyBegin_179C21574A41916954EAF49176A11F1A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_SpawnOtomo_C_OnNotifyBegin_179C21574A41916954EAF49176A11F1A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_SpawnOtomo_C_OnNotifyBegin_179C21574A41916954EAF49176A11F1A) == 0x000004, "Wrong alignment on BP_Action_NPC_SpawnOtomo_C_OnNotifyBegin_179C21574A41916954EAF49176A11F1A");
static_assert(sizeof(BP_Action_NPC_SpawnOtomo_C_OnNotifyBegin_179C21574A41916954EAF49176A11F1A) == 0x000008, "Wrong size on BP_Action_NPC_SpawnOtomo_C_OnNotifyBegin_179C21574A41916954EAF49176A11F1A");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_OnNotifyBegin_179C21574A41916954EAF49176A11F1A, NotifyName) == 0x000000, "Member 'BP_Action_NPC_SpawnOtomo_C_OnNotifyBegin_179C21574A41916954EAF49176A11F1A::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C.OnNotifyEnd_179C21574A41916954EAF49176A11F1A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_SpawnOtomo_C_OnNotifyEnd_179C21574A41916954EAF49176A11F1A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_SpawnOtomo_C_OnNotifyEnd_179C21574A41916954EAF49176A11F1A) == 0x000004, "Wrong alignment on BP_Action_NPC_SpawnOtomo_C_OnNotifyEnd_179C21574A41916954EAF49176A11F1A");
static_assert(sizeof(BP_Action_NPC_SpawnOtomo_C_OnNotifyEnd_179C21574A41916954EAF49176A11F1A) == 0x000008, "Wrong size on BP_Action_NPC_SpawnOtomo_C_OnNotifyEnd_179C21574A41916954EAF49176A11F1A");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_OnNotifyEnd_179C21574A41916954EAF49176A11F1A, NotifyName) == 0x000000, "Member 'BP_Action_NPC_SpawnOtomo_C_OnNotifyEnd_179C21574A41916954EAF49176A11F1A::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C.RequestSpawnPal
// 0x0220 (0x0220 - 0x0000)
struct BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A17[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A18[0x8];                                     // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0050(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue_1;         // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A19[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1A[0x8];                                     // 0x01A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01B0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActivateCurrentOtomo_ReturnValue;         // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal) == 0x000010, "Wrong alignment on BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal");
static_assert(sizeof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal) == 0x000220, "Wrong size on BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, Success) == 0x000000, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::Success' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000008, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_GetActionCharacter_ReturnValue) == 0x000020, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000028, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_GetActorRightVector_ReturnValue) == 0x000030, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_GetTransform_ReturnValue) == 0x000050, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_GetActorForwardVector_ReturnValue) == 0x0000B0, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_BreakTransform_Location) == 0x0000C8, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_BreakTransform_Rotation) == 0x0000E0, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_BreakTransform_Scale) == 0x0000F8, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_Conv_FloatToVector_ReturnValue_1) == 0x000110, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_Conv_FloatToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000128, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000130, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_GetController_ReturnValue) == 0x000148, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_Add_VectorVector_ReturnValue) == 0x000150, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000170, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000188, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_GetComponentByClass_ReturnValue) == 0x0001A0, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_MakeTransform_ReturnValue) == 0x0001B0, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal, CallFunc_ActivateCurrentOtomo_ReturnValue) == 0x000210, "Member 'BP_Action_NPC_SpawnOtomo_C_RequestSpawnPal::CallFunc_ActivateCurrentOtomo_ReturnValue' has a wrong offset!");

}

