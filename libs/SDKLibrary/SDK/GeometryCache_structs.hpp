#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "Niagara_structs.hpp"


namespace SDK
{

// ScriptStruct GeometryCache.TrackRenderData
// 0x00C0 (0x00C0 - 0x0000)
struct alignas(0x10) FTrackRenderData final
{
public:
	uint8                                         Pad_23CD[0xC0];                                    // 0x0000(0x00C0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTrackRenderData) == 0x000010, "Wrong alignment on FTrackRenderData");
static_assert(sizeof(FTrackRenderData) == 0x0000C0, "Wrong size on FTrackRenderData");

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FGeometryCacheMeshBatchInfo final
{
public:
	uint8                                         Pad_23CE[0xC];                                     // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGeometryCacheMeshBatchInfo) == 0x000004, "Wrong alignment on FGeometryCacheMeshBatchInfo");
static_assert(sizeof(FGeometryCacheMeshBatchInfo) == 0x00000C, "Wrong size on FGeometryCacheMeshBatchInfo");

// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// 0x0009 (0x0009 - 0x0000)
struct FGeometryCacheVertexInfo final
{
public:
	uint8                                         Pad_23CF[0x9];                                     // 0x0000(0x0009)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGeometryCacheVertexInfo) == 0x000001, "Wrong alignment on FGeometryCacheVertexInfo");
static_assert(sizeof(FGeometryCacheVertexInfo) == 0x000009, "Wrong size on FGeometryCacheVertexInfo");

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x00C8 (0x00C8 - 0x0000)
struct alignas(0x08) FGeometryCacheMeshData final
{
public:
	uint8                                         Pad_23D0[0xC8];                                    // 0x0000(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGeometryCacheMeshData) == 0x000008, "Wrong alignment on FGeometryCacheMeshData");
static_assert(sizeof(FGeometryCacheMeshData) == 0x0000C8, "Wrong size on FGeometryCacheMeshData");

// ScriptStruct GeometryCache.NiagaraGeometryCacheReference
// 0x0038 (0x0038 - 0x0000)
struct FNiagaraGeometryCacheReference final
{
public:
	class UGeometryCache*                         GeometryCache;                                     // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding           GeometryCacheUserParamBinding;                     // 0x0008(0x0020)(Edit, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             OverrideMaterials;                                 // 0x0028(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNiagaraGeometryCacheReference) == 0x000008, "Wrong alignment on FNiagaraGeometryCacheReference");
static_assert(sizeof(FNiagaraGeometryCacheReference) == 0x000038, "Wrong size on FNiagaraGeometryCacheReference");
static_assert(offsetof(FNiagaraGeometryCacheReference, GeometryCache) == 0x000000, "Member 'FNiagaraGeometryCacheReference::GeometryCache' has a wrong offset!");
static_assert(offsetof(FNiagaraGeometryCacheReference, GeometryCacheUserParamBinding) == 0x000008, "Member 'FNiagaraGeometryCacheReference::GeometryCacheUserParamBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraGeometryCacheReference, OverrideMaterials) == 0x000028, "Member 'FNiagaraGeometryCacheReference::OverrideMaterials' has a wrong offset!");

}

