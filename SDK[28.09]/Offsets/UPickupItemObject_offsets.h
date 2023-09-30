namespace offsets
{
	namespace UPickupItemObject
	{
			constexpr auto ListViewDataType = 0x30; // Size: 1, Type: enum class EPickupListItemType
			constexpr auto CustomizedData = 0x38; // Size: 8, Type: struct UObject*
			constexpr auto MergedDatas = 0x40; // Size: 80, Type: struct TMap<int32_t, struct FPickupListViewItemData>
	}
} 
