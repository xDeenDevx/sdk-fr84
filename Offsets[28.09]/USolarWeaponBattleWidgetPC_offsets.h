namespace offsets
{
	namespace USolarWeaponBattleWidgetPC
	{
			constexpr auto SecondaryFireIcon = 0x348; // Size: 8, Type: struct UImage*
			constexpr auto UI_Component_Keyboard = 0x350; // Size: 8, Type: struct UUserWidget*
			constexpr auto FireActiveControl = 0x358; // Size: 8, Type: struct UWidgetActiveControl*
			constexpr auto WP_Slot0 = 0x360; // Size: 8, Type: struct USolarWeaponSlotWidgetPC*
			constexpr auto WP_Slot1 = 0x368; // Size: 8, Type: struct USolarWeaponSlotWidgetPC*
			constexpr auto WP_Slot2 = 0x370; // Size: 8, Type: struct USolarWeaponSlotWidgetPC*
			constexpr auto Tips_Reload = 0x378; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto SolarTextBlock_2 = 0x380; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto DisplayReloadTipAmmoRate = 0x388; // Size: 4, Type: float
			constexpr auto DisplayReloadTipDuration = 0x38c; // Size: 4, Type: float
			constexpr auto CanReloadTipColor = 0x390; // Size: 40, Type: struct FSlateColor
			constexpr auto CannotReloadTipColor = 0x3b8; // Size: 40, Type: struct FSlateColor
			constexpr auto CurrentActiveWeapon = 0x420; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto WeaponSlotWidgets = 0x428; // Size: 16, Type: struct TArray<struct USolarWeaponSlotWidgetPC*>
			constexpr auto bCanDisplayReloadTip = 0x438; // Size: 1, Type: bool
			constexpr auto ReloadTipTimerHandle = 0x440; // Size: 8, Type: struct FTimerHandle
			constexpr auto UpdateWeaponSkillCDTimerHandle = 0x448; // Size: 8, Type: struct FTimerHandle
	}
} 
