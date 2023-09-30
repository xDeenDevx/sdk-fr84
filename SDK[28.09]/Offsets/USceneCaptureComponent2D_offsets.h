namespace offsets
{
	namespace USceneCaptureComponent2D
	{
			constexpr auto ProjectionType = 0x3b0; // Size: 1, Type: enum class ECameraProjectionMode
			constexpr auto FOVAngle = 0x3b4; // Size: 4, Type: float
			constexpr auto OrthoWidth = 0x3b8; // Size: 4, Type: float
			constexpr auto TextureTarget = 0x3c0; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto bAutoSceneCapture2DSize = 0x3c8; // Size: 1, Type: char
			constexpr auto CompositeMode = 0x3c9; // Size: 1, Type: enum class ESceneCaptureCompositeMode
			constexpr auto PostProcessSettings = 0x3d0; // Size: 1440, Type: struct FPostProcessSettings
			constexpr auto PostProcessBlendWeight = 0x970; // Size: 4, Type: float
			constexpr auto bOverride_CustomNearClippingPlane = 0x974; // Size: 1, Type: char
			constexpr auto CustomNearClippingPlane = 0x978; // Size: 4, Type: float
			constexpr auto bUseCustomProjectionMatrix = 0x97c; // Size: 1, Type: bool
			constexpr auto CustomProjectionMatrix = 0x980; // Size: 64, Type: struct FMatrix
			constexpr auto bEnableClipPlane = 0x9c0; // Size: 1, Type: bool
			constexpr auto ClipPlaneBase = 0x9c4; // Size: 12, Type: struct FVector
			constexpr auto ClipPlaneNormal = 0x9d0; // Size: 12, Type: struct FVector
			constexpr auto bCameraCutThisFrame = 0x9dc; // Size: 1, Type: char
			constexpr auto bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 0x9dc; // Size: 1, Type: char
			constexpr auto bDisableFlipCopyGLES = 0x9e0; // Size: 1, Type: bool
			constexpr auto bControlSceneCaptureComponent2DFPS = 0x9e1; // Size: 1, Type: bool
			constexpr auto MaxSceneCaptureComponent2DFPS = 0x9e4; // Size: 4, Type: int32_t
	}
} 
