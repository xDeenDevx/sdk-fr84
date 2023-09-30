namespace offsets
{
	namespace UHUD_SkydiveScale
	{
			constexpr auto ProgressBar_Speed = 0x270; // Size: 8, Type: struct UProgressBar*
			constexpr auto AltitudeDisplayAxis = 0x278; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto AltitudeDisplayBox = 0x280; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto SpeedDisplayAxis = 0x288; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto SpeedDisplayBox = 0x290; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto GroundDisplayAxis = 0x298; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto GroundAltitudeScale = 0x2a0; // Size: 8, Type: struct UImage*
			constexpr auto AltitudeWidgetAngleRange = 0x2a8; // Size: 8, Type: struct FVector2D
			constexpr auto SpeedWidgetAngleRange = 0x2b0; // Size: 8, Type: struct FVector2D
			constexpr auto MinSpeed = 0x2b8; // Size: 4, Type: float
			constexpr auto MaxSpeed = 0x2bc; // Size: 4, Type: float
			constexpr auto AltitudeLocalTextID = 0x2c0; // Size: 4, Type: struct FWrappedLocalTextID
			constexpr auto SpeedLocalTextID = 0x2c4; // Size: 4, Type: struct FWrappedLocalTextID
			constexpr auto AerialReconnaissanceRadius = 0x2d0; // Size: 4, Type: float
			constexpr auto AerialReconnaissanceInterval = 0x2d4; // Size: 4, Type: float
			constexpr auto AerialReconnaissanceMarkWidgetClass = 0x2d8; // Size: 8, Type: UAerialReconnaissanceMarkWidget*
			constexpr auto AerialReconnaissanceConfigMap = 0x2e0; // Size: 80, Type: struct TMap<enum class ESlateDetailMode, struct FSolarAerialReconnaissanceConfig>
			constexpr auto MarkPanel = 0x330; // Size: 8, Type: struct UCanvasPanel*
	}
} 
