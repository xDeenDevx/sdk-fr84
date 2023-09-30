namespace offsets
{
	namespace AAirDropAudioActor
	{
			constexpr auto DropBeginLocation = 0x228; // Size: 12, Type: struct FVector
			constexpr auto DropEndLocation = 0x234; // Size: 12, Type: struct FVector
			constexpr auto CurrZ = 0x240; // Size: 4, Type: float
			constexpr auto SpawnedWarningEffect = 0x248; // Size: 8, Type: struct AActor*
			constexpr auto WarningEffect = 0x250; // Size: 8, Type: AActor*
			constexpr auto ThisID = 0x258; // Size: 4, Type: int32_t
			constexpr auto bSummonedByCharacter = 0x260; // Size: 1, Type: bool
			constexpr auto SNameAirDropSpawnWarning = 0x268; // Size: 16, Type: struct FString
			constexpr auto SNameAirDropStopSpawnWarning = 0x278; // Size: 16, Type: struct FString
			constexpr auto SNameAirDropApprochWarning = 0x288; // Size: 16, Type: struct FString
			constexpr auto SNameAirDropStopApprochWarning = 0x298; // Size: 16, Type: struct FString
			constexpr auto AkAudioComponent = 0x2a8; // Size: 8, Type: struct UAkComponent*
			constexpr auto SolarAkGameObject = 0x2b0; // Size: 8, Type: struct USolarAkGameObject*
			constexpr auto bHasLanded = 0x2b9; // Size: 1, Type: bool
	}
} 
