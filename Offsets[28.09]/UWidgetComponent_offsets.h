namespace offsets
{
	namespace UWidgetComponent
	{
			constexpr auto Space = 0x578; // Size: 1, Type: enum class EWidgetSpace
			constexpr auto TimingPolicy = 0x579; // Size: 1, Type: enum class EWidgetTimingPolicy
			constexpr auto WidgetClass = 0x580; // Size: 8, Type: UUserWidget*
			constexpr auto DrawSize = 0x588; // Size: 8, Type: struct FIntPoint
			constexpr auto bManuallyRedraw = 0x590; // Size: 1, Type: bool
			constexpr auto bRedrawRequested = 0x591; // Size: 1, Type: bool
			constexpr auto RedrawTime = 0x594; // Size: 4, Type: float
			constexpr auto CurrentDrawSize = 0x5a0; // Size: 8, Type: struct FIntPoint
			constexpr auto bDrawAtDesiredSize = 0x5a8; // Size: 1, Type: bool
			constexpr auto Pivot = 0x5ac; // Size: 8, Type: struct FVector2D
			constexpr auto bReceiveHardwareInput = 0x5b4; // Size: 1, Type: bool
			constexpr auto bWindowFocusable = 0x5b5; // Size: 1, Type: bool
			constexpr auto WindowVisibility = 0x5b6; // Size: 1, Type: enum class EWindowVisibility
			constexpr auto bApplyGammaCorrection = 0x5b7; // Size: 1, Type: bool
			constexpr auto OwnerPlayer = 0x5b8; // Size: 8, Type: struct ULocalPlayer*
			constexpr auto BackgroundColor = 0x5c0; // Size: 16, Type: struct FLinearColor
			constexpr auto TintColorAndOpacity = 0x5d0; // Size: 16, Type: struct FLinearColor
			constexpr auto OpacityFromTexture = 0x5e0; // Size: 4, Type: float
			constexpr auto BlendMode = 0x5e4; // Size: 1, Type: enum class EWidgetBlendMode
			constexpr auto bIsTwoSided = 0x5e5; // Size: 1, Type: bool
			constexpr auto TickWhenOffscreen = 0x5e6; // Size: 1, Type: bool
			constexpr auto Widget = 0x5e8; // Size: 8, Type: struct UUserWidget*
			constexpr auto BodySetup = 0x610; // Size: 8, Type: struct UBodySetup*
			constexpr auto TranslucentMaterial = 0x618; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TranslucentMaterial_OneSided = 0x620; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OpaqueMaterial = 0x628; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OpaqueMaterial_OneSided = 0x630; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaskedMaterial = 0x638; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaskedMaterial_OneSided = 0x640; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto RenderTarget = 0x648; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto MaterialInstance = 0x650; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto bAddedToScreen = 0x658; // Size: 1, Type: bool
			constexpr auto bEditTimeUsable = 0x659; // Size: 1, Type: bool
			constexpr auto SharedLayerName = 0x65c; // Size: 8, Type: struct FName
			constexpr auto LayerZOrder = 0x664; // Size: 4, Type: int32_t
			constexpr auto GeometryMode = 0x668; // Size: 1, Type: enum class EWidgetGeometryMode
			constexpr auto CylinderArcAngle = 0x66c; // Size: 4, Type: float
	}
} 
