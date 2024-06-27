#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArchVisCharacter

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ArchVisCharacter.ArchVisCharacter
// 0x0060 (0x0680 - 0x0620)
class AArchVisCharacter final : public ACharacter
{
public:
	class FString                                 LookUpAxisName;                                    // 0x0618(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LookUpAtRateAxisName;                              // 0x0628(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TurnAxisName;                                      // 0x0638(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TurnAtRateAxisName;                                // 0x0648(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MoveForwardAxisName;                               // 0x0658(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MoveRightAxisName;                                 // 0x0668(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MouseSensitivityScale_Pitch;                       // 0x0678(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MouseSensitivityScale_Yaw;                         // 0x067C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArchVisCharacter">();
	}
	static class AArchVisCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArchVisCharacter>();
	}
};
static_assert(alignof(AArchVisCharacter) == 0x000010, "Wrong alignment on AArchVisCharacter");
static_assert(sizeof(AArchVisCharacter) == 0x000680, "Wrong size on AArchVisCharacter");
static_assert(offsetof(AArchVisCharacter, LookUpAxisName) == 0x000618, "Member 'AArchVisCharacter::LookUpAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, LookUpAtRateAxisName) == 0x000628, "Member 'AArchVisCharacter::LookUpAtRateAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, TurnAxisName) == 0x000638, "Member 'AArchVisCharacter::TurnAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, TurnAtRateAxisName) == 0x000648, "Member 'AArchVisCharacter::TurnAtRateAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MoveForwardAxisName) == 0x000658, "Member 'AArchVisCharacter::MoveForwardAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MoveRightAxisName) == 0x000668, "Member 'AArchVisCharacter::MoveRightAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MouseSensitivityScale_Pitch) == 0x000678, "Member 'AArchVisCharacter::MouseSensitivityScale_Pitch' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MouseSensitivityScale_Yaw) == 0x00067C, "Member 'AArchVisCharacter::MouseSensitivityScale_Yaw' has a wrong offset!");

// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x0090 (0x0F90 - 0x0F00)
class UArchVisCharMovementComponent final : public UCharacterMovementComponent
{
public:
	struct FRotator                               RotationalAcceleration;                            // 0x0EF8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               RotationalDeceleration;                            // 0x0F10(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               MaxRotationalVelocity;                             // 0x0F28(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         MinPitch;                                          // 0x0F40(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxPitch;                                          // 0x0F44(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingFriction;                                   // 0x0F48(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingSpeed;                                      // 0x0F4C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingAcceleration;                               // 0x0F50(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_243E[0x3C];                                    // 0x0F54(0x003C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArchVisCharMovementComponent">();
	}
	static class UArchVisCharMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArchVisCharMovementComponent>();
	}
};
static_assert(alignof(UArchVisCharMovementComponent) == 0x000010, "Wrong alignment on UArchVisCharMovementComponent");
static_assert(sizeof(UArchVisCharMovementComponent) == 0x000F90, "Wrong size on UArchVisCharMovementComponent");
static_assert(offsetof(UArchVisCharMovementComponent, RotationalAcceleration) == 0x000EF8, "Member 'UArchVisCharMovementComponent::RotationalAcceleration' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, RotationalDeceleration) == 0x000F10, "Member 'UArchVisCharMovementComponent::RotationalDeceleration' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity) == 0x000F28, "Member 'UArchVisCharMovementComponent::MaxRotationalVelocity' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MinPitch) == 0x000F40, "Member 'UArchVisCharMovementComponent::MinPitch' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MaxPitch) == 0x000F44, "Member 'UArchVisCharMovementComponent::MaxPitch' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingFriction) == 0x000F48, "Member 'UArchVisCharMovementComponent::WalkingFriction' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingSpeed) == 0x000F4C, "Member 'UArchVisCharMovementComponent::WalkingSpeed' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingAcceleration) == 0x000F50, "Member 'UArchVisCharMovementComponent::WalkingAcceleration' has a wrong offset!");

}

