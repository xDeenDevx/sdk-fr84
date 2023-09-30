namespace offsets
{
	namespace UChaGA_ThrowSkill
	{
			constexpr auto SkillAnimType = 0x460; // Size: 1, Type: enum class ESkillAnimType
			constexpr auto SkillAnimRightHandType = 0x461; // Size: 1, Type: enum class ESkillAnimRightHandType
			constexpr auto bShouldWaitMontageNotifyToThrow = 0x462; // Size: 1, Type: bool
			constexpr auto MontageNotifyToWait = 0x464; // Size: 8, Type: struct FName
			constexpr auto bCanHoldWeapon = 0x46c; // Size: 1, Type: bool
			constexpr auto ActiveMontageNotifyToReady = 0x470; // Size: 8, Type: struct FName
			constexpr auto bShouldWaitActiveMontageNotifyToPrepare = 0x478; // Size: 1, Type: bool
			constexpr auto ActiveMontageNotifyToPrepare = 0x47c; // Size: 8, Type: struct FName
			constexpr auto bShouldWaitActiveMontageNotifyToThrow = 0x484; // Size: 1, Type: bool
			constexpr auto ActiveMontageNotifyToThrow = 0x488; // Size: 8, Type: struct FName
			constexpr auto MontageSectionToJumpOnInputReleased = 0x490; // Size: 8, Type: struct FName
			constexpr auto WaitThrowTask = 0x498; // Size: 8, Type: struct UAbilityTask_NetworkSyncPoint*
			constexpr auto ActiveMontage = 0x4a0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FireMontage = 0x4a8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CancelMontage = 0x4b0; // Size: 8, Type: struct UAnimMontage*
	}
} 
