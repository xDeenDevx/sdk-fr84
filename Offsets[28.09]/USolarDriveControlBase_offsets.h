namespace offsets
{
	namespace USolarDriveControlBase
	{
			constexpr auto SolarPC = 0x348; // Size: 8, Type: struct ASolarPlayerController*
			constexpr auto VehiclePawn = 0x350; // Size: 8, Type: struct ASolarVehiclePawn*
			constexpr auto TxtSpeedOriginColor = 0x360; // Size: 16, Type: struct FLinearColor
			constexpr auto TxtSpeedFinalColor = 0x370; // Size: 16, Type: struct FLinearColor
			constexpr auto ProgressBar_Speed = 0x380; // Size: 8, Type: struct UProgressBar*
			constexpr auto Txt_Speed_1 = 0x388; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_Speed = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_BrandName = 0x398; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto LazyImg_Brand = 0x3a0; // Size: 8, Type: struct UCommonLazyImage*
			constexpr auto Panel_Speed = 0x3a8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_SwitchSeat = 0x3b0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto SeatFlag = 0x3b8; // Size: 8, Type: struct UCheckBoxGroup*
			constexpr auto UI_Vehicle_Health = 0x3d8; // Size: 8, Type: struct USolarVehicleHealthWidget*
			constexpr auto Panel_Warning_Danger = 0x420; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Img_Danger_Mask = 0x428; // Size: 8, Type: struct UImage*
			constexpr auto ProgressBar_Danger = 0x430; // Size: 8, Type: struct UProgressBar*
			constexpr auto Panel_ProgressBar_Danger = 0x438; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_ScopeUI = 0x488; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Prep = 0x490; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_PrepEmpty = 0x498; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto ProgressBar_Prep = 0x4a0; // Size: 8, Type: struct UProgressBar*
			constexpr auto Txt_Bullet_1 = 0x4a8; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_Bullet = 0x4b0; // Size: 8, Type: struct UTextBlock*
			constexpr auto Anim_PrepEmpty = 0x4b8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto EmptyBulletColor = 0x4c0; // Size: 16, Type: struct FLinearColor
			constexpr auto NomalBulletColor = 0x4d0; // Size: 16, Type: struct FLinearColor
			constexpr auto Panel_DMG = 0x4f8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Img_DMG_BG_Light = 0x500; // Size: 8, Type: struct UImage*
			constexpr auto Img_DMG_BG_Left = 0x508; // Size: 8, Type: struct UImage*
			constexpr auto Img_DMG_BG = 0x510; // Size: 8, Type: struct UImage*
			constexpr auto Txt_DMG = 0x518; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto VehicleDamageTextLocalizationID = 0x520; // Size: 4, Type: int32_t
			constexpr auto VehicleDamageLevelColors = 0x528; // Size: 80, Type: struct TMap<int32_t, struct FVehicleDamageLevelColor>
	}
} 
