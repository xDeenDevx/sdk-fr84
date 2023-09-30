namespace offsets
{
	namespace UGeometryCollection
	{
			constexpr auto Materials = 0x30; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto CollisionType = 0x40; // Size: 1, Type: enum class ECollisionTypeEnum
			constexpr auto ImplicitType = 0x41; // Size: 1, Type: enum class EImplicitTypeEnum
			constexpr auto MinLevelSetResolution = 0x44; // Size: 4, Type: int32_t
			constexpr auto MaxLevelSetResolution = 0x48; // Size: 4, Type: int32_t
			constexpr auto MinClusterLevelSetResolution = 0x4c; // Size: 4, Type: int32_t
			constexpr auto MaxClusterLevelSetResolution = 0x50; // Size: 4, Type: int32_t
			constexpr auto CollisionObjectReductionPercentage = 0x54; // Size: 4, Type: float
			constexpr auto bMassAsDensity = 0x58; // Size: 1, Type: bool
			constexpr auto Mass = 0x5c; // Size: 4, Type: float
			constexpr auto MinimumMassClamp = 0x60; // Size: 4, Type: float
			constexpr auto CollisionParticlesFraction = 0x64; // Size: 4, Type: float
			constexpr auto MaximumCollisionParticles = 0x68; // Size: 4, Type: int32_t
			constexpr auto SizeSpecificData = 0x70; // Size: 16, Type: struct TArray<struct FGeometryCollectionSizeSpecificData>
			constexpr auto EnableRemovePiecesOnFracture = 0x80; // Size: 1, Type: bool
			constexpr auto RemoveOnFractureMaterials = 0x88; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto PersistentGuid = 0x98; // Size: 16, Type: struct FGuid
			constexpr auto StateGuid = 0xa8; // Size: 16, Type: struct FGuid
			constexpr auto BoneSelectedMaterialIndex = 0xb8; // Size: 4, Type: int32_t
	}
} 
