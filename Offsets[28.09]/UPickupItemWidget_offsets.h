namespace offsets
{
	namespace UPickupItemWidget
	{
			constexpr auto CanvasPanel_Anim = 0x350; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Debug = 0x358; // Size: 8, Type: struct UTextBlock*
			constexpr auto Item = 0x360; // Size: 8, Type: struct UOverlay*
			constexpr auto Img_Quality_BG = 0x368; // Size: 8, Type: struct UImage*
			constexpr auto Img_Quality_BG_Line = 0x370; // Size: 8, Type: struct UImage*
			constexpr auto ItemImage_BG = 0x378; // Size: 8, Type: struct UImage*
			constexpr auto ItemImage = 0x380; // Size: 8, Type: struct UImage*
			constexpr auto TagImage = 0x388; // Size: 8, Type: struct UImage*
			constexpr auto ImgBulletType = 0x390; // Size: 8, Type: struct UImage*
			constexpr auto ItemName = 0x398; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto ItemCount = 0x3a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto ItemCountAdd = 0x3a8; // Size: 8, Type: struct UTextBlock*
			constexpr auto ItemDesc = 0x3b0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_WeaponSkill = 0x3b8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto ItemSubDesc = 0x3c0; // Size: 8, Type: struct USizeBox*
			constexpr auto CardItemIcon = 0x3c8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Mark = 0x3d0; // Size: 8, Type: struct USolarCheckBox*
			constexpr auto SizeBox_Select = 0x3d8; // Size: 8, Type: struct USizeBox*
			constexpr auto PreviewItemData = 0x3e0; // Size: 184, Type: struct FSolarItemData
			constexpr auto MergedDatas = 0x498; // Size: 80, Type: struct TMap<int32_t, struct FPickupListViewItemData>
			constexpr auto ListViewDataType = 0x4e8; // Size: 1, Type: enum class EPickupListItemType
			constexpr auto CustomizeData = 0x4f0; // Size: 8, Type: struct UObject*
			constexpr auto WeaponPartPrePath = 0x4f8; // Size: 16, Type: struct FString
			constexpr auto ItemPrePath = 0x508; // Size: 16, Type: struct FString
			constexpr auto ColorNormal = 0x518; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorRecommend = 0x528; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorWeaponUp = 0x538; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorWeaponDown = 0x548; // Size: 16, Type: struct FLinearColor
			constexpr auto WeaponType2BulltSpMap = 0x558; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FSoftObjectPath>
			constexpr auto WeaponMaxLevelLocalID = 0x5a8; // Size: 4, Type: int32_t
			constexpr auto WeaponUpgradeLocalID = 0x5ac; // Size: 4, Type: int32_t
			constexpr auto bForceResetAnim = 0x5b0; // Size: 1, Type: bool
			constexpr auto bMarkForceUpdate = 0x5b1; // Size: 1, Type: bool
			constexpr auto bImplementedUpdateFunc = 0x62d; // Size: 1, Type: bool
			constexpr auto ImgQualityBGColors = 0x630; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto ItemNameColors = 0x640; // Size: 16, Type: struct TArray<struct FSlateColor>
			constexpr auto CacheQualityBgMap = 0x650; // Size: 80, Type: struct TMap<int32_t, struct UTexture2D*>
	}
} 
