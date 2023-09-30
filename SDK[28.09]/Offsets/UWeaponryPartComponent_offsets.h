namespace offsets
{
	namespace UWeaponryPartComponent
	{
			constexpr auto ScopeComp = 0xb8; // Size: 8, Type: struct UWeaponryPartScope*
			constexpr auto ClipComp = 0xc0; // Size: 8, Type: struct UWeaponryPartClip*
			constexpr auto MuzzleComp = 0xc8; // Size: 8, Type: struct UWeaponryPartMuzzle*
			constexpr auto GripComp = 0xd0; // Size: 8, Type: struct UWeaponryPartGrip*
			constexpr auto GunStockComp = 0xd8; // Size: 8, Type: struct UWeaponryPartGunStock*
			constexpr auto ScopeSocket = 0xe0; // Size: 8, Type: struct FName
			constexpr auto GripSocket = 0xe8; // Size: 8, Type: struct FName
			constexpr auto ClipSocket = 0xf0; // Size: 8, Type: struct FName
			constexpr auto MuzzleSocket = 0xf8; // Size: 8, Type: struct FName
			constexpr auto GunStockSocket = 0x100; // Size: 8, Type: struct FName
			constexpr auto MyWeaponActor = 0x108; // Size: 8, Type: struct AWeaponryWeapon*
	}
} 
