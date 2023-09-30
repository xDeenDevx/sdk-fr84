/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MediaCompositing.

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{ 
public:
	UMediaSource*                                      MediaSource;                                                // 0x00E0   (0x0008)  
	bool                                               bLoop;                                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MediaCompositing.MovieSceneMediaSection
/// Size: 0x0030 (0x0000E0 - 0x000110)
class UMovieSceneMediaSection : public UMovieSceneSection
{ 
public:
	UMediaSource*                                      MediaSource;                                                // 0x00E0   (0x0008)  
	bool                                               bLooping;                                                   // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x00EC   (0x0004)  
	UMediaTexture*                                     MediaTexture;                                               // 0x00F0   (0x0008)  
	UMediaSoundComponent*                              MediaSoundComponent;                                        // 0x00F8   (0x0008)  
	bool                                               bUseExternalMediaPlayer;                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0101   (0x0007)  MISSED
	UMediaPlayer*                                      ExternalMediaPlayer;                                        // 0x0108   (0x0008)  
};

/// Class /Script/MediaCompositing.MovieSceneMediaTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        MediaSections;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
/// Size: 0x0010 (0x000048 - 0x000058)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	UMediaSource*                                      MediaSource;                                                // 0x0048   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0050   (0x0004)  
	bool                                               bLoop;                                                      // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneMediaSectionParams                      Params;                                                     // 0x0020   (0x0030)  
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionParams
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneMediaSectionParams
{ 
	UMediaSoundComponent*                              MediaSoundComponent;                                        // 0x0000   (0x0008)  
	UMediaSource*                                      MediaSource;                                                // 0x0008   (0x0008)  
	UMediaTexture*                                     MediaTexture;                                               // 0x0010   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0018   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0020   (0x0004)  
	FFrameNumber                                       SectionEndFrame;                                            // 0x0024   (0x0004)  
	bool                                               bLooping;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x002C   (0x0004)  
};

