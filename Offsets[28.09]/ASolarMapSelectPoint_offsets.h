namespace offsets
{
	namespace ASolarMapSelectPoint
	{
			constexpr auto MapID = 0x298; // Size: 4, Type: int32_t
			constexpr auto MapCellConfig = 0x29c; // Size: 20, Type: struct FMapSelectPointCellConfig
			constexpr auto SelectPointNoticeMapWidgetClass = 0x2b0; // Size: 8, Type: UMapSelectPointNoticeMap*
			constexpr auto CellWidgetClass = 0x2b8; // Size: 8, Type: UMapSelectPointCellWidget*
			constexpr auto MapManager = 0x2c0; // Size: 8, Type: struct USolarMapManager*
			constexpr auto ElementManager = 0x2c8; // Size: 8, Type: struct USolarGameMode_ElementManager*
			constexpr auto SelectPointNoticeMap = 0x2d0; // Size: 8, Type: struct UMapSelectPointNoticeMap*
			constexpr auto WidgetInCells = 0x2d8; // Size: 80, Type: struct TMap<struct FString, struct UMapSelectPointCellWidget*>
			constexpr auto AllCellsData = 0x378; // Size: 80, Type: struct TMap<struct FString, struct FMapSelectPointCellData>
	}
} 
