namespace offsets
{
	namespace USolarDeathViewSkillWidget
	{
			constexpr auto WeaponSkill = 0x348; // Size: 8, Type: struct UOverlay*
			constexpr auto Img_Bg = 0x350; // Size: 8, Type: struct UImage*
			constexpr auto Img_Light = 0x358; // Size: 8, Type: struct UImage*
			constexpr auto ProgressCD = 0x360; // Size: 8, Type: struct UImage*
			constexpr auto icon_WeaponSkill = 0x368; // Size: 8, Type: struct UImage*
			constexpr auto CurrentProgressState = 0x370; // Size: 16, Type: struct FLinearColor
			constexpr auto ProgressParameterName = 0x380; // Size: 8, Type: struct FName
			constexpr auto OnCDColor = 0x388; // Size: 16, Type: struct FLinearColor
			constexpr auto UnCDColor = 0x398; // Size: 16, Type: struct FLinearColor
			constexpr auto CurrentPlayerWeapon = 0x3a8; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto bCoolDown = 0x3b0; // Size: 1, Type: bool
	}
} 
