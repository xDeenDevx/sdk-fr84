namespace offsets
{
	namespace USolarPickupComponent
	{
			constexpr auto OwnerChar = 0x560; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto PickUpHighlyThresholdFactor = 0x570; // Size: 4, Type: float
			constexpr auto bWantedClearItemData = 0x575; // Size: 1, Type: bool
			constexpr auto PickupHandlerMap = 0x578; // Size: 80, Type: struct TMap<enum class EPickupItemType, struct USolarPickupHandlerBase*>
			constexpr auto NormalPickupHandler = 0x5c8; // Size: 8, Type: struct USolarPickupHandlerBase*
			constexpr auto GlobalPickup = 0x5d0; // Size: 1, Type: bool
			constexpr auto TagetAirDropBox = 0x5d4; // Size: 8, Type: struct TWeakObjectPtr<AAirDropTreasureBox>
			constexpr auto NormalPickupItems = 0x5e8; // Size: 80, Type: struct FActorArrayMap
			constexpr auto ProccessedList = 0x638; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto SortedPickupActors = 0x648; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto bPickupListVisible = 0x658; // Size: 1, Type: bool
			constexpr auto bPickupListCollapsed = 0x659; // Size: 1, Type: bool
			constexpr auto UIManager = 0x660; // Size: 8, Type: struct UUIManager*
			constexpr auto ItemManager = 0x668; // Size: 8, Type: struct USolarItemManager*
			constexpr auto GlobalAutoPickup = 0x6c2; // Size: 1, Type: bool
			constexpr auto UnAutoPickupItemTime = 0x6c4; // Size: 4, Type: float
			constexpr auto AutoPickupTime = 0x6c8; // Size: 4, Type: float
			constexpr auto StopAutoPickupWhenClose = 0x6d0; // Size: 1, Type: bool
			constexpr auto bReqPickItem = 0x6d1; // Size: 1, Type: bool
			constexpr auto bPickupCheckBoxOpen = 0x6ec; // Size: 1, Type: bool
			constexpr auto AutoPickupTimer = 0x6f0; // Size: 8, Type: struct FTimerHandle
			constexpr auto OnItemDataSet = 0x728; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto UpdateCheckBoxesVisibility = 0x738; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateCheckBoxesHighLight = 0x748; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUpdateCheckBoxesStates = 0x758; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPickupListClear = 0x768; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTogglePickupList = 0x778; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ListenFireReslutFlag = 0x788; // Size: 1, Type: bool
			constexpr auto DelayedDisplayTime = 0x78c; // Size: 4, Type: float
			constexpr auto AutoShowPickupListHandle = 0x790; // Size: 8, Type: struct FTimerHandle
			constexpr auto DelayProcessFireResultHandle = 0x798; // Size: 8, Type: struct FTimerHandle
			constexpr auto EnsuredAutoShowHandle = 0x7a0; // Size: 8, Type: struct FTimerHandle
			constexpr auto FireResultMsgs = 0x7a8; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto NearByDeathboxes = 0x7c8; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<ADeathTreasureBox>>
			constexpr auto NearestResurrectBox = 0x7d8; // Size: 8, Type: struct TWeakObjectPtr<ADeathTreasureBox>
			constexpr auto LastResurrecteBtnVisbile = 0x7e0; // Size: 1, Type: bool
			constexpr auto CheckResurrectInterval = 0x7e4; // Size: 4, Type: float
			constexpr auto TempResurrectInterval = 0x7e8; // Size: 4, Type: float
			constexpr auto CheckStopResurrectInterval = 0x7ec; // Size: 4, Type: float
			constexpr auto TempStopResurrectInterval = 0x7f0; // Size: 4, Type: float
			constexpr auto PickupRecommendPriority = 0x7f8; // Size: 4, Type: int32_t
			constexpr auto ItemPriorityMap = 0x800; // Size: 80, Type: struct TMap<enum class EItemType, int32_t>
			constexpr auto ItemMutiPickupMap = 0x850; // Size: 80, Type: struct TMap<enum class EItemType, int32_t>
			constexpr auto WeaponPartPriorityMap = 0x8a0; // Size: 80, Type: struct TMap<enum class EWeaponPartType, int32_t>
			constexpr auto WeaponPartIDPriorityMap = 0x8f0; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto PendingFirstItemActor = 0x940; // Size: 8, Type: struct TWeakObjectPtr<AActor>
	}
} 
