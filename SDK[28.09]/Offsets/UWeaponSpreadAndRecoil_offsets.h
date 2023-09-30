namespace offsets
{
	namespace UWeaponSpreadAndRecoil
	{
			constexpr auto Weapon = 0x28; // Size: 8, Type: struct ASolarWeapon*
			constexpr auto SpreadPattern = 0x38; // Size: 8, Type: struct UWeaponSpreadPatternRuntime*
			constexpr auto RecoilPattern = 0x40; // Size: 8, Type: struct UWeaponRecoilPatternRuntime*
			constexpr auto TPPKickPattern = 0x48; // Size: 8, Type: struct UWeaponTPPKickPatternRuntime*
			constexpr auto GunKickPattern = 0x50; // Size: 8, Type: struct UWeaponGunKickPatternRuntime*
			constexpr auto CrossHairKickPattern = 0x58; // Size: 8, Type: struct URecoverableRecoilPatternRuntime*
			constexpr auto ShakePatternOnShot = 0x60; // Size: 8, Type: struct UWeaponCameraShakePatternRuntime*
			constexpr auto ShakePatternOnScopeShot = 0x68; // Size: 8, Type: struct UWeaponCameraShakePatternRuntime*
	}
} 
