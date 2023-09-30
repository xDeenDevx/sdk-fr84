namespace offsets
{
	namespace UElectricShop_Weapon
	{
			constexpr auto OnWeaponUpdateRequested = 0x348; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnShieldUpdateRequested = 0x358; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto WidgetSwitcher_weapon = 0x368; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto Weapon = 0x370; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Img_Level_Bg = 0x378; // Size: 8, Type: struct UImage*
			constexpr auto Level_Indicator = 0x380; // Size: 8, Type: struct UOverlay*
			constexpr auto Panel_Level = 0x388; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Txt_Level = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto Img_Arrow = 0x398; // Size: 8, Type: struct UImage*
			constexpr auto Txt_Max = 0x3a0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Img_Weapon = 0x3a8; // Size: 8, Type: struct USolarImage*
			constexpr auto Img_Shield = 0x3b0; // Size: 8, Type: struct UImage*
			constexpr auto WidgetSwitcher_Upgrade = 0x3b8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto Upgrade_BG = 0x3c0; // Size: 8, Type: struct USolarImage*
			constexpr auto Txt_UpgradeState = 0x3c8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Panel_ElectricCost = 0x3d0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Overlay_Discount = 0x3d8; // Size: 8, Type: struct UOverlay*
			constexpr auto Txt_ElectricityNum_Undiscounted = 0x3e0; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_ElectricityNum = 0x3e8; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_UpgradeState_Disable = 0x3f0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Panel_ElectricCost_Disable = 0x3f8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Overlay_Discount_2 = 0x400; // Size: 8, Type: struct UOverlay*
			constexpr auto Txt_ElectricityNum_Undiscounted_2 = 0x408; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_ElectricityNum_Disable = 0x410; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_UpgradeState_Disable_2 = 0x418; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Weapon_UpgradeSuccess = 0x420; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Image_BG2_3 = 0x428; // Size: 8, Type: struct UImage*
			constexpr auto Txt_Upgrade2 = 0x430; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Weapon_None = 0x438; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Image_BG2 = 0x440; // Size: 8, Type: struct UImage*
			constexpr auto Image_BG2_2 = 0x448; // Size: 8, Type: struct UImage*
			constexpr auto Succeed_Anim = 0x450; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto bIsWeapon = 0x458; // Size: 1, Type: bool
			constexpr auto MaxWeaponLevel = 0x470; // Size: 4, Type: int32_t
			constexpr auto WeaponLevelBGNames = 0x4a8; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto WeaponLevelBGPrefix = 0x4b8; // Size: 16, Type: struct FString
			constexpr auto ShieldIconPrefix = 0x4c8; // Size: 16, Type: struct FString
			constexpr auto CurrentWeapon = 0x4d8; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
	}
} 
