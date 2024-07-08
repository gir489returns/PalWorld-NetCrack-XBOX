#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteamSockets

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class SteamSockets.SteamSocketsNetConnection
// 0x0010 (0x3320 - 0x3310)
class USteamSocketsNetConnection final : public UNetConnection
{
public:
	uint8                                         Pad_3308[0x18];                                    // 0x3308(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamSocketsNetConnection">();
	}
	static class USteamSocketsNetConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamSocketsNetConnection>();
	}
};
static_assert(alignof(USteamSocketsNetConnection) == 0x000010, "Wrong alignment on USteamSocketsNetConnection");
static_assert(sizeof(USteamSocketsNetConnection) == 0x003320, "Wrong size on USteamSocketsNetConnection");

// Class SteamSockets.SteamSocketsNetDriver
// 0x0010 (0x07A0 - 0x0790)
class USteamSocketsNetDriver final : public UNetDriver
{
public:
	uint8                                         Pad_790[0x10];                                     // 0x0790(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamSocketsNetDriver">();
	}
	static class USteamSocketsNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamSocketsNetDriver>();
	}
};
static_assert(alignof(USteamSocketsNetDriver) == 0x000008, "Wrong alignment on USteamSocketsNetDriver");
static_assert(sizeof(USteamSocketsNetDriver) == 0x0007A0, "Wrong size on USteamSocketsNetDriver");

}

