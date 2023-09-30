namespace offsets
{
	namespace ASolarFlyTrail
	{
			constexpr auto CachedProxyComponents = 0x228; // Size: 16, Type: struct TArray<struct USolarTrailProxyComponent*>
			constexpr auto TrailEffectClass = 0x238; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto FallbackTrailEffectClass = 0x250; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CachedTrailEffectClass = 0x278; // Size: 8, Type: UObject*
			constexpr auto SkydiveTrailStaticInfo = 0x2d0; // Size: 288, Type: struct FCharacterSkydiveTrailStaticInfoContainer
			constexpr auto SkydiveTrailFrameInfo = 0x3f0; // Size: 288, Type: struct FPackedSkydiveTrailFrameInfoContainer
			constexpr auto SkydiveTrailEffectClass = 0x510; // Size: 8, Type: ASkydiveTrailEffect*
			constexpr auto SkydiveTrailData = 0x518; // Size: 80, Type: struct TMap<struct ASolarPlayerState*, struct FCharacterSkydiveTrailData>
			constexpr auto LocalPlayerSkydiveTrailProxy = 0x568; // Size: 8, Type: struct ASolarPlayerState*
	}
} 
