namespace offsets
{
	namespace UMovieScene3DTransformSection
	{
			constexpr auto TransformMask = 0xe0; // Size: 4, Type: struct FMovieSceneTransformMask
			constexpr auto Translation[3] = 0xe8; // Size: 480, Type: struct FMovieSceneFloatChannel
			constexpr auto Rotation[3] = 0x2c8; // Size: 480, Type: struct FMovieSceneFloatChannel
			constexpr auto Scale[3] = 0x4a8; // Size: 480, Type: struct FMovieSceneFloatChannel
			constexpr auto ManualWeight = 0x688; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto bUseQuaternionInterpolation = 0x72c; // Size: 1, Type: bool
	}
} 
