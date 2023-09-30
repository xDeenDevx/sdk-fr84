namespace offsets
{
	namespace USolarBTS_BotFocusTo
	{
			constexpr auto LookAtSpeed = 0x98; // Size: 4, Type: float
			constexpr auto bUseFocusDirection = 0x9c; // Size: 1, Type: bool
			constexpr auto bLocalDirection = 0x9d; // Size: 1, Type: bool
			constexpr auto FocusDirection = 0xa0; // Size: 12, Type: struct FVector
			constexpr auto DeltaRotation = 0xac; // Size: 12, Type: struct FRotator
			constexpr auto bRandomFocusDirection = 0xb8; // Size: 1, Type: bool
			constexpr auto RandomPitchDeviation = 0xbc; // Size: 4, Type: float
			constexpr auto RandomYawDeviation = 0xc0; // Size: 4, Type: float
			constexpr auto bRestorePreviousFocusOnCeaseRelevant = 0xc4; // Size: 1, Type: bool
	}
} 
