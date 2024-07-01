#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GLTFExporter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GLTFExporter_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GLTFExporter.GLTFExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFExporter : public UExporter
{
public:
	static bool ExportToGLTF(class UObject* Object, const class FString& FilePath, const class UGLTFExportOptions* Options, const TSet<class AActor*>& SelectedActors, struct FGLTFExportMessages* OutMessages);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFExporter">();
	}
	static class UGLTFExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFExporter>();
	}
};
static_assert(alignof(UGLTFExporter) == 0x000008, "Wrong alignment on UGLTFExporter");
static_assert(sizeof(UGLTFExporter) == 0x000078, "Wrong size on UGLTFExporter");

// Class GLTFExporter.GLTFAnimSequenceExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFAnimSequenceExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFAnimSequenceExporter">();
	}
	static class UGLTFAnimSequenceExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFAnimSequenceExporter>();
	}
};
static_assert(alignof(UGLTFAnimSequenceExporter) == 0x000008, "Wrong alignment on UGLTFAnimSequenceExporter");
static_assert(sizeof(UGLTFAnimSequenceExporter) == 0x000078, "Wrong size on UGLTFAnimSequenceExporter");

// Class GLTFExporter.GLTFExportOptions
// 0x0088 (0x00B0 - 0x0028)
class UGLTFExportOptions final : public UObject
{
public:
	float                                         ExportUniformScale;                                // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportPreviewMesh;                                // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStrictCompliance;                                 // 0x002D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipNearDefaultValues;                            // 0x002E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeGeneratorVersion;                          // 0x002F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportProxyMaterials;                             // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportUnlitMaterials;                             // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportClearCoatMaterials;                         // 0x0032(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportExtraBlendModes;                            // 0x0033(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialBakeMode                         BakeMaterialInputs;                                // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialBakeSizePOT                      DefaultMaterialBakeSize;                           // 0x0035(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureFilter                                DefaultMaterialBakeFilter;                         // 0x0036(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               DefaultMaterialBakeTiling;                         // 0x0037(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                          // 0x0038(0x0050)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	int32                                         DefaultLevelOfDetail;                              // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportVertexColors;                               // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportVertexSkinWeights;                          // 0x008D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseMeshQuantization;                              // 0x008E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportLevelSequences;                             // 0x008F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportAnimationSequences;                         // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportPlaybackSettings;                           // 0x0091(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFTextureImageFormat                       TextureImageFormat;                                // 0x0092(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2392[0x1];                                     // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextureImageQuality;                               // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NoLossyImageFormatFor;                             // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportTextureTransforms;                          // 0x009C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportLightmaps;                                  // 0x009D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFTextureHDREncoding                       TextureHDREncoding;                                // 0x009E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAdjustNormalmaps;                                 // 0x009F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportHiddenInGame;                               // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2393[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ExportLights;                                      // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportCameras;                                    // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportHDRIBackdrops;                              // 0x00A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportSkySpheres;                                 // 0x00AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFVariantSetsMode                          VariantSetsMode;                                   // 0x00AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialVariantMode                      ExportMaterialVariants;                            // 0x00AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportMeshVariants;                               // 0x00AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportVisibilityVariants;                         // 0x00AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2394[0x1];                                     // 0x00AF(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ResetToDefault();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFExportOptions">();
	}
	static class UGLTFExportOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFExportOptions>();
	}
};
static_assert(alignof(UGLTFExportOptions) == 0x000008, "Wrong alignment on UGLTFExportOptions");
static_assert(sizeof(UGLTFExportOptions) == 0x0000B0, "Wrong size on UGLTFExportOptions");
static_assert(offsetof(UGLTFExportOptions, ExportUniformScale) == 0x000028, "Member 'UGLTFExportOptions::ExportUniformScale' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportPreviewMesh) == 0x00002C, "Member 'UGLTFExportOptions::bExportPreviewMesh' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bStrictCompliance) == 0x00002D, "Member 'UGLTFExportOptions::bStrictCompliance' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bSkipNearDefaultValues) == 0x00002E, "Member 'UGLTFExportOptions::bSkipNearDefaultValues' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bIncludeGeneratorVersion) == 0x00002F, "Member 'UGLTFExportOptions::bIncludeGeneratorVersion' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportProxyMaterials) == 0x000030, "Member 'UGLTFExportOptions::bExportProxyMaterials' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportUnlitMaterials) == 0x000031, "Member 'UGLTFExportOptions::bExportUnlitMaterials' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportClearCoatMaterials) == 0x000032, "Member 'UGLTFExportOptions::bExportClearCoatMaterials' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportExtraBlendModes) == 0x000033, "Member 'UGLTFExportOptions::bExportExtraBlendModes' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, BakeMaterialInputs) == 0x000034, "Member 'UGLTFExportOptions::BakeMaterialInputs' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeSize) == 0x000035, "Member 'UGLTFExportOptions::DefaultMaterialBakeSize' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeFilter) == 0x000036, "Member 'UGLTFExportOptions::DefaultMaterialBakeFilter' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeTiling) == 0x000037, "Member 'UGLTFExportOptions::DefaultMaterialBakeTiling' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultInputBakeSettings) == 0x000038, "Member 'UGLTFExportOptions::DefaultInputBakeSettings' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, DefaultLevelOfDetail) == 0x000088, "Member 'UGLTFExportOptions::DefaultLevelOfDetail' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportVertexColors) == 0x00008C, "Member 'UGLTFExportOptions::bExportVertexColors' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportVertexSkinWeights) == 0x00008D, "Member 'UGLTFExportOptions::bExportVertexSkinWeights' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bUseMeshQuantization) == 0x00008E, "Member 'UGLTFExportOptions::bUseMeshQuantization' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportLevelSequences) == 0x00008F, "Member 'UGLTFExportOptions::bExportLevelSequences' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportAnimationSequences) == 0x000090, "Member 'UGLTFExportOptions::bExportAnimationSequences' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportPlaybackSettings) == 0x000091, "Member 'UGLTFExportOptions::bExportPlaybackSettings' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, TextureImageFormat) == 0x000092, "Member 'UGLTFExportOptions::TextureImageFormat' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, TextureImageQuality) == 0x000094, "Member 'UGLTFExportOptions::TextureImageQuality' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, NoLossyImageFormatFor) == 0x000098, "Member 'UGLTFExportOptions::NoLossyImageFormatFor' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportTextureTransforms) == 0x00009C, "Member 'UGLTFExportOptions::bExportTextureTransforms' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportLightmaps) == 0x00009D, "Member 'UGLTFExportOptions::bExportLightmaps' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, TextureHDREncoding) == 0x00009E, "Member 'UGLTFExportOptions::TextureHDREncoding' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bAdjustNormalmaps) == 0x00009F, "Member 'UGLTFExportOptions::bAdjustNormalmaps' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportHiddenInGame) == 0x0000A0, "Member 'UGLTFExportOptions::bExportHiddenInGame' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, ExportLights) == 0x0000A4, "Member 'UGLTFExportOptions::ExportLights' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportCameras) == 0x0000A8, "Member 'UGLTFExportOptions::bExportCameras' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportHDRIBackdrops) == 0x0000A9, "Member 'UGLTFExportOptions::bExportHDRIBackdrops' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportSkySpheres) == 0x0000AA, "Member 'UGLTFExportOptions::bExportSkySpheres' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, VariantSetsMode) == 0x0000AB, "Member 'UGLTFExportOptions::VariantSetsMode' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, ExportMaterialVariants) == 0x0000AC, "Member 'UGLTFExportOptions::ExportMaterialVariants' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportMeshVariants) == 0x0000AD, "Member 'UGLTFExportOptions::bExportMeshVariants' has a wrong offset!");
static_assert(offsetof(UGLTFExportOptions, bExportVisibilityVariants) == 0x0000AE, "Member 'UGLTFExportOptions::bExportVisibilityVariants' has a wrong offset!");

// Class GLTFExporter.GLTFLevelExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFLevelExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelExporter">();
	}
	static class UGLTFLevelExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelExporter>();
	}
};
static_assert(alignof(UGLTFLevelExporter) == 0x000008, "Wrong alignment on UGLTFLevelExporter");
static_assert(sizeof(UGLTFLevelExporter) == 0x000078, "Wrong size on UGLTFLevelExporter");

// Class GLTFExporter.GLTFLevelSequenceExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFLevelSequenceExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelSequenceExporter">();
	}
	static class UGLTFLevelSequenceExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelSequenceExporter>();
	}
};
static_assert(alignof(UGLTFLevelSequenceExporter) == 0x000008, "Wrong alignment on UGLTFLevelSequenceExporter");
static_assert(sizeof(UGLTFLevelSequenceExporter) == 0x000078, "Wrong size on UGLTFLevelSequenceExporter");

// Class GLTFExporter.GLTFLevelVariantSetsExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFLevelVariantSetsExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelVariantSetsExporter">();
	}
	static class UGLTFLevelVariantSetsExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelVariantSetsExporter>();
	}
};
static_assert(alignof(UGLTFLevelVariantSetsExporter) == 0x000008, "Wrong alignment on UGLTFLevelVariantSetsExporter");
static_assert(sizeof(UGLTFLevelVariantSetsExporter) == 0x000078, "Wrong size on UGLTFLevelVariantSetsExporter");

// Class GLTFExporter.GLTFMaterialExporter
// 0x0008 (0x0080 - 0x0078)
class UGLTFMaterialExporter final : public UGLTFExporter
{
public:
	class UStaticMesh*                            DefaultPreviewMesh;                                // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFMaterialExporter">();
	}
	static class UGLTFMaterialExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFMaterialExporter>();
	}
};
static_assert(alignof(UGLTFMaterialExporter) == 0x000008, "Wrong alignment on UGLTFMaterialExporter");
static_assert(sizeof(UGLTFMaterialExporter) == 0x000080, "Wrong size on UGLTFMaterialExporter");
static_assert(offsetof(UGLTFMaterialExporter, DefaultPreviewMesh) == 0x000078, "Member 'UGLTFMaterialExporter::DefaultPreviewMesh' has a wrong offset!");

// Class GLTFExporter.GLTFMaterialExportOptions
// 0x0060 (0x0088 - 0x0028)
class UGLTFMaterialExportOptions final : public UAssetUserData
{
public:
	class UMaterialInterface*                     Proxy;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGLTFOverrideMaterialBakeSettings      Default;                                           // 0x0030(0x0006)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2395[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> Inputs;                                            // 0x0038(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFMaterialExportOptions">();
	}
	static class UGLTFMaterialExportOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFMaterialExportOptions>();
	}
};
static_assert(alignof(UGLTFMaterialExportOptions) == 0x000008, "Wrong alignment on UGLTFMaterialExportOptions");
static_assert(sizeof(UGLTFMaterialExportOptions) == 0x000088, "Wrong size on UGLTFMaterialExportOptions");
static_assert(offsetof(UGLTFMaterialExportOptions, Proxy) == 0x000028, "Member 'UGLTFMaterialExportOptions::Proxy' has a wrong offset!");
static_assert(offsetof(UGLTFMaterialExportOptions, Default) == 0x000030, "Member 'UGLTFMaterialExportOptions::Default' has a wrong offset!");
static_assert(offsetof(UGLTFMaterialExportOptions, Inputs) == 0x000038, "Member 'UGLTFMaterialExportOptions::Inputs' has a wrong offset!");

// Class GLTFExporter.GLTFProxyOptions
// 0x0058 (0x0080 - 0x0028)
class UGLTFProxyOptions final : public UObject
{
public:
	bool                                          bBakeMaterialInputs;                               // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialBakeSizePOT                      DefaultMaterialBakeSize;                           // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureFilter                                DefaultMaterialBakeFilter;                         // 0x002A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               DefaultMaterialBakeTiling;                         // 0x002B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2396[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                          // 0x0030(0x0050)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)

public:
	void ResetToDefault();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFProxyOptions">();
	}
	static class UGLTFProxyOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFProxyOptions>();
	}
};
static_assert(alignof(UGLTFProxyOptions) == 0x000008, "Wrong alignment on UGLTFProxyOptions");
static_assert(sizeof(UGLTFProxyOptions) == 0x000080, "Wrong size on UGLTFProxyOptions");
static_assert(offsetof(UGLTFProxyOptions, bBakeMaterialInputs) == 0x000028, "Member 'UGLTFProxyOptions::bBakeMaterialInputs' has a wrong offset!");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeSize) == 0x000029, "Member 'UGLTFProxyOptions::DefaultMaterialBakeSize' has a wrong offset!");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeFilter) == 0x00002A, "Member 'UGLTFProxyOptions::DefaultMaterialBakeFilter' has a wrong offset!");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeTiling) == 0x00002B, "Member 'UGLTFProxyOptions::DefaultMaterialBakeTiling' has a wrong offset!");
static_assert(offsetof(UGLTFProxyOptions, DefaultInputBakeSettings) == 0x000030, "Member 'UGLTFProxyOptions::DefaultInputBakeSettings' has a wrong offset!");

// Class GLTFExporter.GLTFSkeletalMeshExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFSkeletalMeshExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFSkeletalMeshExporter">();
	}
	static class UGLTFSkeletalMeshExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFSkeletalMeshExporter>();
	}
};
static_assert(alignof(UGLTFSkeletalMeshExporter) == 0x000008, "Wrong alignment on UGLTFSkeletalMeshExporter");
static_assert(sizeof(UGLTFSkeletalMeshExporter) == 0x000078, "Wrong size on UGLTFSkeletalMeshExporter");

// Class GLTFExporter.GLTFStaticMeshExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFStaticMeshExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFStaticMeshExporter">();
	}
	static class UGLTFStaticMeshExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFStaticMeshExporter>();
	}
};
static_assert(alignof(UGLTFStaticMeshExporter) == 0x000008, "Wrong alignment on UGLTFStaticMeshExporter");
static_assert(sizeof(UGLTFStaticMeshExporter) == 0x000078, "Wrong size on UGLTFStaticMeshExporter");

}

