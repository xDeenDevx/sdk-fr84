namespace offsets
{
	namespace USkeletalMesh
	{
			constexpr auto Skeleton = 0x60; // Size: 8, Type: struct USkeleton*
			constexpr auto ImportedBounds = 0x68; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto ExtendedBounds = 0x84; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto PositiveBoundsExtension = 0xa0; // Size: 12, Type: struct FVector
			constexpr auto NegativeBoundsExtension = 0xac; // Size: 12, Type: struct FVector
			constexpr auto Materials = 0xb8; // Size: 16, Type: struct TArray<struct FSkeletalMaterial>
			constexpr auto SkelMirrorTable = 0xc8; // Size: 16, Type: struct TArray<struct FBoneMirrorInfo>
			constexpr auto LODInfo = 0xd8; // Size: 16, Type: struct TArray<struct FSkeletalMeshLODInfo>
			constexpr auto MinLOD = 0x138; // Size: 4, Type: struct FPerPlatformInt
			constexpr auto LODGroup = 0x13c; // Size: 1, Type: enum class ESkeletalMeshLODGroup
			constexpr auto MinScreenSize = 0x140; // Size: 4, Type: float
			constexpr auto DisableBelowMinLodStripping = 0x144; // Size: 1, Type: struct FPerPlatformBool
			constexpr auto SkelMirrorAxis = 0x145; // Size: 1, Type: enum class EAxis
			constexpr auto SkelMirrorFlipAxis = 0x146; // Size: 1, Type: enum class EAxis
			constexpr auto bUseFullPrecisionUVs = 0x147; // Size: 1, Type: char
			constexpr auto bUseHighPrecisionTangentBasis = 0x147; // Size: 1, Type: char
			constexpr auto bHasBeenSimplified = 0x147; // Size: 1, Type: char
			constexpr auto bHasVertexColors = 0x147; // Size: 1, Type: char
			constexpr auto bEnablePerPolyCollision = 0x147; // Size: 1, Type: char
			constexpr auto BodySetup = 0x148; // Size: 8, Type: struct UBodySetup*
			constexpr auto PhysicsAsset = 0x150; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto ShadowPhysicsAsset = 0x158; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto NodeMappingData = 0x160; // Size: 16, Type: struct TArray<struct UNodeMappingContainer*>
			constexpr auto MorphTargets = 0x170; // Size: 16, Type: struct TArray<struct UMorphTarget*>
			constexpr auto PostProcessAnimBlueprint = 0x2f8; // Size: 8, Type: UAnimInstance*
			constexpr auto MeshClothingAssets = 0x300; // Size: 16, Type: struct TArray<struct UClothingAssetBase*>
			constexpr auto SamplingInfo = 0x310; // Size: 48, Type: struct FSkeletalMeshSamplingInfo
			constexpr auto AssetUserData = 0x340; // Size: 16, Type: struct TArray<struct UAssetUserData*>
			constexpr auto Sockets = 0x358; // Size: 16, Type: struct TArray<struct USkeletalMeshSocket*>
			constexpr auto SkinWeightProfiles = 0x378; // Size: 16, Type: struct TArray<struct FSkinWeightProfileInfo>
	}
} 
