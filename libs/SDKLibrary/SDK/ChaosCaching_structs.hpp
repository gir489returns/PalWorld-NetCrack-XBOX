#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosCaching

#include "Basic.hpp"

#include "MovieSceneTracks_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// Enum ChaosCaching.ECacheMode
// NumValues: 0x0004
enum class ECacheMode : uint8
{
	None                                     = 0,
	Play                                     = 1,
	Record                                   = 2,
	ECacheMode_MAX                           = 3,
};

// Enum ChaosCaching.EStartMode
// NumValues: 0x0003
enum class EStartMode : uint8
{
	Timed                                    = 0,
	Triggered                                = 1,
	EStartMode_MAX                           = 2,
};

// ScriptStruct ChaosCaching.RichCurves
// 0x0010 (0x0010 - 0x0000)
struct FRichCurves final
{
public:
	TArray<struct FRichCurve>                     RichCurves;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRichCurves) == 0x000008, "Wrong alignment on FRichCurves");
static_assert(sizeof(FRichCurves) == 0x000010, "Wrong size on FRichCurves");
static_assert(offsetof(FRichCurves, RichCurves) == 0x000000, "Member 'FRichCurves::RichCurves' has a wrong offset!");

// ScriptStruct ChaosCaching.CacheEventBase
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FCacheEventBase
{
public:
	uint8                                         Pad_23BB[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCacheEventBase) == 0x000008, "Wrong alignment on FCacheEventBase");
static_assert(sizeof(FCacheEventBase) == 0x000008, "Wrong size on FCacheEventBase");

// ScriptStruct ChaosCaching.EnableStateEvent
// 0x0008 (0x0010 - 0x0008)
struct FEnableStateEvent final : public FCacheEventBase
{
public:
	int32                                         Index;                                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnable;                                           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23BC[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEnableStateEvent) == 0x000008, "Wrong alignment on FEnableStateEvent");
static_assert(sizeof(FEnableStateEvent) == 0x000010, "Wrong size on FEnableStateEvent");
static_assert(offsetof(FEnableStateEvent, Index) == 0x000008, "Member 'FEnableStateEvent::Index' has a wrong offset!");
static_assert(offsetof(FEnableStateEvent, bEnable) == 0x00000C, "Member 'FEnableStateEvent::bEnable' has a wrong offset!");

// ScriptStruct ChaosCaching.CacheEventTrack
// 0x0038 (0x0038 - 0x0000)
struct FCacheEventTrack final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScriptStruct*                          Struct;                                            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 TimeStamps;                                        // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_23BD[0x18];                                    // 0x0020(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCacheEventTrack) == 0x000008, "Wrong alignment on FCacheEventTrack");
static_assert(sizeof(FCacheEventTrack) == 0x000038, "Wrong size on FCacheEventTrack");
static_assert(offsetof(FCacheEventTrack, Name) == 0x000000, "Member 'FCacheEventTrack::Name' has a wrong offset!");
static_assert(offsetof(FCacheEventTrack, Struct) == 0x000008, "Member 'FCacheEventTrack::Struct' has a wrong offset!");
static_assert(offsetof(FCacheEventTrack, TimeStamps) == 0x000010, "Member 'FCacheEventTrack::TimeStamps' has a wrong offset!");

// ScriptStruct ChaosCaching.ObservedComponent
// 0x0170 (0x0170 - 0x0000)
struct alignas(0x10) FObservedComponent final
{
public:
	class FName                                   CacheName;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComponentReference                    ComponentRef;                                      // 0x0008(0x0028)(NativeAccessSpecifierPublic)
	struct FSoftComponentReference                SoftComponentRef;                                  // 0x0030(0x0050)(Edit, NativeAccessSpecifierPublic)
	bool                                          bIsSimulating;                                     // 0x0080(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23BE[0xEF];                                    // 0x0081(0x00EF)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FObservedComponent) == 0x000010, "Wrong alignment on FObservedComponent");
static_assert(sizeof(FObservedComponent) == 0x000170, "Wrong size on FObservedComponent");
static_assert(offsetof(FObservedComponent, CacheName) == 0x000000, "Member 'FObservedComponent::CacheName' has a wrong offset!");
static_assert(offsetof(FObservedComponent, ComponentRef) == 0x000008, "Member 'FObservedComponent::ComponentRef' has a wrong offset!");
static_assert(offsetof(FObservedComponent, SoftComponentRef) == 0x000030, "Member 'FObservedComponent::SoftComponentRef' has a wrong offset!");
static_assert(offsetof(FObservedComponent, bIsSimulating) == 0x000080, "Member 'FObservedComponent::bIsSimulating' has a wrong offset!");

// ScriptStruct ChaosCaching.ParticleTransformTrack
// 0x0048 (0x0048 - 0x0000)
struct FParticleTransformTrack final
{
public:
	struct FRawAnimSequenceTrack                  RawTransformTrack;                                 // 0x0000(0x0030)(NativeAccessSpecifierPublic)
	float                                         BeginOffset;                                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDeactivateOnEnd;                                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23BF[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 KeyTimestamps;                                     // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FParticleTransformTrack) == 0x000008, "Wrong alignment on FParticleTransformTrack");
static_assert(sizeof(FParticleTransformTrack) == 0x000048, "Wrong size on FParticleTransformTrack");
static_assert(offsetof(FParticleTransformTrack, RawTransformTrack) == 0x000000, "Member 'FParticleTransformTrack::RawTransformTrack' has a wrong offset!");
static_assert(offsetof(FParticleTransformTrack, BeginOffset) == 0x000030, "Member 'FParticleTransformTrack::BeginOffset' has a wrong offset!");
static_assert(offsetof(FParticleTransformTrack, bDeactivateOnEnd) == 0x000034, "Member 'FParticleTransformTrack::bDeactivateOnEnd' has a wrong offset!");
static_assert(offsetof(FParticleTransformTrack, KeyTimestamps) == 0x000038, "Member 'FParticleTransformTrack::KeyTimestamps' has a wrong offset!");

// ScriptStruct ChaosCaching.PerParticleCacheData
// 0x0098 (0x0098 - 0x0000)
struct FPerParticleCacheData final
{
public:
	struct FParticleTransformTrack                TransformData;                                     // 0x0000(0x0048)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FRichCurve>          CurveData;                                         // 0x0048(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FPerParticleCacheData) == 0x000008, "Wrong alignment on FPerParticleCacheData");
static_assert(sizeof(FPerParticleCacheData) == 0x000098, "Wrong size on FPerParticleCacheData");
static_assert(offsetof(FPerParticleCacheData, TransformData) == 0x000000, "Member 'FPerParticleCacheData::TransformData' has a wrong offset!");
static_assert(offsetof(FPerParticleCacheData, CurveData) == 0x000048, "Member 'FPerParticleCacheData::CurveData' has a wrong offset!");

// ScriptStruct ChaosCaching.CacheSpawnableTemplate
// 0x00D0 (0x00D0 - 0x0000)
struct FCacheSpawnableTemplate final
{
public:
	class UObject*                                DuplicatedTemplate;                                // 0x0000(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C0[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InitialTransform;                                  // 0x0010(0x0060)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             ComponentTransform;                                // 0x0070(0x0060)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCacheSpawnableTemplate) == 0x000010, "Wrong alignment on FCacheSpawnableTemplate");
static_assert(sizeof(FCacheSpawnableTemplate) == 0x0000D0, "Wrong size on FCacheSpawnableTemplate");
static_assert(offsetof(FCacheSpawnableTemplate, DuplicatedTemplate) == 0x000000, "Member 'FCacheSpawnableTemplate::DuplicatedTemplate' has a wrong offset!");
static_assert(offsetof(FCacheSpawnableTemplate, InitialTransform) == 0x000010, "Member 'FCacheSpawnableTemplate::InitialTransform' has a wrong offset!");
static_assert(offsetof(FCacheSpawnableTemplate, ComponentTransform) == 0x000070, "Member 'FCacheSpawnableTemplate::ComponentTransform' has a wrong offset!");

// ScriptStruct ChaosCaching.BreakingEvent
// 0x0088 (0x0090 - 0x0008)
struct FBreakingEvent final : public FCacheEventBase
{
public:
	int32                                         Index;                                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C1[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity;                                   // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass;                                              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C2[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                BoundingBoxMin;                                    // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BoundingBoxMax;                                    // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBreakingEvent) == 0x000008, "Wrong alignment on FBreakingEvent");
static_assert(sizeof(FBreakingEvent) == 0x000090, "Wrong size on FBreakingEvent");
static_assert(offsetof(FBreakingEvent, Index) == 0x000008, "Member 'FBreakingEvent::Index' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, Location) == 0x000010, "Member 'FBreakingEvent::Location' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, Velocity) == 0x000028, "Member 'FBreakingEvent::Velocity' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, AngularVelocity) == 0x000040, "Member 'FBreakingEvent::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, Mass) == 0x000058, "Member 'FBreakingEvent::Mass' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, BoundingBoxMin) == 0x000060, "Member 'FBreakingEvent::BoundingBoxMin' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, BoundingBoxMax) == 0x000078, "Member 'FBreakingEvent::BoundingBoxMax' has a wrong offset!");

// ScriptStruct ChaosCaching.CollisionEvent
// 0x00E8 (0x00F0 - 0x0008)
struct FCollisionEvent final : public FCacheEventBase
{
public:
	struct FVector                                Location;                                          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AccumulatedImpulse;                                // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity1;                                         // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity2;                                         // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                DeltaVelocity1;                                    // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                DeltaVelocity2;                                    // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity1;                                  // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity2;                                  // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass1;                                             // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass2;                                             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PenetrationDepth;                                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C3[0x4];                                     // 0x00EC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCollisionEvent) == 0x000008, "Wrong alignment on FCollisionEvent");
static_assert(sizeof(FCollisionEvent) == 0x0000F0, "Wrong size on FCollisionEvent");
static_assert(offsetof(FCollisionEvent, Location) == 0x000008, "Member 'FCollisionEvent::Location' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, AccumulatedImpulse) == 0x000020, "Member 'FCollisionEvent::AccumulatedImpulse' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Normal) == 0x000038, "Member 'FCollisionEvent::Normal' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Velocity1) == 0x000050, "Member 'FCollisionEvent::Velocity1' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Velocity2) == 0x000068, "Member 'FCollisionEvent::Velocity2' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, DeltaVelocity1) == 0x000080, "Member 'FCollisionEvent::DeltaVelocity1' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, DeltaVelocity2) == 0x000098, "Member 'FCollisionEvent::DeltaVelocity2' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, AngularVelocity1) == 0x0000B0, "Member 'FCollisionEvent::AngularVelocity1' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, AngularVelocity2) == 0x0000C8, "Member 'FCollisionEvent::AngularVelocity2' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Mass1) == 0x0000E0, "Member 'FCollisionEvent::Mass1' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Mass2) == 0x0000E4, "Member 'FCollisionEvent::Mass2' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, PenetrationDepth) == 0x0000E8, "Member 'FCollisionEvent::PenetrationDepth' has a wrong offset!");

// ScriptStruct ChaosCaching.TrailingEvent
// 0x0080 (0x0088 - 0x0008)
struct FTrailingEvent final : public FCacheEventBase
{
public:
	int32                                         Index;                                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularVelocity;                                   // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BoundingBoxMin;                                    // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BoundingBoxMax;                                    // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTrailingEvent) == 0x000008, "Wrong alignment on FTrailingEvent");
static_assert(sizeof(FTrailingEvent) == 0x000088, "Wrong size on FTrailingEvent");
static_assert(offsetof(FTrailingEvent, Index) == 0x000008, "Member 'FTrailingEvent::Index' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, Location) == 0x000010, "Member 'FTrailingEvent::Location' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, Velocity) == 0x000028, "Member 'FTrailingEvent::Velocity' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, AngularVelocity) == 0x000040, "Member 'FTrailingEvent::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, BoundingBoxMin) == 0x000058, "Member 'FTrailingEvent::BoundingBoxMin' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, BoundingBoxMax) == 0x000070, "Member 'FTrailingEvent::BoundingBoxMax' has a wrong offset!");

// ScriptStruct ChaosCaching.MovieSceneChaosCacheParams
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneChaosCacheParams final : public FMovieSceneBaseCacheParams
{
public:
	class UChaosCacheCollection*                  CacheCollection;                                   // 0x0020(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneChaosCacheParams) == 0x000008, "Wrong alignment on FMovieSceneChaosCacheParams");
static_assert(sizeof(FMovieSceneChaosCacheParams) == 0x000028, "Wrong size on FMovieSceneChaosCacheParams");
static_assert(offsetof(FMovieSceneChaosCacheParams, CacheCollection) == 0x000020, "Member 'FMovieSceneChaosCacheParams::CacheCollection' has a wrong offset!");

// ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
// 0x0028 (0x0030 - 0x0008)
struct FMovieSceneChaosCacheSectionTemplateParameters final : public FMovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct FMovieSceneChaosCacheParams            ChaosCacheParams;                                  // 0x0008(0x0028)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneChaosCacheSectionTemplateParameters) == 0x000008, "Wrong alignment on FMovieSceneChaosCacheSectionTemplateParameters");
static_assert(sizeof(FMovieSceneChaosCacheSectionTemplateParameters) == 0x000030, "Wrong size on FMovieSceneChaosCacheSectionTemplateParameters");
static_assert(offsetof(FMovieSceneChaosCacheSectionTemplateParameters, ChaosCacheParams) == 0x000008, "Member 'FMovieSceneChaosCacheSectionTemplateParameters::ChaosCacheParams' has a wrong offset!");

// ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneChaosCacheSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneChaosCacheSectionTemplateParameters Params;                                            // 0x0020(0x0030)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneChaosCacheSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneChaosCacheSectionTemplate");
static_assert(sizeof(FMovieSceneChaosCacheSectionTemplate) == 0x000050, "Wrong size on FMovieSceneChaosCacheSectionTemplate");
static_assert(offsetof(FMovieSceneChaosCacheSectionTemplate, Params) == 0x000020, "Member 'FMovieSceneChaosCacheSectionTemplate::Params' has a wrong offset!");

}

