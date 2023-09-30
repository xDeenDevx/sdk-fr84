namespace offsets
{
	namespace USolarSkillGA_Summon
	{
			constexpr auto SummonConfig = 0x5e8; // Size: 8, Type: struct USolarSummonDetectionConfig*
			constexpr auto SummonFailedNoticeID = 0x5f0; // Size: 4, Type: int32_t
			constexpr auto bUseKeyUpLocationSummon = 0x5f4; // Size: 1, Type: bool
			constexpr auto SummonTargetActor = 0x5f8; // Size: 8, Type: struct TWeakObjectPtr<ASolarSkillGATA_Summon>
			constexpr auto ActiveMontageForGunAim = 0x600; // Size: 8, Type: struct UAnimMontage*
			constexpr auto FireMontageForGunAim = 0x608; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CancelMontageForGunAim = 0x610; // Size: 8, Type: struct UAnimMontage*
	}
} 
