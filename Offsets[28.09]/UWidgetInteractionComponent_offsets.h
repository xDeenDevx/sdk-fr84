namespace offsets
{
	namespace UWidgetInteractionComponent
	{
			constexpr auto OnHoveredWidgetChanged = 0x318; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto VirtualUserIndex = 0x338; // Size: 4, Type: int32_t
			constexpr auto PointerIndex = 0x33c; // Size: 4, Type: float
			constexpr auto TraceChannel = 0x340; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto InteractionDistance = 0x344; // Size: 4, Type: float
			constexpr auto InteractionSource = 0x348; // Size: 1, Type: enum class EWidgetInteractionSource
			constexpr auto bEnableHitTesting = 0x349; // Size: 1, Type: bool
			constexpr auto bShowDebug = 0x34a; // Size: 1, Type: bool
			constexpr auto DebugColor = 0x34c; // Size: 16, Type: struct FLinearColor
			constexpr auto CustomHitResult = 0x3d8; // Size: 136, Type: struct FHitResult
			constexpr auto LocalHitLocation = 0x460; // Size: 8, Type: struct FVector2D
			constexpr auto LastLocalHitLocation = 0x468; // Size: 8, Type: struct FVector2D
			constexpr auto HoveredWidgetComponent = 0x470; // Size: 8, Type: struct UWidgetComponent*
			constexpr auto LastHitResult = 0x478; // Size: 136, Type: struct FHitResult
			constexpr auto bIsHoveredWidgetInteractable = 0x500; // Size: 1, Type: bool
			constexpr auto bIsHoveredWidgetFocusable = 0x501; // Size: 1, Type: bool
			constexpr auto bIsHoveredWidgetHitTestVisible = 0x502; // Size: 1, Type: bool
	}
} 
