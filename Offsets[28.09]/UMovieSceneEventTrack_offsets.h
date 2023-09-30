namespace offsets
{
	namespace UMovieSceneEventTrack
	{
			constexpr auto bFireEventsWhenForwards = 0x58; // Size: 1, Type: char
			constexpr auto bFireEventsWhenBackwards = 0x58; // Size: 1, Type: char
			constexpr auto EventPosition = 0x5c; // Size: 1, Type: enum class EFireEventsAtPosition
			constexpr auto EventReceivers = 0x60; // Size: 16, Type: struct TArray<struct FMovieSceneObjectBindingID>
			constexpr auto Sections = 0x70; // Size: 16, Type: struct TArray<struct UMovieSceneSection*>
	}
} 
