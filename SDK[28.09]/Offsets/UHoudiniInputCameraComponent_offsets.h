namespace offsets
{
	namespace UHoudiniInputCameraComponent
	{
			constexpr auto FOV = 0x120; // Size: 4, Type: float
			constexpr auto AspectRatio = 0x124; // Size: 4, Type: float
			constexpr auto bIsOrthographic = 0x128; // Size: 1, Type: bool
			constexpr auto OrthoWidth = 0x12c; // Size: 4, Type: float
			constexpr auto OrthoNearClipPlane = 0x130; // Size: 4, Type: float
			constexpr auto OrthoFarClipPlane = 0x134; // Size: 4, Type: float
	}
} 
