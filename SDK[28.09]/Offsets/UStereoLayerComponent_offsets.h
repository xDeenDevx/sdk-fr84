namespace offsets
{
	namespace UStereoLayerComponent
	{
			constexpr auto bLiveTexture = 0x318; // Size: 1, Type: char
			constexpr auto bSupportsDepth = 0x318; // Size: 1, Type: char
			constexpr auto bNoAlphaChannel = 0x318; // Size: 1, Type: char
			constexpr auto Texture = 0x320; // Size: 8, Type: struct UTexture*
			constexpr auto LeftTexture = 0x328; // Size: 8, Type: struct UTexture*
			constexpr auto bQuadPreserveTextureRatio = 0x330; // Size: 1, Type: char
			constexpr auto QuadSize = 0x334; // Size: 8, Type: struct FVector2D
			constexpr auto UVRect = 0x33c; // Size: 20, Type: struct FBox2D
			constexpr auto CylinderRadius = 0x350; // Size: 4, Type: float
			constexpr auto CylinderOverlayArc = 0x354; // Size: 4, Type: float
			constexpr auto CylinderHeight = 0x358; // Size: 4, Type: int32_t
			constexpr auto EquirectProps = 0x35c; // Size: 72, Type: struct FEquirectProps
			constexpr auto StereoLayerType = 0x3a4; // Size: 1, Type: enum class EStereoLayerType
			constexpr auto StereoLayerShape = 0x3a5; // Size: 1, Type: enum class EStereoLayerShape
			constexpr auto Shape = 0x3a8; // Size: 8, Type: struct UStereoLayerShape*
			constexpr auto Priority = 0x3b0; // Size: 4, Type: int32_t
	}
} 
