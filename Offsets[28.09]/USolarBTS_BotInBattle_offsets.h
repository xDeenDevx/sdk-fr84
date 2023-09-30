namespace offsets
{
	namespace USolarBTS_BotInBattle
	{
			constexpr auto EnemyActorKey = 0xb0; // Size: 40, Type: struct FBlackboardKeySelector
			constexpr auto CanSeeEnemyKey = 0xd8; // Size: 40, Type: struct FBlackboardKeySelector
			constexpr auto TacticalLocation = 0x100; // Size: 40, Type: struct FBlackboardKeySelector
			constexpr auto WeaponSuitableRangeConfig = 0x128; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FVector2D>
	}
} 
