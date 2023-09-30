namespace offsets
{
	namespace USkinnedMeshComponent
	{
			constexpr auto SkeletalMesh = 0x578; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto MasterPoseComponent = 0x580; // Size: 8, Type: struct TWeakObjectPtr<USkinnedMeshComponent>
			constexpr auto SkinCacheUsage = 0x588; // Size: 16, Type: struct TArray<enum class ESkinCacheUsage>
			constexpr auto PhysicsAssetOverride = 0x690; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto ForcedLodModel = 0x698; // Size: 4, Type: int32_t
			constexpr auto MinLodModel = 0x69c; // Size: 4, Type: int32_t
			constexpr auto StreamingDistanceMultiplier = 0x6ac; // Size: 4, Type: float
			constexpr auto LODInfo = 0x6b8; // Size: 16, Type: struct TArray<struct FSkelMeshComponentLODInfo>
			constexpr auto VisibilityBasedAnimTickOption = 0x6ec; // Size: 1, Type: enum class EVisibilityBasedAnimTickOption
			constexpr auto bOverrideMinLod = 0x6ee; // Size: 1, Type: char
			constexpr auto bUseBoundsFromMasterPoseComponent = 0x6ee; // Size: 1, Type: char
			constexpr auto bForceWireframe = 0x6ee; // Size: 1, Type: char
			constexpr auto bDisplayBones = 0x6ee; // Size: 1, Type: char
			constexpr auto bDisableMorphTarget = 0x6ee; // Size: 1, Type: char
			constexpr auto bHideSkin = 0x6ee; // Size: 1, Type: char
			constexpr auto bPerBoneMotionBlur = 0x6ef; // Size: 1, Type: char
			constexpr auto bComponentUseFixedSkelBounds = 0x6ef; // Size: 1, Type: char
			constexpr auto bConsiderAllBodiesForBounds = 0x6ef; // Size: 1, Type: char
			constexpr auto bOverrideMeshMinScreenSize = 0x6ef; // Size: 1, Type: char
			constexpr auto bSyncAttachParentLOD = 0x6ef; // Size: 1, Type: char
			constexpr auto bCanHighlightSelectedSections = 0x6ef; // Size: 1, Type: char
			constexpr auto bRecentlyRendered = 0x6ef; // Size: 1, Type: char
			constexpr auto bCastCapsuleDirectShadow = 0x6ef; // Size: 1, Type: char
			constexpr auto bCastCapsuleIndirectShadow = 0x6f0; // Size: 1, Type: char
			constexpr auto bCPUSkinning = 0x6f0; // Size: 1, Type: char
			constexpr auto bEnableUpdateRateOptimizations = 0x6f0; // Size: 1, Type: char
			constexpr auto bDisplayDebugUpdateRateOptimizations = 0x6f0; // Size: 1, Type: char
			constexpr auto bRenderStatic = 0x6f0; // Size: 1, Type: char
			constexpr auto bIgnoreMasterPoseComponentLOD = 0x6f0; // Size: 1, Type: char
			constexpr auto bCachedLocalBoundsUpToDate = 0x6f1; // Size: 1, Type: char
			constexpr auto bForceMeshObjectUpdate = 0x6f1; // Size: 1, Type: char
			constexpr auto CapsuleIndirectShadowMinVisibility = 0x6f4; // Size: 4, Type: float
			constexpr auto CachedWorldSpaceBounds = 0x708; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto CachedWorldToLocalTransform = 0x730; // Size: 64, Type: struct FMatrix
	}
} 
