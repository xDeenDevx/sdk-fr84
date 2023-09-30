namespace offsets
{
	namespace UTexture
	{
			constexpr auto LightingGuid = 0x48; // Size: 16, Type: struct FGuid
			constexpr auto LODBias = 0x58; // Size: 4, Type: int32_t
			constexpr auto CompressionSettings = 0x5c; // Size: 1, Type: enum class TextureCompressionSettings
			constexpr auto Filter = 0x5d; // Size: 1, Type: enum class TextureFilter
			constexpr auto MipLoadOptions = 0x5e; // Size: 1, Type: enum class ETextureMipLoadOptions
			constexpr auto LODGroup = 0x5f; // Size: 1, Type: enum class TextureGroup
			constexpr auto SRGB = 0x60; // Size: 1, Type: char
			constexpr auto bNoTiling = 0x60; // Size: 1, Type: char
			constexpr auto VirtualTextureStreaming = 0x60; // Size: 1, Type: char
			constexpr auto CompressionYCoCg = 0x60; // Size: 1, Type: char
			constexpr auto bAsyncResourceReleaseHasBeenStarted = 0x62; // Size: 1, Type: char
			constexpr auto AssetUserData = 0x68; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
