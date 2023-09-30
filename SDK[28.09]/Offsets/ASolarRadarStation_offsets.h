namespace offsets
{
	namespace ASolarRadarStation
	{
			constexpr auto bEnable = 0x238; // Size: 1, Type: bool
			constexpr auto Zone = 0x23c; // Size: 4, Type: int32_t
			constexpr auto MaxTirggerDistance = 0x240; // Size: 4, Type: float
			constexpr auto MaxTirggerAngle = 0x244; // Size: 4, Type: float
			constexpr auto CDTag = 0x248; // Size: 8, Type: struct FGameplayTag
			constexpr auto bBroken = 0x250; // Size: 1, Type: bool
			constexpr auto bInCD = 0x251; // Size: 1, Type: bool
			constexpr auto CoolDownTime = 0x254; // Size: 4, Type: float
			constexpr auto CostEnergy = 0x258; // Size: 4, Type: float
			constexpr auto RemainCDTime = 0x25c; // Size: 4, Type: float
			constexpr auto CollisionComp = 0x260; // Size: 8, Type: struct USphereComponent*
			constexpr auto NormalMesh = 0x268; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ObjAbilitySystemComp = 0x270; // Size: 8, Type: struct USolarObjAbilitySystemComponent*
			constexpr auto ObjAbilityClass = 0x278; // Size: 8, Type: USolarObjGameplayAbility*
			constexpr auto ObjAbilityHandle = 0x280; // Size: 4, Type: struct FGameplayAbilitySpecHandle
	}
} 
