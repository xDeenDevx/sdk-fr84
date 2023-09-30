namespace offsets
{
	namespace UMovieSceneSkeletalAnimationSection
	{
			constexpr auto Params = 0xe0; // Size: 216, Type: struct FMovieSceneSkeletalAnimationParams
			constexpr auto AnimSequence = 0x1b8; // Size: 8, Type: struct UAnimSequence*
			constexpr auto Animation = 0x1c0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto StartOffset = 0x1c8; // Size: 4, Type: float
			constexpr auto EndOffset = 0x1cc; // Size: 4, Type: float
			constexpr auto PlayRate = 0x1d0; // Size: 4, Type: float
			constexpr auto bReverse = 0x1d4; // Size: 1, Type: char
			constexpr auto SlotName = 0x1d8; // Size: 8, Type: struct FName
	}
} 
