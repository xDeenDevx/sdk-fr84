namespace offsets
{
	namespace UUISubsystem
	{
			constexpr auto GlobalConfig = 0x30; // Size: 8, Type: struct UUIGlobalConfig*
			constexpr auto UIPanelConfig = 0x38; // Size: 8, Type: struct UUIPanelConfig*
			constexpr auto CacheWidgets = 0x40; // Size: 80, Type: struct TMap<struct FString, struct USolarUserWidget*>
	}
} 
