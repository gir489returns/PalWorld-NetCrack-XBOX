#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WwiseObjectUtils

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct WwiseObjectUtils.AkUInt64Wrapper
// 0x0008 (0x0008 - 0x0000)
struct FAkUInt64Wrapper
{
public:
	uint64                                        UInt64Value;                                       // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAkUInt64Wrapper) == 0x000008, "Wrong alignment on FAkUInt64Wrapper");
static_assert(sizeof(FAkUInt64Wrapper) == 0x000008, "Wrong size on FAkUInt64Wrapper");
static_assert(offsetof(FAkUInt64Wrapper, UInt64Value) == 0x000000, "Member 'FAkUInt64Wrapper::UInt64Value' has a wrong offset!");

// ScriptStruct WwiseObjectUtils.AkUInt32Wrapper
// 0x0004 (0x0004 - 0x0000)
struct FAkUInt32Wrapper
{
public:
	uint32                                        UInt32Value;                                       // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAkUInt32Wrapper) == 0x000004, "Wrong alignment on FAkUInt32Wrapper");
static_assert(sizeof(FAkUInt32Wrapper) == 0x000004, "Wrong size on FAkUInt32Wrapper");
static_assert(offsetof(FAkUInt32Wrapper, UInt32Value) == 0x000000, "Member 'FAkUInt32Wrapper::UInt32Value' has a wrong offset!");

// ScriptStruct WwiseObjectUtils.AkOutputDeviceID
// 0x0000 (0x0008 - 0x0008)
struct FAkOutputDeviceID final : public FAkUInt64Wrapper
{
};
static_assert(alignof(FAkOutputDeviceID) == 0x000008, "Wrong alignment on FAkOutputDeviceID");
static_assert(sizeof(FAkOutputDeviceID) == 0x000008, "Wrong size on FAkOutputDeviceID");

// ScriptStruct WwiseObjectUtils.AkUniqueID
// 0x0000 (0x0004 - 0x0004)
struct FAkUniqueID final : public FAkUInt32Wrapper
{
};
static_assert(alignof(FAkUniqueID) == 0x000004, "Wrong alignment on FAkUniqueID");
static_assert(sizeof(FAkUniqueID) == 0x000004, "Wrong size on FAkUniqueID");

}
