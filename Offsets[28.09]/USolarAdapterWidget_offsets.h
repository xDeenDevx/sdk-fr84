namespace offsets
{
	namespace USolarAdapterWidget
	{
			constexpr auto WidgetLoadType = 0x150; // Size: 1, Type: enum class EWidgetLoadType
			constexpr auto MobileWidgetPath = 0x158; // Size: 24, Type: struct FSoftClassPath
			constexpr auto DesktopWidgetPath = 0x170; // Size: 24, Type: struct FSoftClassPath
			constexpr auto OverrideParamList = 0x188; // Size: 16, Type: struct TArray<struct FWidgetOverrideParam>
			constexpr auto CurWidgetPath = 0x198; // Size: 24, Type: struct FSoftClassPath
			constexpr auto AdapteeWidget = 0x1b0; // Size: 8, Type: struct UUserWidget*
	}
} 
