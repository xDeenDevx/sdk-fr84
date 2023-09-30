namespace offsets
{
	namespace USolarDeathViewWeaponWidget
	{
			constexpr auto Panel_Empty = 0x348; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Weapon = 0x350; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Hold = 0x358; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto img_Mask = 0x360; // Size: 8, Type: struct UImage*
			constexpr auto Img_Weapon = 0x368; // Size: 8, Type: struct UImage*
			constexpr auto img_WeaponBg_2 = 0x370; // Size: 8, Type: struct UImage*
			constexpr auto img_WeaponBg = 0x378; // Size: 8, Type: struct UImage*
			constexpr auto img_WeaponBg_3 = 0x380; // Size: 8, Type: struct UImage*
			constexpr auto Txt_Bullets = 0x388; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_Bullets_1 = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto SizeBox_1 = 0x398; // Size: 8, Type: struct USizeBox*
			constexpr auto OwnerPlayerWeapon = 0x3a0; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto LoadWeaponDataTimerHandle = 0x3a8; // Size: 8, Type: struct FTimerHandle
			constexpr auto ExtraAmmoColor = 0x3c0; // Size: 16, Type: struct FLinearColor
			constexpr auto AmmoDefaultColor = 0x3d0; // Size: 16, Type: struct FLinearColor
	}
} 
