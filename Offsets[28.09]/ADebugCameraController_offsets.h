namespace offsets
{
	namespace ADebugCameraController
	{
			constexpr auto bShowSelectedInfo = 0x5a8; // Size: 1, Type: char
			constexpr auto bIsFrozenRendering = 0x5a8; // Size: 1, Type: char
			constexpr auto bIsOrbitingSelectedActor = 0x5a8; // Size: 1, Type: char
			constexpr auto bOrbitPivotUseCenter = 0x5a8; // Size: 1, Type: char
			constexpr auto bEnableBufferVisualization = 0x5a8; // Size: 1, Type: char
			constexpr auto bEnableBufferVisualizationFullMode = 0x5a8; // Size: 1, Type: char
			constexpr auto bIsBufferVisualizationInputSetup = 0x5a8; // Size: 1, Type: char
			constexpr auto bLastDisplayEnabled = 0x5a8; // Size: 1, Type: char
			constexpr auto DrawFrustum = 0x5b0; // Size: 8, Type: struct UDrawFrustumComponent*
			constexpr auto SelectedActor = 0x5b8; // Size: 8, Type: struct AActor*
			constexpr auto SelectedComponent = 0x5c0; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto SelectedHitPoint = 0x5c8; // Size: 136, Type: struct FHitResult
			constexpr auto OriginalControllerRef = 0x650; // Size: 8, Type: struct APlayerController*
			constexpr auto OriginalPlayer = 0x658; // Size: 8, Type: struct UPlayer*
			constexpr auto SpeedScale = 0x660; // Size: 4, Type: float
			constexpr auto InitialMaxSpeed = 0x664; // Size: 4, Type: float
			constexpr auto InitialAccel = 0x668; // Size: 4, Type: float
			constexpr auto InitialDecel = 0x66c; // Size: 4, Type: float
	}
} 
