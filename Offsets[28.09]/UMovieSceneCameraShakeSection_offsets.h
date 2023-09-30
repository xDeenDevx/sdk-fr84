namespace offsets
{
	namespace UMovieSceneCameraShakeSection
	{
			constexpr auto ShakeData = 0xe0; // Size: 32, Type: struct FMovieSceneCameraShakeSectionData
			constexpr auto ShakeClass = 0x100; // Size: 8, Type: UCameraShake*
			constexpr auto PlayScale = 0x108; // Size: 4, Type: float
			constexpr auto PlaySpace = 0x10c; // Size: 1, Type: enum class ECameraAnimPlaySpace
			constexpr auto UserDefinedPlaySpace = 0x110; // Size: 12, Type: struct FRotator
	}
} 
