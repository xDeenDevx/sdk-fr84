namespace offsets
{
	namespace UHUD_Teammate_State
	{
			constexpr auto SizeBox_Relive = 0x350; // Size: 8, Type: struct USizeBox*
			constexpr auto img_Relive = 0x358; // Size: 8, Type: struct UImage*
			constexpr auto SizeBox_Container = 0x360; // Size: 8, Type: struct USizeBox*
			constexpr auto CanvasPanel_Container = 0x368; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Loading = 0x370; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Img_Loading = 0x378; // Size: 8, Type: struct UImage*
			constexpr auto Img_PlayerBG = 0x380; // Size: 8, Type: struct UImage*
			constexpr auto HP = 0x388; // Size: 8, Type: struct UOverlay*
			constexpr auto Armor = 0x390; // Size: 8, Type: struct UOverlay*
			constexpr auto AdvBar_Shield_A = 0x398; // Size: 8, Type: struct USolarShieldProgressBoard*
			constexpr auto AdvBar_HP = 0x3a8; // Size: 8, Type: struct USolarHPProgressBoard*
			constexpr auto Txt_Lvl = 0x3b0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Img_Head = 0x3b8; // Size: 8, Type: struct UImage*
			constexpr auto ScaleBox_NickName = 0x3c0; // Size: 8, Type: struct UScaleBox*
			constexpr auto Text_NickName = 0x3c8; // Size: 8, Type: struct UTextBlock*
			constexpr auto Img_Tip_MarkedPoint = 0x3d0; // Size: 8, Type: struct UImage*
			constexpr auto HorizontalBox_States = 0x3d8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Img_Icon_AppDeactivatedOrOffline = 0x3e0; // Size: 8, Type: struct UImage*
			constexpr auto Img_OutGame = 0x3e8; // Size: 8, Type: struct UImage*
			constexpr auto SizeBox_Vehicle = 0x3f0; // Size: 8, Type: struct USizeBox*
			constexpr auto Img_Icon_Vehicle = 0x3f8; // Size: 8, Type: struct UImage*
			constexpr auto WidgetSwitcher_SkydiveState = 0x400; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto WidgetSwitcher_SkydiveLeaderPos = 0x408; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto WidgetSwitcher_FlyLeaderPos = 0x410; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto Img_PlayerCover = 0x418; // Size: 8, Type: struct UImage*
			constexpr auto CanvasPanel_Respond = 0x420; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto ProgressBarRespond = 0x428; // Size: 8, Type: struct UProgressBar*
			constexpr auto BtnRespond = 0x430; // Size: 8, Type: struct USolarButton*
			constexpr auto UI_Component_NationalFlag = 0x438; // Size: 8, Type: struct UUIComponentNationalFlag*
			constexpr auto UI_Input_Device = 0x440; // Size: 8, Type: struct USolarUserWidget*
			constexpr auto IconRespond = 0x448; // Size: 8, Type: struct UImage*
			constexpr auto Waiting_Invite_Anim = 0x450; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Waiting_Follow_Anim = 0x458; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto ResurrectionCountdown_Anim = 0x460; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto RespondLoopAnim = 0x468; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto RespondedAnim = 0x470; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Enter_Relive_Anim = 0x478; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Loop_Relive_Anim = 0x480; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto CD_Relive_Anim = 0x488; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Help_Loop = 0x490; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Remind_Loop = 0x498; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_State_Loop = 0x4a0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Fire_Anim = 0x4a8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Overlay_Countdown = 0x4b0; // Size: 8, Type: struct UOverlay*
			constexpr auto Progress_ResurrectionCD = 0x4b8; // Size: 8, Type: struct UImage*
			constexpr auto Progress_RecyclingResurrection = 0x4c0; // Size: 8, Type: struct UImage*
			constexpr auto Img_KillLeader = 0x4c8; // Size: 8, Type: struct UImage*
			constexpr auto Panel_ResurrectTime = 0x4d0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Txt_ResurrectTime = 0x4d8; // Size: 8, Type: struct UTextBlock*
			constexpr auto IndexInTeam = 0x4e0; // Size: 1, Type: char
			constexpr auto ReliveState = 0x4e1; // Size: 1, Type: char
			constexpr auto Profession = 0x4e4; // Size: 4, Type: int32_t
			constexpr auto MinDisplayHpValue = 0x4e8; // Size: 4, Type: float
			constexpr auto bIgnoreSelfAction = 0x4ec; // Size: 1, Type: bool
			constexpr auto FireAnimLoopSpeed = 0x4f0; // Size: 4, Type: float
			constexpr auto FireAnimEndSpeed = 0x4f4; // Size: 4, Type: float
			constexpr auto ReliveStateImages = 0x500; // Size: 16, Type: struct TArray<struct FSlateBrush>
			constexpr auto PosInTeamColor = 0x510; // Size: 80, Type: struct TMap<char, struct FLinearColor>
	}
} 
