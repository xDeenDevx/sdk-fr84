namespace offsets
{
	namespace UCrossHairWidget
	{
			constexpr auto CrosshairStorageLayout = 0x260; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FCrosshairLayout>
			constexpr auto CrosshairSprites = 0x2b0; // Size: 48, Type: struct FCrosshairSprite
			constexpr auto RootPanel = 0x2e8; // Size: 8, Type: struct UCrosshairCanvasPanel*
			constexpr auto MinSpread = 0x2f0; // Size: 4, Type: float
			constexpr auto CurrentLayout = 0x2f8; // Size: 4, Type: struct FCrosshairLayout
	}
} 
