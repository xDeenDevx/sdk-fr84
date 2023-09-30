namespace offsets
{
	namespace UCameraComponent
	{
			constexpr auto FieldOfView = 0x318; // Size: 4, Type: float
			constexpr auto OrthoWidth = 0x31c; // Size: 4, Type: float
			constexpr auto OrthoNearClipPlane = 0x320; // Size: 4, Type: float
			constexpr auto OrthoFarClipPlane = 0x324; // Size: 4, Type: float
			constexpr auto AspectRatio = 0x328; // Size: 4, Type: float
			constexpr auto bConstrainAspectRatio = 0x32c; // Size: 1, Type: char
			constexpr auto bUseFieldOfViewForLOD = 0x32c; // Size: 1, Type: char
			constexpr auto bLockToHmd = 0x32c; // Size: 1, Type: char
			constexpr auto bUsePawnControlRotation = 0x32c; // Size: 1, Type: char
			constexpr auto ProjectionMode = 0x32d; // Size: 1, Type: enum class ECameraProjectionMode
			constexpr auto PostProcessBlendWeight = 0x360; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x390; // Size: 1440, Type: struct FPostProcessSettings
	}
} 
