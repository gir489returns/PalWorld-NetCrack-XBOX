#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Player_Head

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Player_Head.ABP_Player_Head_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Player_Head_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Player_Head_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Player_Head_C_AnimGraph");
static_assert(sizeof(ABP_Player_Head_C_AnimGraph) == 0x000010, "Wrong size on ABP_Player_Head_C_AnimGraph");
static_assert(offsetof(ABP_Player_Head_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Player_Head_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Player_Head.ABP_Player_Head_C.ExecuteUbergraph_ABP_Player_Head
// 0x0028 (0x0028 - 0x0000)
struct ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13DC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13DD[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head) == 0x000008, "Wrong alignment on ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head");
static_assert(sizeof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head) == 0x000028, "Wrong size on ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head");
static_assert(offsetof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head, EntryPoint) == 0x000000, "Member 'ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head, CallFunc_GetOuterObject_ReturnValue) == 0x000008, "Member 'ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head, K2Node_DynamicCast_AsSkeletal_Mesh_Component) == 0x000010, "Member 'ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head::K2Node_DynamicCast_AsSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000020, "Member 'ABP_Player_Head_C_ExecuteUbergraph_ABP_Player_Head::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");

// Function ABP_Player_Head.ABP_Player_Head_C.EyeLocationFix
// 0x0020 (0x0020 - 0x0000)
struct ABP_Player_Head_C_EyeLocationFix final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_EyeLocationFix;                              // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Player_Head_C_EyeLocationFix) == 0x000008, "Wrong alignment on ABP_Player_Head_C_EyeLocationFix");
static_assert(sizeof(ABP_Player_Head_C_EyeLocationFix) == 0x000020, "Wrong size on ABP_Player_Head_C_EyeLocationFix");
static_assert(offsetof(ABP_Player_Head_C_EyeLocationFix, InPose) == 0x000000, "Member 'ABP_Player_Head_C_EyeLocationFix::InPose' has a wrong offset!");
static_assert(offsetof(ABP_Player_Head_C_EyeLocationFix, Param_EyeLocationFix) == 0x000010, "Member 'ABP_Player_Head_C_EyeLocationFix::Param_EyeLocationFix' has a wrong offset!");

}

