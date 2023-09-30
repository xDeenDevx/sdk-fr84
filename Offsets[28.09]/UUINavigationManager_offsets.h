namespace offsets
{
	namespace UUINavigationManager
	{
			constexpr auto WidgetOpenedMap = 0x38; // Size: 80, Type: struct TMap<struct FString, struct USolarUserWidget*>
			constexpr auto TmpRemovedWidgets = 0x88; // Size: 16, Type: struct TArray<struct USolarUserWidget*>
			constexpr auto CachedCreatedWidgets = 0x98; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<USolarUserWidget>>
			constexpr auto SolarUIRoot = 0xb8; // Size: 8, Type: struct USolarUIRoot*
	}
} 
