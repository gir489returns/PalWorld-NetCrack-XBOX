#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_CameraMosaic

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_CameraMosaic.BP_VisualEffect_CameraMosaic_C.CalcScreenBounds
// 0x0160 (0x0160 - 0x0000)
struct BP_VisualEffect_CameraMosaic_C_CalcScreenBounds final
{
public:
	struct FVector                                Origin;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Box_Extents;                                       // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      Player;                                            // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF6[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               Rect;                                              // 0x0040(0x0020)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF7[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFOVAngle_ReturnValue;                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF8[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DegTan_ReturnValue;                       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AF9[0x8];                                     // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               CallFunc_MakeVector4_ReturnValue;                  // 0x0130(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds) == 0x000010, "Wrong alignment on BP_VisualEffect_CameraMosaic_C_CalcScreenBounds");
static_assert(sizeof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds) == 0x000160, "Wrong size on BP_VisualEffect_CameraMosaic_C_CalcScreenBounds");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, Origin) == 0x000000, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::Origin' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, Box_Extents) == 0x000018, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::Box_Extents' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, Player) == 0x000030, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::Player' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, Rect) == 0x000040, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::Rect' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_GetViewportSize_ReturnValue) == 0x000060, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x000070, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x000080, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_BreakVector2D_X) == 0x000088, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_BreakVector2D_Y) == 0x000090, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Divide_Vector2DVector2D_ReturnValue) == 0x000098, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Divide_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_BreakVector2D_X_1) == 0x0000B0, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_BreakVector2D_Y_1) == 0x0000B8, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_VSize_ReturnValue) == 0x0000C0, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0000C8, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_GetCameraLocation_ReturnValue) == 0x0000D0, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_GetFOVAngle_ReturnValue) == 0x0000E8, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_GetFOVAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Vector_Distance_ReturnValue) == 0x0000F0, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000100, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_DegTan_ReturnValue) == 0x000108, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_DegTan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000110, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000118, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000120, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_MakeVector4_ReturnValue) == 0x000130, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_MakeVector4_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_CalcScreenBounds, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000150, "Member 'BP_VisualEffect_CameraMosaic_C_CalcScreenBounds::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_CameraMosaic.BP_VisualEffect_CameraMosaic_C.ExecuteUbergraph_BP_VisualEffect_CameraMosaic
// 0x0028 (0x0028 - 0x0000)
struct BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectDataBase*               CallFunc_GetVisualEffectDatabase_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetMosaicKeyName_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic) == 0x000008, "Wrong alignment on BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic");
static_assert(sizeof(BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic) == 0x000028, "Wrong size on BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic, CallFunc_MakeColor_ReturnValue) == 0x000004, "Member 'BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic, K2Node_Event_DeltaTime) == 0x000014, "Member 'BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic, CallFunc_GetVisualEffectDatabase_ReturnValue) == 0x000018, "Member 'BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic::CallFunc_GetVisualEffectDatabase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic, CallFunc_GetMosaicKeyName_ReturnValue) == 0x000020, "Member 'BP_VisualEffect_CameraMosaic_C_ExecuteUbergraph_BP_VisualEffect_CameraMosaic::CallFunc_GetMosaicKeyName_ReturnValue' has a wrong offset!");

// Function BP_VisualEffect_CameraMosaic.BP_VisualEffect_CameraMosaic_C.TickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_CameraMosaic_C_TickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_CameraMosaic_C_TickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_CameraMosaic_C_TickVisualEffect");
static_assert(sizeof(BP_VisualEffect_CameraMosaic_C_TickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_CameraMosaic_C_TickVisualEffect");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_TickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_CameraMosaic_C_TickVisualEffect::DeltaTime' has a wrong offset!");

// Function BP_VisualEffect_CameraMosaic.BP_VisualEffect_CameraMosaic_C.Update Mosaic
// 0x0150 (0x0150 - 0x0000)
struct BP_VisualEffect_CameraMosaic_C_Update_Mosaic final
{
public:
	double                                        Param_Weight_Value;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AFA[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AFB[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AFC[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetCharacter_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AFD[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                       CallFunc_GetBounds_ReturnValue;                    // 0x0068(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakBoxSphereBounds_Origin;              // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakBoxSphereBounds_BoxExtent;           // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakBoxSphereBounds_SphereRadius;        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AFE[0xC];                                     // 0x00D4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               CallFunc_CalcScreenBounds_Rect;                    // 0x00E0(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector4_X;                           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector4_Y;                           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector4_Z;                           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector4_W;                           // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_G_ImplicitCast;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_B_ImplicitCast;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_A_ImplicitCast;                  // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic) == 0x000010, "Wrong alignment on BP_VisualEffect_CameraMosaic_C_Update_Mosaic");
static_assert(sizeof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic) == 0x000150, "Wrong size on BP_VisualEffect_CameraMosaic_C_Update_Mosaic");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, Param_Weight_Value) == 0x000000, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::Param_Weight_Value' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, K2Node_MakeStruct_LinearColor) == 0x00001C, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_GetPlayerController_ReturnValue_1) == 0x000030, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_GetCharacter_ReturnValue) == 0x000038, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000060, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_GetBounds_ReturnValue) == 0x000068, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_GetBounds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_BreakBoxSphereBounds_Origin) == 0x0000A0, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_BreakBoxSphereBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_BreakBoxSphereBounds_BoxExtent) == 0x0000B8, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_BreakBoxSphereBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_BreakBoxSphereBounds_SphereRadius) == 0x0000D0, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_BreakBoxSphereBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_CalcScreenBounds_Rect) == 0x0000E0, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_CalcScreenBounds_Rect' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_BreakVector4_X) == 0x000100, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_BreakVector4_X' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_BreakVector4_Y) == 0x000108, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_BreakVector4_Y' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_BreakVector4_Z) == 0x000110, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_BreakVector4_Z' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_BreakVector4_W) == 0x000118, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_BreakVector4_W' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000120, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000128, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, K2Node_MakeStruct_LinearColor_1) == 0x000130, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, K2Node_MakeStruct_R_ImplicitCast) == 0x000140, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, K2Node_MakeStruct_G_ImplicitCast) == 0x000144, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::K2Node_MakeStruct_G_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, K2Node_MakeStruct_B_ImplicitCast) == 0x000148, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::K2Node_MakeStruct_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_Update_Mosaic, K2Node_MakeStruct_A_ImplicitCast) == 0x00014C, "Member 'BP_VisualEffect_CameraMosaic_C_Update_Mosaic::K2Node_MakeStruct_A_ImplicitCast' has a wrong offset!");

// Function BP_VisualEffect_CameraMosaic.BP_VisualEffect_CameraMosaic_C.UpdateEffectValue
// 0x0008 (0x0008 - 0x0000)
struct BP_VisualEffect_CameraMosaic_C_UpdateEffectValue final
{
public:
	double                                        WeightValue;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_CameraMosaic_C_UpdateEffectValue) == 0x000008, "Wrong alignment on BP_VisualEffect_CameraMosaic_C_UpdateEffectValue");
static_assert(sizeof(BP_VisualEffect_CameraMosaic_C_UpdateEffectValue) == 0x000008, "Wrong size on BP_VisualEffect_CameraMosaic_C_UpdateEffectValue");
static_assert(offsetof(BP_VisualEffect_CameraMosaic_C_UpdateEffectValue, WeightValue) == 0x000000, "Member 'BP_VisualEffect_CameraMosaic_C_UpdateEffectValue::WeightValue' has a wrong offset!");

}

