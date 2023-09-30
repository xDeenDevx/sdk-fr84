namespace offsets
{
	namespace UMovieSceneControlRigParameterSection
	{
			constexpr auto ControlRig = 0x140; // Size: 8, Type: struct UControlRig*
			constexpr auto ControlsMask = 0x148; // Size: 16, Type: struct TArray<bool>
			constexpr auto TransformMask = 0x158; // Size: 4, Type: struct FMovieSceneTransformMask
			constexpr auto bAdditive = 0x15c; // Size: 1, Type: bool
			constexpr auto bApplyBoneFilter = 0x15d; // Size: 1, Type: bool
			constexpr auto BoneFilter = 0x160; // Size: 16, Type: struct FInputBlendPose
			constexpr auto Weight = 0x170; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto ControlChannelMap = 0x210; // Size: 80, Type: struct TMap<struct FName, struct FChannelMapInfo>
	}
} 
