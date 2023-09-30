namespace offsets
{
	namespace UMovieSceneSubSection
	{
			constexpr auto Parameters = 0xe0; // Size: 36, Type: struct FMovieSceneSectionParameters
			constexpr auto StartOffset = 0x104; // Size: 4, Type: float
			constexpr auto TimeScale = 0x108; // Size: 4, Type: float
			constexpr auto PrerollTime = 0x10c; // Size: 4, Type: float
			constexpr auto SubSequence = 0x110; // Size: 8, Type: struct UMovieSceneSequence*
			constexpr auto ActorToRecord = 0x118; // Size: 28, Type: 
			constexpr auto TargetSequenceName = 0x138; // Size: 16, Type: struct FString
			constexpr auto TargetPathToRecordTo = 0x148; // Size: 16, Type: struct FDirectoryPath
	}
} 
