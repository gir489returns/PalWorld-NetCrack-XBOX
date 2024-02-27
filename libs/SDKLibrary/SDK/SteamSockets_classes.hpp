#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3320 - 0x3308)
// Class SteamSockets.SteamSocketsNetConnection
class USteamSocketsNetConnection : public UNetConnection
{
public:
	uint8                                        Pad_F34[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamSocketsNetConnection* GetDefaultObj();

};

// 0x10 (0x7A0 - 0x790)
// Class SteamSockets.SteamSocketsNetDriver
class USteamSocketsNetDriver : public UNetDriver
{
public:
	uint8                                        Pad_F35[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamSocketsNetDriver* GetDefaultObj();

};

}


