namespace offsets
{
	namespace UHoudiniAsset
	{
			constexpr auto AssetFileName = 0x28; // Size: 16, Type: struct FString
			constexpr auto AssetBytes = 0x38; // Size: 16, Type: struct TArray<char>
			constexpr auto AssetBytesCount = 0x48; // Size: 4, Type: uint32_t
			constexpr auto bAssetLimitedCommercial = 0x4c; // Size: 1, Type: bool
			constexpr auto bAssetNonCommercial = 0x4d; // Size: 1, Type: bool
			constexpr auto bAssetExpanded = 0x4e; // Size: 1, Type: bool
	}
} 
