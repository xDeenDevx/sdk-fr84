namespace offsets
{
	namespace UBattleNoticeEquipReplace
	{
			constexpr auto Img_Item1 = 0x370; // Size: 8, Type: struct UImage*
			constexpr auto Img_Item2 = 0x378; // Size: 8, Type: struct UImage*
			constexpr auto Img_Item1_BG = 0x380; // Size: 8, Type: struct UImage*
			constexpr auto Img_Item2_BG = 0x388; // Size: 8, Type: struct UImage*
			constexpr auto Quality1 = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto Quality2 = 0x398; // Size: 8, Type: struct UTextBlock*
			constexpr auto Enter_Animation_1 = 0x3a0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Enter_Animation_2 = 0x3a8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Enter_Animation_3 = 0x3b0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto DefaultEquipIcons = 0x3b8; // Size: 80, Type: struct TMap<enum class EItemType, struct TSoftObjectPtr<UTexture2D>>
			constexpr auto DefaultWeaponPartIcons = 0x408; // Size: 80, Type: struct TMap<enum class EWeaponPartType, struct TSoftObjectPtr<UTexture2D>>
	}
} 
