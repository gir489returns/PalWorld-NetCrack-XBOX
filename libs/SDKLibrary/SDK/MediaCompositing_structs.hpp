#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaCompositing

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// 0x0010 (0x0048 - 0x0038)
struct FMovieSceneMediaPlayerPropertySectionTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                           SectionStartFrame;                                 // 0x0040(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bLoop;                                             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneMediaPlayerPropertySectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneMediaPlayerPropertySectionTemplate");
static_assert(sizeof(FMovieSceneMediaPlayerPropertySectionTemplate) == 0x000048, "Wrong size on FMovieSceneMediaPlayerPropertySectionTemplate");
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, MediaSource) == 0x000038, "Member 'FMovieSceneMediaPlayerPropertySectionTemplate::MediaSource' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, SectionStartFrame) == 0x000040, "Member 'FMovieSceneMediaPlayerPropertySectionTemplate::SectionStartFrame' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaPlayerPropertySectionTemplate, bLoop) == 0x000044, "Member 'FMovieSceneMediaPlayerPropertySectionTemplate::bLoop' has a wrong offset!");

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0030 (0x0030 - 0x0000)
struct FMovieSceneMediaSectionParams final
{
public:
	class UMediaSoundComponent*                   MediaSoundComponent;                               // 0x0000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                           MediaSource;                                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaTexture*                          MediaTexture;                                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           SectionStartFrame;                                 // 0x0020(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           SectionEndFrame;                                   // 0x0024(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLooping;                                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameNumber                           StartFrameOffset;                                  // 0x002C(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneMediaSectionParams) == 0x000008, "Wrong alignment on FMovieSceneMediaSectionParams");
static_assert(sizeof(FMovieSceneMediaSectionParams) == 0x000030, "Wrong size on FMovieSceneMediaSectionParams");
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaSoundComponent) == 0x000000, "Member 'FMovieSceneMediaSectionParams::MediaSoundComponent' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaSource) == 0x000008, "Member 'FMovieSceneMediaSectionParams::MediaSource' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaTexture) == 0x000010, "Member 'FMovieSceneMediaSectionParams::MediaTexture' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaSectionParams, MediaPlayer) == 0x000018, "Member 'FMovieSceneMediaSectionParams::MediaPlayer' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaSectionParams, SectionStartFrame) == 0x000020, "Member 'FMovieSceneMediaSectionParams::SectionStartFrame' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaSectionParams, SectionEndFrame) == 0x000024, "Member 'FMovieSceneMediaSectionParams::SectionEndFrame' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaSectionParams, bLooping) == 0x000028, "Member 'FMovieSceneMediaSectionParams::bLooping' has a wrong offset!");
static_assert(offsetof(FMovieSceneMediaSectionParams, StartFrameOffset) == 0x00002C, "Member 'FMovieSceneMediaSectionParams::StartFrameOffset' has a wrong offset!");

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneMediaSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneMediaSectionParams          Params;                                            // 0x0020(0x0030)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneMediaSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneMediaSectionTemplate");
static_assert(sizeof(FMovieSceneMediaSectionTemplate) == 0x000050, "Wrong size on FMovieSceneMediaSectionTemplate");
static_assert(offsetof(FMovieSceneMediaSectionTemplate, Params) == 0x000020, "Member 'FMovieSceneMediaSectionTemplate::Params' has a wrong offset!");

}

