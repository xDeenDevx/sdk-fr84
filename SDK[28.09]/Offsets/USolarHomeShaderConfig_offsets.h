namespace offsets
{
	namespace USolarHomeShaderConfig
	{
			constexpr auto EmissiveMatPath = 0x30; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto MaskedMatPath = 0x48; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto TranslucentMatPath = 0x60; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DeleteEmissiveMatPath = 0x78; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DeleteMaskedMatPath = 0x90; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DeleteTranslucentMatPath = 0xa8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PrdinaryColor = 0xc0; // Size: 16, Type: struct FLinearColor
			constexpr auto PlaceableColor = 0xd0; // Size: 16, Type: struct FLinearColor
			constexpr auto UnPlaceableColor = 0xe0; // Size: 16, Type: struct FLinearColor
			constexpr auto PlaceableColorOther = 0xf0; // Size: 16, Type: struct FLinearColor
			constexpr auto BreathLightTimeScale = 0x100; // Size: 4, Type: float
			constexpr auto PlaceableEmissveA = 0x104; // Size: 4, Type: float
			constexpr auto UnPlaceableEmissveA = 0x108; // Size: 4, Type: float
	}
} 
