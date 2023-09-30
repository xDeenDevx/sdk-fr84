namespace offsets
{
	namespace UMovieScene2DTransformSection
	{
			constexpr auto TransformMask = 0xe0; // Size: 4, Type: struct FMovieScene2DTransformMask
			constexpr auto Translation[2] = 0xe8; // Size: 320, Type: struct FMovieSceneFloatChannel
			constexpr auto Rotation = 0x228; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto Scale[2] = 0x2c8; // Size: 320, Type: struct FMovieSceneFloatChannel
			constexpr auto Shear[2] = 0x408; // Size: 320, Type: struct FMovieSceneFloatChannel
	}
} 
