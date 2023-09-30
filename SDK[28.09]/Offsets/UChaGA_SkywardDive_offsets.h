namespace offsets
{
	namespace UChaGA_SkywardDive
	{
			constexpr auto SkywardDivePrepareCueTag = 0x460; // Size: 8, Type: struct FGameplayTag
			constexpr auto SkywardDiveLaunchCueTag = 0x468; // Size: 8, Type: struct FGameplayTag
			constexpr auto PrepareTimeConfig = 0x470; // Size: 4, Type: float
			constexpr auto MaxSkywardHeightConfig = 0x474; // Size: 4, Type: float
			constexpr auto LaunchSpeedCurveConfig = 0x478; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto SkywardDiveLauncher = 0x500; // Size: 8, Type: struct TWeakObjectPtr<ASkywardDiveLauncher>
			constexpr auto CancelActionName = 0x510; // Size: 8, Type: struct FName
	}
} 
