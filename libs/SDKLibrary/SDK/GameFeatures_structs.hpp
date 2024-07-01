#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameFeatures

#include "Basic.hpp"


namespace SDK
{

// Enum GameFeatures.EGameFeatureTargetState
// NumValues: 0x0006
enum class EGameFeatureTargetState : uint8
{
	Installed                                = 0,
	Registered                               = 1,
	Loaded                                   = 2,
	Active                                   = 3,
	Count                                    = 4,
	EGameFeatureTargetState_MAX              = 5,
};

// ScriptStruct GameFeatures.GameFeatureComponentEntry
// 0x0068 (0x0068 - 0x0000)
struct FGameFeatureComponentEntry final
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;                                        // 0x0000(0x0030)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   ComponentClass;                                    // 0x0030(0x0030)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bClientComponent : 1;                              // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bServerComponent : 1;                              // 0x0060(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_13BD[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameFeatureComponentEntry) == 0x000008, "Wrong alignment on FGameFeatureComponentEntry");
static_assert(sizeof(FGameFeatureComponentEntry) == 0x000068, "Wrong size on FGameFeatureComponentEntry");
static_assert(offsetof(FGameFeatureComponentEntry, ActorClass) == 0x000000, "Member 'FGameFeatureComponentEntry::ActorClass' has a wrong offset!");
static_assert(offsetof(FGameFeatureComponentEntry, ComponentClass) == 0x000030, "Member 'FGameFeatureComponentEntry::ComponentClass' has a wrong offset!");

// ScriptStruct GameFeatures.DataRegistrySourceToAdd
// 0x0070 (0x0070 - 0x0000)
struct FDataRegistrySourceToAdd final
{
public:
	class FName                                   RegistryToAddTo;                                   // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AssetPriority;                                     // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bClientSource : 1;                                 // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bServerSource : 1;                                 // 0x000C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_13BE[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UDataTable>              DataTableToAdd;                                    // 0x0010(0x0030)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveTable>             CurveTableToAdd;                                   // 0x0040(0x0030)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDataRegistrySourceToAdd) == 0x000008, "Wrong alignment on FDataRegistrySourceToAdd");
static_assert(sizeof(FDataRegistrySourceToAdd) == 0x000070, "Wrong size on FDataRegistrySourceToAdd");
static_assert(offsetof(FDataRegistrySourceToAdd, RegistryToAddTo) == 0x000000, "Member 'FDataRegistrySourceToAdd::RegistryToAddTo' has a wrong offset!");
static_assert(offsetof(FDataRegistrySourceToAdd, AssetPriority) == 0x000008, "Member 'FDataRegistrySourceToAdd::AssetPriority' has a wrong offset!");
static_assert(offsetof(FDataRegistrySourceToAdd, DataTableToAdd) == 0x000010, "Member 'FDataRegistrySourceToAdd::DataTableToAdd' has a wrong offset!");
static_assert(offsetof(FDataRegistrySourceToAdd, CurveTableToAdd) == 0x000040, "Member 'FDataRegistrySourceToAdd::CurveTableToAdd' has a wrong offset!");

// ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
// 0x00C8 (0x00C8 - 0x0000)
struct FGameFeaturePluginStateMachineProperties final
{
public:
	uint8                                         Pad_13BF[0x88];                                    // 0x0000(0x0088)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameFeatureData*                       GameFeatureData;                                   // 0x0088(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13C0[0x38];                                    // 0x0090(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameFeaturePluginStateMachineProperties) == 0x000008, "Wrong alignment on FGameFeaturePluginStateMachineProperties");
static_assert(sizeof(FGameFeaturePluginStateMachineProperties) == 0x0000C8, "Wrong size on FGameFeaturePluginStateMachineProperties");
static_assert(offsetof(FGameFeaturePluginStateMachineProperties, GameFeatureData) == 0x000088, "Member 'FGameFeaturePluginStateMachineProperties::GameFeatureData' has a wrong offset!");

// ScriptStruct GameFeatures.GameFeaturePluginIdentifier
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FGameFeaturePluginIdentifier final
{
public:
	uint8                                         Pad_13C1[0x28];                                    // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameFeaturePluginIdentifier) == 0x000008, "Wrong alignment on FGameFeaturePluginIdentifier");
static_assert(sizeof(FGameFeaturePluginIdentifier) == 0x000028, "Wrong size on FGameFeaturePluginIdentifier");

// ScriptStruct GameFeatures.InstallBundlePluginProtocolMetaData
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FInstallBundlePluginProtocolMetaData final
{
public:
	uint8                                         Pad_13C2[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInstallBundlePluginProtocolMetaData) == 0x000008, "Wrong alignment on FInstallBundlePluginProtocolMetaData");
static_assert(sizeof(FInstallBundlePluginProtocolMetaData) == 0x000020, "Wrong size on FInstallBundlePluginProtocolMetaData");

}

