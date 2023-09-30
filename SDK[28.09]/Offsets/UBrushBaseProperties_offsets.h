namespace offsets
{
	namespace UBrushBaseProperties
	{
			constexpr auto BrushSize = 0x50; // Size: 4, Type: float
			constexpr auto bSpecifyRadius = 0x54; // Size: 1, Type: bool
			constexpr auto BrushRadius = 0x58; // Size: 4, Type: float
			constexpr auto BrushStrength = 0x5c; // Size: 4, Type: float
			constexpr auto BrushFalloffAmount = 0x60; // Size: 4, Type: float
			constexpr auto bShowStrength = 0x64; // Size: 1, Type: bool
			constexpr auto bShowFalloff = 0x65; // Size: 1, Type: bool
	}
} 
