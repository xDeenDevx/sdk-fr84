namespace offsets
{
	namespace UActionWheelWidget
	{
			constexpr auto Overlay_Point = 0x358; // Size: 8, Type: struct UOverlay*
			constexpr auto SelectedIndex = 0x3b8; // Size: 4, Type: int32_t
			constexpr auto WheelActionItemCount = 0x3bc; // Size: 4, Type: int32_t
			constexpr auto WheelActionItemCountMax = 0x3c0; // Size: 4, Type: int32_t
			constexpr auto OperationAreaRadius = 0x3c4; // Size: 4, Type: float
			constexpr auto CancelAreaRadius = 0x3c8; // Size: 4, Type: float
			constexpr auto PointMoveSensitivity = 0x3cc; // Size: 4, Type: float
			constexpr auto ManualSwitchThreshold_PC = 0x3d0; // Size: 4, Type: float
			constexpr auto ManualSwitchThreshold_GamePad = 0x3d4; // Size: 4, Type: float
			constexpr auto ManualSwitchThreshold_Mobile = 0x3d8; // Size: 4, Type: float
			constexpr auto groupid = 0x3dc; // Size: 4, Type: int32_t
			constexpr auto PageCount = 0x3e0; // Size: 4, Type: int32_t
			constexpr auto CurrentPage = 0x3e4; // Size: 4, Type: int32_t
			constexpr auto WheelConfigs = 0x3f0; // Size: 216, Type: struct FActionWheelConfig
			constexpr auto ActionWheelWidgetFunctionObjs = 0x4c8; // Size: 80, Type: struct TMap<int32_t, struct UActionWheelWidgetFunctionBase*>
			constexpr auto ActionWheelConfigDataTable = 0x518; // Size: 8, Type: struct UDataTable*
			constexpr auto ActionWheelIsOpened = 0x520; // Size: 1, Type: bool
			constexpr auto ValidEmojiUseDistance = 0x524; // Size: 4, Type: float
	}
} 
