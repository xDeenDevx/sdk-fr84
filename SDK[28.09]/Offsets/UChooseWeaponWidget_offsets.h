namespace offsets
{
	namespace UChooseWeaponWidget
	{
			constexpr auto WeaponList = 0x360; // Size: 8, Type: struct UTileView*
			constexpr auto WeaponChosen_2 = 0x368; // Size: 8, Type: struct UWeaponChosenWidget*
			constexpr auto WeaponChosen_3 = 0x370; // Size: 8, Type: struct UWeaponChosenWidget*
			constexpr auto WeaponDatasMap = 0x378; // Size: 80, Type: struct TMap<int32_t, struct FChooseWeaponItemData>
			constexpr auto ListWeapons = 0x3c8; // Size: 80, Type: struct TMap<int32_t, struct UChooseWeaponItemObject*>
			constexpr auto EquippedWeaponWidgetMap = 0x418; // Size: 80, Type: struct TMap<enum class EWeaponEquipSlot, struct UWeaponChosenWidget*>
			constexpr auto CollectedWeapons = 0x468; // Size: 80, Type: struct TSet<int32_t>
			constexpr auto CloseActionName = 0x4bc; // Size: 8, Type: struct FName
	}
} 
