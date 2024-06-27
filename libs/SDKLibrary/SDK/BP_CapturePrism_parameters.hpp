#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CapturePrism

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_CapturePrism.BP_CapturePrism_C.DecrementBullet
// 0x0058 (0x0058 - 0x0000)
struct BP_CapturePrism_C_DecrementBullet final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8B[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x0024(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CountItemNum_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrism_C_DecrementBullet) == 0x000008, "Wrong alignment on BP_CapturePrism_C_DecrementBullet");
static_assert(sizeof(BP_CapturePrism_C_DecrementBullet) == 0x000058, "Wrong size on BP_CapturePrism_C_DecrementBullet");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, ReturnValue) == 0x000000, "Member 'BP_CapturePrism_C_DecrementBullet::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000010, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000021, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_IsValid_ReturnValue_1) == 0x000022, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_GetItemId_ReturnValue) == 0x000024, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_CountItemNum_ReturnValue) == 0x00004C, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_CountItemNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_DecrementBullet, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'BP_CapturePrism_C_DecrementBullet::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BP_CapturePrism.BP_CapturePrism_C.GetCaptureLevel
// 0x0018 (0x0018 - 0x0000)
struct BP_CapturePrism_C_GetCaptureLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCaptureLevelBySphereType_ReturnValue;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrism_C_GetCaptureLevel) == 0x000008, "Wrong alignment on BP_CapturePrism_C_GetCaptureLevel");
static_assert(sizeof(BP_CapturePrism_C_GetCaptureLevel) == 0x000018, "Wrong size on BP_CapturePrism_C_GetCaptureLevel");
static_assert(offsetof(BP_CapturePrism_C_GetCaptureLevel, Level) == 0x000000, "Member 'BP_CapturePrism_C_GetCaptureLevel::Level' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_GetCaptureLevel, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'BP_CapturePrism_C_GetCaptureLevel::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_GetCaptureLevel, CallFunc_GetCaptureLevelBySphereType_ReturnValue) == 0x000010, "Member 'BP_CapturePrism_C_GetCaptureLevel::CallFunc_GetCaptureLevelBySphereType_ReturnValue' has a wrong offset!");

// Function BP_CapturePrism.BP_CapturePrism_C.GetEquipSocketName
// 0x0008 (0x0008 - 0x0000)
struct BP_CapturePrism_C_GetEquipSocketName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrism_C_GetEquipSocketName) == 0x000004, "Wrong alignment on BP_CapturePrism_C_GetEquipSocketName");
static_assert(sizeof(BP_CapturePrism_C_GetEquipSocketName) == 0x000008, "Wrong size on BP_CapturePrism_C_GetEquipSocketName");
static_assert(offsetof(BP_CapturePrism_C_GetEquipSocketName, ReturnValue) == 0x000000, "Member 'BP_CapturePrism_C_GetEquipSocketName::ReturnValue' has a wrong offset!");

// Function BP_CapturePrism.BP_CapturePrism_C.GetThrowObjectClass
// 0x0008 (0x0008 - 0x0000)
struct BP_CapturePrism_C_GetThrowObjectClass final
{
public:
	class UClass*                                 ThrowObject;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrism_C_GetThrowObjectClass) == 0x000008, "Wrong alignment on BP_CapturePrism_C_GetThrowObjectClass");
static_assert(sizeof(BP_CapturePrism_C_GetThrowObjectClass) == 0x000008, "Wrong size on BP_CapturePrism_C_GetThrowObjectClass");
static_assert(offsetof(BP_CapturePrism_C_GetThrowObjectClass, ThrowObject) == 0x000000, "Member 'BP_CapturePrism_C_GetThrowObjectClass::ThrowObject' has a wrong offset!");

// Function BP_CapturePrism.BP_CapturePrism_C.On Throw
// 0x0038 (0x0038 - 0x0000)
struct BP_CapturePrism_C_On_Throw final
{
public:
	TDelegate<void(class AActor* Bullet)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAnimMontage* Montage)>  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrism_C_On_Throw) == 0x000008, "Wrong alignment on BP_CapturePrism_C_On_Throw");
static_assert(sizeof(BP_CapturePrism_C_On_Throw) == 0x000038, "Wrong size on BP_CapturePrism_C_On_Throw");
static_assert(offsetof(BP_CapturePrism_C_On_Throw, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_CapturePrism_C_On_Throw::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_On_Throw, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BP_CapturePrism_C_On_Throw::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_On_Throw, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_CapturePrism_C_On_Throw::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_On_Throw, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_CapturePrism_C_On_Throw::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_On_Throw, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_CapturePrism_C_On_Throw::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_CapturePrism.BP_CapturePrism_C.OnEndShootAnimation
// 0x0010 (0x0010 - 0x0000)
struct BP_CapturePrism_C_OnEndShootAnimation final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyMagazine_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrism_C_OnEndShootAnimation) == 0x000008, "Wrong alignment on BP_CapturePrism_C_OnEndShootAnimation");
static_assert(sizeof(BP_CapturePrism_C_OnEndShootAnimation) == 0x000010, "Wrong size on BP_CapturePrism_C_OnEndShootAnimation");
static_assert(offsetof(BP_CapturePrism_C_OnEndShootAnimation, Montage) == 0x000000, "Member 'BP_CapturePrism_C_OnEndShootAnimation::Montage' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_OnEndShootAnimation, CallFunc_IsEmptyMagazine_ReturnValue) == 0x000008, "Member 'BP_CapturePrism_C_OnEndShootAnimation::CallFunc_IsEmptyMagazine_ReturnValue' has a wrong offset!");

// Function BP_CapturePrism.BP_CapturePrism_C.OnThrowInternal
// 0x0020 (0x0020 - 0x0000)
struct BP_CapturePrism_C_OnThrowInternal final
{
public:
	class AActor*                                 Bullet;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCaptureLevel_level;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ThrowCaptureObjectBase_C*           K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrism_C_OnThrowInternal) == 0x000008, "Wrong alignment on BP_CapturePrism_C_OnThrowInternal");
static_assert(sizeof(BP_CapturePrism_C_OnThrowInternal) == 0x000020, "Wrong size on BP_CapturePrism_C_OnThrowInternal");
static_assert(offsetof(BP_CapturePrism_C_OnThrowInternal, Bullet) == 0x000000, "Member 'BP_CapturePrism_C_OnThrowInternal::Bullet' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_OnThrowInternal, CallFunc_GetCaptureLevel_level) == 0x000008, "Member 'BP_CapturePrism_C_OnThrowInternal::CallFunc_GetCaptureLevel_level' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_OnThrowInternal, K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base) == 0x000010, "Member 'BP_CapturePrism_C_OnThrowInternal::K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base' has a wrong offset!");
static_assert(offsetof(BP_CapturePrism_C_OnThrowInternal, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_CapturePrism_C_OnThrowInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

