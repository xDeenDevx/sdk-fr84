namespace offsets
{
	namespace USolarSkillGA_Projectile
	{
			constexpr auto ProjectileData = 0x4c0; // Size: 208, Type: struct FSolarSkillProjectileData
			constexpr auto GATargetActorClass = 0x590; // Size: 8, Type: AGameplayAbilityTargetActor*
			constexpr auto SpawnActorClasses = 0x598; // Size: 16, Type: struct TArray<AActor*>
			constexpr auto GEToSelfClass = 0x5a8; // Size: 8, Type: UGameplayEffect*
			constexpr auto GEToTargetClass = 0x5b0; // Size: 8, Type: UGameplayEffect*
			constexpr auto bUseKeyUpLocation = 0x5b8; // Size: 1, Type: bool
			constexpr auto bUseKeyUpDirection = 0x5b9; // Size: 1, Type: bool
			constexpr auto WaitTargetDataTask = 0x5c0; // Size: 8, Type: struct UAbilityTask_WaitTargetData*
			constexpr auto SpawnActors = 0x5c8; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto TargetActorCache = 0x5d8; // Size: 8, Type: struct TWeakObjectPtr<AGameplayAbilityTargetActor>
	}
} 
