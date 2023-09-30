namespace offsets
{
	namespace UTextureRenderTarget2D
	{
			constexpr auto SizeX = 0xc0; // Size: 4, Type: int32_t
			constexpr auto SizeY = 0xc4; // Size: 4, Type: int32_t
			constexpr auto bAutoRTSize = 0xc8; // Size: 1, Type: char
			constexpr auto ClearColor = 0xcc; // Size: 16, Type: struct FLinearColor
			constexpr auto AddressX = 0xdc; // Size: 1, Type: enum class TextureAddress
			constexpr auto AddressY = 0xdd; // Size: 1, Type: enum class TextureAddress
			constexpr auto bForceLinearGamma = 0xde; // Size: 1, Type: char
			constexpr auto bHDR = 0xde; // Size: 1, Type: char
			constexpr auto bGPUSharedFlag = 0xde; // Size: 1, Type: char
			constexpr auto RenderTargetFormat = 0xdf; // Size: 1, Type: enum class ETextureRenderTargetFormat
			constexpr auto bAutoGenerateMips = 0xe0; // Size: 1, Type: char
			constexpr auto MipsSamplerFilter = 0xe1; // Size: 1, Type: enum class TextureFilter
			constexpr auto MipsAddressU = 0xe2; // Size: 1, Type: enum class TextureAddress
			constexpr auto MipsAddressV = 0xe3; // Size: 1, Type: enum class TextureAddress
			constexpr auto OverrideFormat = 0xe4; // Size: 1, Type: enum class EPixelFormat
	}
} 
