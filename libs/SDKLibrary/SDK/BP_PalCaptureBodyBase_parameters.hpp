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

// 0x2B (0x2B - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetOwnerCharacterOrRiderCharacter
struct ABP_PalCaptureBodyBase_C_GetOwnerCharacterOrRiderCharacter_Params
{
public:
	class AActor*                                Character;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRideMarkerComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4525[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetRiderCharacter_ReturnValue;            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetSneakBonusFlagToALL
struct ABP_PalCaptureBodyBase_C_SetSneakBonusFlagToALL_Params
{
public:
	bool                                         IsSneak;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetTargetHandle
struct ABP_PalCaptureBodyBase_C_SetTargetHandle_Params
{
public:
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4527[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalInstanceID                        CallFunc_GetIndividualID_ReturnValue;              // 0x10(0x30)(HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetupInServer
struct ABP_PalCaptureBodyBase_C_SetupInServer_Params
{
public:
	class APalCharacter*                         TargetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetupToALL
struct ABP_PalCaptureBodyBase_C_SetupToALL_Params
{
public:
	class APalCharacter*                         Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetCaptureLevelToALL
struct ABP_PalCaptureBodyBase_C_SetCaptureLevelToALL_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.Get Is Into Ball
struct ABP_PalCaptureBodyBase_C_Get_Is_Into_Ball_Params
{
public:
	bool                                         IntoBall;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetIsIntoBall
struct ABP_PalCaptureBodyBase_C_SetIsIntoBall_Params
{
public:
	bool                                         IntoBall;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_SoundID          SoundId;                                           // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetAkOwnerComponent
struct ABP_PalCaptureBodyBase_C_GetAkOwnerComponent_Params
{
public:
	class USceneComponent*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetComponentByClass_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.PlaySound
struct ABP_PalCaptureBodyBase_C_PlaySound_Params
{
public:
	struct FPalDataTableRowName_SoundID          ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                      K2Node_MakeStruct_PalSoundOptions;                 // 0x8(0x4)(NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.IsSneakBonusEnabled
struct ABP_PalCaptureBodyBase_C_IsSneakBonusEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetSneakBonusFlag
struct ABP_PalCaptureBodyBase_C_SetSneakBonusFlag_Params
{
public:
	bool                                         Flag;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4531[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.Setup
struct ABP_PalCaptureBodyBase_C_Setup_Params
{
public:
	class APalCharacter*                         TargetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetTargetActor
struct ABP_PalCaptureBodyBase_C_GetTargetActor_Params
{
public:
	class APalCharacter*                         TargetActor;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         CallFunc_GetTargetHandle_targetHandle;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_TryGetIndividualActor_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetCaptureLevel
struct ABP_PalCaptureBodyBase_C_GetCaptureLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetCaptureLevel
struct ABP_PalCaptureBodyBase_C_SetCaptureLevel_Params
{
public:
	int32                                        NewParam;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4535[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.GetTargetHandle
struct ABP_PalCaptureBodyBase_C_GetTargetHandle_Params
{
public:
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.ReceiveTick
struct ABP_PalCaptureBodyBase_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetTargetIDToALL
struct ABP_PalCaptureBodyBase_C_SetTargetIDToALL_Params
{
public:
	struct FPalInstanceID                        TargetId;                                          // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetCaptureLevelInternal
struct ABP_PalCaptureBodyBase_C_SetCaptureLevelInternal_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetSneakBonusFlagInternal
struct ABP_PalCaptureBodyBase_C_SetSneakBonusFlagInternal_Params
{
public:
	bool                                         IsSneak;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.SetupInternal
struct ABP_PalCaptureBodyBase_C_SetupInternal_Params
{
public:
	class APalCharacter*                         TargetCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.ExecuteUbergraph_BP_PalCaptureBodyBase
struct ABP_PalCaptureBodyBase_C_ExecuteUbergraph_BP_PalCaptureBodyBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4536[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4537[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalInstanceID                        K2Node_CustomEvent_TargetID;                       // 0x20(0x30)(HasGetValueTypeHash)
	class UPalCharacterManager*                  CallFunc_GetCharacterManager_ReturnValue;          // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         CallFunc_GetIndividualHandle_ReturnValue;          // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetTargetActor_TargetActor;               // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4538[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterHandle*         CallFunc_GetTargetHandle_targetHandle;             // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_level;                                // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_isSneak;                              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4539[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         K2Node_Event_targetCharacter;                      // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnBouncedBody__DelegateSignature
struct ABP_PalCaptureBodyBase_C_OnBouncedBody__DelegateSignature_Params
{
public:
	enum class E_PalCaptureSphereBouncedReason   ReasonType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_453A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnShakeBody__DelegateSignature
struct ABP_PalCaptureBodyBase_C_OnShakeBody__DelegateSignature_Params
{
public:
	class ABP_PalCaptureBodyBase_C*              ShakedBody;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnPassingCapturePhase__DelegateSignature
struct ABP_PalCaptureBodyBase_C_OnPassingCapturePhase__DelegateSignature_Params
{
public:
	int32                                        PhaseCount;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_453B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnFailedCapture__DelegateSignature
struct ABP_PalCaptureBodyBase_C_OnFailedCapture__DelegateSignature_Params
{
public:
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalSphereCaptureFailedReason     FailedReason;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalCaptureBodyBase.BP_PalCaptureBodyBase_C.OnSuccessedCapture__DelegateSignature
struct ABP_PalCaptureBodyBase_C_OnSuccessedCapture__DelegateSignature_Params
{
public:
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


