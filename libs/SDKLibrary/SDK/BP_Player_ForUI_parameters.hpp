#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Player_ForUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Player_ForUI.BP_Player_ForUI_C.CopyWeapon
// 0x0360 (0x0360 - 0x0000)
struct BP_Player_ForUI_C_CopyWeapon final
{
public:
	class UClass*                                 WeaponClass;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EWeaponAnimationPoseType                      Temp_byte_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BE[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47BF[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_GetMainMesh_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C0[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C1[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeaponAnimationInfo                   CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue; // 0x00B8(0x0258)(ConstParm)
	class FName                                   CallFunc_GetEquipSocketName_ReturnValue;           // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          CallFunc_Map_Find_Value;                           // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C2[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0328(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0338(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C3[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_CopyWeapon) == 0x000010, "Wrong alignment on BP_Player_ForUI_C_CopyWeapon");
static_assert(sizeof(BP_Player_ForUI_C_CopyWeapon) == 0x000360, "Wrong size on BP_Player_ForUI_C_CopyWeapon");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, WeaponClass) == 0x000000, "Member 'BP_Player_ForUI_C_CopyWeapon::WeaponClass' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, Temp_byte_Variable) == 0x000008, "Member 'BP_Player_ForUI_C_CopyWeapon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_IsValidClass_ReturnValue) == 0x000009, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_Player_ForUI_C_CopyWeapon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_Player_ForUI_C_CopyWeapon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_FinishSpawningActor_ReturnValue) == 0x000090, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_GetMainMesh_ReturnValue) == 0x000098, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_IsValid_ReturnValue_1) == 0x0000A0, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, K2Node_DynamicCast_AsSkeletal_Mesh_Component) == 0x0000A8, "Member 'BP_Player_ForUI_C_CopyWeapon::K2Node_DynamicCast_AsSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'BP_Player_ForUI_C_CopyWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue) == 0x0000B8, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_GetEquipSocketName_ReturnValue) == 0x000310, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_GetEquipSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_Map_Find_Value) == 0x000318, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_Map_Find_ReturnValue) == 0x000320, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_GetAttachedActors_OutActors) == 0x000328, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_Array_Get_Item) == 0x000338, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_Array_Length_ReturnValue) == 0x000340, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x000348, "Member 'BP_Player_ForUI_C_CopyWeapon::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, K2Node_DynamicCast_bSuccess_1) == 0x000350, "Member 'BP_Player_ForUI_C_CopyWeapon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_CopyWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x000351, "Member 'BP_Player_ForUI_C_CopyWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Player_ForUI.BP_Player_ForUI_C.ExecuteUbergraph_BP_Player_ForUI
// 0x0038 (0x0038 - 0x0000)
struct BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalSkeletalMeshComponent* SkeletalMeshComponent)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C4[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalSkeletalMeshComponent* SkeletalMeshComponent)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalSkeletalMeshComponent* SkeletalMeshComponent)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI) == 0x000004, "Wrong alignment on BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI");
static_assert(sizeof(BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI) == 0x000038, "Wrong size on BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI");
static_assert(offsetof(BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI, EntryPoint) == 0x000000, "Member 'BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI, K2Node_Event_EndPlayReason) == 0x000014, "Member 'BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'BP_Player_ForUI_C_ExecuteUbergraph_BP_Player_ForUI::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedBodyMesh__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Player_ForUI_C_OnAppliedBodyMesh__DelegateSignature final
{
public:
	struct FLinearColor                           BodyMeshBasColor;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_OnAppliedBodyMesh__DelegateSignature) == 0x000004, "Wrong alignment on BP_Player_ForUI_C_OnAppliedBodyMesh__DelegateSignature");
static_assert(sizeof(BP_Player_ForUI_C_OnAppliedBodyMesh__DelegateSignature) == 0x000010, "Wrong size on BP_Player_ForUI_C_OnAppliedBodyMesh__DelegateSignature");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedBodyMesh__DelegateSignature, BodyMeshBasColor) == 0x000000, "Member 'BP_Player_ForUI_C_OnAppliedBodyMesh__DelegateSignature::BodyMeshBasColor' has a wrong offset!");

// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedBodyMesh_Binded
// 0x0018 (0x0018 - 0x0000)
struct BP_Player_ForUI_C_OnAppliedBodyMesh_Binded final
{
public:
	const class UPalSkeletalMeshComponent*        SkeletalMeshComponent;                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetBodyBaseColor_OutColor;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_OnAppliedBodyMesh_Binded) == 0x000008, "Wrong alignment on BP_Player_ForUI_C_OnAppliedBodyMesh_Binded");
static_assert(sizeof(BP_Player_ForUI_C_OnAppliedBodyMesh_Binded) == 0x000018, "Wrong size on BP_Player_ForUI_C_OnAppliedBodyMesh_Binded");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedBodyMesh_Binded, SkeletalMeshComponent) == 0x000000, "Member 'BP_Player_ForUI_C_OnAppliedBodyMesh_Binded::SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedBodyMesh_Binded, CallFunc_GetBodyBaseColor_OutColor) == 0x000008, "Member 'BP_Player_ForUI_C_OnAppliedBodyMesh_Binded::CallFunc_GetBodyBaseColor_OutColor' has a wrong offset!");

// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedHairMesh__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Player_ForUI_C_OnAppliedHairMesh__DelegateSignature final
{
public:
	struct FLinearColor                           HairMeshBaseColor;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_OnAppliedHairMesh__DelegateSignature) == 0x000004, "Wrong alignment on BP_Player_ForUI_C_OnAppliedHairMesh__DelegateSignature");
static_assert(sizeof(BP_Player_ForUI_C_OnAppliedHairMesh__DelegateSignature) == 0x000010, "Wrong size on BP_Player_ForUI_C_OnAppliedHairMesh__DelegateSignature");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedHairMesh__DelegateSignature, HairMeshBaseColor) == 0x000000, "Member 'BP_Player_ForUI_C_OnAppliedHairMesh__DelegateSignature::HairMeshBaseColor' has a wrong offset!");

// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedHairMesh_Binded
// 0x0018 (0x0018 - 0x0000)
struct BP_Player_ForUI_C_OnAppliedHairMesh_Binded final
{
public:
	const class UPalSkeletalMeshComponent*        SkeletalMeshComponent;                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetHairBaseColor_OutColor;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_OnAppliedHairMesh_Binded) == 0x000008, "Wrong alignment on BP_Player_ForUI_C_OnAppliedHairMesh_Binded");
static_assert(sizeof(BP_Player_ForUI_C_OnAppliedHairMesh_Binded) == 0x000018, "Wrong size on BP_Player_ForUI_C_OnAppliedHairMesh_Binded");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedHairMesh_Binded, SkeletalMeshComponent) == 0x000000, "Member 'BP_Player_ForUI_C_OnAppliedHairMesh_Binded::SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedHairMesh_Binded, CallFunc_GetHairBaseColor_OutColor) == 0x000008, "Member 'BP_Player_ForUI_C_OnAppliedHairMesh_Binded::CallFunc_GetHairBaseColor_OutColor' has a wrong offset!");

// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedHeadMesh__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature final
{
public:
	struct FLinearColor                           BrowMeshBaseColor;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EyeMeshBaseColor;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature) == 0x000004, "Wrong alignment on BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature");
static_assert(sizeof(BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature) == 0x000020, "Wrong size on BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature, BrowMeshBaseColor) == 0x000000, "Member 'BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature::BrowMeshBaseColor' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature, EyeMeshBaseColor) == 0x000010, "Member 'BP_Player_ForUI_C_OnAppliedHeadMesh__DelegateSignature::EyeMeshBaseColor' has a wrong offset!");

// Function BP_Player_ForUI.BP_Player_ForUI_C.OnAppliedHeadMesh_Binded
// 0x0028 (0x0028 - 0x0000)
struct BP_Player_ForUI_C_OnAppliedHeadMesh_Binded final
{
public:
	const class UPalSkeletalMeshComponent*        SkeletalMeshComponent;                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetEyeBaseColor_OutColor;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetBrowBaseColor_OutColor;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_OnAppliedHeadMesh_Binded) == 0x000008, "Wrong alignment on BP_Player_ForUI_C_OnAppliedHeadMesh_Binded");
static_assert(sizeof(BP_Player_ForUI_C_OnAppliedHeadMesh_Binded) == 0x000028, "Wrong size on BP_Player_ForUI_C_OnAppliedHeadMesh_Binded");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedHeadMesh_Binded, SkeletalMeshComponent) == 0x000000, "Member 'BP_Player_ForUI_C_OnAppliedHeadMesh_Binded::SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedHeadMesh_Binded, CallFunc_GetEyeBaseColor_OutColor) == 0x000008, "Member 'BP_Player_ForUI_C_OnAppliedHeadMesh_Binded::CallFunc_GetEyeBaseColor_OutColor' has a wrong offset!");
static_assert(offsetof(BP_Player_ForUI_C_OnAppliedHeadMesh_Binded, CallFunc_GetBrowBaseColor_OutColor) == 0x000018, "Member 'BP_Player_ForUI_C_OnAppliedHeadMesh_Binded::CallFunc_GetBrowBaseColor_OutColor' has a wrong offset!");

// Function BP_Player_ForUI.BP_Player_ForUI_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Player_ForUI_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Player_ForUI_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Player_ForUI_C_ReceiveEndPlay");
static_assert(sizeof(BP_Player_ForUI_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Player_ForUI_C_ReceiveEndPlay");
static_assert(offsetof(BP_Player_ForUI_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Player_ForUI_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

