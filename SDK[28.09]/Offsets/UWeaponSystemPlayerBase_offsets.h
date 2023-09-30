namespace offsets
{
	namespace UWeaponSystemPlayerBase
	{
			constexpr auto bHasPrimarySlotWeapon = 0x1b8; // Size: 1, Type: bool
			constexpr auto bHasSecondarySlotWeapon = 0x1b9; // Size: 1, Type: bool
			constexpr auto bHasTertiarySlotWeapon = 0x1ba; // Size: 1, Type: bool
			constexpr auto Punch = 0x1bc; // Size: 8, Type: struct TWeakObjectPtr<ASolarUnArmWeapon>
			constexpr auto PrimarySlotWeapon = 0x1c4; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto SecondarySlotWeapon = 0x1cc; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto TertiarySlotWeapon = 0x1d4; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto HeldWeapon = 0x1dc; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
	}
} 
