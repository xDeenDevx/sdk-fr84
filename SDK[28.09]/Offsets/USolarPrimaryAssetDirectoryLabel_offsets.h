namespace offsets
{
	namespace USolarPrimaryAssetDirectoryLabel
	{
			constexpr auto Rules = 0x30; // Size: 12, Type: struct FPrimaryAssetRules
			constexpr auto bIsRuntimeLabel = 0x3c; // Size: 1, Type: char
			constexpr auto ExplicitDirectories = 0x40; // Size: 16, Type: struct TArray<struct FDirectoryPath>
			constexpr auto ExplicitAssets = 0x50; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UObject>>
	}
} 
