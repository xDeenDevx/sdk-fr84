namespace offsets
{
	namespace USolarReplayHighlightComponent
	{
			constexpr auto RecordAfterSettled = 0xe0; // Size: 4, Type: float
			constexpr auto SlowMoStartTime = 0xe4; // Size: 4, Type: float
			constexpr auto SlowMoEndTime = 0xe8; // Size: 4, Type: float
			constexpr auto SlowMoMultiplier = 0xec; // Size: 4, Type: float
			constexpr auto KillEffectTime = 0xf0; // Size: 4, Type: float
			constexpr auto HighlightOverviewWidget = 0xf8; // Size: 8, Type: struct UOBHighlightOverviewWidget*
	}
} 
