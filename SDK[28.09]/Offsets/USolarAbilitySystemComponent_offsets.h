namespace offsets
{
	namespace USolarAbilitySystemComponent
	{
			constexpr auto DefaultAbilitySet = 0x1300; // Size: 8, Type: struct USolarGameplayAbilitySet*
			constexpr auto OptionMeshForRepMontage = 0x13b8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto bPendingMontageRepForMesh = 0x13c0; // Size: 1, Type: bool
			constexpr auto LocalAnimMontageInfoForMeshes = 0x13c8; // Size: 16, Type: struct TArray<struct FGameplayAbilityLocalAnimMontageForMesh>
			constexpr auto RepAnimMontageInfoForMeshes = 0x13d8; // Size: 16, Type: struct TArray<struct FGameplayAbilityRepAnimMontageForMesh>
	}
} 
