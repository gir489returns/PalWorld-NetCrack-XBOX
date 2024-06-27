#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Player_Head

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_Player_Head_structs.hpp"
#include "Pal_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Player_Head.ABP_Player_Head_C
// 0x08B0 (0x0C30 - 0x0380)
class UABP_Player_Head_C final : public UPalPlayerHeadAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Player_Head::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0388(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_3DCB[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0390(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0398(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x03A0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03C0(0x00C8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0488(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x05B0(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x05D0(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x06F8(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0718(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_1;                  // 0x0738(0x01D8)(ContainsInstancedReference)
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x0910(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x09D8(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0A20(0x01D8)(ContainsInstancedReference)
	struct FVector                                EyePos_L;                                          // 0x0BF8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EyePos_R;                                          // 0x0C10(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InitEnd;                                           // 0x0C28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDedicatedServer;                                 // 0x0C29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_Player_Head(int32 EntryPoint);
	void EyeLocationFix(const struct FPoseLink& InPose, struct FPoseLink* Param_EyeLocationFix);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Player_Head_C">();
	}
	static class UABP_Player_Head_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Player_Head_C>();
	}
};
static_assert(alignof(UABP_Player_Head_C) == 0x000010, "Wrong alignment on UABP_Player_Head_C");
static_assert(sizeof(UABP_Player_Head_C) == 0x000C30, "Wrong size on UABP_Player_Head_C");
static_assert(offsetof(UABP_Player_Head_C, UberGraphFrame) == 0x000380, "Member 'UABP_Player_Head_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, __AnimBlueprintMutables) == 0x000388, "Member 'UABP_Player_Head_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimBlueprintExtension_PropertyAccess) == 0x000390, "Member 'UABP_Player_Head_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimBlueprintExtension_Base) == 0x000398, "Member 'UABP_Player_Head_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_Root_1) == 0x0003A0, "Member 'UABP_Player_Head_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_LinkedInputPose) == 0x0003C0, "Member 'UABP_Player_Head_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_ModifyBone_1) == 0x000488, "Member 'UABP_Player_Head_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_LocalToComponentSpace) == 0x0005B0, "Member 'UABP_Player_Head_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_ModifyBone) == 0x0005D0, "Member 'UABP_Player_Head_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_ComponentToLocalSpace) == 0x0006F8, "Member 'UABP_Player_Head_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_Root) == 0x000718, "Member 'UABP_Player_Head_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_CopyPoseFromMesh_1) == 0x000738, "Member 'UABP_Player_Head_C::AnimGraphNode_CopyPoseFromMesh_1' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_LinkedAnimLayer) == 0x000910, "Member 'UABP_Player_Head_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_BlendListByBool) == 0x0009D8, "Member 'UABP_Player_Head_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, AnimGraphNode_CopyPoseFromMesh) == 0x000A20, "Member 'UABP_Player_Head_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, EyePos_L) == 0x000BF8, "Member 'UABP_Player_Head_C::EyePos_L' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, EyePos_R) == 0x000C10, "Member 'UABP_Player_Head_C::EyePos_R' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, InitEnd) == 0x000C28, "Member 'UABP_Player_Head_C::InitEnd' has a wrong offset!");
static_assert(offsetof(UABP_Player_Head_C, IsDedicatedServer) == 0x000C29, "Member 'UABP_Player_Head_C::IsDedicatedServer' has a wrong offset!");

}

