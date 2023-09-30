namespace offsets
{
	namespace ASolarAbility
	{
			constexpr auto MyAbilityClass = 0x228; // Size: 8, Type: ASolarAbility*
			constexpr auto AbilityEffectClasses = 0x230; // Size: 16, Type: struct TArray<USolarAbilityEffect*>
			constexpr auto AbilitySourceCharacter = 0x240; // Size: 8, Type: struct TWeakObjectPtr<ASolarCharacter>
			constexpr auto SpawnTransform = 0x250; // Size: 48, Type: struct FTransform
			constexpr auto InstancedAbility = 0x280; // Size: 1, Type: bool
			constexpr auto DoNotAutoApply = 0x281; // Size: 1, Type: bool
			constexpr auto ApplyToSource = 0x282; // Size: 1, Type: bool
			constexpr auto RadialAbility = 0x283; // Size: 1, Type: bool
			constexpr auto RadialAbilityRadius = 0x284; // Size: 4, Type: float
			constexpr auto bRadialIgnoreCollision = 0x288; // Size: 1, Type: bool
			constexpr auto bRadialIgnoreVehicle = 0x289; // Size: 1, Type: bool
			constexpr auto CheckSourceToTargetCollision = 0x28a; // Size: 1, Type: bool
			constexpr auto EnableAbilityDebug = 0x28b; // Size: 1, Type: bool
			constexpr auto bActivated = 0x28c; // Size: 1, Type: bool
			constexpr auto ExtraInfo = 0x290; // Size: 16, Type: struct FString
			constexpr auto InitiatorActor = 0x2a0; // Size: 8, Type: struct AActor*
			constexpr auto AkAudioComponent = 0x2a8; // Size: 8, Type: struct UAkComponent*
			constexpr auto SolarAkGameObject = 0x2b0; // Size: 8, Type: struct USolarAkGameObject*
			constexpr auto EffectParams = 0x2b8; // Size: 80, Type: struct TMap<struct FString, float>
	}
} 
