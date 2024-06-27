#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalPlayerCaptureSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.Add Camera Relative Location
// 0x0100 (0x0100 - 0x0000)
struct BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location final
{
public:
	struct FVector                                AddLocation;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult;    // 0x0018(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location) == 0x000100, "Wrong size on BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location, AddLocation) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location::AddLocation' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location, CallFunc_K2_AddRelativeLocation_SweepHitResult) == 0x000018, "Member 'BP_PalPlayerCaptureSet_C_Add_Camera_Relative_Location::CallFunc_K2_AddRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.AddRotation
// 0x0030 (0x0030 - 0x0000)
struct BP_PalPlayerCaptureSet_C_AddRotation final
{
public:
	struct FRotator                               AddRotator;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_AddRotation) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_AddRotation");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_AddRotation) == 0x000030, "Wrong size on BP_PalPlayerCaptureSet_C_AddRotation");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AddRotation, AddRotator) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_AddRotation::AddRotator' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AddRotation, CallFunc_ComposeRotators_ReturnValue) == 0x000018, "Member 'BP_PalPlayerCaptureSet_C_AddRotation::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.AdjustCamera
// 0x0130 (0x0130 - 0x0000)
struct BP_PalPlayerCaptureSet_C_AdjustCamera final
{
public:
	double                                        TargetActorBoundSize;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DegSin_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult;    // 0x0040(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_AdjustCamera) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_AdjustCamera");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_AdjustCamera) == 0x000130, "Wrong size on BP_PalPlayerCaptureSet_C_AdjustCamera");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AdjustCamera, TargetActorBoundSize) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_AdjustCamera::TargetActorBoundSize' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AdjustCamera, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_PalPlayerCaptureSet_C_AdjustCamera::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AdjustCamera, CallFunc_DegSin_ReturnValue) == 0x000010, "Member 'BP_PalPlayerCaptureSet_C_AdjustCamera::CallFunc_DegSin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AdjustCamera, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000018, "Member 'BP_PalPlayerCaptureSet_C_AdjustCamera::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AdjustCamera, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_PalPlayerCaptureSet_C_AdjustCamera::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AdjustCamera, CallFunc_MakeVector_ReturnValue) == 0x000028, "Member 'BP_PalPlayerCaptureSet_C_AdjustCamera::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AdjustCamera, CallFunc_K2_AddRelativeLocation_SweepHitResult) == 0x000040, "Member 'BP_PalPlayerCaptureSet_C_AdjustCamera::CallFunc_K2_AddRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_AdjustCamera, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000128, "Member 'BP_PalPlayerCaptureSet_C_AdjustCamera::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ExecuteUbergraph_BP_PalPlayerCaptureSet
// 0x0170 (0x0170 - 0x0000)
struct BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Player_ForUI_C*                     CallFunc_GetDisplayCharacterActor_UIDisplayPlayer; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_Origin;                    // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;                 // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C6[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C7[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0080(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RLerp_Alpha_ImplicitCast;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet) == 0x000170, "Wrong size on BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, EntryPoint) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_GetDisplayCharacterActor_UIDisplayPlayer) == 0x000008, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_GetDisplayCharacterActor_UIDisplayPlayer' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_GetActorBounds_Origin) == 0x000010, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_GetActorBounds_BoxExtent) == 0x000028, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, K2Node_Event_DeltaSeconds) == 0x000040, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_BreakVector_X) == 0x000048, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_BreakVector_Y) == 0x000050, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_BreakVector_Z) == 0x000058, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_RLerp_ReturnValue) == 0x000060, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000080, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet, CallFunc_RLerp_Alpha_ImplicitCast) == 0x000168, "Member 'BP_PalPlayerCaptureSet_C_ExecuteUbergraph_BP_PalPlayerCaptureSet::CallFunc_RLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.GetDisplayCharacterActor
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor final
{
public:
	class ABP_Player_ForUI_C*                     UIDisplayPlayer;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Player_ForUI_C*                     K2Node_DynamicCast_AsBP_Player_for_UI;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor) == 0x000018, "Wrong size on BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor, UIDisplayPlayer) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor::UIDisplayPlayer' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor, K2Node_DynamicCast_AsBP_Player_for_UI) == 0x000008, "Member 'BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor::K2Node_DynamicCast_AsBP_Player_for_UI' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PalPlayerCaptureSet_C_GetDisplayCharacterActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PalPlayerCaptureSet_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PalPlayerCaptureSet_C_ReceiveEndPlay");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PalPlayerCaptureSet_C_ReceiveEndPlay");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalPlayerCaptureSet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalPlayerCaptureSet_C_ReceiveTick");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalPlayerCaptureSet_C_ReceiveTick");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.RequestByCharacterMakeInfo
// 0x0158 (0x0158 - 0x0000)
struct BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo final
{
public:
	struct FPalPlayerDataCharacterMakeInfo        MakeInfo;                                          // 0x0000(0x0150)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ABP_Player_ForUI_C*                     CallFunc_GetDisplayCharacterActor_UIDisplayPlayer; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo) == 0x000158, "Wrong size on BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo, MakeInfo) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo::MakeInfo' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo, CallFunc_GetDisplayCharacterActor_UIDisplayPlayer) == 0x000150, "Member 'BP_PalPlayerCaptureSet_C_RequestByCharacterMakeInfo::CallFunc_GetDisplayCharacterActor_UIDisplayPlayer' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.RequestMyPlayer
// 0x0008 (0x0008 - 0x0000)
struct BP_PalPlayerCaptureSet_C_RequestMyPlayer final
{
public:
	class ABP_Player_ForUI_C*                     CallFunc_GetDisplayCharacterActor_UIDisplayPlayer; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_RequestMyPlayer) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_RequestMyPlayer");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_RequestMyPlayer) == 0x000008, "Wrong size on BP_PalPlayerCaptureSet_C_RequestMyPlayer");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_RequestMyPlayer, CallFunc_GetDisplayCharacterActor_UIDisplayPlayer) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_RequestMyPlayer::CallFunc_GetDisplayCharacterActor_UIDisplayPlayer' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ResetCameraLocation
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PalPlayerCaptureSet_C_ResetCameraLocation final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0000(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_ResetCameraLocation) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_ResetCameraLocation");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_ResetCameraLocation) == 0x0000E8, "Wrong size on BP_PalPlayerCaptureSet_C_ResetCameraLocation");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ResetCameraLocation, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_ResetCameraLocation::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.ResetRotation
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PalPlayerCaptureSet_C_ResetRotation final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0000(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_ResetRotation) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_ResetRotation");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_ResetRotation) == 0x0000E8, "Wrong size on BP_PalPlayerCaptureSet_C_ResetRotation");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_ResetRotation, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_ResetRotation::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.SetupDelayHandle
// 0x0018 (0x0018 - 0x0000)
struct BP_PalPlayerCaptureSet_C_SetupDelayHandle final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_SetupDelayHandle) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_SetupDelayHandle");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_SetupDelayHandle) == 0x000018, "Wrong size on BP_PalPlayerCaptureSet_C_SetupDelayHandle");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_SetupDelayHandle, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_SetupDelayHandle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_SetupDelayHandle, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'BP_PalPlayerCaptureSet_C_SetupDelayHandle::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C.UpdateShowOnlyActors
// 0x0060 (0x0060 - 0x0000)
struct BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0018(0x0010)(ReferenceParm)
	TArray<class AActor*>                         CallFunc_GetAllChildActors_ChildActors;            // 0x0028(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C8[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors) == 0x000008, "Wrong alignment on BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors");
static_assert(sizeof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors) == 0x000060, "Wrong size on BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, Temp_int_Loop_Counter_Variable_1) == 0x00000C, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_GetAttachedActors_OutActors) == 0x000018, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_GetAllChildActors_ChildActors) == 0x000028, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_GetAllChildActors_ChildActors' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Array_Length_ReturnValue_1) == 0x00004C, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Less_IntInt_ReturnValue_1) == 0x000051, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Array_Add_ReturnValue_1) == 0x000058, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors, CallFunc_Array_Add_ReturnValue_2) == 0x00005C, "Member 'BP_PalPlayerCaptureSet_C_UpdateShowOnlyActors::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

}

