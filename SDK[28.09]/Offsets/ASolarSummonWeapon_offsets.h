namespace offsets
{
	namespace ASolarSummonWeapon
	{
			constexpr auto SummonWeaponHolder = 0xaa0; // Size: 8, Type: struct TWeakObjectPtr<ASolarCharacter>
			constexpr auto SummonWeaponOwner = 0xaa8; // Size: 8, Type: struct TWeakObjectPtr<ASummonItemTurret>
			constexpr auto ShotDirection = 0xab0; // Size: 12, Type: struct FVector
			constexpr auto WeaponCanUseEffect = 0xac0; // Size: 8, Type: UGameplayEffect*
	}
} 
