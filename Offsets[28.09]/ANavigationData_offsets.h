namespace offsets
{
	namespace ANavigationData
	{
			constexpr auto RenderingComp = 0x230; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto NavDataConfig = 0x238; // Size: 120, Type: struct FNavDataConfig
			constexpr auto bEnableDrawing = 0x2b0; // Size: 1, Type: char
			constexpr auto bForceRebuildOnLoad = 0x2b0; // Size: 1, Type: char
			constexpr auto bAutoDestroyWhenNoNavigation = 0x2b0; // Size: 1, Type: char
			constexpr auto bCanBeMainNavData = 0x2b0; // Size: 1, Type: char
			constexpr auto bCanSpawnOnRebuild = 0x2b0; // Size: 1, Type: char
			constexpr auto bRebuildAtRuntime = 0x2b0; // Size: 1, Type: char
			constexpr auto RuntimeGeneration = 0x2b4; // Size: 1, Type: enum class ERuntimeGenerationType
			constexpr auto ObservedPathsTickInterval = 0x2b8; // Size: 4, Type: float
			constexpr auto DataVersion = 0x2bc; // Size: 4, Type: uint32_t
			constexpr auto SupportedAreas = 0x3a0; // Size: 16, Type: struct TArray<struct FSupportedAreaData>
	}
} 
