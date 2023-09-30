namespace offsets
{
	namespace USolarSaveGame
	{
			constexpr auto HasShowNewPlayerGuide = 0x28; // Size: 1, Type: bool
			constexpr auto EditorGameModeId = 0x2c; // Size: 4, Type: int32_t
			constexpr auto NeverShowCheckWindowList = 0x30; // Size: 16, Type: struct TArray<struct FNeverShowCheckWindow>
			constexpr auto HasReadSurvey = 0x40; // Size: 1, Type: bool
			constexpr auto HasReadSurvey2 = 0x41; // Size: 1, Type: bool
			constexpr auto HasPlayedHuntMode = 0x42; // Size: 1, Type: bool
			constexpr auto MatchTimes = 0x43; // Size: 1, Type: char
			constexpr auto HasCompleteTeamUp = 0x44; // Size: 1, Type: bool
			constexpr auto IsMorrowPlayer = 0x45; // Size: 1, Type: bool
			constexpr auto bClickSocialEntranceBtnDiscord = 0x46; // Size: 1, Type: bool
			constexpr auto bClickSocialEntranceBtnFacebook = 0x47; // Size: 1, Type: bool
			constexpr auto bClickSocialEntranceBtnYouTube = 0x48; // Size: 1, Type: bool
			constexpr auto bClickSocialEntranceBtnTikTok = 0x49; // Size: 1, Type: bool
			constexpr auto bClickSocialEntranceBtnInstagram = 0x4a; // Size: 1, Type: bool
			constexpr auto bClickSocialTip = 0x4b; // Size: 1, Type: bool
			constexpr auto bClickLiveBroadcast = 0x4c; // Size: 1, Type: bool
			constexpr auto SocialLinkLastClickTime = 0x50; // Size: 8, Type: int64_t
			constexpr auto bHasReportedOnline15min = 0x58; // Size: 1, Type: bool
			constexpr auto bHasReportedOnline30min = 0x59; // Size: 1, Type: bool
			constexpr auto bHasPlayedPackEnterAnimation = 0x5a; // Size: 1, Type: bool
			constexpr auto bHasClickClanPermission = 0x5b; // Size: 1, Type: bool
			constexpr auto bHasClickVipCard = 0x5c; // Size: 1, Type: bool
			constexpr auto BattlePassID = 0x60; // Size: 4, Type: int32_t
			constexpr auto MarkingPassTaskID = 0x68; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto DisplayedProductIDs = 0x78; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto ClickedPosterRecIDs = 0x88; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto ReadMailIds = 0xa0; // Size: 16, Type: struct TArray<uint32_t>
	}
} 
