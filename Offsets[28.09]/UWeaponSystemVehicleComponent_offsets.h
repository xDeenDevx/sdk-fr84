namespace offsets
{
	namespace UWeaponSystemVehicleComponent
	{
			constexpr auto WeaponSystemInteract = 0x180; // Size: 80, Type: struct FWeaponSystemInteract
			constexpr auto CurrentWeapon = 0x1e8; // Size: 8, Type: struct ASolarVehicleWeapon*
			constexpr auto MyPawn = 0x1f0; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto WeaponEquipAction = 0x220; // Size: 8, Type: struct FWeaponAction
			constexpr auto WeaponUnequipAction = 0x228; // Size: 8, Type: struct FWeaponAction
			constexpr auto SavedWeaponScopeMap = 0x230; // Size: 80, Type: struct TMap<struct FName, enum class EVehicleWeaponScopeType>
			constexpr auto bQuickAdsHolding = 0x281; // Size: 1, Type: bool
			constexpr auto QuickAdsPressedTime = 0x290; // Size: 4, Type: float
	}
} 
