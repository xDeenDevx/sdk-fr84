namespace offsets
{
	namespace UPhysicalMaterial
	{
			constexpr auto Friction = 0x28; // Size: 4, Type: float
			constexpr auto FrictionCombineMode = 0x2c; // Size: 1, Type: enum class EFrictionCombineMode
			constexpr auto bOverrideFrictionCombineMode = 0x2d; // Size: 1, Type: bool
			constexpr auto Restitution = 0x30; // Size: 4, Type: float
			constexpr auto RestitutionCombineMode = 0x34; // Size: 1, Type: enum class EFrictionCombineMode
			constexpr auto bOverrideRestitutionCombineMode = 0x35; // Size: 1, Type: bool
			constexpr auto Density = 0x38; // Size: 4, Type: float
			constexpr auto RaiseMassToPower = 0x3c; // Size: 4, Type: float
			constexpr auto DestructibleDamageThresholdScale = 0x40; // Size: 4, Type: float
			constexpr auto PhysicalMaterialProperty = 0x48; // Size: 8, Type: struct UPhysicalMaterialPropertyBase*
			constexpr auto SurfaceType = 0x50; // Size: 1, Type: enum class EPhysicalSurface
			constexpr auto TireFrictionScale = 0x54; // Size: 4, Type: float
			constexpr auto TireFrictionScales = 0x58; // Size: 16, Type: struct TArray<struct FTireFrictionScalePair>
	}
} 
