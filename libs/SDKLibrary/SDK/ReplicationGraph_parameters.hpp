#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReplicationGraph

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// 0x0040 (0x0040 - 0x0000)
struct ReplicationGraphDebugActor_ClientCellInfo final
{
public:
	struct FVector                                CellLocation;                                      // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CellExtent;                                        // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         Actors;                                            // 0x0030(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReplicationGraphDebugActor_ClientCellInfo) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ClientCellInfo");
static_assert(sizeof(ReplicationGraphDebugActor_ClientCellInfo) == 0x000040, "Wrong size on ReplicationGraphDebugActor_ClientCellInfo");
static_assert(offsetof(ReplicationGraphDebugActor_ClientCellInfo, CellLocation) == 0x000000, "Member 'ReplicationGraphDebugActor_ClientCellInfo::CellLocation' has a wrong offset!");
static_assert(offsetof(ReplicationGraphDebugActor_ClientCellInfo, CellExtent) == 0x000018, "Member 'ReplicationGraphDebugActor_ClientCellInfo::CellExtent' has a wrong offset!");
static_assert(offsetof(ReplicationGraphDebugActor_ClientCellInfo, Actors) == 0x000030, "Member 'ReplicationGraphDebugActor_ClientCellInfo::Actors' has a wrong offset!");

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// 0x0010 (0x0010 - 0x0000)
struct ReplicationGraphDebugActor_ServerPrintAllActorInfo final
{
public:
	class FString                                 Str;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReplicationGraphDebugActor_ServerPrintAllActorInfo) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ServerPrintAllActorInfo");
static_assert(sizeof(ReplicationGraphDebugActor_ServerPrintAllActorInfo) == 0x000010, "Wrong size on ReplicationGraphDebugActor_ServerPrintAllActorInfo");
static_assert(offsetof(ReplicationGraphDebugActor_ServerPrintAllActorInfo, Str) == 0x000000, "Member 'ReplicationGraphDebugActor_ServerPrintAllActorInfo::Str' has a wrong offset!");

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// 0x0008 (0x0008 - 0x0000)
struct ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint");
static_assert(sizeof(ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint) == 0x000008, "Wrong size on ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint, Actor) == 0x000000, "Member 'ReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint::Actor' has a wrong offset!");

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// 0x0010 (0x0010 - 0x0000)
struct ReplicationGraphDebugActor_ServerSetCullDistanceForClass final
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CullDistance;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_195F[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ReplicationGraphDebugActor_ServerSetCullDistanceForClass) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ServerSetCullDistanceForClass");
static_assert(sizeof(ReplicationGraphDebugActor_ServerSetCullDistanceForClass) == 0x000010, "Wrong size on ReplicationGraphDebugActor_ServerSetCullDistanceForClass");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetCullDistanceForClass, Param_Class) == 0x000000, "Member 'ReplicationGraphDebugActor_ServerSetCullDistanceForClass::Param_Class' has a wrong offset!");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetCullDistanceForClass, CullDistance) == 0x000008, "Member 'ReplicationGraphDebugActor_ServerSetCullDistanceForClass::CullDistance' has a wrong offset!");

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// 0x0010 (0x0010 - 0x0000)
struct ReplicationGraphDebugActor_ServerSetPeriodFrameForClass final
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PeriodFrame;                                       // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1960[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ReplicationGraphDebugActor_ServerSetPeriodFrameForClass) == 0x000008, "Wrong alignment on ReplicationGraphDebugActor_ServerSetPeriodFrameForClass");
static_assert(sizeof(ReplicationGraphDebugActor_ServerSetPeriodFrameForClass) == 0x000010, "Wrong size on ReplicationGraphDebugActor_ServerSetPeriodFrameForClass");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetPeriodFrameForClass, Param_Class) == 0x000000, "Member 'ReplicationGraphDebugActor_ServerSetPeriodFrameForClass::Param_Class' has a wrong offset!");
static_assert(offsetof(ReplicationGraphDebugActor_ServerSetPeriodFrameForClass, PeriodFrame) == 0x000008, "Member 'ReplicationGraphDebugActor_ServerSetPeriodFrameForClass::PeriodFrame' has a wrong offset!");

}

