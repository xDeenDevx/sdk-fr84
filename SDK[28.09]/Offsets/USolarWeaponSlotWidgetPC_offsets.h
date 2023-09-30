namespace offsets
{
	namespace USolarWeaponSlotWidgetPC
	{
			constexpr auto KeyActionName = 0x348; // Size: 16, Type: struct FString
			constexpr auto Img_WP = 0x358; // Size: 8, Type: struct UImage*
			constexpr auto UI_Component_Keyboard = 0x360; // Size: 8, Type: struct USolarComponentKeyWidget*
			constexpr auto HorizontalBox_WP_Clip = 0x368; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Text_WP_Clip = 0x370; // Size: 8, Type: struct UTextBlock*
			constexpr auto Text_WP_Clip_2 = 0x378; // Size: 8, Type: struct UTextBlock*
			constexpr auto HorizontalBox_Lv = 0x380; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Txt_Lvl_Head = 0x388; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_Level = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_Lvl_Tail = 0x398; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_FireMode = 0x3a0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Panel_Part = 0x3a8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto UI_Weapon_Part_2 = 0x3b0; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto UI_Weapon_Part_3 = 0x3b8; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto UI_Weapon_Part_4 = 0x3c0; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto UI_Weapon_Part_5 = 0x3c8; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto UI_Weapon_Part_6 = 0x3d0; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto Panel_WP_Unarm = 0x3d8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto img_Bg_Border = 0x3e0; // Size: 8, Type: struct UImage*
			constexpr auto img_Bg_Black = 0x3e8; // Size: 8, Type: struct UImage*
			constexpr auto img_Bg_Gradient = 0x3f0; // Size: 8, Type: struct UImage*
			constexpr auto img_NotSelect = 0x3f8; // Size: 8, Type: struct UImage*
			constexpr auto Overlay_Bg = 0x400; // Size: 8, Type: struct UOverlay*
			constexpr auto LevelLocalizationID = 0x408; // Size: 4, Type: int32_t
			constexpr auto LevelVariate = 0x410; // Size: 16, Type: struct FString
			constexpr auto ShootModeLocalizationIDMap = 0x420; // Size: 80, Type: struct TMap<enum class EShootingOpt, int32_t>
			constexpr auto WeaponQualityColors = 0x470; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto WeaponBGQualityColors = 0x480; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto SlotWeapon = 0x490; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto LoadWeaponIconTimerHandle = 0x4a8; // Size: 8, Type: struct FTimerHandle
			constexpr auto WeaponPartWidgets = 0x4b0; // Size: 16, Type: struct TArray<struct UUIWeaponPartWidget*>
			constexpr auto WeaponPartsItemTableCache = 0x4c0; // Size: 80, Type: struct TMap<int32_t, struct FSolarTablesData_ItemWeaponParts>
	}
} 
