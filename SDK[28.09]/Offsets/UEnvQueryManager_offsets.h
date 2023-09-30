namespace offsets
{
	namespace UEnvQueryManager
	{
			constexpr auto InstanceCache = 0xb0; // Size: 16, Type: struct TArray<struct FEnvQueryInstanceCache>
			constexpr auto LocalContexts = 0xc0; // Size: 16, Type: struct TArray<struct UEnvQueryContext*>
			constexpr auto GCShieldedWrappers = 0xd0; // Size: 16, Type: struct TArray<struct UEnvQueryInstanceBlueprintWrapper*>
			constexpr auto MaxAllowedTestingTime = 0x134; // Size: 4, Type: float
			constexpr auto bTestQueriesUsingBreadth = 0x138; // Size: 1, Type: bool
			constexpr auto QueryCountWarningThreshold = 0x13c; // Size: 4, Type: int32_t
			constexpr auto QueryCountWarningInterval = 0x140; // Size: 8, Type: double
	}
} 
