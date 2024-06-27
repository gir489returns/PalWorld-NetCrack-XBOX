#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneCapture

#include "Basic.hpp"

#include "MovieSceneCapture_structs.hpp"


namespace SDK::Params
{

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneCaptureProtocolBase_GetState final
{
public:
	EMovieSceneCaptureProtocolState               ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCaptureProtocolBase_GetState) == 0x000001, "Wrong alignment on MovieSceneCaptureProtocolBase_GetState");
static_assert(sizeof(MovieSceneCaptureProtocolBase_GetState) == 0x000001, "Wrong size on MovieSceneCaptureProtocolBase_GetState");
static_assert(offsetof(MovieSceneCaptureProtocolBase_GetState, ReturnValue) == 0x000000, "Member 'MovieSceneCaptureProtocolBase_GetState::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneCaptureProtocolBase_IsCapturing final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCaptureProtocolBase_IsCapturing) == 0x000001, "Wrong alignment on MovieSceneCaptureProtocolBase_IsCapturing");
static_assert(sizeof(MovieSceneCaptureProtocolBase_IsCapturing) == 0x000001, "Wrong size on MovieSceneCaptureProtocolBase_IsCapturing");
static_assert(offsetof(MovieSceneCaptureProtocolBase_IsCapturing, ReturnValue) == 0x000000, "Member 'MovieSceneCaptureProtocolBase_IsCapturing::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCapture_GetAudioCaptureProtocol final
{
public:
	class UMovieSceneCaptureProtocolBase*         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCapture_GetAudioCaptureProtocol) == 0x000008, "Wrong alignment on MovieSceneCapture_GetAudioCaptureProtocol");
static_assert(sizeof(MovieSceneCapture_GetAudioCaptureProtocol) == 0x000008, "Wrong size on MovieSceneCapture_GetAudioCaptureProtocol");
static_assert(offsetof(MovieSceneCapture_GetAudioCaptureProtocol, ReturnValue) == 0x000000, "Member 'MovieSceneCapture_GetAudioCaptureProtocol::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCapture_GetImageCaptureProtocol final
{
public:
	class UMovieSceneCaptureProtocolBase*         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCapture_GetImageCaptureProtocol) == 0x000008, "Wrong alignment on MovieSceneCapture_GetImageCaptureProtocol");
static_assert(sizeof(MovieSceneCapture_GetImageCaptureProtocol) == 0x000008, "Wrong size on MovieSceneCapture_GetImageCaptureProtocol");
static_assert(offsetof(MovieSceneCapture_GetImageCaptureProtocol, ReturnValue) == 0x000000, "Member 'MovieSceneCapture_GetImageCaptureProtocol::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCapture_SetAudioCaptureProtocolType final
{
public:
	TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCapture_SetAudioCaptureProtocolType) == 0x000008, "Wrong alignment on MovieSceneCapture_SetAudioCaptureProtocolType");
static_assert(sizeof(MovieSceneCapture_SetAudioCaptureProtocolType) == 0x000008, "Wrong size on MovieSceneCapture_SetAudioCaptureProtocolType");
static_assert(offsetof(MovieSceneCapture_SetAudioCaptureProtocolType, ProtocolType) == 0x000000, "Member 'MovieSceneCapture_SetAudioCaptureProtocolType::ProtocolType' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCapture_SetImageCaptureProtocolType final
{
public:
	TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCapture_SetImageCaptureProtocolType) == 0x000008, "Wrong alignment on MovieSceneCapture_SetImageCaptureProtocolType");
static_assert(sizeof(MovieSceneCapture_SetImageCaptureProtocolType) == 0x000008, "Wrong size on MovieSceneCapture_SetImageCaptureProtocolType");
static_assert(offsetof(MovieSceneCapture_SetImageCaptureProtocolType, ProtocolType) == 0x000000, "Member 'MovieSceneCapture_SetImageCaptureProtocolType::ProtocolType' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCaptureEnvironment_FindAudioCaptureProtocol final
{
public:
	class UMovieSceneAudioCaptureProtocolBase*    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCaptureEnvironment_FindAudioCaptureProtocol) == 0x000008, "Wrong alignment on MovieSceneCaptureEnvironment_FindAudioCaptureProtocol");
static_assert(sizeof(MovieSceneCaptureEnvironment_FindAudioCaptureProtocol) == 0x000008, "Wrong size on MovieSceneCaptureEnvironment_FindAudioCaptureProtocol");
static_assert(offsetof(MovieSceneCaptureEnvironment_FindAudioCaptureProtocol, ReturnValue) == 0x000000, "Member 'MovieSceneCaptureEnvironment_FindAudioCaptureProtocol::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCaptureEnvironment_FindImageCaptureProtocol final
{
public:
	class UMovieSceneImageCaptureProtocolBase*    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCaptureEnvironment_FindImageCaptureProtocol) == 0x000008, "Wrong alignment on MovieSceneCaptureEnvironment_FindImageCaptureProtocol");
static_assert(sizeof(MovieSceneCaptureEnvironment_FindImageCaptureProtocol) == 0x000008, "Wrong size on MovieSceneCaptureEnvironment_FindImageCaptureProtocol");
static_assert(offsetof(MovieSceneCaptureEnvironment_FindImageCaptureProtocol, ReturnValue) == 0x000000, "Member 'MovieSceneCaptureEnvironment_FindImageCaptureProtocol::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneCaptureEnvironment_GetCaptureElapsedTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCaptureEnvironment_GetCaptureElapsedTime) == 0x000004, "Wrong alignment on MovieSceneCaptureEnvironment_GetCaptureElapsedTime");
static_assert(sizeof(MovieSceneCaptureEnvironment_GetCaptureElapsedTime) == 0x000004, "Wrong size on MovieSceneCaptureEnvironment_GetCaptureElapsedTime");
static_assert(offsetof(MovieSceneCaptureEnvironment_GetCaptureElapsedTime, ReturnValue) == 0x000000, "Member 'MovieSceneCaptureEnvironment_GetCaptureElapsedTime::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneCaptureEnvironment_GetCaptureFrameNumber final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCaptureEnvironment_GetCaptureFrameNumber) == 0x000004, "Wrong alignment on MovieSceneCaptureEnvironment_GetCaptureFrameNumber");
static_assert(sizeof(MovieSceneCaptureEnvironment_GetCaptureFrameNumber) == 0x000004, "Wrong size on MovieSceneCaptureEnvironment_GetCaptureFrameNumber");
static_assert(offsetof(MovieSceneCaptureEnvironment_GetCaptureFrameNumber, ReturnValue) == 0x000000, "Member 'MovieSceneCaptureEnvironment_GetCaptureFrameNumber::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneCaptureEnvironment_IsCaptureInProgress final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCaptureEnvironment_IsCaptureInProgress) == 0x000001, "Wrong alignment on MovieSceneCaptureEnvironment_IsCaptureInProgress");
static_assert(sizeof(MovieSceneCaptureEnvironment_IsCaptureInProgress) == 0x000001, "Wrong size on MovieSceneCaptureEnvironment_IsCaptureInProgress");
static_assert(offsetof(MovieSceneCaptureEnvironment_IsCaptureInProgress, ReturnValue) == 0x000000, "Member 'MovieSceneCaptureEnvironment_IsCaptureInProgress::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// 0x0070 (0x0070 - 0x0000)
struct UserDefinedCaptureProtocol_OnPixelsReceived final
{
public:
	struct FCapturedPixels                        Pixels;                                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                      ID;                                                // 0x0010(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFrameMetrics                          FrameMetrics;                                      // 0x0060(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedCaptureProtocol_OnPixelsReceived) == 0x000008, "Wrong alignment on UserDefinedCaptureProtocol_OnPixelsReceived");
static_assert(sizeof(UserDefinedCaptureProtocol_OnPixelsReceived) == 0x000070, "Wrong size on UserDefinedCaptureProtocol_OnPixelsReceived");
static_assert(offsetof(UserDefinedCaptureProtocol_OnPixelsReceived, Pixels) == 0x000000, "Member 'UserDefinedCaptureProtocol_OnPixelsReceived::Pixels' has a wrong offset!");
static_assert(offsetof(UserDefinedCaptureProtocol_OnPixelsReceived, ID) == 0x000010, "Member 'UserDefinedCaptureProtocol_OnPixelsReceived::ID' has a wrong offset!");
static_assert(offsetof(UserDefinedCaptureProtocol_OnPixelsReceived, FrameMetrics) == 0x000060, "Member 'UserDefinedCaptureProtocol_OnPixelsReceived::FrameMetrics' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// 0x0001 (0x0001 - 0x0000)
struct UserDefinedCaptureProtocol_OnSetup final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedCaptureProtocol_OnSetup) == 0x000001, "Wrong alignment on UserDefinedCaptureProtocol_OnSetup");
static_assert(sizeof(UserDefinedCaptureProtocol_OnSetup) == 0x000001, "Wrong size on UserDefinedCaptureProtocol_OnSetup");
static_assert(offsetof(UserDefinedCaptureProtocol_OnSetup, ReturnValue) == 0x000000, "Member 'UserDefinedCaptureProtocol_OnSetup::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// 0x0058 (0x0058 - 0x0000)
struct UserDefinedCaptureProtocol_ResolveBuffer final
{
public:
	class UTexture*                               Buffer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                      BufferID;                                          // 0x0008(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedCaptureProtocol_ResolveBuffer) == 0x000008, "Wrong alignment on UserDefinedCaptureProtocol_ResolveBuffer");
static_assert(sizeof(UserDefinedCaptureProtocol_ResolveBuffer) == 0x000058, "Wrong size on UserDefinedCaptureProtocol_ResolveBuffer");
static_assert(offsetof(UserDefinedCaptureProtocol_ResolveBuffer, Buffer) == 0x000000, "Member 'UserDefinedCaptureProtocol_ResolveBuffer::Buffer' has a wrong offset!");
static_assert(offsetof(UserDefinedCaptureProtocol_ResolveBuffer, BufferID) == 0x000008, "Member 'UserDefinedCaptureProtocol_ResolveBuffer::BufferID' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// 0x0050 (0x0050 - 0x0000)
struct UserDefinedCaptureProtocol_StartCapturingFinalPixels final
{
public:
	struct FCapturedPixelsID                      StreamID;                                          // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedCaptureProtocol_StartCapturingFinalPixels) == 0x000008, "Wrong alignment on UserDefinedCaptureProtocol_StartCapturingFinalPixels");
static_assert(sizeof(UserDefinedCaptureProtocol_StartCapturingFinalPixels) == 0x000050, "Wrong size on UserDefinedCaptureProtocol_StartCapturingFinalPixels");
static_assert(offsetof(UserDefinedCaptureProtocol_StartCapturingFinalPixels, StreamID) == 0x000000, "Member 'UserDefinedCaptureProtocol_StartCapturingFinalPixels::StreamID' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// 0x0020 (0x0020 - 0x0000)
struct UserDefinedCaptureProtocol_GenerateFilename final
{
public:
	struct FFrameMetrics                          InFrameMetrics;                                    // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedCaptureProtocol_GenerateFilename) == 0x000008, "Wrong alignment on UserDefinedCaptureProtocol_GenerateFilename");
static_assert(sizeof(UserDefinedCaptureProtocol_GenerateFilename) == 0x000020, "Wrong size on UserDefinedCaptureProtocol_GenerateFilename");
static_assert(offsetof(UserDefinedCaptureProtocol_GenerateFilename, InFrameMetrics) == 0x000000, "Member 'UserDefinedCaptureProtocol_GenerateFilename::InFrameMetrics' has a wrong offset!");
static_assert(offsetof(UserDefinedCaptureProtocol_GenerateFilename, ReturnValue) == 0x000010, "Member 'UserDefinedCaptureProtocol_GenerateFilename::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// 0x0010 (0x0010 - 0x0000)
struct UserDefinedCaptureProtocol_GetCurrentFrameMetrics final
{
public:
	struct FFrameMetrics                          ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedCaptureProtocol_GetCurrentFrameMetrics) == 0x000004, "Wrong alignment on UserDefinedCaptureProtocol_GetCurrentFrameMetrics");
static_assert(sizeof(UserDefinedCaptureProtocol_GetCurrentFrameMetrics) == 0x000010, "Wrong size on UserDefinedCaptureProtocol_GetCurrentFrameMetrics");
static_assert(offsetof(UserDefinedCaptureProtocol_GetCurrentFrameMetrics, ReturnValue) == 0x000000, "Member 'UserDefinedCaptureProtocol_GetCurrentFrameMetrics::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// 0x0001 (0x0001 - 0x0000)
struct UserDefinedCaptureProtocol_OnCanFinalize final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedCaptureProtocol_OnCanFinalize) == 0x000001, "Wrong alignment on UserDefinedCaptureProtocol_OnCanFinalize");
static_assert(sizeof(UserDefinedCaptureProtocol_OnCanFinalize) == 0x000001, "Wrong size on UserDefinedCaptureProtocol_OnCanFinalize");
static_assert(offsetof(UserDefinedCaptureProtocol_OnCanFinalize, ReturnValue) == 0x000000, "Member 'UserDefinedCaptureProtocol_OnCanFinalize::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// 0x0068 (0x0068 - 0x0000)
struct UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer final
{
public:
	class UTexture*                               Buffer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                      StreamID;                                          // 0x0008(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0058(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer) == 0x000008, "Wrong alignment on UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer");
static_assert(sizeof(UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer) == 0x000068, "Wrong size on UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer");
static_assert(offsetof(UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer, Buffer) == 0x000000, "Member 'UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer::Buffer' has a wrong offset!");
static_assert(offsetof(UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer, StreamID) == 0x000008, "Member 'UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer::StreamID' has a wrong offset!");
static_assert(offsetof(UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer, ReturnValue) == 0x000058, "Member 'UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// 0x0010 (0x0010 - 0x0000)
struct UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame) == 0x000008, "Wrong alignment on UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame");
static_assert(sizeof(UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame) == 0x000010, "Wrong size on UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame");
static_assert(offsetof(UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame, ReturnValue) == 0x000000, "Member 'UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame::ReturnValue' has a wrong offset!");

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// 0x0078 (0x0078 - 0x0000)
struct UserDefinedImageCaptureProtocol_WriteImageToDisk final
{
public:
	struct FCapturedPixels                        PixelData;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                      StreamID;                                          // 0x0010(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFrameMetrics                          FrameMetrics;                                      // 0x0060(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bCopyImageData;                                    // 0x0070(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3600[0x7];                                     // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(UserDefinedImageCaptureProtocol_WriteImageToDisk) == 0x000008, "Wrong alignment on UserDefinedImageCaptureProtocol_WriteImageToDisk");
static_assert(sizeof(UserDefinedImageCaptureProtocol_WriteImageToDisk) == 0x000078, "Wrong size on UserDefinedImageCaptureProtocol_WriteImageToDisk");
static_assert(offsetof(UserDefinedImageCaptureProtocol_WriteImageToDisk, PixelData) == 0x000000, "Member 'UserDefinedImageCaptureProtocol_WriteImageToDisk::PixelData' has a wrong offset!");
static_assert(offsetof(UserDefinedImageCaptureProtocol_WriteImageToDisk, StreamID) == 0x000010, "Member 'UserDefinedImageCaptureProtocol_WriteImageToDisk::StreamID' has a wrong offset!");
static_assert(offsetof(UserDefinedImageCaptureProtocol_WriteImageToDisk, FrameMetrics) == 0x000060, "Member 'UserDefinedImageCaptureProtocol_WriteImageToDisk::FrameMetrics' has a wrong offset!");
static_assert(offsetof(UserDefinedImageCaptureProtocol_WriteImageToDisk, bCopyImageData) == 0x000070, "Member 'UserDefinedImageCaptureProtocol_WriteImageToDisk::bCopyImageData' has a wrong offset!");

}

