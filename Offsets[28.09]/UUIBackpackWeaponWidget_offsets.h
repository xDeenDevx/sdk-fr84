namespace offsets
{
	namespace UUIBackpackWeaponWidget
	{
			constexpr auto BtnWeapon = 0x348; // Size: 8, Type: struct UButton*
			constexpr auto Panel_Empty = 0x350; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_Info = 0x358; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto HorizontalBox_Name = 0x360; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto HorizontalBox_Ammo = 0x368; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Img_Bg = 0x370; // Size: 8, Type: struct UImage*
			constexpr auto Img_DragDetect = 0x378; // Size: 8, Type: struct UImage*
			constexpr auto Drag_Weapon = 0x380; // Size: 8, Type: struct UUIDragWidget*
			constexpr auto Txt_Name = 0x388; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_BulletNum = 0x390; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_BulletSum = 0x398; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Range = 0x3a0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Difficulty = 0x3a8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Weapon_Detail = 0x3b0; // Size: 8, Type: struct UVerticalBox*
			constexpr auto Txt_Weapon_Type = 0x3b8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_DMGNum = 0x3c0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Img_BulletIcon = 0x3c8; // Size: 8, Type: struct UImage*
			constexpr auto Weapon_Parts_New = 0x3d0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Weapon_Part_Muzzle = 0x3d8; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto Weapon_Part_Grip = 0x3e0; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto Weapon_Part_Clip = 0x3e8; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto Weapon_Part_Scope = 0x3f0; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto Weapon_Part_GunStock = 0x3f8; // Size: 8, Type: struct UUIWeaponPartWidget*
			constexpr auto weaponid = 0x400; // Size: 4, Type: int32_t
			constexpr auto WeaponUniqueID = 0x404; // Size: 4, Type: uint32_t
			constexpr auto WeaponSlot = 0x408; // Size: 4, Type: int32_t
			constexpr auto WeaponAmmoNum = 0x40c; // Size: 4, Type: int32_t
			constexpr auto WeaponExtraAmmoNum = 0x410; // Size: 4, Type: int32_t
			constexpr auto WeaponPassiveMode = 0x414; // Size: 1, Type: enum class EWidgetPassiveMode
			constexpr auto WeaponType2TextIdMap = 0x418; // Size: 80, Type: struct TMap<enum class EWeaponType, int32_t>
			constexpr auto WeaponType2BulltSpMap = 0x468; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FSoftObjectPath>
			constexpr auto ImgSkillSize = 0x4b8; // Size: 8, Type: struct FVector2D
			constexpr auto OwnerWeapon = 0x4c4; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerNormalWeapon>
	}
} 
