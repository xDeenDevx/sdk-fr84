namespace offsets
{
	namespace USolarVehicleGameplayAbility
	{
			constexpr auto bCancelAfterVacateSeat = 0x400; // Size: 1, Type: bool
			constexpr auto bCancelManually = 0x401; // Size: 1, Type: bool
			constexpr auto AbilityIndex = 0x402; // Size: 1, Type: char
			constexpr auto GameplayCueTags = 0x408; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto AbilityActivateVirationHeString = 0x428; // Size: 16, Type: struct FString
			constexpr auto AbilityEndVirationHeString = 0x438; // Size: 16, Type: struct FString
			constexpr auto bCheckInstigatorBeforeActivation = 0x448; // Size: 1, Type: bool
			constexpr auto bActivateAbilityOnGranted = 0x449; // Size: 1, Type: bool
			constexpr auto DurationTime = 0x44c; // Size: 4, Type: float
			constexpr auto ActivateEffect = 0x450; // Size: 8, Type: UGameplayEffect*
			constexpr auto AbilityIcon = 0x458; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto AdditionalAbilityIcon = 0x480; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto AbilityDescription = 0x4a8; // Size: 4, Type: int32_t
			constexpr auto AbilityTextType = 0x4b0; // Size: 16, Type: struct FString
			constexpr auto DamageToVehicle = 0x4c0; // Size: 4, Type: float
			constexpr auto DamageToCharacter = 0x4c4; // Size: 4, Type: float
	}
} 
