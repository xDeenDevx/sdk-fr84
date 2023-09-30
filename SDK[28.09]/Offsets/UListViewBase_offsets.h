namespace offsets
{
	namespace UListViewBase
	{
			constexpr auto EntryWidgetClass = 0x138; // Size: 8, Type: UUserWidget*
			constexpr auto WheelScrollMultiplier = 0x140; // Size: 4, Type: float
			constexpr auto bEnableScrollAnimation = 0x144; // Size: 1, Type: bool
			constexpr auto bEnableFixedLineOffset = 0x145; // Size: 1, Type: bool
			constexpr auto bClampScroll = 0x146; // Size: 1, Type: bool
			constexpr auto bDisableScroll = 0x147; // Size: 1, Type: bool
			constexpr auto FixedLineScrollOffset = 0x148; // Size: 4, Type: float
			constexpr auto BP_OnEntryGenerated = 0x150; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnEntryReleased = 0x160; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto EntryWidgetPool = 0x170; // Size: 128, Type: struct FUserWidgetPool
			constexpr auto WidgetBarStyle = 0x1f0; // Size: 1376, Type: struct FScrollBarStyle
			constexpr auto ScrollBarVisibility = 0x750; // Size: 1, Type: enum class ESlateVisibility
			constexpr auto ScrollbarThickness = 0x754; // Size: 8, Type: struct FVector2D
			constexpr auto ScrollbarPadding = 0x75c; // Size: 16, Type: struct FMargin
			constexpr auto AlwaysShowScrollbar = 0x76c; // Size: 1, Type: bool
			constexpr auto AlwaysShowScrollbarTrack = 0x76d; // Size: 1, Type: bool
	}
} 
