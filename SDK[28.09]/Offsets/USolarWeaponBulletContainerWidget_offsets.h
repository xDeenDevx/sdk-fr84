namespace offsets
{
	namespace USolarWeaponBulletContainerWidget
	{
			constexpr auto BulletContainerStorageLayout = 0x350; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FSolarBulletContainerLayout>
			constexpr auto BulletColor = 0x3a0; // Size: 8, Type: struct FBulletContainerColor
			constexpr auto RootPanel = 0x3a8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto CurrentMaxAmmo = 0x3b0; // Size: 4, Type: int32_t
			constexpr auto CurrentWeaponType = 0x3b4; // Size: 1, Type: enum class EWeaponType
	}
} 
