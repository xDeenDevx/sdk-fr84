namespace offsets
{
	namespace UUISystemSettings
	{
			constexpr auto InGameWidgetPoolSize = 0x38; // Size: 4, Type: int32_t
			constexpr auto VirtualControllerPoolSize = 0x3c; // Size: 4, Type: int32_t
			constexpr auto InGamePopupPoolSize = 0x40; // Size: 4, Type: int32_t
			constexpr auto OutGameWidgetPoolSize = 0x44; // Size: 4, Type: int32_t
			constexpr auto UIGlobalConfig = 0x48; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto UILayer = 0x60; // Size: 24, Type: struct FSoftClassPath
			constexpr auto UIPanelConfigClass = 0x78; // Size: 24, Type: struct FSoftClassPath
			constexpr auto InteractionButtons = 0x90; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FInteractionButtonSpec>
	}
} 
