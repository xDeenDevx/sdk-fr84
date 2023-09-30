namespace offsets
{
	namespace URetainerBox
	{
			constexpr auto bRetainRender = 0x150; // Size: 1, Type: bool
			constexpr auto RenderOnInvalidation = 0x151; // Size: 1, Type: bool
			constexpr auto RenderOnPhase = 0x152; // Size: 1, Type: bool
			constexpr auto Phase = 0x154; // Size: 4, Type: int32_t
			constexpr auto PhaseCount = 0x158; // Size: 4, Type: int32_t
			constexpr auto EffectMaterial = 0x160; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TextureParameter = 0x168; // Size: 8, Type: struct FName
	}
} 
