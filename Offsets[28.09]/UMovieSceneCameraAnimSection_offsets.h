namespace offsets
{
	namespace UMovieSceneCameraAnimSection
	{
			constexpr auto AnimData = 0xe0; // Size: 32, Type: struct FMovieSceneCameraAnimSectionData
			constexpr auto CameraAnim = 0x100; // Size: 8, Type: struct UCameraAnim*
			constexpr auto PlayRate = 0x108; // Size: 4, Type: float
			constexpr auto PlayScale = 0x10c; // Size: 4, Type: float
			constexpr auto BlendInTime = 0x110; // Size: 4, Type: float
			constexpr auto BlendOutTime = 0x114; // Size: 4, Type: float
			constexpr auto bLooping = 0x118; // Size: 1, Type: bool
	}
} 
