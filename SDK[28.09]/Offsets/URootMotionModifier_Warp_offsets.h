namespace offsets
{
	namespace URootMotionModifier_Warp
	{
			constexpr auto WarpTargetName = 0xb8; // Size: 8, Type: struct FName
			constexpr auto WarpPointAnimProvider = 0xc0; // Size: 1, Type: enum class EWarpPointAnimProvider
			constexpr auto WarpPointAnimTransform = 0xd0; // Size: 48, Type: struct FTransform
			constexpr auto WarpPointAnimBoneName = 0x100; // Size: 8, Type: struct FName
			constexpr auto bWarpTranslation = 0x108; // Size: 1, Type: bool
			constexpr auto bIgnoreZAxis = 0x109; // Size: 1, Type: bool
			constexpr auto bOnlyZAxis = 0x10a; // Size: 1, Type: bool
			constexpr auto bWarpRotation = 0x10b; // Size: 1, Type: bool
			constexpr auto RotationType = 0x10c; // Size: 1, Type: enum class EMotionWarpRotationType
			constexpr auto WarpRotationTimeMultiplier = 0x110; // Size: 4, Type: float
			constexpr auto CachedTargetTransform = 0x120; // Size: 48, Type: struct FTransform
	}
} 
