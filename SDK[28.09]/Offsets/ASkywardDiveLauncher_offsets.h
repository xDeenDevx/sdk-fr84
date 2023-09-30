namespace offsets
{
	namespace ASkywardDiveLauncher
	{
			constexpr auto GroundMesh = 0x3e0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto TriggerVolume = 0x3e8; // Size: 8, Type: struct UBoxComponent*
			constexpr auto SpawnTimeConfig = 0x3f0; // Size: 4, Type: float
			constexpr auto AvailableDeviceParticle = 0x3f8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto SpawnBeamParticle = 0x400; // Size: 8, Type: struct UParticleSystem*
			constexpr auto SpawnSoundName = 0x408; // Size: 16, Type: struct FString
			constexpr auto SpawnAnim = 0x418; // Size: 8, Type: struct UAnimSequence*
			constexpr auto LauncherDeviceArray = 0x420; // Size: 16, Type: struct TArray<struct FLaunchDeviceInfo>
			constexpr auto CharacterLaunchPadHeightOffset = 0x430; // Size: 4, Type: float
			constexpr auto LowHealthPercentage = 0x434; // Size: 4, Type: float
			constexpr auto LowHealthParticle = 0x438; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DeathExplodeParticle = 0x440; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DeathExplodeSoundName = 0x448; // Size: 16, Type: struct FString
			constexpr auto SpawnBeamEffect = 0x458; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto LowHealthEffect = 0x460; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto bNewlySpawned = 0x468; // Size: 1, Type: bool
	}
} 
