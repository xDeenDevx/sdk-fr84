namespace offsets
{
	namespace USolarRadarComponent
	{
			constexpr auto RadarScanSoundDataAsset = 0xb8; // Size: 8, Type: struct URadarScanSoundDataAsset*
			constexpr auto ScannedScreenUIClass = 0xc0; // Size: 8, Type: UUserWidget*
			constexpr auto ScannedEffectID = 0xc8; // Size: 8, Type: struct FName
			constexpr auto CreatedScreenUI = 0xe8; // Size: 8, Type: struct UUserWidget*
			constexpr auto DetectedTimerHandle = 0xf0; // Size: 8, Type: struct FTimerHandle
			constexpr auto TimerHandleCounter = 0xf8; // Size: 4, Type: int32_t
			constexpr auto DetectedTimerHandles = 0x100; // Size: 80, Type: struct TMap<int32_t, struct FTimerHandle>
			constexpr auto CharacterOwner = 0x150; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto CurrentScanResults = 0x158; // Size: 16, Type: struct TArray<struct FScannedInfo>
			constexpr auto CurrentSpanTimer = 0x168; // Size: 4, Type: float
			constexpr auto ActivedRadarTags = 0x170; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto DetectedMaterialHandle = 0x180; // Size: 8, Type: struct FMaterialChangeHandle
	}
} 
