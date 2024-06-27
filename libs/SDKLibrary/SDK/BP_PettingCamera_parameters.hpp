#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PettingCamera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PettingCamera.BP_PettingCamera_C.EndPettingCamera
// 0x0010 (0x0010 - 0x0000)
struct BP_PettingCamera_C_EndPettingCamera final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PettingCamera_C_EndPettingCamera) == 0x000008, "Wrong alignment on BP_PettingCamera_C_EndPettingCamera");
static_assert(sizeof(BP_PettingCamera_C_EndPettingCamera) == 0x000010, "Wrong size on BP_PettingCamera_C_EndPettingCamera");
static_assert(offsetof(BP_PettingCamera_C_EndPettingCamera, PlayerController) == 0x000000, "Member 'BP_PettingCamera_C_EndPettingCamera::PlayerController' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_EndPettingCamera, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'BP_PettingCamera_C_EndPettingCamera::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");

// Function BP_PettingCamera.BP_PettingCamera_C.StartPettingCamera
// 0x0008 (0x0008 - 0x0000)
struct BP_PettingCamera_C_StartPettingCamera final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PettingCamera_C_StartPettingCamera) == 0x000008, "Wrong alignment on BP_PettingCamera_C_StartPettingCamera");
static_assert(sizeof(BP_PettingCamera_C_StartPettingCamera) == 0x000008, "Wrong size on BP_PettingCamera_C_StartPettingCamera");
static_assert(offsetof(BP_PettingCamera_C_StartPettingCamera, PlayerController) == 0x000000, "Member 'BP_PettingCamera_C_StartPettingCamera::PlayerController' has a wrong offset!");

// Function BP_PettingCamera.BP_PettingCamera_C.UpdatePettingCameraOffset
// 0x01F0 (0x01F0 - 0x0000)
struct BP_PettingCamera_C_UpdatePettingCameraOffset final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetPal;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPettingPresset*                     CallFunc_GetPettingPreset_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetCameraArmLength_ReturnValue;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCameraHeight_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCameraCenterDistance_ReturnValue;      // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AD6[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x00F8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AD7[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MakeVector_Z_ImplicitCast;                // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PettingCamera_C_UpdatePettingCameraOffset) == 0x000008, "Wrong alignment on BP_PettingCamera_C_UpdatePettingCameraOffset");
static_assert(sizeof(BP_PettingCamera_C_UpdatePettingCameraOffset) == 0x0001F0, "Wrong size on BP_PettingCamera_C_UpdatePettingCameraOffset");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, PlayerController) == 0x000000, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::PlayerController' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, TargetPal) == 0x000008, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::TargetPal' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000010, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_GetPettingPreset_ReturnValue) == 0x000018, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_GetPettingPreset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000020, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_GetCameraArmLength_ReturnValue) == 0x000038, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_GetCameraArmLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_GetCameraHeight_ReturnValue) == 0x00003C, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_GetCameraHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_MakeVector_ReturnValue) == 0x000040, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_K2_GetPawn_ReturnValue) == 0x000058, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_GetCameraCenterDistance_ReturnValue) == 0x000060, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_GetCameraCenterDistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000080, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_GetActorForwardVector_ReturnValue) == 0x000098, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000B0, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C8, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000E0, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x0000F8, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x0001E0, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PettingCamera_C_UpdatePettingCameraOffset, CallFunc_MakeVector_Z_ImplicitCast) == 0x0001E8, "Member 'BP_PettingCamera_C_UpdatePettingCameraOffset::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");

}

