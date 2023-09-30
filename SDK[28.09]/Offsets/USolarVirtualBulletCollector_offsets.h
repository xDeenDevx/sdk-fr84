namespace offsets
{
	namespace USolarVirtualBulletCollector
	{
			constexpr auto CacheWeapon = 0xb0; // Size: 8, Type: struct ASolarWeapon*
			constexpr auto CacheCharacter = 0xb8; // Size: 8, Type: struct ASolarCharacterBase*
			constexpr auto CacheWorld = 0xc0; // Size: 8, Type: struct UWorld*
			constexpr auto Bullets = 0xc8; // Size: 16, Type: struct TArray<struct FSolarVirtualBullet>
			constexpr auto PendingBulletsInSimulated = 0xd8; // Size: 16, Type: struct TArray<struct FSolarVirtualBullet>
			constexpr auto BulletsInSimulated = 0xe8; // Size: 16, Type: struct TArray<struct FSolarVirtualBullet>
			constexpr auto BulletsInDedicatedServer = 0xf8; // Size: 16, Type: struct TArray<struct FSolarVirtualBullet>
			constexpr auto EffectBulletCDO = 0x158; // Size: 8, Type: struct ASolarBullet*
	}
} 
