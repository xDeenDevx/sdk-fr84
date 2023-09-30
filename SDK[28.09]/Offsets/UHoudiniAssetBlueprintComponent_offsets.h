namespace offsets
{
	namespace UHoudiniAssetBlueprintComponent
	{
			constexpr auto FauxBPProperty = 0xb28; // Size: 1, Type: bool
			constexpr auto bHoudiniAssetChanged = 0xb29; // Size: 1, Type: bool
			constexpr auto bUpdatedFromTemplate = 0xb2a; // Size: 1, Type: bool
			constexpr auto bIsInBlueprintEditor = 0xb2b; // Size: 1, Type: bool
			constexpr auto bCanDeleteHoudiniNodes = 0xb2c; // Size: 1, Type: bool
			constexpr auto bHasRegisteredComponentTemplate = 0xb2d; // Size: 1, Type: bool
			constexpr auto CachedOutputNodes = 0xb38; // Size: 80, Type: struct TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid>
			constexpr auto CachedInputNodes = 0xb88; // Size: 80, Type: struct TMap<struct FGuid, struct FGuid>
	}
} 
