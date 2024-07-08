#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysicsCore

#include "Basic.hpp"


namespace SDK
{

// Enum PhysicsCore.EPhysicalSurface
// NumValues: 0x0041
enum class EPhysicalSurface : uint8
{
	SurfaceType_Default                      = 0,
	SurfaceType1                             = 1,
	SurfaceType2                             = 2,
	SurfaceType3                             = 3,
	SurfaceType4                             = 4,
	SurfaceType5                             = 5,
	SurfaceType6                             = 6,
	SurfaceType7                             = 7,
	SurfaceType8                             = 8,
	SurfaceType9                             = 9,
	SurfaceType10                            = 10,
	SurfaceType11                            = 11,
	SurfaceType12                            = 12,
	SurfaceType13                            = 13,
	SurfaceType14                            = 14,
	SurfaceType15                            = 15,
	SurfaceType16                            = 16,
	SurfaceType17                            = 17,
	SurfaceType18                            = 18,
	SurfaceType19                            = 19,
	SurfaceType20                            = 20,
	SurfaceType21                            = 21,
	SurfaceType22                            = 22,
	SurfaceType23                            = 23,
	SurfaceType24                            = 24,
	SurfaceType25                            = 25,
	SurfaceType26                            = 26,
	SurfaceType27                            = 27,
	SurfaceType28                            = 28,
	SurfaceType29                            = 29,
	SurfaceType30                            = 30,
	SurfaceType31                            = 31,
	SurfaceType32                            = 32,
	SurfaceType33                            = 33,
	SurfaceType34                            = 34,
	SurfaceType35                            = 35,
	SurfaceType36                            = 36,
	SurfaceType37                            = 37,
	SurfaceType38                            = 38,
	SurfaceType39                            = 39,
	SurfaceType40                            = 40,
	SurfaceType41                            = 41,
	SurfaceType42                            = 42,
	SurfaceType43                            = 43,
	SurfaceType44                            = 44,
	SurfaceType45                            = 45,
	SurfaceType46                            = 46,
	SurfaceType47                            = 47,
	SurfaceType48                            = 48,
	SurfaceType49                            = 49,
	SurfaceType50                            = 50,
	SurfaceType51                            = 51,
	SurfaceType52                            = 52,
	SurfaceType53                            = 53,
	SurfaceType54                            = 54,
	SurfaceType55                            = 55,
	SurfaceType56                            = 56,
	SurfaceType57                            = 57,
	SurfaceType58                            = 58,
	SurfaceType59                            = 59,
	SurfaceType60                            = 60,
	SurfaceType61                            = 61,
	SurfaceType62                            = 62,
	SurfaceType_Max                          = 63,
	EPhysicalSurface_MAX                     = 64,
};

// Enum PhysicsCore.ERadialImpulseFalloff
// NumValues: 0x0003
enum class ERadialImpulseFalloff : uint8
{
	RIF_Constant                             = 0,
	RIF_Linear                               = 1,
	RIF_MAX                                  = 2,
};

// Enum PhysicsCore.ESleepFamily
// NumValues: 0x0004
enum class ESleepFamily : uint8
{
	Normal                                   = 0,
	Sensitive                                = 1,
	Custom                                   = 2,
	ESleepFamily_MAX                         = 3,
};

// Enum PhysicsCore.ECollisionTraceFlag
// NumValues: 0x0005
enum class ECollisionTraceFlag : uint8
{
	CTF_UseDefault                           = 0,
	CTF_UseSimpleAndComplex                  = 1,
	CTF_UseSimpleAsComplex                   = 2,
	CTF_UseComplexAsSimple                   = 3,
	CTF_MAX                                  = 4,
};

// Enum PhysicsCore.EPhysicsType
// NumValues: 0x0004
enum class EPhysicsType : uint8
{
	PhysType_Default                         = 0,
	PhysType_Kinematic                       = 1,
	PhysType_Simulated                       = 2,
	PhysType_MAX                             = 3,
};

// Enum PhysicsCore.EBodyCollisionResponse
// NumValues: 0x0003
enum class EBodyCollisionResponse : uint8
{
	BodyCollision_Enabled                    = 0,
	BodyCollision_Disabled                   = 1,
	BodyCollision_MAX                        = 2,
};

// Enum PhysicsCore.EAngularConstraintMotion
// NumValues: 0x0004
enum class EAngularConstraintMotion : uint8
{
	ACM_Free                                 = 0,
	ACM_Limited                              = 1,
	ACM_Locked                               = 2,
	ACM_MAX                                  = 3,
};

// Enum PhysicsCore.EConstraintFrame
// NumValues: 0x0003
enum class EConstraintFrame : uint8
{
	Frame1                                   = 0,
	Frame2                                   = 1,
	EConstraintFrame_MAX                     = 2,
};

// Enum PhysicsCore.EConstraintPlasticityType
// NumValues: 0x0004
enum class EConstraintPlasticityType : uint8
{
	CCPT_Free                                = 0,
	CCPT_Shrink                              = 1,
	CCPT_Grow                                = 2,
	CCPT_MAX                                 = 3,
};

// Enum PhysicsCore.ELinearConstraintMotion
// NumValues: 0x0004
enum class ELinearConstraintMotion : uint8
{
	LCM_Free                                 = 0,
	LCM_Limited                              = 1,
	LCM_Locked                               = 2,
	LCM_MAX                                  = 3,
};

// Enum PhysicsCore.EFrictionCombineMode
// NumValues: 0x0004
enum class EFrictionCombineMode : uint8
{
	Average                                  = 0,
	Min                                      = 1,
	Multiply                                 = 2,
	Max                                      = 3,
};

// ScriptStruct PhysicsCore.BodyInstanceCore
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FBodyInstanceCore
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bSimulatePhysics : 1;                              // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideMass : 1;                                 // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableGravity : 1;                                // 0x0010(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAutoWeld : 1;                                     // 0x0010(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bStartAwake : 1;                                   // 0x0010(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bGenerateWakeEvents : 1;                           // 0x0010(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUpdateMassWhenScaleChanges : 1;                   // 0x0010(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBodyInstanceCore) == 0x000008, "Wrong alignment on FBodyInstanceCore");
static_assert(sizeof(FBodyInstanceCore) == 0x000018, "Wrong size on FBodyInstanceCore");

}

