#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xD0 - 0x0)
// ScriptStruct DataflowCore.DataflowNode
struct FDataflowNode
{
public:
	uint8                                        Pad_1620[0xC8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bActive;                                           // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1621[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DataflowCore.DataflowConnection
struct FDataflowConnection
{
public:
	uint8                                        Pad_1622[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct DataflowCore.DataflowInput
struct FDataflowInput : public FDataflowConnection
{
public:
	uint8                                        Pad_1623[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x68 - 0x40)
// ScriptStruct DataflowCore.DataflowOutput
struct FDataflowOutput : public FDataflowConnection
{
public:
	uint8                                        Pad_1624[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


