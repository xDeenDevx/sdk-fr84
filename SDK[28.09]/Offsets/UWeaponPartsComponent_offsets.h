namespace offsets
{
	namespace UWeaponPartsComponent
	{
			constexpr auto ScopeComp = 0xc8; // Size: 8, Type: struct UWeaponPartScopeComp*
			constexpr auto ClipComp = 0xd0; // Size: 8, Type: struct UWeaponPartClipComp*
			constexpr auto MuzzleComp = 0xd8; // Size: 8, Type: struct UWeaponPartMuzzleComp*
			constexpr auto GripComp = 0xe0; // Size: 8, Type: struct UWeaponPartGripComp*
			constexpr auto GunStockComp = 0xe8; // Size: 8, Type: struct UWeaponPartGunStockComp*
			constexpr auto CrossHairPlane = 0xf0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto RedCrosshairPanel = 0xf8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto bQuickScope = 0x100; // Size: 1, Type: bool
			constexpr auto ScopeSocket = 0x104; // Size: 8, Type: struct FName
			constexpr auto GripSocket = 0x10c; // Size: 8, Type: struct FName
			constexpr auto ClipSocket = 0x114; // Size: 8, Type: struct FName
			constexpr auto OldClipSocket = 0x11c; // Size: 8, Type: struct FName
			constexpr auto MuzzleSocket = 0x124; // Size: 8, Type: struct FName
			constexpr auto GunStockSocket = 0x12c; // Size: 8, Type: struct FName
			constexpr auto MyWeaponActor = 0x138; // Size: 8, Type: struct ASolarWeapon*
	}
} 
