namespace offsets
{
	namespace UMovieSceneMediaSection
	{
			constexpr auto MediaSource = 0xe0; // Size: 8, Type: struct UMediaSource*
			constexpr auto bLooping = 0xe8; // Size: 1, Type: bool
			constexpr auto StartFrameOffset = 0xec; // Size: 4, Type: struct FFrameNumber
			constexpr auto MediaTexture = 0xf0; // Size: 8, Type: struct UMediaTexture*
			constexpr auto MediaSoundComponent = 0xf8; // Size: 8, Type: struct UMediaSoundComponent*
			constexpr auto bUseExternalMediaPlayer = 0x100; // Size: 1, Type: bool
			constexpr auto ExternalMediaPlayer = 0x108; // Size: 8, Type: struct UMediaPlayer*
	}
} 
