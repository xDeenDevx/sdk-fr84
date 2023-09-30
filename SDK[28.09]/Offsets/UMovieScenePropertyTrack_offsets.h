namespace offsets
{
	namespace UMovieScenePropertyTrack
	{
			constexpr auto SectionToKey = 0x58; // Size: 8, Type: struct UMovieSceneSection*
			constexpr auto PropertyName = 0x60; // Size: 8, Type: struct FName
			constexpr auto PropertyPath = 0x68; // Size: 16, Type: struct FString
			constexpr auto Sections = 0x78; // Size: 16, Type: struct TArray<struct UMovieSceneSection*>
	}
} 
