namespace offsets
{
	namespace AWeaponAbilityBase
	{
			constexpr auto HitResult = 0x308; // Size: 136, Type: struct FHitResult
			constexpr auto bClientVaild = 0x390; // Size: 1, Type: bool
			constexpr auto bServerVaild = 0x391; // Size: 1, Type: bool
			constexpr auto bLife = 0x392; // Size: 1, Type: bool
			constexpr auto LifeTime = 0x394; // Size: 4, Type: float
			constexpr auto TargetActor = 0x398; // Size: 8, Type: struct AActor*
			constexpr auto TargetWeapon = 0x3a4; // Size: 8, Type: struct TWeakObjectPtr<ASolarWeapon>
	}
} 
