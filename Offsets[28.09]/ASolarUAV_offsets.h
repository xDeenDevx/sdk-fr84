namespace offsets
{
	namespace ASolarUAV
	{
			constexpr auto bShowDebug = 0x3e0; // Size: 1, Type: bool
			constexpr auto DebugLineThickness = 0x3e4; // Size: 4, Type: float
			constexpr auto Mesh = 0x3e8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto AttachCharacterSocketName = 0x3f0; // Size: 8, Type: struct FName
			constexpr auto AppearAnim = 0x3f8; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto AppearAnimLength = 0x400; // Size: 4, Type: float
			constexpr auto DisappearAnim = 0x408; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto DisppearAnimLength = 0x410; // Size: 4, Type: float
			constexpr auto bProbeCollisionConfig = 0x420; // Size: 1, Type: bool
			constexpr auto ProbeCollisionInterval = 0x424; // Size: 4, Type: float
			constexpr auto ProbeCollisionRadius = 0x428; // Size: 4, Type: float
			constexpr auto AvoidCollisionMaxHeight = 0x42c; // Size: 4, Type: float
			constexpr auto AvoidCollisionOverTime = 0x430; // Size: 4, Type: float
			constexpr auto AvoidCollisionCDTime = 0x434; // Size: 4, Type: float
	}
} 
