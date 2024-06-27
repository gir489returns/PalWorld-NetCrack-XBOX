#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlacementTools

#include "Basic.hpp"

#include "PlacementTools_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class PlacementTools.PlacementToolBase
// 0x0160 (0x03F0 - 0x0290)
#pragma pack(push, 0x1)
class alignas(0x10) APlacementToolBase : public AActor
{
public:
	bool                                          IsInEditor;                                        // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16FB[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        SceneComponent;                                    // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBillboardComponent*                    EasySelectBillboard;                               // 0x02A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRandomStream                          RandomStream;                                      // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FLinearDistribution                    DistributionCurve;                                 // 0x02B0(0x0010)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_16FC[0x20];                                    // 0x02C0(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	EPlacementMode                                PlacementMode;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EPlacementStyle                               PlacementStyle;                                    // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_16FD[0x6];                                     // 0x02E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPlacementItem>                 PlacementItems;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	struct FDirections                            SurfaceDirection;                                  // 0x02F8(0x0006)(Edit, BlueprintVisible, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	uint8                                         Pad_16FE[0x2];                                     // 0x02FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Amount;                                            // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         Seed;                                              // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_16FF[0x8];                                     // 0x0308(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Offset;                                            // 0x0310(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRandomizeRotation;                                // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1700[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RotationMin;                                       // 0x0378(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	struct FRotator                               RotationMax;                                       // 0x0390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	bool                                          bRandomizeScale;                                   // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bUniformScale;                                     // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1701[0x6];                                     // 0x03AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ScaleMin;                                          // 0x03B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                ScaleMax;                                          // 0x03C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRotateToSurface;                                  // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bAdjustToSurface;                                  // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bAvoidOverlapBounds;                               // 0x03E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bDeleteChildrenWhenDeleted;                        // 0x03E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bHideBrush;                                        // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1702[0x3];                                     // 0x03E5(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Generate();
	void RandomizeSeed();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlacementToolBase">();
	}
	static class APlacementToolBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlacementToolBase>();
	}
};
#pragma pack(pop)
static_assert(alignof(APlacementToolBase) == 0x000010, "Wrong alignment on APlacementToolBase");
static_assert(sizeof(APlacementToolBase) == 0x0003F0, "Wrong size on APlacementToolBase");
static_assert(offsetof(APlacementToolBase, IsInEditor) == 0x000290, "Member 'APlacementToolBase::IsInEditor' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, SceneComponent) == 0x000298, "Member 'APlacementToolBase::SceneComponent' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, EasySelectBillboard) == 0x0002A0, "Member 'APlacementToolBase::EasySelectBillboard' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, RandomStream) == 0x0002A8, "Member 'APlacementToolBase::RandomStream' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, DistributionCurve) == 0x0002B0, "Member 'APlacementToolBase::DistributionCurve' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, PlacementMode) == 0x0002E0, "Member 'APlacementToolBase::PlacementMode' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, PlacementStyle) == 0x0002E1, "Member 'APlacementToolBase::PlacementStyle' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, PlacementItems) == 0x0002E8, "Member 'APlacementToolBase::PlacementItems' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, SurfaceDirection) == 0x0002F8, "Member 'APlacementToolBase::SurfaceDirection' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, Amount) == 0x000300, "Member 'APlacementToolBase::Amount' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, Seed) == 0x000304, "Member 'APlacementToolBase::Seed' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, Offset) == 0x000310, "Member 'APlacementToolBase::Offset' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, bRandomizeRotation) == 0x000370, "Member 'APlacementToolBase::bRandomizeRotation' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, RotationMin) == 0x000378, "Member 'APlacementToolBase::RotationMin' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, RotationMax) == 0x000390, "Member 'APlacementToolBase::RotationMax' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, bRandomizeScale) == 0x0003A8, "Member 'APlacementToolBase::bRandomizeScale' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, bUniformScale) == 0x0003A9, "Member 'APlacementToolBase::bUniformScale' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, ScaleMin) == 0x0003B0, "Member 'APlacementToolBase::ScaleMin' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, ScaleMax) == 0x0003C8, "Member 'APlacementToolBase::ScaleMax' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, bRotateToSurface) == 0x0003E0, "Member 'APlacementToolBase::bRotateToSurface' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, bAdjustToSurface) == 0x0003E1, "Member 'APlacementToolBase::bAdjustToSurface' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, bAvoidOverlapBounds) == 0x0003E2, "Member 'APlacementToolBase::bAvoidOverlapBounds' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, bDeleteChildrenWhenDeleted) == 0x0003E3, "Member 'APlacementToolBase::bDeleteChildrenWhenDeleted' has a wrong offset!");
static_assert(offsetof(APlacementToolBase, bHideBrush) == 0x0003E4, "Member 'APlacementToolBase::bHideBrush' has a wrong offset!");

// Class PlacementTools.BoxPlacement
// 0x0030 (0x0420 - 0x03F0)
class ABoxPlacement final : public APlacementToolBase
{
public:
	struct FVector                                BoxExtent;                                         // 0x03E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                          BoxBrush;                                          // 0x0400(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirections                            FadeDirection;                                     // 0x0408(0x0006)(Edit, BlueprintVisible, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	ECollisionChannel                             TraceChannel;                                      // 0x040E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1703[0x1];                                     // 0x040F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           NotPlaceOnActorTags;                               // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BoxPlacement">();
	}
	static class ABoxPlacement* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABoxPlacement>();
	}
};
static_assert(alignof(ABoxPlacement) == 0x000010, "Wrong alignment on ABoxPlacement");
static_assert(sizeof(ABoxPlacement) == 0x000420, "Wrong size on ABoxPlacement");
static_assert(offsetof(ABoxPlacement, BoxExtent) == 0x0003E8, "Member 'ABoxPlacement::BoxExtent' has a wrong offset!");
static_assert(offsetof(ABoxPlacement, BoxBrush) == 0x000400, "Member 'ABoxPlacement::BoxBrush' has a wrong offset!");
static_assert(offsetof(ABoxPlacement, FadeDirection) == 0x000408, "Member 'ABoxPlacement::FadeDirection' has a wrong offset!");
static_assert(offsetof(ABoxPlacement, TraceChannel) == 0x00040E, "Member 'ABoxPlacement::TraceChannel' has a wrong offset!");
static_assert(offsetof(ABoxPlacement, NotPlaceOnActorTags) == 0x000410, "Member 'ABoxPlacement::NotPlaceOnActorTags' has a wrong offset!");

// Class PlacementTools.SpherePlacement
// 0x0020 (0x0410 - 0x03F0)
class ASpherePlacement final : public APlacementToolBase
{
public:
	float                                         Radius;                                            // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1704[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USphereComponent*                       SphereBrush;                                       // 0x03F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EFadeAxis                                     FadeDirection;                                     // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ECollisionChannel                             TraceChannel;                                      // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1705[0x6];                                     // 0x03FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           NotPlaceOnActorTags;                               // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpherePlacement">();
	}
	static class ASpherePlacement* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpherePlacement>();
	}
};
static_assert(alignof(ASpherePlacement) == 0x000010, "Wrong alignment on ASpherePlacement");
static_assert(sizeof(ASpherePlacement) == 0x000410, "Wrong size on ASpherePlacement");
static_assert(offsetof(ASpherePlacement, Radius) == 0x0003E8, "Member 'ASpherePlacement::Radius' has a wrong offset!");
static_assert(offsetof(ASpherePlacement, SphereBrush) == 0x0003F0, "Member 'ASpherePlacement::SphereBrush' has a wrong offset!");
static_assert(offsetof(ASpherePlacement, FadeDirection) == 0x0003F8, "Member 'ASpherePlacement::FadeDirection' has a wrong offset!");
static_assert(offsetof(ASpherePlacement, TraceChannel) == 0x0003F9, "Member 'ASpherePlacement::TraceChannel' has a wrong offset!");
static_assert(offsetof(ASpherePlacement, NotPlaceOnActorTags) == 0x000400, "Member 'ASpherePlacement::NotPlaceOnActorTags' has a wrong offset!");

}

