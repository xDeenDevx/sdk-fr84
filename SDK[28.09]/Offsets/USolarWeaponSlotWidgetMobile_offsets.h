namespace offsets
{
	namespace USolarWeaponSlotWidgetMobile
	{
			constexpr auto ShootModeNames = 0x348; // Size: 80, Type: struct TMap<enum class EShootingOpt, int32_t>
			constexpr auto SlotID = 0x398; // Size: 4, Type: int32_t
			constexpr auto SlotOwnerPlayerWeapon = 0x39c; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto ClipTextBlockCheckedOpacity = 0x3c8; // Size: 4, Type: float
			constexpr auto ClipTextBlockUnCheckedOpacity = 0x3cc; // Size: 4, Type: float
			constexpr auto bHideWidgetWhenNoWeapon = 0x3d0; // Size: 1, Type: bool
			constexpr auto WeaponPartsItemTableCache = 0x3d8; // Size: 80, Type: struct TMap<int32_t, struct FSolarTablesData_ItemWeaponParts>
			constexpr auto WeaponPartsWidgets = 0x428; // Size: 16, Type: struct TArray<struct UUIWeaponPartWidget*>
			constexpr auto LevelTextLocalizationID = 0x438; // Size: 4, Type: int32_t
			constexpr auto SkillCDTextLocalizationID = 0x43c; // Size: 4, Type: int32_t
			constexpr auto IncreaseDamageTextLocalizationID = 0x440; // Size: 4, Type: int32_t
			constexpr auto LevelUpDamageTextLocalizationID = 0x444; // Size: 4, Type: int32_t
			constexpr auto AmmoNotEnoughColor = 0x448; // Size: 16, Type: struct FLinearColor
			constexpr auto ExtraAmmoColor = 0x458; // Size: 16, Type: struct FLinearColor
			constexpr auto FX_Weapon_Reload_Progress = 0x468; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto FX_Weapon_Reload = 0x470; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto FX_Weapon_AmmoEmpty = 0x478; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto CheckBox_WP = 0x480; // Size: 8, Type: struct UCheckBox*
			constexpr auto Text_WP_Bullte = 0x488; // Size: 8, Type: struct UTextBlock*
			constexpr auto Text_WP_Clip = 0x490; // Size: 8, Type: struct UTextBlock*
			constexpr auto Img_WP = 0x498; // Size: 8, Type: struct UImage*
			constexpr auto Panel_WP_Unarm = 0x4a0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto HorizontalBox_WP_Clip = 0x4a8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Panel_Part = 0x4b0; // Size: 8, Type: struct UWidget*
			constexpr auto Img_Bg = 0x4b8; // Size: 8, Type: struct UImage*
			constexpr auto img_Bg_Border = 0x4c0; // Size: 8, Type: struct UImage*
			constexpr auto img_Bg_Gradient = 0x4c8; // Size: 8, Type: struct UImage*
			constexpr auto Overlay_Bg = 0x4d0; // Size: 8, Type: struct UOverlay*
			constexpr auto img_NotSelect = 0x4d8; // Size: 8, Type: struct UImage*
			constexpr auto UI_Weapon_Part = 0x4e0; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto UI_Weapon_Part_2 = 0x4e8; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto UI_Weapon_Part_3 = 0x4f0; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto UI_Weapon_Part_4 = 0x4f8; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto UI_Weapon_Part_5 = 0x500; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto Txt_SkillCD = 0x508; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto LevelUp_Anim = 0x510; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Img_Frame_VX = 0x518; // Size: 8, Type: struct UImage*
			constexpr auto Img_BG_Light = 0x520; // Size: 8, Type: struct UImage*
			constexpr auto Img_BG_Light_2 = 0x528; // Size: 8, Type: struct UImage*
			constexpr auto MI_Frame_VX = 0x530; // Size: 8, Type: struct UImage*
			constexpr auto img_Select = 0x538; // Size: 8, Type: struct UImage*
			constexpr auto Panel_DMG = 0x540; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Txt_WeaponDMG = 0x548; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto IMG_DMG_BG_00 = 0x550; // Size: 8, Type: struct UImage*
			constexpr auto IMG_DMG_BG_01 = 0x558; // Size: 8, Type: struct UImage*
			constexpr auto Txt_Upgrade = 0x560; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto FX_ReLoadA_001 = 0x568; // Size: 8, Type: struct UImage*
			constexpr auto ProgressBar_128 = 0x570; // Size: 8, Type: struct UProgressBar*
			constexpr auto PartEffectTipDuration = 0x578; // Size: 4, Type: float
			constexpr auto UI_Weapon_Update = 0x580; // Size: 8, Type: struct USolarWeaponPartEffectTipWidget*
			constexpr auto PartEffectPanelUp = 0x588; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto PartEffectPanelDown = 0x590; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto PartEffectTipArray = 0x598; // Size: 16, Type: struct TArray<struct FSolarWeaponPartEffectDesc>
			constexpr auto KeyboardTip = 0x5a8; // Size: 8, Type: struct TWeakObjectPtr<USolarAdapterWidget>
	}
} 
