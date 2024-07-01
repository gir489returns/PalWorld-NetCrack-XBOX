#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionSimpleMonoMontage

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.ExecuteUbergraph_BP_ActionSimpleMonoMontage
// 0x0148 (0x0148 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_6;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_5;                   // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D1F[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue_1; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_FindMontage_Montage;                      // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontage_Exist;                        // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D20[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontage_Montage_1;                    // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontage_Exist_1;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D21[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D22[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast; // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage) == 0x000008, "Wrong alignment on BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage) == 0x000148, "Wrong size on BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, EntryPoint) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CustomEvent_NotifyName_6) == 0x000004, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CustomEvent_NotifyName_6' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CustomEvent_NotifyName_5) == 0x00000C, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CustomEvent_NotifyName_5' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CustomEvent_NotifyName_4) == 0x000024, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CustomEvent_NotifyName_3) == 0x00003C, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CustomEvent_NotifyName_2) == 0x000054, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CreateDelegate_OutputDelegate_3) == 0x00005C, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, Temp_name_Variable) == 0x00006C, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000078, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000080, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000088, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetPalCharacterMovementComponent_ReturnValue_1) == 0x000090, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetPalCharacterMovementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000098, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CustomEvent_NotifyName_1) == 0x0000A0, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CustomEvent_NotifyName) == 0x0000A8, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000B0, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0000C0, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000C8, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetDisplayName_ReturnValue) == 0x0000D8, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E8, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000F8, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_FindMontage_Montage) == 0x000108, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_FindMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_FindMontage_Exist) == 0x000110, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_FindMontage_Exist' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_FindMontage_Montage_1) == 0x000118, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_FindMontage_Montage_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_FindMontage_Exist_1) == 0x000120, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_FindMontage_Exist_1' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000128, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_GetMainMesh_ReturnValue) == 0x000130, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000138, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage, CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast) == 0x000144, "Member 'BP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage::CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast' has a wrong offset!");

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.FindMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_FindMontage final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D23[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontange_bExist;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D24[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontange_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_FindMontage) == 0x000008, "Wrong alignment on BP_ActionSimpleMonoMontage_C_FindMontage");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_FindMontage) == 0x000030, "Wrong size on BP_ActionSimpleMonoMontage_C_FindMontage");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_FindMontage, Montage) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_FindMontage::Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_FindMontage, Exist) == 0x000008, "Member 'BP_ActionSimpleMonoMontage_C_FindMontage::Exist' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_FindMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionSimpleMonoMontage_C_FindMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_FindMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionSimpleMonoMontage_C_FindMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_FindMontage, CallFunc_FindMontange_bExist) == 0x000020, "Member 'BP_ActionSimpleMonoMontage_C_FindMontage::CallFunc_FindMontange_bExist' has a wrong offset!");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_FindMontage, CallFunc_FindMontange_ReturnValue) == 0x000028, "Member 'BP_ActionSimpleMonoMontage_C_FindMontage::CallFunc_FindMontange_ReturnValue' has a wrong offset!");

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000004, "Wrong alignment on BP_ActionSimpleMonoMontage_C_OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000008, "Wrong size on BP_ActionSimpleMonoMontage_C_OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8, NotifyName) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8::NotifyName' has a wrong offset!");

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000004, "Wrong alignment on BP_ActionSimpleMonoMontage_C_OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000008, "Wrong size on BP_ActionSimpleMonoMontage_C_OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8, NotifyName) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8::NotifyName' has a wrong offset!");

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000004, "Wrong alignment on BP_ActionSimpleMonoMontage_C_OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000008, "Wrong size on BP_ActionSimpleMonoMontage_C_OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8, NotifyName) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8::NotifyName' has a wrong offset!");

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnNotifyBegin
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_OnNotifyBegin final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_OnNotifyBegin) == 0x000004, "Wrong alignment on BP_ActionSimpleMonoMontage_C_OnNotifyBegin");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_OnNotifyBegin) == 0x000008, "Wrong size on BP_ActionSimpleMonoMontage_C_OnNotifyBegin");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_OnNotifyBegin, NotifyName) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_OnNotifyBegin::NotifyName' has a wrong offset!");

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000004, "Wrong alignment on BP_ActionSimpleMonoMontage_C_OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000008, "Wrong size on BP_ActionSimpleMonoMontage_C_OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8, NotifyName) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8::NotifyName' has a wrong offset!");

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnNotifyEnd
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_OnNotifyEnd final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_OnNotifyEnd) == 0x000004, "Wrong alignment on BP_ActionSimpleMonoMontage_C_OnNotifyEnd");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_OnNotifyEnd) == 0x000008, "Wrong size on BP_ActionSimpleMonoMontage_C_OnNotifyEnd");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_OnNotifyEnd, NotifyName) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_OnNotifyEnd::NotifyName' has a wrong offset!");

// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionSimpleMonoMontage_C_OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionSimpleMonoMontage_C_OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000004, "Wrong alignment on BP_ActionSimpleMonoMontage_C_OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(sizeof(BP_ActionSimpleMonoMontage_C_OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8) == 0x000008, "Wrong size on BP_ActionSimpleMonoMontage_C_OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8");
static_assert(offsetof(BP_ActionSimpleMonoMontage_C_OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8, NotifyName) == 0x000000, "Member 'BP_ActionSimpleMonoMontage_C_OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8::NotifyName' has a wrong offset!");

}

