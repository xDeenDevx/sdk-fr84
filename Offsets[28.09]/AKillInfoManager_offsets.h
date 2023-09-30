namespace offsets
{
	namespace AKillInfoManager
	{
			constexpr auto KillEffectsOrder = 0x228; // Size: 16, Type: struct TArray<enum class EKillNoticeType>
			constexpr auto GlobalInfoList = 0x238; // Size: 16, Type: struct TArray<enum class EKillNoticeType>
			constexpr auto KillLeaderID = 0x398; // Size: 16, Type: struct FString
			constexpr auto KillLeaderKillNum = 0x3a8; // Size: 4, Type: int32_t
			constexpr auto AnnihilatorID = 0x3b0; // Size: 16, Type: struct FString
			constexpr auto KillLeaderChangeVoiceName = 0x3c8; // Size: 16, Type: struct FString
			constexpr auto KillLeaderShutDownVoiceName = 0x3d8; // Size: 16, Type: struct FString
			constexpr auto BeKillLeaderVoiceName = 0x3e8; // Size: 16, Type: struct FString
			constexpr auto ShutDownKillLeaderVoiceName = 0x3f8; // Size: 16, Type: struct FString
			constexpr auto KillTotalVoiceMap = 0x408; // Size: 80, Type: struct TMap<int32_t, struct FString>
			constexpr auto RevengeVoiceName = 0x458; // Size: 16, Type: struct FString
			constexpr auto KillDownVoiceName = 0x468; // Size: 16, Type: struct FString
			constexpr auto ClearTeamVoiceName = 0x478; // Size: 16, Type: struct FString
			constexpr auto ShutDownVoiceName = 0x488; // Size: 16, Type: struct FString
			constexpr auto KillDefenderVoiceName = 0x498; // Size: 16, Type: struct FString
			constexpr auto NoticeImageConfig = 0x4a8; // Size: 8, Type: struct UCustomNoticeImageTable*
	}
} 
