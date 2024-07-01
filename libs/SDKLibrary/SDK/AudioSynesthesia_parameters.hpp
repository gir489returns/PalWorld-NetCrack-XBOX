#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioSynesthesia

#include "Basic.hpp"


namespace SDK::Params
{

// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
// 0x0018 (0x0018 - 0x0000)
struct ConstantQNRT_GetChannelConstantQAtTime final
{
public:
	float                                         InSeconds;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InChannel;                                         // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 OutConstantQ;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConstantQNRT_GetChannelConstantQAtTime) == 0x000008, "Wrong alignment on ConstantQNRT_GetChannelConstantQAtTime");
static_assert(sizeof(ConstantQNRT_GetChannelConstantQAtTime) == 0x000018, "Wrong size on ConstantQNRT_GetChannelConstantQAtTime");
static_assert(offsetof(ConstantQNRT_GetChannelConstantQAtTime, InSeconds) == 0x000000, "Member 'ConstantQNRT_GetChannelConstantQAtTime::InSeconds' has a wrong offset!");
static_assert(offsetof(ConstantQNRT_GetChannelConstantQAtTime, InChannel) == 0x000004, "Member 'ConstantQNRT_GetChannelConstantQAtTime::InChannel' has a wrong offset!");
static_assert(offsetof(ConstantQNRT_GetChannelConstantQAtTime, OutConstantQ) == 0x000008, "Member 'ConstantQNRT_GetChannelConstantQAtTime::OutConstantQ' has a wrong offset!");

// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
// 0x0018 (0x0018 - 0x0000)
struct ConstantQNRT_GetNormalizedChannelConstantQAtTime final
{
public:
	float                                         InSeconds;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InChannel;                                         // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 OutConstantQ;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConstantQNRT_GetNormalizedChannelConstantQAtTime) == 0x000008, "Wrong alignment on ConstantQNRT_GetNormalizedChannelConstantQAtTime");
static_assert(sizeof(ConstantQNRT_GetNormalizedChannelConstantQAtTime) == 0x000018, "Wrong size on ConstantQNRT_GetNormalizedChannelConstantQAtTime");
static_assert(offsetof(ConstantQNRT_GetNormalizedChannelConstantQAtTime, InSeconds) == 0x000000, "Member 'ConstantQNRT_GetNormalizedChannelConstantQAtTime::InSeconds' has a wrong offset!");
static_assert(offsetof(ConstantQNRT_GetNormalizedChannelConstantQAtTime, InChannel) == 0x000004, "Member 'ConstantQNRT_GetNormalizedChannelConstantQAtTime::InChannel' has a wrong offset!");
static_assert(offsetof(ConstantQNRT_GetNormalizedChannelConstantQAtTime, OutConstantQ) == 0x000008, "Member 'ConstantQNRT_GetNormalizedChannelConstantQAtTime::OutConstantQ' has a wrong offset!");

// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
// 0x0018 (0x0018 - 0x0000)
struct SynesthesiaSpectrumAnalyzer_GetCenterFrequencies final
{
public:
	float                                         InSampleRate;                                      // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24C0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 OutCenterFrequencies;                              // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SynesthesiaSpectrumAnalyzer_GetCenterFrequencies) == 0x000008, "Wrong alignment on SynesthesiaSpectrumAnalyzer_GetCenterFrequencies");
static_assert(sizeof(SynesthesiaSpectrumAnalyzer_GetCenterFrequencies) == 0x000018, "Wrong size on SynesthesiaSpectrumAnalyzer_GetCenterFrequencies");
static_assert(offsetof(SynesthesiaSpectrumAnalyzer_GetCenterFrequencies, InSampleRate) == 0x000000, "Member 'SynesthesiaSpectrumAnalyzer_GetCenterFrequencies::InSampleRate' has a wrong offset!");
static_assert(offsetof(SynesthesiaSpectrumAnalyzer_GetCenterFrequencies, OutCenterFrequencies) == 0x000008, "Member 'SynesthesiaSpectrumAnalyzer_GetCenterFrequencies::OutCenterFrequencies' has a wrong offset!");

// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
// 0x0004 (0x0004 - 0x0000)
struct SynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies) == 0x000004, "Wrong alignment on SynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies");
static_assert(sizeof(SynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies) == 0x000004, "Wrong size on SynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies");
static_assert(offsetof(SynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies, ReturnValue) == 0x000000, "Member 'SynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies::ReturnValue' has a wrong offset!");

// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
// 0x000C (0x000C - 0x0000)
struct LoudnessNRT_GetChannelLoudnessAtTime final
{
public:
	float                                         InSeconds;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InChannel;                                         // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutLoudness;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LoudnessNRT_GetChannelLoudnessAtTime) == 0x000004, "Wrong alignment on LoudnessNRT_GetChannelLoudnessAtTime");
static_assert(sizeof(LoudnessNRT_GetChannelLoudnessAtTime) == 0x00000C, "Wrong size on LoudnessNRT_GetChannelLoudnessAtTime");
static_assert(offsetof(LoudnessNRT_GetChannelLoudnessAtTime, InSeconds) == 0x000000, "Member 'LoudnessNRT_GetChannelLoudnessAtTime::InSeconds' has a wrong offset!");
static_assert(offsetof(LoudnessNRT_GetChannelLoudnessAtTime, InChannel) == 0x000004, "Member 'LoudnessNRT_GetChannelLoudnessAtTime::InChannel' has a wrong offset!");
static_assert(offsetof(LoudnessNRT_GetChannelLoudnessAtTime, OutLoudness) == 0x000008, "Member 'LoudnessNRT_GetChannelLoudnessAtTime::OutLoudness' has a wrong offset!");

// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
// 0x0008 (0x0008 - 0x0000)
struct LoudnessNRT_GetLoudnessAtTime final
{
public:
	float                                         InSeconds;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutLoudness;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LoudnessNRT_GetLoudnessAtTime) == 0x000004, "Wrong alignment on LoudnessNRT_GetLoudnessAtTime");
static_assert(sizeof(LoudnessNRT_GetLoudnessAtTime) == 0x000008, "Wrong size on LoudnessNRT_GetLoudnessAtTime");
static_assert(offsetof(LoudnessNRT_GetLoudnessAtTime, InSeconds) == 0x000000, "Member 'LoudnessNRT_GetLoudnessAtTime::InSeconds' has a wrong offset!");
static_assert(offsetof(LoudnessNRT_GetLoudnessAtTime, OutLoudness) == 0x000004, "Member 'LoudnessNRT_GetLoudnessAtTime::OutLoudness' has a wrong offset!");

// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
// 0x000C (0x000C - 0x0000)
struct LoudnessNRT_GetNormalizedChannelLoudnessAtTime final
{
public:
	float                                         InSeconds;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InChannel;                                         // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutLoudness;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LoudnessNRT_GetNormalizedChannelLoudnessAtTime) == 0x000004, "Wrong alignment on LoudnessNRT_GetNormalizedChannelLoudnessAtTime");
static_assert(sizeof(LoudnessNRT_GetNormalizedChannelLoudnessAtTime) == 0x00000C, "Wrong size on LoudnessNRT_GetNormalizedChannelLoudnessAtTime");
static_assert(offsetof(LoudnessNRT_GetNormalizedChannelLoudnessAtTime, InSeconds) == 0x000000, "Member 'LoudnessNRT_GetNormalizedChannelLoudnessAtTime::InSeconds' has a wrong offset!");
static_assert(offsetof(LoudnessNRT_GetNormalizedChannelLoudnessAtTime, InChannel) == 0x000004, "Member 'LoudnessNRT_GetNormalizedChannelLoudnessAtTime::InChannel' has a wrong offset!");
static_assert(offsetof(LoudnessNRT_GetNormalizedChannelLoudnessAtTime, OutLoudness) == 0x000008, "Member 'LoudnessNRT_GetNormalizedChannelLoudnessAtTime::OutLoudness' has a wrong offset!");

// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
// 0x0008 (0x0008 - 0x0000)
struct LoudnessNRT_GetNormalizedLoudnessAtTime final
{
public:
	float                                         InSeconds;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutLoudness;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LoudnessNRT_GetNormalizedLoudnessAtTime) == 0x000004, "Wrong alignment on LoudnessNRT_GetNormalizedLoudnessAtTime");
static_assert(sizeof(LoudnessNRT_GetNormalizedLoudnessAtTime) == 0x000008, "Wrong size on LoudnessNRT_GetNormalizedLoudnessAtTime");
static_assert(offsetof(LoudnessNRT_GetNormalizedLoudnessAtTime, InSeconds) == 0x000000, "Member 'LoudnessNRT_GetNormalizedLoudnessAtTime::InSeconds' has a wrong offset!");
static_assert(offsetof(LoudnessNRT_GetNormalizedLoudnessAtTime, OutLoudness) == 0x000004, "Member 'LoudnessNRT_GetNormalizedLoudnessAtTime::OutLoudness' has a wrong offset!");

// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
// 0x0030 (0x0030 - 0x0000)
struct OnsetNRT_GetChannelOnsetsBetweenTimes final
{
public:
	float                                         InStartSeconds;                                    // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InEndSeconds;                                      // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InChannel;                                         // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24CB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 OutOnsetTimestamps;                                // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 OutOnsetStrengths;                                 // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(OnsetNRT_GetChannelOnsetsBetweenTimes) == 0x000008, "Wrong alignment on OnsetNRT_GetChannelOnsetsBetweenTimes");
static_assert(sizeof(OnsetNRT_GetChannelOnsetsBetweenTimes) == 0x000030, "Wrong size on OnsetNRT_GetChannelOnsetsBetweenTimes");
static_assert(offsetof(OnsetNRT_GetChannelOnsetsBetweenTimes, InStartSeconds) == 0x000000, "Member 'OnsetNRT_GetChannelOnsetsBetweenTimes::InStartSeconds' has a wrong offset!");
static_assert(offsetof(OnsetNRT_GetChannelOnsetsBetweenTimes, InEndSeconds) == 0x000004, "Member 'OnsetNRT_GetChannelOnsetsBetweenTimes::InEndSeconds' has a wrong offset!");
static_assert(offsetof(OnsetNRT_GetChannelOnsetsBetweenTimes, InChannel) == 0x000008, "Member 'OnsetNRT_GetChannelOnsetsBetweenTimes::InChannel' has a wrong offset!");
static_assert(offsetof(OnsetNRT_GetChannelOnsetsBetweenTimes, OutOnsetTimestamps) == 0x000010, "Member 'OnsetNRT_GetChannelOnsetsBetweenTimes::OutOnsetTimestamps' has a wrong offset!");
static_assert(offsetof(OnsetNRT_GetChannelOnsetsBetweenTimes, OutOnsetStrengths) == 0x000020, "Member 'OnsetNRT_GetChannelOnsetsBetweenTimes::OutOnsetStrengths' has a wrong offset!");

// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
// 0x0030 (0x0030 - 0x0000)
struct OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes final
{
public:
	float                                         InStartSeconds;                                    // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InEndSeconds;                                      // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InChannel;                                         // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24CC[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 OutOnsetTimestamps;                                // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 OutOnsetStrengths;                                 // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes) == 0x000008, "Wrong alignment on OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes");
static_assert(sizeof(OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes) == 0x000030, "Wrong size on OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes");
static_assert(offsetof(OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes, InStartSeconds) == 0x000000, "Member 'OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes::InStartSeconds' has a wrong offset!");
static_assert(offsetof(OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes, InEndSeconds) == 0x000004, "Member 'OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes::InEndSeconds' has a wrong offset!");
static_assert(offsetof(OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes, InChannel) == 0x000008, "Member 'OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes::InChannel' has a wrong offset!");
static_assert(offsetof(OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes, OutOnsetTimestamps) == 0x000010, "Member 'OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes::OutOnsetTimestamps' has a wrong offset!");
static_assert(offsetof(OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes, OutOnsetStrengths) == 0x000020, "Member 'OnsetNRT_GetNormalizedChannelOnsetsBetweenTimes::OutOnsetStrengths' has a wrong offset!");

}

