#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UdpMessaging

#include "Basic.hpp"

#include "UdpMessaging_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class UdpMessaging.UdpMessagingSettings
// 0x0090 (0x00B8 - 0x0028)
class UUdpMessagingSettings final : public UObject
{
public:
	bool                                          EnabledByDefault;                                  // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableTransport;                                   // 0x0029(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoRepair;                                       // 0x002A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2426[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSendRate;                                       // 0x002C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        AutoRepairAttemptLimit;                            // 0x0030(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        WorkQueueSize;                                     // 0x0034(0x0002)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStopServiceWhenAppDeactivates;                    // 0x0036(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2427[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UnicastEndpoint;                                   // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MulticastEndpoint;                                 // 0x0048(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUdpMessageFormat                             MessageFormat;                                     // 0x0058(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         MulticastTimeToLive;                               // 0x0059(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2428[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         StaticEndpoints;                                   // 0x0060(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FString>                         ExcludedEndpoints;                                 // 0x0070(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          EnableTunnel;                                      // 0x0080(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2429[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TunnelUnicastEndpoint;                             // 0x0088(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TunnelMulticastEndpoint;                           // 0x0098(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         RemoteTunnelEndpoints;                             // 0x00A8(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UdpMessagingSettings">();
	}
	static class UUdpMessagingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUdpMessagingSettings>();
	}
};
static_assert(alignof(UUdpMessagingSettings) == 0x000008, "Wrong alignment on UUdpMessagingSettings");
static_assert(sizeof(UUdpMessagingSettings) == 0x0000B8, "Wrong size on UUdpMessagingSettings");
static_assert(offsetof(UUdpMessagingSettings, EnabledByDefault) == 0x000028, "Member 'UUdpMessagingSettings::EnabledByDefault' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, EnableTransport) == 0x000029, "Member 'UUdpMessagingSettings::EnableTransport' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, bAutoRepair) == 0x00002A, "Member 'UUdpMessagingSettings::bAutoRepair' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MaxSendRate) == 0x00002C, "Member 'UUdpMessagingSettings::MaxSendRate' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, AutoRepairAttemptLimit) == 0x000030, "Member 'UUdpMessagingSettings::AutoRepairAttemptLimit' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, WorkQueueSize) == 0x000034, "Member 'UUdpMessagingSettings::WorkQueueSize' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, bStopServiceWhenAppDeactivates) == 0x000036, "Member 'UUdpMessagingSettings::bStopServiceWhenAppDeactivates' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x000038, "Member 'UUdpMessagingSettings::UnicastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x000048, "Member 'UUdpMessagingSettings::MulticastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MessageFormat) == 0x000058, "Member 'UUdpMessagingSettings::MessageFormat' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MulticastTimeToLive) == 0x000059, "Member 'UUdpMessagingSettings::MulticastTimeToLive' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x000060, "Member 'UUdpMessagingSettings::StaticEndpoints' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, ExcludedEndpoints) == 0x000070, "Member 'UUdpMessagingSettings::ExcludedEndpoints' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, EnableTunnel) == 0x000080, "Member 'UUdpMessagingSettings::EnableTunnel' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x000088, "Member 'UUdpMessagingSettings::TunnelUnicastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x000098, "Member 'UUdpMessagingSettings::TunnelMulticastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x0000A8, "Member 'UUdpMessagingSettings::RemoteTunnelEndpoints' has a wrong offset!");

}

