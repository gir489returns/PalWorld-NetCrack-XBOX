#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum CinematicCamera.ECameraFocusMethod
// NumValues: 0x0005
enum class ECameraFocusMethod : uint8
{
	DoNotOverride                            = 0,
	Manual                                   = 1,
	Tracking                                 = 2,
	Disable                                  = 3,
	MAX                                      = 4,
};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x001C (0x001C - 0x0000)
struct FCameraLensSettings final
{
public:
	float                                         MinFocalLength;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxFocalLength;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinFStop;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxFStop;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumFocusDistance;                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SqueezeFactor;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DiaphragmBladeCount;                               // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCameraLensSettings) == 0x000004, "Wrong alignment on FCameraLensSettings");
static_assert(sizeof(FCameraLensSettings) == 0x00001C, "Wrong size on FCameraLensSettings");
static_assert(offsetof(FCameraLensSettings, MinFocalLength) == 0x000000, "Member 'FCameraLensSettings::MinFocalLength' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MaxFocalLength) == 0x000004, "Member 'FCameraLensSettings::MaxFocalLength' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MinFStop) == 0x000008, "Member 'FCameraLensSettings::MinFStop' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MaxFStop) == 0x00000C, "Member 'FCameraLensSettings::MaxFStop' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MinimumFocusDistance) == 0x000010, "Member 'FCameraLensSettings::MinimumFocusDistance' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, SqueezeFactor) == 0x000014, "Member 'FCameraLensSettings::SqueezeFactor' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, DiaphragmBladeCount) == 0x000018, "Member 'FCameraLensSettings::DiaphragmBladeCount' has a wrong offset!");

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C (0x000C - 0x0000)
struct FCameraFilmbackSettings final
{
public:
	float                                         SensorWidth;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SensorHeight;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SensorAspectRatio;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCameraFilmbackSettings) == 0x000004, "Wrong alignment on FCameraFilmbackSettings");
static_assert(sizeof(FCameraFilmbackSettings) == 0x00000C, "Wrong size on FCameraFilmbackSettings");
static_assert(offsetof(FCameraFilmbackSettings, SensorWidth) == 0x000000, "Member 'FCameraFilmbackSettings::SensorWidth' has a wrong offset!");
static_assert(offsetof(FCameraFilmbackSettings, SensorHeight) == 0x000004, "Member 'FCameraFilmbackSettings::SensorHeight' has a wrong offset!");
static_assert(offsetof(FCameraFilmbackSettings, SensorAspectRatio) == 0x000008, "Member 'FCameraFilmbackSettings::SensorAspectRatio' has a wrong offset!");

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020 (0x0020 - 0x0000)
struct FNamedFilmbackPreset final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                FilmbackSettings;                                  // 0x0010(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNamedFilmbackPreset) == 0x000008, "Wrong alignment on FNamedFilmbackPreset");
static_assert(sizeof(FNamedFilmbackPreset) == 0x000020, "Wrong size on FNamedFilmbackPreset");
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x000000, "Member 'FNamedFilmbackPreset::Name' has a wrong offset!");
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x000010, "Member 'FNamedFilmbackPreset::FilmbackSettings' has a wrong offset!");

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0030 (0x0030 - 0x0000)
struct FNamedLensPreset final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x0010(0x001C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNamedLensPreset) == 0x000008, "Wrong alignment on FNamedLensPreset");
static_assert(sizeof(FNamedLensPreset) == 0x000030, "Wrong size on FNamedLensPreset");
static_assert(offsetof(FNamedLensPreset, Name) == 0x000000, "Member 'FNamedLensPreset::Name' has a wrong offset!");
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x000010, "Member 'FNamedLensPreset::LensSettings' has a wrong offset!");

// ScriptStruct CinematicCamera.PlateCropSettings
// 0x0004 (0x0004 - 0x0000)
struct FPlateCropSettings final
{
public:
	float                                         AspectRatio;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlateCropSettings) == 0x000004, "Wrong alignment on FPlateCropSettings");
static_assert(sizeof(FPlateCropSettings) == 0x000004, "Wrong size on FPlateCropSettings");
static_assert(offsetof(FPlateCropSettings, AspectRatio) == 0x000000, "Member 'FPlateCropSettings::AspectRatio' has a wrong offset!");

// ScriptStruct CinematicCamera.NamedPlateCropPreset
// 0x0018 (0x0018 - 0x0000)
struct FNamedPlateCropPreset final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlateCropSettings                     CropSettings;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNamedPlateCropPreset) == 0x000008, "Wrong alignment on FNamedPlateCropPreset");
static_assert(sizeof(FNamedPlateCropPreset) == 0x000018, "Wrong size on FNamedPlateCropPreset");
static_assert(offsetof(FNamedPlateCropPreset, Name) == 0x000000, "Member 'FNamedPlateCropPreset::Name' has a wrong offset!");
static_assert(offsetof(FNamedPlateCropPreset, CropSettings) == 0x000010, "Member 'FNamedPlateCropPreset::CropSettings' has a wrong offset!");

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0050 (0x0050 - 0x0000)
struct FCameraTrackingFocusSettings final
{
public:
	TSoftObjectPtr<class AActor>                  ActorToTrack;                                      // 0x0000(0x0030)(Edit, BlueprintVisible, Interp, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RelativeOffset;                                    // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDrawDebugTrackingFocusPoint : 1;                  // 0x0048(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCameraTrackingFocusSettings) == 0x000008, "Wrong alignment on FCameraTrackingFocusSettings");
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x000050, "Wrong size on FCameraTrackingFocusSettings");
static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0x000000, "Member 'FCameraTrackingFocusSettings::ActorToTrack' has a wrong offset!");
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x000030, "Member 'FCameraTrackingFocusSettings::RelativeOffset' has a wrong offset!");

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0068 (0x0068 - 0x0000)
struct FCameraFocusSettings final
{
public:
	ECameraFocusMethod                            FocusMethod;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ManualFocusDistance;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraTrackingFocusSettings           TrackingFocusSettings;                             // 0x0008(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         bSmoothFocusChanges : 1;                           // 0x0058(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FocusSmoothingInterpSpeed;                         // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FocusOffset;                                       // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCameraFocusSettings) == 0x000008, "Wrong alignment on FCameraFocusSettings");
static_assert(sizeof(FCameraFocusSettings) == 0x000068, "Wrong size on FCameraFocusSettings");
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x000000, "Member 'FCameraFocusSettings::FocusMethod' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, ManualFocusDistance) == 0x000004, "Member 'FCameraFocusSettings::ManualFocusDistance' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x000008, "Member 'FCameraFocusSettings::TrackingFocusSettings' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, FocusSmoothingInterpSpeed) == 0x00005C, "Member 'FCameraFocusSettings::FocusSmoothingInterpSpeed' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, FocusOffset) == 0x000060, "Member 'FCameraFocusSettings::FocusOffset' has a wrong offset!");

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0070 (0x0070 - 0x0000)
struct FCameraLookatTrackingSettings final
{
public:
	uint8                                         bEnableLookAtTracking : 1;                         // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDrawDebugLookAtTrackingPosition : 1;              // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LookAtTrackingInterpSpeed;                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x18];                                       // 0x0008(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class AActor>                  ActorToTrack;                                      // 0x0020(0x0030)(Edit, BlueprintVisible, Interp, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RelativeOffset;                                    // 0x0050(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAllowRoll : 1;                                    // 0x0068(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCameraLookatTrackingSettings) == 0x000008, "Wrong alignment on FCameraLookatTrackingSettings");
static_assert(sizeof(FCameraLookatTrackingSettings) == 0x000070, "Wrong size on FCameraLookatTrackingSettings");
static_assert(offsetof(FCameraLookatTrackingSettings, LookAtTrackingInterpSpeed) == 0x000004, "Member 'FCameraLookatTrackingSettings::LookAtTrackingInterpSpeed' has a wrong offset!");
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 0x000020, "Member 'FCameraLookatTrackingSettings::ActorToTrack' has a wrong offset!");
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x000050, "Member 'FCameraLookatTrackingSettings::RelativeOffset' has a wrong offset!");

}

