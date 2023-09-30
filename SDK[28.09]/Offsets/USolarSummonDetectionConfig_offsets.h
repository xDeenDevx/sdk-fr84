namespace offsets
{
	namespace USolarSummonDetectionConfig
	{
			constexpr auto SummonPreview = 0x30; // Size: 24, Type: struct FSolarSummonPreview
			constexpr auto bEnableQuickSummon = 0x48; // Size: 1, Type: bool
			constexpr auto bEnableQuickSummonInAir = 0x49; // Size: 1, Type: bool
			constexpr auto QuickSummonClass = 0x50; // Size: 8, Type: USolarQuickSummonProxy*
			constexpr auto QuickSummonTime = 0x58; // Size: 4, Type: float
			constexpr auto bEnableCheckCondition = 0x5c; // Size: 1, Type: bool
			constexpr auto SummonCondition = 0x60; // Size: 80, Type: struct FSolarSummonCondition
	}
} 
