namespace offsets
{
	namespace URootMotionModifier_AdjustmentBlendWarp
	{
			constexpr auto bWarpIKBones = 0x1b0; // Size: 1, Type: bool
			constexpr auto IKBones = 0x1b8; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto CachedMeshTransform = 0x1d0; // Size: 48, Type: struct FTransform
			constexpr auto CachedMeshRelativeTransform = 0x200; // Size: 48, Type: struct FTransform
			constexpr auto CachedRootMotion = 0x230; // Size: 48, Type: struct FTransform
			constexpr auto Result = 0x260; // Size: 32, Type: struct FAnimSequenceTrackContainer
	}
} 
