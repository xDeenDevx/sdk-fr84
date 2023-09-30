namespace offsets
{
	namespace UOBScoreboardSingleTeam
	{
			constexpr auto SideName = 0x350; // Size: 16, Type: struct FString
			constexpr auto Rank = 0x360; // Size: 4, Type: int32_t
			constexpr auto UIOBRoot = 0x368; // Size: 8, Type: struct UOBSettlementRoot*
			constexpr auto Txt_TeamNumber = 0x370; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Img_TitleBox = 0x378; // Size: 8, Type: struct USolarImage*
			constexpr auto Img_TitleBg = 0x380; // Size: 8, Type: struct USolarImage*
			constexpr auto Btn_ViewDetail = 0x388; // Size: 8, Type: struct USolarButton*
			constexpr auto Overlay_Spectating = 0x390; // Size: 8, Type: struct UOverlay*
			constexpr auto Panel_ScoreboardUnit = 0x398; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto ParentScoreboard = 0x3a0; // Size: 8, Type: struct UOBScoreboard*
			constexpr auto CurrentDetailedInfo = 0x3a8; // Size: 16, Type: struct TArray<struct FDetailedListViewInfo>
			constexpr auto TeamID = 0x3b8; // Size: 1, Type: char
			constexpr auto TeamName = 0x3c0; // Size: 16, Type: struct FString
			constexpr auto Teammate = 0x3d0; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
	}
} 
