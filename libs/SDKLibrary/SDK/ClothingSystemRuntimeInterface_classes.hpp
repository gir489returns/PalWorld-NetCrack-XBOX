#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ClothingSystemRuntimeInterface_structs.hpp"


namespace SDK
{

// Class ClothingSystemRuntimeInterface.ClothConfigBase
// 0x0000 (0x0028 - 0x0028)
class UClothConfigBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigBase">();
	}
	static class UClothConfigBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigBase>();
	}
};
static_assert(alignof(UClothConfigBase) == 0x000008, "Wrong alignment on UClothConfigBase");
static_assert(sizeof(UClothConfigBase) == 0x000028, "Wrong size on UClothConfigBase");

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationFactory">();
	}
	static class UClothingSimulationFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationFactory>();
	}
};
static_assert(alignof(UClothingSimulationFactory) == 0x000008, "Wrong alignment on UClothingSimulationFactory");
static_assert(sizeof(UClothingSimulationFactory) == 0x000028, "Wrong size on UClothingSimulationFactory");

// Class ClothingSystemRuntimeInterface.ClothingInteractor
// 0x0008 (0x0030 - 0x0028)
class UClothingInteractor : public UObject
{
public:
	uint8                                         Pad_2347[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingInteractor">();
	}
	static class UClothingInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingInteractor>();
	}
};
static_assert(alignof(UClothingInteractor) == 0x000008, "Wrong alignment on UClothingInteractor");
static_assert(sizeof(UClothingInteractor) == 0x000030, "Wrong size on UClothingInteractor");

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (0x0048 - 0x0028)
class UClothingAssetBase : public UObject
{
public:
	class FString                                 ImportedFilePath;                                  // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  AssetGuid;                                         // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetBase">();
	}
	static class UClothingAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetBase>();
	}
};
static_assert(alignof(UClothingAssetBase) == 0x000008, "Wrong alignment on UClothingAssetBase");
static_assert(sizeof(UClothingAssetBase) == 0x000048, "Wrong size on UClothingAssetBase");
static_assert(offsetof(UClothingAssetBase, ImportedFilePath) == 0x000028, "Member 'UClothingAssetBase::ImportedFilePath' has a wrong offset!");
static_assert(offsetof(UClothingAssetBase, AssetGuid) == 0x000038, "Member 'UClothingAssetBase::AssetGuid' has a wrong offset!");

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0068 (0x0090 - 0x0028)
class UClothingSimulationInteractor : public UObject
{
public:
	TMap<class FName, class UClothingInteractor*> ClothingInteractors;                               // 0x0028(0x0050)(UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_2348[0x18];                                    // 0x0078(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClothConfigUpdated();
	void DisableGravityOverride();
	void EnableGravityOverride(const struct FVector& InVector);
	void PhysicsAssetUpdated();
	void SetAnimDriveSpringStiffness(float InStiffness);
	void SetMaxNumIterations(int32 MaxNumIterations);
	void SetNumIterations(int32 NumIterations);
	void SetNumSubsteps(int32 NumSubsteps);

	class UClothingInteractor* GetClothingInteractor(const class FString& ClothingAssetName) const;
	int32 GetNumCloths() const;
	int32 GetNumDynamicParticles() const;
	int32 GetNumIterations() const;
	int32 GetNumKinematicParticles() const;
	int32 GetNumSubsteps() const;
	float GetSimulationTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationInteractor">();
	}
	static class UClothingSimulationInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationInteractor>();
	}
};
static_assert(alignof(UClothingSimulationInteractor) == 0x000008, "Wrong alignment on UClothingSimulationInteractor");
static_assert(sizeof(UClothingSimulationInteractor) == 0x000090, "Wrong size on UClothingSimulationInteractor");
static_assert(offsetof(UClothingSimulationInteractor, ClothingInteractors) == 0x000028, "Member 'UClothingSimulationInteractor::ClothingInteractors' has a wrong offset!");

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// 0x0000 (0x0028 - 0x0028)
class UClothSharedSimConfigBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothSharedSimConfigBase">();
	}
	static class UClothSharedSimConfigBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothSharedSimConfigBase>();
	}
};
static_assert(alignof(UClothSharedSimConfigBase) == 0x000008, "Wrong alignment on UClothSharedSimConfigBase");
static_assert(sizeof(UClothSharedSimConfigBase) == 0x000028, "Wrong size on UClothSharedSimConfigBase");

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// 0x00B8 (0x00E0 - 0x0028)
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector3f>                      Vertices;                                          // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector3f>                      Normals;                                           // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                                Indices;                                           // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 InverseMasses;                                     // 0x0058(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>             BoneData;                                          // 0x0068(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         NumFixedVerts;                                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxBoneWeights;                                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                                SelfCollisionIndices;                              // 0x0080(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2349[0x50];                                    // 0x0090(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothPhysicalMeshDataBase_Legacy">();
	}
	static class UClothPhysicalMeshDataBase_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothPhysicalMeshDataBase_Legacy>();
	}
};
static_assert(alignof(UClothPhysicalMeshDataBase_Legacy) == 0x000008, "Wrong alignment on UClothPhysicalMeshDataBase_Legacy");
static_assert(sizeof(UClothPhysicalMeshDataBase_Legacy) == 0x0000E0, "Wrong size on UClothPhysicalMeshDataBase_Legacy");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Vertices) == 0x000028, "Member 'UClothPhysicalMeshDataBase_Legacy::Vertices' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Normals) == 0x000038, "Member 'UClothPhysicalMeshDataBase_Legacy::Normals' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Indices) == 0x000048, "Member 'UClothPhysicalMeshDataBase_Legacy::Indices' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, InverseMasses) == 0x000058, "Member 'UClothPhysicalMeshDataBase_Legacy::InverseMasses' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, BoneData) == 0x000068, "Member 'UClothPhysicalMeshDataBase_Legacy::BoneData' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, NumFixedVerts) == 0x000078, "Member 'UClothPhysicalMeshDataBase_Legacy::NumFixedVerts' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, MaxBoneWeights) == 0x00007C, "Member 'UClothPhysicalMeshDataBase_Legacy::MaxBoneWeights' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, SelfCollisionIndices) == 0x000080, "Member 'UClothPhysicalMeshDataBase_Legacy::SelfCollisionIndices' has a wrong offset!");

}

