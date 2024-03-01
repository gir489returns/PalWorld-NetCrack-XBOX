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

// 0x19 (0x19 - 0x0)
// Function BP_CapturePrism.BP_CapturePrism_C.OnThrowInternal
struct ABP_CapturePrism_C_OnThrowInternal_Params
{
public:
	class AActor*                                Bullet;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCaptureLevel_level;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4583[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ThrowCaptureObjectBase_C*          K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_CapturePrism.BP_CapturePrism_C.GetCaptureLevel
struct ABP_CapturePrism_C_GetCaptureLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4584[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalGameSetting*                       CallFunc_GetGameSetting_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCaptureLevelBySphereType_ReturnValue;  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_CapturePrism.BP_CapturePrism_C.OnEndShootAnimation
struct ABP_CapturePrism_C_OnEndShootAnimation_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmptyMagazine_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_CapturePrism.BP_CapturePrism_C.On Throw
struct ABP_CapturePrism_C_On_Throw_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function BP_CapturePrism.BP_CapturePrism_C.DecrementBullet
struct ABP_CapturePrism_C_DecrementBullet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4585[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*               CallFunc_GetLocalInventoryData_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4586[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0x24(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_CountItemNum_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CapturePrism.BP_CapturePrism_C.GetThrowObjectClass
struct ABP_CapturePrism_C_GetThrowObjectClass_Params
{
public:
	class UClass*                                ThrowObject;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CapturePrism.BP_CapturePrism_C.GetEquipSocketName
struct ABP_CapturePrism_C_GetEquipSocketName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


