#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigVM

#include "Basic.hpp"

#include "RigVM_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class RigVM.RigVM
// 0x0280 (0x02A8 - 0x0028)
class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                    WorkMemoryStorageObject;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                    LiteralMemoryStorageObject;                        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                    DebugMemoryStorageObject;                          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2237[0x20];                                    // 0x0040(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMByteCode                         ByteCodeStorage;                                   // 0x0060(0x0030)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2238[0x8];                                     // 0x0090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMInstructionArray                 Instructions;                                      // 0x0098(0x0010)(Transient, NativeAccessSpecifierPrivate)
	struct FRigVMExtendedExecuteContext           Context;                                           // 0x00A8(0x0078)(Transient, Protected, NativeAccessSpecifierProtected)
	uint32                                        NumExecutions;                                     // 0x0120(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2239[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           FunctionNamesStorage;                              // 0x0128(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_223A[0x38];                                    // 0x0138(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMParameter>                Parameters;                                        // 0x0170(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                      ParametersNameMap;                                 // 0x0180(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_223B[0xB8];                                    // 0x01D0(0x00B8)(Fixing Size After Last Property [ Dumper-7 ])
	class URigVM*                                 DeferredVMToCopy;                                  // 0x0288(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_223C[0x18];                                    // 0x0290(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
	bool Execute(const class FName& InEntryName);
	bool GetParameterValueBool(const class FName& InParameterName, int32 InArrayIndex);
	double GetParameterValueDouble(const class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(const class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(const class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(const class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(const class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(const class FName& InParameterName, int32 InArrayIndex);
	struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32 InArrayIndex);
	void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32 InArrayIndex);
	void SetParameterValueDouble(const class FName& InParameterName, double InValue, int32 InArrayIndex);
	void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueInt(const class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32 InArrayIndex);

	class FString GetRigVMFunctionName(int32 InFunctionIndex) const;
	struct FRigVMStatistics GetStatistics() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVM">();
	}
	static class URigVM* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVM>();
	}
};
static_assert(alignof(URigVM) == 0x000008, "Wrong alignment on URigVM");
static_assert(sizeof(URigVM) == 0x0002A8, "Wrong size on URigVM");
static_assert(offsetof(URigVM, WorkMemoryStorageObject) == 0x000028, "Member 'URigVM::WorkMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, LiteralMemoryStorageObject) == 0x000030, "Member 'URigVM::LiteralMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, DebugMemoryStorageObject) == 0x000038, "Member 'URigVM::DebugMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, ByteCodeStorage) == 0x000060, "Member 'URigVM::ByteCodeStorage' has a wrong offset!");
static_assert(offsetof(URigVM, Instructions) == 0x000098, "Member 'URigVM::Instructions' has a wrong offset!");
static_assert(offsetof(URigVM, Context) == 0x0000A8, "Member 'URigVM::Context' has a wrong offset!");
static_assert(offsetof(URigVM, NumExecutions) == 0x000120, "Member 'URigVM::NumExecutions' has a wrong offset!");
static_assert(offsetof(URigVM, FunctionNamesStorage) == 0x000128, "Member 'URigVM::FunctionNamesStorage' has a wrong offset!");
static_assert(offsetof(URigVM, Parameters) == 0x000170, "Member 'URigVM::Parameters' has a wrong offset!");
static_assert(offsetof(URigVM, ParametersNameMap) == 0x000180, "Member 'URigVM::ParametersNameMap' has a wrong offset!");
static_assert(offsetof(URigVM, DeferredVMToCopy) == 0x000288, "Member 'URigVM::DeferredVMToCopy' has a wrong offset!");

// Class RigVM.RigVMNativized
// 0x0008 (0x02B0 - 0x02A8)
class URigVMNativized final : public URigVM
{
public:
	uint8                                         Pad_2250[0x8];                                     // 0x02A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMNativized">();
	}
	static class URigVMNativized* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMNativized>();
	}
};
static_assert(alignof(URigVMNativized) == 0x000008, "Wrong alignment on URigVMNativized");
static_assert(sizeof(URigVMNativized) == 0x0002B0, "Wrong size on URigVMNativized");

// Class RigVM.RigVMUserWorkflowOptions
// 0x0070 (0x0098 - 0x0028)
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                                Subject;                                           // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRigVMUserWorkflow                     Workflow;                                          // 0x0030(0x0058)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2251[0x10];                                    // 0x0088(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReportError(const class FString& InMessage);
	void ReportInfo(const class FString& InMessage);
	void ReportWarning(const class FString& InMessage);

	bool IsValid() const;
	bool RequiresDialog() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMUserWorkflowOptions">();
	}
	static class URigVMUserWorkflowOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMUserWorkflowOptions>();
	}
};
static_assert(alignof(URigVMUserWorkflowOptions) == 0x000008, "Wrong alignment on URigVMUserWorkflowOptions");
static_assert(sizeof(URigVMUserWorkflowOptions) == 0x000098, "Wrong size on URigVMUserWorkflowOptions");
static_assert(offsetof(URigVMUserWorkflowOptions, Subject) == 0x000028, "Member 'URigVMUserWorkflowOptions::Subject' has a wrong offset!");
static_assert(offsetof(URigVMUserWorkflowOptions, Workflow) == 0x000030, "Member 'URigVMUserWorkflowOptions::Workflow' has a wrong offset!");

// Class RigVM.RigVMMemoryStorageGeneratorClass
// 0x0040 (0x0270 - 0x0230)
class URigVMMemoryStorageGeneratorClass final : public UClass
{
public:
	uint8                                         Pad_2252[0x40];                                    // 0x0230(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemoryStorageGeneratorClass">();
	}
	static class URigVMMemoryStorageGeneratorClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMMemoryStorageGeneratorClass>();
	}
};
static_assert(alignof(URigVMMemoryStorageGeneratorClass) == 0x000008, "Wrong alignment on URigVMMemoryStorageGeneratorClass");
static_assert(sizeof(URigVMMemoryStorageGeneratorClass) == 0x000270, "Wrong size on URigVMMemoryStorageGeneratorClass");

// Class RigVM.RigVMMemoryStorage
// 0x0000 (0x0028 - 0x0028)
class URigVMMemoryStorage : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemoryStorage">();
	}
	static class URigVMMemoryStorage* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMMemoryStorage>();
	}
};
static_assert(alignof(URigVMMemoryStorage) == 0x000008, "Wrong alignment on URigVMMemoryStorage");
static_assert(sizeof(URigVMMemoryStorage) == 0x000028, "Wrong size on URigVMMemoryStorage");

}

