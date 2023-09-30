namespace offsets
{
	namespace USolarWeaponBattleWidgetMobile
	{
			constexpr auto WeaponSlotWidgets = 0x348; // Size: 16, Type: struct TArray<struct UUserWidget*>
			constexpr auto ExcelLayoutWidgetMap = 0x358; // Size: 80, Type: struct TMap<struct FString, struct UWidget*>
			constexpr auto CharacterStateMap = 0x3a8; // Size: 80, Type: struct TMap<int32_t, struct FString>
			constexpr auto CurrentActivedPlayerWeapon = 0x3f8; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto SkillCDTimeTextLocalizationID = 0x400; // Size: 4, Type: int32_t
			constexpr auto WP_Exp = 0x4a8; // Size: 8, Type: struct UExpWidget*
			constexpr auto FireActiveControl = 0x4b0; // Size: 8, Type: struct USolarWeaponSkillWidget*
			constexpr auto SecondaryFirePad = 0x4b8; // Size: 8, Type: struct USolarMovablePad*
			constexpr auto SecondaryFireIcon = 0x4c0; // Size: 8, Type: struct UImage*
			constexpr auto WGS_Fire_Left = 0x4c8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto BT_Weapon_Exit = 0x4d0; // Size: 8, Type: struct UButton*
			constexpr auto Btn_RoleAbility_Cancel = 0x4d8; // Size: 8, Type: struct UButton*
			constexpr auto SuperSkill = 0x4e0; // Size: 8, Type: struct URoleSkillWidget*
			constexpr auto TacticalSkill = 0x4e8; // Size: 8, Type: struct URoleSkillWidget*
			constexpr auto BT_Fire_Left = 0x4f0; // Size: 8, Type: struct UButton*
			constexpr auto BT_AutoScopeFire_Left = 0x4f8; // Size: 8, Type: struct UButton*
			constexpr auto BT_Cancel_Left = 0x500; // Size: 8, Type: struct UButton*
			constexpr auto BT_Cancel_Right = 0x508; // Size: 8, Type: struct UButton*
			constexpr auto BT_Cancel_QuickAds = 0x510; // Size: 8, Type: struct UButton*
			constexpr auto BT_Reload_2 = 0x518; // Size: 8, Type: struct UButton*
			constexpr auto GunsightPad = 0x520; // Size: 8, Type: struct USolarMovablePad*
			constexpr auto GunsightImageCheckBox = 0x528; // Size: 8, Type: struct UCheckBox*
			constexpr auto Panel_Fire_Right = 0x530; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_QuickADS = 0x538; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto WGS_QuickAds = 0x540; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto WGS_Fire_Right = 0x548; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto QuickAdsFirePad = 0x550; // Size: 8, Type: struct USolarMovablePad*
			constexpr auto Panel_Fire = 0x558; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Reload = 0x560; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Gunsight = 0x568; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Weapon_2 = 0x570; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Weapon_3 = 0x578; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_SuperSkill = 0x580; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_TacticalSkill = 0x588; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto FireIconRight = 0x590; // Size: 8, Type: struct UImage*
			constexpr auto FireIconLeft = 0x598; // Size: 8, Type: struct UImage*
			constexpr auto FirePadRight = 0x5a0; // Size: 8, Type: struct USolarMovablePad*
			constexpr auto AutoScopeFirePadRight = 0x5a8; // Size: 8, Type: struct USolarMovablePad*
			constexpr auto WP_Slot0 = 0x5b0; // Size: 8, Type: struct USolarWeaponSlotWidgetMobile*
			constexpr auto WP_Slot1 = 0x5b8; // Size: 8, Type: struct USolarWeaponSlotWidgetMobile*
			constexpr auto WP_Slot2 = 0x5c0; // Size: 8, Type: struct USolarWeaponSlotWidgetMobile*
			constexpr auto Enter_Anim = 0x5c8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Exit_Anim = 0x5d0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Weapon_UI = 0x5d8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Txt_NextLvDMG = 0x5e0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Panel_NextLv_Content = 0x5e8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Weapon_1_KeyMapping = 0x5f8; // Size: 8, Type: struct USolarAdapterWidget*
			constexpr auto Panel_Weapon_2_KeyMapping = 0x600; // Size: 8, Type: struct USolarAdapterWidget*
			constexpr auto Panel_Weapon_3_KeyMapping = 0x608; // Size: 8, Type: struct USolarAdapterWidget*
			constexpr auto WeaponKeyMappingArray = 0x610; // Size: 16, Type: struct TArray<struct USolarAdapterWidget*>
	}
} 
