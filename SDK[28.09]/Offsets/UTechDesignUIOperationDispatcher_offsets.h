namespace offsets
{
	namespace UTechDesignUIOperationDispatcher
	{
			constexpr auto OnWidgetAddToBattleUIRequest = 0x12a8; // Size: 16, Type: struct FDelegate
			constexpr auto OnWidgetAddToBackpackUIRequest = 0x12b8; // Size: 16, Type: struct FDelegate
			constexpr auto OnWidgetAddToMapUIRequest = 0x12c8; // Size: 16, Type: struct FDelegate
			constexpr auto OnClearBattleUISlotRequest = 0x12d8; // Size: 16, Type: struct FDelegate
			constexpr auto OnClearBackpackUISlotRequest = 0x12e8; // Size: 16, Type: struct FDelegate
			constexpr auto OnClearMapUISlotRequest = 0x12f8; // Size: 16, Type: struct FDelegate
			constexpr auto OnSetBattleUISubItemVisibilityByGameMode = 0x1308; // Size: 16, Type: struct FDelegate
			constexpr auto RegisterCustomMapMarkToMiniMap = 0x1318; // Size: 16, Type: struct FDelegate
			constexpr auto RegisterCustomMapMarkToBigMap = 0x1328; // Size: 16, Type: struct FDelegate
			constexpr auto RemoveCustomMapMarkFromMiniMap = 0x1338; // Size: 16, Type: struct FDelegate
			constexpr auto RemoveCustomMapMarkFromBigMap = 0x1348; // Size: 16, Type: struct FDelegate
			constexpr auto RegisterCustomRotBarMark = 0x1358; // Size: 16, Type: struct FDelegate
			constexpr auto RemoveCustomRotBarMark = 0x1368; // Size: 16, Type: struct FDelegate
			constexpr auto OnAllPlayerNavVisibilityChanged = 0x1378; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnBattleUIVisibilityChanged = 0x1388; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPowerBarVisibilityChanged = 0x1398; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRotationBarVisibilityChanged = 0x13a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMiniMapFovChangeRequested = 0x13b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMiniMapInitMarkIconRequested = 0x13c8; // Size: 16, Type: struct FDelegate
			constexpr auto OnBigMapAddDotLineRequested = 0x13d8; // Size: 16, Type: struct FDelegate
			constexpr auto OnMiniMapAddDotLineRequested = 0x13e8; // Size: 16, Type: struct FDelegate
			constexpr auto OnBigMapRemoveDotLineRequested = 0x13f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMiniMapRemoveDotLineRequested = 0x1408; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto RegisterPositionMark = 0x1418; // Size: 16, Type: struct FDelegate
			constexpr auto RegisterActorMark = 0x1428; // Size: 16, Type: struct FDelegate
			constexpr auto OnBattleUIVisibilityHasChanged = 0x1438; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGettingCanvasPositionOnBattleUI = 0x1448; // Size: 16, Type: struct FDelegate
			constexpr auto OnGettingWidgetRenderTransOnBattleUI = 0x1458; // Size: 16, Type: struct FDelegate
			constexpr auto OnGettingTextOnBackpackUI = 0x1468; // Size: 16, Type: struct FDelegate
	}
} 
