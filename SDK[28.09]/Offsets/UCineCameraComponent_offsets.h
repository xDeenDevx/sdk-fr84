namespace offsets
{
	namespace UCineCameraComponent
	{
			constexpr auto FilmbackSettings = 0x930; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto Filmback = 0x93c; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto LensSettings = 0x948; // Size: 24, Type: struct FCameraLensSettings
			constexpr auto FocusSettings = 0x960; // Size: 88, Type: struct FCameraFocusSettings
			constexpr auto CurrentFocalLength = 0x9b8; // Size: 4, Type: float
			constexpr auto CurrentAperture = 0x9bc; // Size: 4, Type: float
			constexpr auto CurrentFocusDistance = 0x9c0; // Size: 4, Type: float
			constexpr auto FilmbackPresets = 0x9d0; // Size: 16, Type: struct TArray<struct FNamedFilmbackPreset>
			constexpr auto LensPresets = 0x9e0; // Size: 16, Type: struct TArray<struct FNamedLensPreset>
			constexpr auto DefaultFilmbackPresetName = 0x9f0; // Size: 16, Type: struct FString
			constexpr auto DefaultFilmbackPreset = 0xa00; // Size: 16, Type: struct FString
			constexpr auto DefaultLensPresetName = 0xa10; // Size: 16, Type: struct FString
			constexpr auto DefaultLensFocalLength = 0xa20; // Size: 4, Type: float
			constexpr auto DefaultLensFStop = 0xa24; // Size: 4, Type: float
	}
} 
