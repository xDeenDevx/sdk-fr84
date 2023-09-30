namespace offsets
{
	namespace USolarGameConfigManager
	{
			constexpr auto WeaponDTInstance = 0x30; // Size: 8, Type: struct UDataTable*
			constexpr auto WeaponAppearanceDTInstance = 0x38; // Size: 8, Type: struct UDataTable*
			constexpr auto ItemActorDTInstance = 0x40; // Size: 8, Type: struct UDataTable*
			constexpr auto BackpackTrailAssembingDTInstance = 0x48; // Size: 8, Type: struct UDataTable*
			constexpr auto CharacterDTInstance = 0x50; // Size: 8, Type: struct UDataTable*
			constexpr auto ItemResourceDTInstance = 0x58; // Size: 8, Type: struct UDataTable*
			constexpr auto BuffEffectDTInstance = 0x60; // Size: 8, Type: struct UDataTable*
			constexpr auto ScreenEffectDTInstance = 0x68; // Size: 8, Type: struct UDataTable*
			constexpr auto WeaponsConfigAsset = 0x70; // Size: 8, Type: struct UGlobalWeaponConfig*
			constexpr auto GlobalVehicleWeaponConfigAsset = 0x78; // Size: 8, Type: struct UGlobalVehicleWeaponConfig*
			constexpr auto RoleConfigAsset = 0x80; // Size: 8, Type: struct USolarRoleSkillDataConfig*
			constexpr auto HeadHitValue = 0x88; // Size: 4, Type: float
			constexpr auto ShieldReducePhy = 0x8c; // Size: 4, Type: float
			constexpr auto ShieldReduceEn = 0x90; // Size: 4, Type: float
			constexpr auto ArmorReducePhy = 0x94; // Size: 4, Type: float
			constexpr auto ArmorReduceEn = 0x98; // Size: 4, Type: float
			constexpr auto BackpackEnergyID = 0x9c; // Size: 4, Type: int32_t
			constexpr auto BackpackExtraEnergyID = 0xa0; // Size: 4, Type: int32_t
			constexpr auto MedicineItemId = 0xa4; // Size: 4, Type: int32_t
			constexpr auto RadarItemId = 0xa8; // Size: 4, Type: int32_t
			constexpr auto ShieldRechargerItemId = 0xac; // Size: 4, Type: int32_t
			constexpr auto ShieldBigRechargerItemId = 0xb0; // Size: 4, Type: int32_t
			constexpr auto UnPickupItemTime = 0xb4; // Size: 4, Type: float
			constexpr auto UnAutoPickupItemTime = 0xb8; // Size: 4, Type: float
			constexpr auto AutoPickupTime = 0xbc; // Size: 4, Type: float
			constexpr auto AutoMarkCDTime = 0xc0; // Size: 4, Type: float
			constexpr auto AutoMarkItemTypeList = 0xc8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto AutoMarkTeammateDistance = 0xd8; // Size: 4, Type: float
			constexpr auto PickupCapsuleRadius = 0xdc; // Size: 4, Type: float
			constexpr auto PickupCapsuleHalfHeight = 0xe0; // Size: 4, Type: float
	}
} 
