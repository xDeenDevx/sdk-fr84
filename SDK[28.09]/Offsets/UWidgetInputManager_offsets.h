namespace offsets
{
	namespace UWidgetInputManager
	{
			constexpr auto OnTouchStartDetected = 0x28; // Size: 16, Type: struct FDelegate
			constexpr auto OnTouchUpdate = 0x38; // Size: 16, Type: struct FDelegate
			constexpr auto OnTouchEndDetected = 0x48; // Size: 16, Type: struct FDelegate
			constexpr auto OnPointerStartDetected = 0x58; // Size: 16, Type: struct FDelegate
			constexpr auto OnPointerUpdate = 0x68; // Size: 16, Type: struct FDelegate
			constexpr auto OnPointerEndDetected = 0x78; // Size: 16, Type: struct FDelegate
			constexpr auto TouchedList = 0x90; // Size: 80, Type: struct TMap<int32_t, struct FVector2D>
			constexpr auto PointerList = 0xe0; // Size: 80, Type: struct TMap<int32_t, struct FVector2D>
	}
} 
