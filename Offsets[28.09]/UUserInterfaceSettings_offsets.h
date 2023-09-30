namespace offsets
{
	namespace UUserInterfaceSettings
	{
			constexpr auto RenderFocusRule = 0x38; // Size: 1, Type: enum class ERenderFocusRule
			constexpr auto HardwareCursors = 0x40; // Size: 80, Type: struct TMap<enum class EMouseCursor, struct FHardwareCursorReference>
			constexpr auto SoftwareCursors = 0x90; // Size: 80, Type: struct TMap<enum class EMouseCursor, struct FSoftClassPath>
			constexpr auto bEditorUseSoftwareCursorWidgets = 0xe0; // Size: 1, Type: bool
			constexpr auto DefaultCursor = 0xe8; // Size: 24, Type: struct FSoftClassPath
			constexpr auto TextEditBeamCursor = 0x100; // Size: 24, Type: struct FSoftClassPath
			constexpr auto CrosshairsCursor = 0x118; // Size: 24, Type: struct FSoftClassPath
			constexpr auto HandCursor = 0x130; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GrabHandCursor = 0x148; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GrabHandClosedCursor = 0x160; // Size: 24, Type: struct FSoftClassPath
			constexpr auto SlashedCircleCursor = 0x178; // Size: 24, Type: struct FSoftClassPath
			constexpr auto ApplicationScale = 0x190; // Size: 4, Type: float
			constexpr auto StandardScreenSize = 0x194; // Size: 8, Type: struct FIntPoint
			constexpr auto UIScaleRule = 0x19c; // Size: 1, Type: enum class EUIScalingRule
			constexpr auto CustomScalingRuleClass = 0x1a0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto UIScaleCurve = 0x1b8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto bAllowHighDPIInGameMode = 0x240; // Size: 1, Type: bool
			constexpr auto bLoadWidgetsOnDedicatedServer = 0x241; // Size: 1, Type: bool
			constexpr auto GlobalColorThemeData = 0x248; // Size: 80, Type: struct TMap<struct FString, struct FGlobalColorThemeData>
			constexpr auto CursorClasses = 0x298; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto CustomScalingRuleClassInstance = 0x2a8; // Size: 8, Type: UObject*
			constexpr auto CustomScalingRule = 0x2b0; // Size: 8, Type: struct UDPICustomScalingRule*
	}
} 
