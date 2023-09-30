namespace offsets
{
	namespace UWeaponSystemBase
	{
			constexpr auto WeaponSystemAutoFire = 0xf8; // Size: 8, Type: struct UWeaponSystemAutoFire*
			constexpr auto WeaponSystemFireInputResolver = 0x100; // Size: 8, Type: struct USolarWeaponFireInputResolver*
			constexpr auto WeaponSystemAssistAim = 0x108; // Size: 8, Type: struct UWeaponSystemAssistAim*
			constexpr auto WeaponSysIneract = 0x110; // Size: 80, Type: struct FWeaponSystemInteract
			constexpr auto MyPossessPawn = 0x170; // Size: 8, Type: struct AActor*
			constexpr auto bAssistAim = 0x178; // Size: 1, Type: bool
			constexpr auto bAutoFire = 0x179; // Size: 1, Type: bool
	}
} 
