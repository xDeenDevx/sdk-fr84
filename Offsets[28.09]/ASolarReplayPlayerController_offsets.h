namespace offsets
{
	namespace ASolarReplayPlayerController
	{
			constexpr auto WaitFirstTeamNumberInputTime = 0xea0; // Size: 4, Type: float
			constexpr auto WaitTeamNumberInputTime = 0xea4; // Size: 4, Type: float
			constexpr auto SolarReplayCameraControlComp = 0xea8; // Size: 8, Type: struct USolarReplayCameraControlComp*
			constexpr auto SolarReplayHighlightComponent = 0xeb0; // Size: 8, Type: struct USolarReplayHighlightComponent*
			constexpr auto SolarReplayAutoDirectorComponent = 0xeb8; // Size: 8, Type: struct USolarReplayAutoDirectorComponent*
			constexpr auto OnEmitBulletDelegate = 0xec0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto HorizontalDistanceBetweenPlayerAndOBCamera = 0xed0; // Size: 80, Type: struct TMap<struct FString, float>
			constexpr auto ReplayManager = 0xf20; // Size: 8, Type: struct USolarReplayManager*
			constexpr auto DemoNetDriver = 0xf28; // Size: 8, Type: struct UDemoNetDriver*
			constexpr auto TeamNumToPerspectiveMaterialMap = 0xf50; // Size: 80, Type: struct TMap<char, struct UMaterialInstanceDynamic*>
	}
} 
