namespace offsets
{
	namespace UBuffEffectScreenPanel
	{
			constexpr auto LayerDurationGroup = 0x358; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerDurationTwoSidePart = 0x360; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerDurationBottomHalfPart = 0x368; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerDurationBorderPart = 0x370; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerDurationTopHalfPart = 0x378; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerDurationFullPart = 0x380; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerInstantGroup = 0x388; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerInstantTwoSidePart = 0x390; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerInstantBottomHalfPart = 0x398; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerInstantBorderPart = 0x3a0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerInstantTopHalfPart = 0x3a8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto LayerInstantFullPart = 0x3b0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto HandleToWidget = 0x458; // Size: 80, Type: struct TMap<int32_t, struct USolarScreenEffectWidget*>
			constexpr auto WidgetsCanBeReused = 0x4a8; // Size: 80, Type: struct TMap<USolarScreenEffectWidget*, struct FScreenEffectWidgetCacheInfo>
	}
} 
