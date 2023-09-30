namespace offsets
{
	namespace UPickupListWidget
	{
			constexpr auto SizeBoxItemList = 0x348; // Size: 8, Type: struct USizeBox*
			constexpr auto ItemList = 0x350; // Size: 8, Type: struct USolarListView*
			constexpr auto UI_Pickup_Sight = 0x358; // Size: 8, Type: struct UPickupSightWidget*
			constexpr auto ScopeOffset = 0x360; // Size: 8, Type: struct FVector2D
			constexpr auto PickupItemCount = 0x368; // Size: 4, Type: int32_t
			constexpr auto RefreshSelectDelay = 0x36c; // Size: 4, Type: float
			constexpr auto PickupPreActionName = 0x370; // Size: 8, Type: struct FName
			constexpr auto PickupNextActionName = 0x378; // Size: 8, Type: struct FName
			constexpr auto ZeroVector = 0x380; // Size: 8, Type: struct FVector2D
			constexpr auto PushHandler = 0x388; // Size: 8, Type: struct FTimerHandle
			constexpr auto DisplayLength = 0x390; // Size: 4, Type: int32_t
			constexpr auto bIsMovePos = 0x394; // Size: 1, Type: bool
			constexpr auto SelectScopeThisID = 0x398; // Size: 4, Type: int32_t
			constexpr auto CachedPickupItemsMap = 0x3b8; // Size: 80, Type: struct TMap<int64_t, struct UPickupItemObject*>
			constexpr auto MergedPickupItemsMap = 0x408; // Size: 80, Type: struct TMap<int32_t, struct UPickupItemObject*>
			constexpr auto WarppedItemList = 0x458; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto WarppedTeamCardList = 0x468; // Size: 16, Type: struct TArray<struct UObject*>
	}
} 
