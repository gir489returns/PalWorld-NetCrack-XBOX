#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Player_Female

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Player_Female.BP_Player_Female_C.BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature final
{
public:
	class UPalCharacterMovementComponent*         Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInSliding;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature) == 0x000008, "Wrong alignment on BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature");
static_assert(sizeof(BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature) == 0x000010, "Wrong size on BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature");
static_assert(offsetof(BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature, Component) == 0x000000, "Member 'BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature::Component' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature, IsInSliding) == 0x000008, "Member 'BP_Player_Female_C_BndEvt__BP_Palmi_v2_CharacterMovement_K2Node_ComponentBoundEvent_0_OnChangeSliding__DelegateSignature::IsInSliding' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.CreatePoliceSpawner
// 0x0080 (0x0080 - 0x0000)
struct BP_Player_Female_C_CreatePoliceSpawner final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_WantedPolice_NPCSpawner_C*          CallFunc_FinishSpawningActor_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_CreatePoliceSpawner) == 0x000010, "Wrong alignment on BP_Player_Female_C_CreatePoliceSpawner");
static_assert(sizeof(BP_Player_Female_C_CreatePoliceSpawner) == 0x000080, "Wrong size on BP_Player_Female_C_CreatePoliceSpawner");
static_assert(offsetof(BP_Player_Female_C_CreatePoliceSpawner, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_Player_Female_C_CreatePoliceSpawner::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_CreatePoliceSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'BP_Player_Female_C_CreatePoliceSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_CreatePoliceSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000068, "Member 'BP_Player_Female_C_CreatePoliceSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_CreatePoliceSpawner, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000070, "Member 'BP_Player_Female_C_CreatePoliceSpawner::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_CreatePoliceSpawner, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000078, "Member 'BP_Player_Female_C_CreatePoliceSpawner::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.ExecuteUbergraph_BP_Player_Female
// 0x0110 (0x0110 - 0x0000)
struct BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B4[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalCharacter* InCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         K2Node_ComponentBoundEvent_component;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsInSliding;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B6[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B7[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System_1;             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B8[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47B9[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_GetFloorPhisicalSurface_ReturnValue;      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFloorPhysMaterial_ReturnValue;         // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BA[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_InCharacter;                    // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalLocalPlayerSystemSound_C*        CallFunc_SpawnObject_ReturnValue;                  // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female) == 0x000008, "Wrong alignment on BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female");
static_assert(sizeof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female) == 0x000110, "Wrong size on BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, EntryPoint) == 0x000000, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, Temp_object_Variable) == 0x000010, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_DynamicCast_AsNiagara_System) == 0x000018, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_ComponentBoundEvent_component) == 0x000038, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_ComponentBoundEvent_component' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_ComponentBoundEvent_IsInSliding) == 0x000040, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_ComponentBoundEvent_IsInSliding' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_Event_DeltaSeconds) == 0x000060, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, Temp_object_Variable_1) == 0x000080, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_DynamicCast_AsNiagara_System_1) == 0x000088, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_DynamicCast_AsNiagara_System_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000098, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_Event_EndPlayReason) == 0x0000A0, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_IsValid_ReturnValue_1) == 0x0000A1, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_CustomEvent_Loaded_1) == 0x0000A8, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x0000B0, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B8, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_GetFloorPhisicalSurface_ReturnValue) == 0x0000C9, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_GetFloorPhisicalSurface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_HasFloorPhysMaterial_ReturnValue) == 0x0000CA, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_HasFloorPhysMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000CB, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_GetBattleManager_ReturnValue) == 0x0000D0, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D8, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue) == 0x0000E8, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, K2Node_CustomEvent_InCharacter) == 0x0000F0, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::K2Node_CustomEvent_InCharacter' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_GetPalmi_ReturnValue) == 0x0000F8, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_SpawnObject_ReturnValue) == 0x000100, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000108, "Member 'BP_Player_Female_C_ExecuteUbergraph_BP_Player_Female::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.GetHeadMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_Player_Female_C_GetHeadMesh final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_GetHeadMesh) == 0x000008, "Wrong alignment on BP_Player_Female_C_GetHeadMesh");
static_assert(sizeof(BP_Player_Female_C_GetHeadMesh) == 0x000008, "Wrong size on BP_Player_Female_C_GetHeadMesh");
static_assert(offsetof(BP_Player_Female_C_GetHeadMesh, ReturnValue) == 0x000000, "Member 'BP_Player_Female_C_GetHeadMesh::ReturnValue' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.GetOverrideFaceMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_Player_Female_C_GetOverrideFaceMesh final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_GetOverrideFaceMesh) == 0x000008, "Wrong alignment on BP_Player_Female_C_GetOverrideFaceMesh");
static_assert(sizeof(BP_Player_Female_C_GetOverrideFaceMesh) == 0x000008, "Wrong size on BP_Player_Female_C_GetOverrideFaceMesh");
static_assert(offsetof(BP_Player_Female_C_GetOverrideFaceMesh, ReturnValue) == 0x000000, "Member 'BP_Player_Female_C_GetOverrideFaceMesh::ReturnValue' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.GetVisual_ExceptMainMesh_SyncAnyway
// 0x0030 (0x0030 - 0x0000)
struct BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway final
{
public:
	TArray<class USceneComponent*>                OutComponent;                                      // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class USceneComponent*>                Components;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway) == 0x000008, "Wrong alignment on BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway");
static_assert(sizeof(BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway) == 0x000030, "Wrong size on BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway");
static_assert(offsetof(BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway, OutComponent) == 0x000000, "Member 'BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway::OutComponent' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway, Components) == 0x000010, "Member 'BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway::Components' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway, CallFunc_Array_Add_ReturnValue_1) == 0x000024, "Member 'BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway, CallFunc_Array_Add_ReturnValue_2) == 0x000028, "Member 'BP_Player_Female_C_GetVisual_ExceptMainMesh_SyncAnyway::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.OnInitialized
// 0x0008 (0x0008 - 0x0000)
struct BP_Player_Female_C_OnInitialized final
{
public:
	class APalCharacter*                          InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_OnInitialized) == 0x000008, "Wrong alignment on BP_Player_Female_C_OnInitialized");
static_assert(sizeof(BP_Player_Female_C_OnInitialized) == 0x000008, "Wrong size on BP_Player_Female_C_OnInitialized");
static_assert(offsetof(BP_Player_Female_C_OnInitialized, InCharacter) == 0x000000, "Member 'BP_Player_Female_C_OnInitialized::InCharacter' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4
// 0x0008 (0x0008 - 0x0000)
struct BP_Player_Female_C_OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4) == 0x000008, "Wrong alignment on BP_Player_Female_C_OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4");
static_assert(sizeof(BP_Player_Female_C_OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4) == 0x000008, "Wrong size on BP_Player_Female_C_OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4");
static_assert(offsetof(BP_Player_Female_C_OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4, Loaded) == 0x000000, "Member 'BP_Player_Female_C_OnLoaded_B0A699BF41F9214B27FAD1AD60391AE4::Loaded' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.OnLoaded_CD204E62480922149D33F2914AD3807A
// 0x0008 (0x0008 - 0x0000)
struct BP_Player_Female_C_OnLoaded_CD204E62480922149D33F2914AD3807A final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_OnLoaded_CD204E62480922149D33F2914AD3807A) == 0x000008, "Wrong alignment on BP_Player_Female_C_OnLoaded_CD204E62480922149D33F2914AD3807A");
static_assert(sizeof(BP_Player_Female_C_OnLoaded_CD204E62480922149D33F2914AD3807A) == 0x000008, "Wrong size on BP_Player_Female_C_OnLoaded_CD204E62480922149D33F2914AD3807A");
static_assert(offsetof(BP_Player_Female_C_OnLoaded_CD204E62480922149D33F2914AD3807A, Loaded) == 0x000000, "Member 'BP_Player_Female_C_OnLoaded_CD204E62480922149D33F2914AD3807A::Loaded' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.OnSlidingBegin
// 0x0028 (0x0028 - 0x0000)
struct BP_Player_Female_C_OnSlidingBegin final
{
public:
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       K2Node_MakeStruct_PalSoundOptions;                 // 0x0008(0x0004)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_GetFloorPhisicalSurface_ReturnValue;      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFloorPhysMaterial_ReturnValue;         // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BB[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_OnSlidingBegin) == 0x000008, "Wrong alignment on BP_Player_Female_C_OnSlidingBegin");
static_assert(sizeof(BP_Player_Female_C_OnSlidingBegin) == 0x000028, "Wrong size on BP_Player_Female_C_OnSlidingBegin");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000000, "Member 'BP_Player_Female_C_OnSlidingBegin::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, K2Node_MakeStruct_PalSoundOptions) == 0x000008, "Member 'BP_Player_Female_C_OnSlidingBegin::K2Node_MakeStruct_PalSoundOptions' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_Player_Female_C_OnSlidingBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, CallFunc_GetFloorPhisicalSurface_ReturnValue) == 0x00000D, "Member 'BP_Player_Female_C_OnSlidingBegin::CallFunc_GetFloorPhisicalSurface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000E, "Member 'BP_Player_Female_C_OnSlidingBegin::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, CallFunc_HasFloorPhysMaterial_ReturnValue) == 0x00000F, "Member 'BP_Player_Female_C_OnSlidingBegin::CallFunc_HasFloorPhysMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000010, "Member 'BP_Player_Female_C_OnSlidingBegin::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'BP_Player_Female_C_OnSlidingBegin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingBegin, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000020, "Member 'BP_Player_Female_C_OnSlidingBegin::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.OnSlidingEnd
// 0x000C (0x000C - 0x0000)
struct BP_Player_Female_C_OnSlidingEnd final
{
public:
	struct FPalDataTableRowName_SoundID           K2Node_MakeStruct_PalDataTableRowName_SoundID;     // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_OnSlidingEnd) == 0x000004, "Wrong alignment on BP_Player_Female_C_OnSlidingEnd");
static_assert(sizeof(BP_Player_Female_C_OnSlidingEnd) == 0x00000C, "Wrong size on BP_Player_Female_C_OnSlidingEnd");
static_assert(offsetof(BP_Player_Female_C_OnSlidingEnd, K2Node_MakeStruct_PalDataTableRowName_SoundID) == 0x000000, "Member 'BP_Player_Female_C_OnSlidingEnd::K2Node_MakeStruct_PalDataTableRowName_SoundID' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnSlidingEnd, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_Player_Female_C_OnSlidingEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.OnUpdateSliding
// 0x0058 (0x0058 - 0x0000)
struct BP_Player_Female_C_OnUpdateSliding final
{
public:
	class UPalCharacterMovementComponent*         K2Node_DynamicCast_AsPal_Character_Movement_Component; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSliding_ReturnValue;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BC[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BD[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxSpeed_ReturnValue;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRTPCValueByActor_value_ImplicitCast;   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_OnUpdateSliding) == 0x000008, "Wrong alignment on BP_Player_Female_C_OnUpdateSliding");
static_assert(sizeof(BP_Player_Female_C_OnUpdateSliding) == 0x000058, "Wrong size on BP_Player_Female_C_OnUpdateSliding");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, K2Node_DynamicCast_AsPal_Character_Movement_Component) == 0x000000, "Member 'BP_Player_Female_C_OnUpdateSliding::K2Node_DynamicCast_AsPal_Character_Movement_Component' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BP_Player_Female_C_OnUpdateSliding::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_IsSliding_ReturnValue) == 0x000009, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_IsSliding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, K2Node_DynamicCast_AsPal_Anim_Instance) == 0x000018, "Member 'BP_Player_Female_C_OnUpdateSliding::K2Node_DynamicCast_AsPal_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BP_Player_Female_C_OnUpdateSliding::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_GetMaxSpeed_ReturnValue) == 0x000024, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_GetMaxSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_FClamp_ReturnValue) == 0x000030, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Player_Female_C_OnUpdateSliding, CallFunc_SetRTPCValueByActor_value_ImplicitCast) == 0x000050, "Member 'BP_Player_Female_C_OnUpdateSliding::CallFunc_SetRTPCValueByActor_value_ImplicitCast' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Player_Female_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Player_Female_C_ReceiveEndPlay");
static_assert(sizeof(BP_Player_Female_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Player_Female_C_ReceiveEndPlay");
static_assert(offsetof(BP_Player_Female_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Player_Female_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Player_Female.BP_Player_Female_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Player_Female_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_Female_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Player_Female_C_ReceiveTick");
static_assert(sizeof(BP_Player_Female_C_ReceiveTick) == 0x000004, "Wrong size on BP_Player_Female_C_ReceiveTick");
static_assert(offsetof(BP_Player_Female_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Player_Female_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

