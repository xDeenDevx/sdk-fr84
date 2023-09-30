namespace offsets
{
	namespace USolarUserWidget
	{
			constexpr auto WidgetLayerLevel = 0x260; // Size: 1, Type: enum class EWidgetLayerLevel
			constexpr auto bIsPersistent = 0x261; // Size: 1, Type: bool
			constexpr auto WidgetScope = 0x262; // Size: 1, Type: enum class EWidgetScope
			constexpr auto CaptureInput = 0x263; // Size: 1, Type: enum class EInputCapture
			constexpr auto bHideCursorDuringCapture = 0x264; // Size: 1, Type: bool
			constexpr auto MyRoot = 0x268; // Size: 4, Type: int32_t
			constexpr auto widgetkey = 0x270; // Size: 16, Type: struct FString
			constexpr auto bReceiveKeyMap = 0x280; // Size: 1, Type: bool
			constexpr auto bReceiveShowMouse = 0x281; // Size: 1, Type: bool
			constexpr auto ShowScope = 0x282; // Size: 1, Type: enum class EScope
			constexpr auto bShowTransBlackAnim = 0x283; // Size: 1, Type: bool
			constexpr auto InputManagerClass = 0x288; // Size: 8, Type: UWidgetInputManager*
			constexpr auto InputManager = 0x290; // Size: 8, Type: struct UWidgetInputManager*
			constexpr auto AnimationsMap = 0x298; // Size: 80, Type: struct TMap<struct FName, struct UWidgetAnimation*>
			constexpr auto PlayingAnimation = 0x2e8; // Size: 8, Type: struct TWeakObjectPtr<UWidgetAnimation>
			constexpr auto PendingPlayAnimations = 0x308; // Size: 16, Type: struct TArray<struct FPlayAnimationParams>
			constexpr auto WidgetTickEnabled = 0x318; // Size: 1, Type: bool
			constexpr auto InputActionContext = 0x320; // Size: 8, Type: struct USolarInputActionContext*
			constexpr auto AllSolarUserWidgetChilds = 0x338; // Size: 16, Type: struct TArray<struct USolarUserWidget*>
	}
} 
