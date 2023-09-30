namespace offsets
{
	namespace UMotionWarpingComponent
	{
			constexpr auto bSearchForWindowsInAnimsWithinMontages = 0xb0; // Size: 1, Type: bool
			constexpr auto OnPreUpdate = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CharacterOwner = 0xc8; // Size: 8, Type: struct TWeakObjectPtr<ACharacter>
			constexpr auto Modifiers = 0xd0; // Size: 16, Type: struct TArray<struct URootMotionModifier*>
			constexpr auto WarpTargetMap = 0xe0; // Size: 80, Type: struct TMap<struct FName, struct FMotionWarpingTarget>
	}
} 
