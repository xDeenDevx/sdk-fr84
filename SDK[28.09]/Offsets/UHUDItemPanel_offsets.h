namespace offsets
{
	namespace UHUDItemPanel
	{
			constexpr auto Panel_ShieldAutoRE = 0x358; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Btn_Restore = 0x360; // Size: 8, Type: struct UButton*
			constexpr auto Img_Restore = 0x368; // Size: 8, Type: struct UImage*
			constexpr auto Txt_Restore_Num = 0x370; // Size: 8, Type: struct UTextBlock*
			constexpr auto Btn_Change = 0x378; // Size: 8, Type: struct UButton*
			constexpr auto Img_Shield_FX = 0x380; // Size: 8, Type: struct UImage*
			constexpr auto Panel_DoubleShiel_VX = 0x388; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Unavailable_Restore = 0x390; // Size: 8, Type: struct UOverlay*
			constexpr auto Anim_Double = 0x398; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Btn_Medkit = 0x3a0; // Size: 8, Type: struct UButton*
			constexpr auto Btn_BigShieldRecharger = 0x3a8; // Size: 8, Type: struct UButton*
			constexpr auto Panel_Backpack = 0x3b0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Btn_Backpack = 0x3b8; // Size: 8, Type: struct UButton*
			constexpr auto Anim_EMP_Enter = 0x3c0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_EMP_Exit = 0x3c8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Enter_Anim = 0x3d0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Exit_Anim = 0x3d8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto RestoreIcons = 0x3e0; // Size: 80, Type: struct TMap<enum class ESpecialItemID, struct TSoftObjectPtr<UTexture2D>>
			constexpr auto RestoreItemMap = 0x448; // Size: 80, Type: struct TMap<enum class ESpecialItemID, int32_t>
			constexpr auto RestoreRecommendDuration = 0x4a0; // Size: 4, Type: float
			constexpr auto Panel_Recommend = 0x4a8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Btn_Recommend = 0x4b0; // Size: 8, Type: struct USolarButton*
			constexpr auto Img_Recom = 0x4b8; // Size: 8, Type: struct UImage*
			constexpr auto Recom_Countdown = 0x4c0; // Size: 8, Type: struct UGaugeImage*
			constexpr auto Anim_Recommend_Click_Exit = 0x4c8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Recommend_Unclick_Exit = 0x4d0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Recommend_Enter = 0x4d8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto PrevLevel = 0x4f4; // Size: 4, Type: int32_t
			constexpr auto PrevExpRatio = 0x4f8; // Size: 4, Type: float
			constexpr auto CurrentLevel = 0x4fc; // Size: 4, Type: int32_t
			constexpr auto CurrentExpRatio = 0x500; // Size: 4, Type: float
			constexpr auto bHiddenByGameplay = 0x504; // Size: 1, Type: bool
	}
} 
