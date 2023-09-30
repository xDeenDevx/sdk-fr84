namespace offsets
{
	namespace URuntimeVirtualTexture
	{
			constexpr auto MaterialType = 0x28; // Size: 1, Type: enum class ERuntimeVirtualTextureMaterialType
			constexpr auto bCompressTextures = 0x29; // Size: 1, Type: bool
			constexpr auto bEnable = 0x2a; // Size: 1, Type: bool
			constexpr auto bClearTextures = 0x2b; // Size: 1, Type: bool
			constexpr auto bSinglePhysicalSpace = 0x2c; // Size: 1, Type: bool
			constexpr auto bPrivateSpace = 0x2d; // Size: 1, Type: bool
			constexpr auto bEnableScalability = 0x2e; // Size: 1, Type: bool
			constexpr auto Size = 0x30; // Size: 4, Type: int32_t
			constexpr auto TileCount = 0x34; // Size: 4, Type: int32_t
			constexpr auto TileSize = 0x38; // Size: 4, Type: int32_t
			constexpr auto TileBorderSize = 0x3c; // Size: 4, Type: int32_t
			constexpr auto StreamLowMips = 0x40; // Size: 4, Type: int32_t
			constexpr auto StreamingTexture = 0x48; // Size: 8, Type: struct URuntimeVirtualTextureStreamingProxy*
			constexpr auto bEnableCompressCrunch = 0x50; // Size: 1, Type: bool
			constexpr auto RemoveLowMips = 0x54; // Size: 4, Type: int32_t
	}
} 
