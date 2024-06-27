#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosCloth

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
// 0x0002 (0x0002 - 0x0000)
struct ChaosClothingInteractor_ResetAndTeleport final
{
public:
	bool                                          bReset;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTeleport;                                         // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_ResetAndTeleport) == 0x000001, "Wrong alignment on ChaosClothingInteractor_ResetAndTeleport");
static_assert(sizeof(ChaosClothingInteractor_ResetAndTeleport) == 0x000002, "Wrong size on ChaosClothingInteractor_ResetAndTeleport");
static_assert(offsetof(ChaosClothingInteractor_ResetAndTeleport, bReset) == 0x000000, "Member 'ChaosClothingInteractor_ResetAndTeleport::bReset' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_ResetAndTeleport, bTeleport) == 0x000001, "Member 'ChaosClothingInteractor_ResetAndTeleport::bTeleport' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
// 0x0020 (0x0020 - 0x0000)
struct ChaosClothingInteractor_SetAerodynamics final
{
public:
	float                                         DragCoefficient;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LiftCoefficient;                                   // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WindVelocity;                                      // 0x0008(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetAerodynamics) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetAerodynamics");
static_assert(sizeof(ChaosClothingInteractor_SetAerodynamics) == 0x000020, "Wrong size on ChaosClothingInteractor_SetAerodynamics");
static_assert(offsetof(ChaosClothingInteractor_SetAerodynamics, DragCoefficient) == 0x000000, "Member 'ChaosClothingInteractor_SetAerodynamics::DragCoefficient' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetAerodynamics, LiftCoefficient) == 0x000004, "Member 'ChaosClothingInteractor_SetAerodynamics::LiftCoefficient' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetAerodynamics, WindVelocity) == 0x000008, "Member 'ChaosClothingInteractor_SetAerodynamics::WindVelocity' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
// 0x0020 (0x0020 - 0x0000)
struct ChaosClothingInteractor_SetAnimDrive final
{
public:
	struct FVector2D                              AnimDriveStiffness;                                // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              AnimDriveDamping;                                  // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetAnimDrive) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetAnimDrive");
static_assert(sizeof(ChaosClothingInteractor_SetAnimDrive) == 0x000020, "Wrong size on ChaosClothingInteractor_SetAnimDrive");
static_assert(offsetof(ChaosClothingInteractor_SetAnimDrive, AnimDriveStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetAnimDrive::AnimDriveStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetAnimDrive, AnimDriveDamping) == 0x000010, "Member 'ChaosClothingInteractor_SetAnimDrive::AnimDriveDamping' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
// 0x0004 (0x0004 - 0x0000)
struct ChaosClothingInteractor_SetAnimDriveLinear final
{
public:
	float                                         AnimDriveStiffness;                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetAnimDriveLinear) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetAnimDriveLinear");
static_assert(sizeof(ChaosClothingInteractor_SetAnimDriveLinear) == 0x000004, "Wrong size on ChaosClothingInteractor_SetAnimDriveLinear");
static_assert(offsetof(ChaosClothingInteractor_SetAnimDriveLinear, AnimDriveStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetAnimDriveLinear::AnimDriveStiffness' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetBackstop
// 0x0001 (0x0001 - 0x0000)
struct ChaosClothingInteractor_SetBackstop final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetBackstop) == 0x000001, "Wrong alignment on ChaosClothingInteractor_SetBackstop");
static_assert(sizeof(ChaosClothingInteractor_SetBackstop) == 0x000001, "Wrong size on ChaosClothingInteractor_SetBackstop");
static_assert(offsetof(ChaosClothingInteractor_SetBackstop, bEnabled) == 0x000000, "Member 'ChaosClothingInteractor_SetBackstop::bEnabled' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetCollision
// 0x0010 (0x0010 - 0x0000)
struct ChaosClothingInteractor_SetCollision final
{
public:
	float                                         CollisionThickness;                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrictionCoefficient;                               // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCCD;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2362[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SelfCollisionThickness;                            // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetCollision) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetCollision");
static_assert(sizeof(ChaosClothingInteractor_SetCollision) == 0x000010, "Wrong size on ChaosClothingInteractor_SetCollision");
static_assert(offsetof(ChaosClothingInteractor_SetCollision, CollisionThickness) == 0x000000, "Member 'ChaosClothingInteractor_SetCollision::CollisionThickness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetCollision, FrictionCoefficient) == 0x000004, "Member 'ChaosClothingInteractor_SetCollision::FrictionCoefficient' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetCollision, bUseCCD) == 0x000008, "Member 'ChaosClothingInteractor_SetCollision::bUseCCD' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetCollision, SelfCollisionThickness) == 0x00000C, "Member 'ChaosClothingInteractor_SetCollision::SelfCollisionThickness' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetDamping
// 0x0008 (0x0008 - 0x0000)
struct ChaosClothingInteractor_SetDamping final
{
public:
	float                                         DampingCoefficient;                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocalDampingCoefficient;                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetDamping) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetDamping");
static_assert(sizeof(ChaosClothingInteractor_SetDamping) == 0x000008, "Wrong size on ChaosClothingInteractor_SetDamping");
static_assert(offsetof(ChaosClothingInteractor_SetDamping, DampingCoefficient) == 0x000000, "Member 'ChaosClothingInteractor_SetDamping::DampingCoefficient' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetDamping, LocalDampingCoefficient) == 0x000004, "Member 'ChaosClothingInteractor_SetDamping::LocalDampingCoefficient' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetGravity
// 0x0020 (0x0020 - 0x0000)
struct ChaosClothingInteractor_SetGravity final
{
public:
	float                                         GravityScale;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsGravityOverridden;                              // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2363[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GravityOverride;                                   // 0x0008(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetGravity) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetGravity");
static_assert(sizeof(ChaosClothingInteractor_SetGravity) == 0x000020, "Wrong size on ChaosClothingInteractor_SetGravity");
static_assert(offsetof(ChaosClothingInteractor_SetGravity, GravityScale) == 0x000000, "Member 'ChaosClothingInteractor_SetGravity::GravityScale' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetGravity, bIsGravityOverridden) == 0x000004, "Member 'ChaosClothingInteractor_SetGravity::bIsGravityOverridden' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetGravity, GravityOverride) == 0x000008, "Member 'ChaosClothingInteractor_SetGravity::GravityOverride' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
// 0x0020 (0x0020 - 0x0000)
struct ChaosClothingInteractor_SetLongRangeAttachment final
{
public:
	struct FVector2D                              TetherStiffness;                                   // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              TetherScale;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetLongRangeAttachment) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetLongRangeAttachment");
static_assert(sizeof(ChaosClothingInteractor_SetLongRangeAttachment) == 0x000020, "Wrong size on ChaosClothingInteractor_SetLongRangeAttachment");
static_assert(offsetof(ChaosClothingInteractor_SetLongRangeAttachment, TetherStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetLongRangeAttachment::TetherStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetLongRangeAttachment, TetherScale) == 0x000010, "Member 'ChaosClothingInteractor_SetLongRangeAttachment::TetherScale' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
// 0x0008 (0x0008 - 0x0000)
struct ChaosClothingInteractor_SetLongRangeAttachmentLinear final
{
public:
	float                                         TetherStiffness;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TetherScale;                                       // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetLongRangeAttachmentLinear) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetLongRangeAttachmentLinear");
static_assert(sizeof(ChaosClothingInteractor_SetLongRangeAttachmentLinear) == 0x000008, "Wrong size on ChaosClothingInteractor_SetLongRangeAttachmentLinear");
static_assert(offsetof(ChaosClothingInteractor_SetLongRangeAttachmentLinear, TetherStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetLongRangeAttachmentLinear::TetherStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetLongRangeAttachmentLinear, TetherScale) == 0x000004, "Member 'ChaosClothingInteractor_SetLongRangeAttachmentLinear::TetherScale' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetMaterial
// 0x0030 (0x0030 - 0x0000)
struct ChaosClothingInteractor_SetMaterial final
{
public:
	struct FVector2D                              EdgeStiffness;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              BendingStiffness;                                  // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              AreaStiffness;                                     // 0x0020(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetMaterial) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetMaterial");
static_assert(sizeof(ChaosClothingInteractor_SetMaterial) == 0x000030, "Wrong size on ChaosClothingInteractor_SetMaterial");
static_assert(offsetof(ChaosClothingInteractor_SetMaterial, EdgeStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetMaterial::EdgeStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetMaterial, BendingStiffness) == 0x000010, "Member 'ChaosClothingInteractor_SetMaterial::BendingStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetMaterial, AreaStiffness) == 0x000020, "Member 'ChaosClothingInteractor_SetMaterial::AreaStiffness' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
// 0x000C (0x000C - 0x0000)
struct ChaosClothingInteractor_SetMaterialLinear final
{
public:
	float                                         EdgeStiffness;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BendingStiffness;                                  // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AreaStiffness;                                     // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetMaterialLinear) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetMaterialLinear");
static_assert(sizeof(ChaosClothingInteractor_SetMaterialLinear) == 0x00000C, "Wrong size on ChaosClothingInteractor_SetMaterialLinear");
static_assert(offsetof(ChaosClothingInteractor_SetMaterialLinear, EdgeStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetMaterialLinear::EdgeStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetMaterialLinear, BendingStiffness) == 0x000004, "Member 'ChaosClothingInteractor_SetMaterialLinear::BendingStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetMaterialLinear, AreaStiffness) == 0x000008, "Member 'ChaosClothingInteractor_SetMaterialLinear::AreaStiffness' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetPressure
// 0x0010 (0x0010 - 0x0000)
struct ChaosClothingInteractor_SetPressure final
{
public:
	struct FVector2D                              Pressure;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetPressure) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetPressure");
static_assert(sizeof(ChaosClothingInteractor_SetPressure) == 0x000010, "Wrong size on ChaosClothingInteractor_SetPressure");
static_assert(offsetof(ChaosClothingInteractor_SetPressure, Pressure) == 0x000000, "Member 'ChaosClothingInteractor_SetPressure::Pressure' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
// 0x0020 (0x0020 - 0x0000)
struct ChaosClothingInteractor_SetVelocityScale final
{
public:
	struct FVector                                LinearVelocityScale;                               // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularVelocityScale;                              // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FictitiousAngularScale;                            // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetVelocityScale) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetVelocityScale");
static_assert(sizeof(ChaosClothingInteractor_SetVelocityScale) == 0x000020, "Wrong size on ChaosClothingInteractor_SetVelocityScale");
static_assert(offsetof(ChaosClothingInteractor_SetVelocityScale, LinearVelocityScale) == 0x000000, "Member 'ChaosClothingInteractor_SetVelocityScale::LinearVelocityScale' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetVelocityScale, AngularVelocityScale) == 0x000018, "Member 'ChaosClothingInteractor_SetVelocityScale::AngularVelocityScale' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetVelocityScale, FictitiousAngularScale) == 0x00001C, "Member 'ChaosClothingInteractor_SetVelocityScale::FictitiousAngularScale' has a wrong offset!");

// Function ChaosCloth.ChaosClothingInteractor.SetWind
// 0x0040 (0x0040 - 0x0000)
struct ChaosClothingInteractor_SetWind final
{
public:
	struct FVector2D                              Drag;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Lift;                                              // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AirDensity;                                        // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2364[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                WindVelocity;                                      // 0x0028(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosClothingInteractor_SetWind) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetWind");
static_assert(sizeof(ChaosClothingInteractor_SetWind) == 0x000040, "Wrong size on ChaosClothingInteractor_SetWind");
static_assert(offsetof(ChaosClothingInteractor_SetWind, Drag) == 0x000000, "Member 'ChaosClothingInteractor_SetWind::Drag' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetWind, Lift) == 0x000010, "Member 'ChaosClothingInteractor_SetWind::Lift' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetWind, AirDensity) == 0x000020, "Member 'ChaosClothingInteractor_SetWind::AirDensity' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetWind, WindVelocity) == 0x000028, "Member 'ChaosClothingInteractor_SetWind::WindVelocity' has a wrong offset!");

}

