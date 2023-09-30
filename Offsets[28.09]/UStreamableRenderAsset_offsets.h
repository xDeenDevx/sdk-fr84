namespace offsets
{
	namespace UStreamableRenderAsset
	{
			constexpr auto ForceMipLevelsToBeResidentTimestamp = 0x28; // Size: 8, Type: double
			constexpr auto NumCinematicMipLevels = 0x30; // Size: 4, Type: int32_t
			constexpr auto StreamingIndex = 0x34; // Size: 4, Type: int32_t
			constexpr auto CachedCombinedLODBias = 0x38; // Size: 4, Type: int32_t
			constexpr auto CachedNumResidentLODs = 0x3c; // Size: 1, Type: char
			constexpr auto bCachedReadyForStreaming = 0x3d; // Size: 1, Type: char
			constexpr auto NeverStream = 0x3d; // Size: 1, Type: char
			constexpr auto bGlobalForceMipLevelsToBeResident = 0x3d; // Size: 1, Type: char
			constexpr auto bIsStreamable = 0x3d; // Size: 1, Type: char
			constexpr auto bHasStreamingUpdatePending = 0x3d; // Size: 1, Type: char
			constexpr auto bForceMiplevelsToBeResident = 0x3d; // Size: 1, Type: char
			constexpr auto bIgnoreStreamingMipBias = 0x3d; // Size: 1, Type: char
			constexpr auto bUseCinematicMipLevels = 0x3d; // Size: 1, Type: char
	}
} 
