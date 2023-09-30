namespace offsets
{
	namespace AGameplayCueNotify_Actor
	{
			constexpr auto bAutoDestroyOnRemove = 0x228; // Size: 1, Type: bool
			constexpr auto AutoDestroyDelay = 0x22c; // Size: 4, Type: float
			constexpr auto WarnIfTimelineIsStillRunning = 0x230; // Size: 1, Type: bool
			constexpr auto WarnIfLatentActionIsStillRunning = 0x231; // Size: 1, Type: bool
			constexpr auto GameplayCueTag = 0x234; // Size: 8, Type: struct FGameplayTag
			constexpr auto ReferenceHelper = 0x240; // Size: 16, Type: struct FGameplayTagReferenceHelper
			constexpr auto GameplayCueName = 0x250; // Size: 8, Type: struct FName
			constexpr auto bAutoAttachToOwner = 0x258; // Size: 1, Type: bool
			constexpr auto IsOverride = 0x259; // Size: 1, Type: bool
			constexpr auto bUniqueInstancePerInstigator = 0x25a; // Size: 1, Type: bool
			constexpr auto bUniqueInstancePerSourceObject = 0x25b; // Size: 1, Type: bool
			constexpr auto bAllowMultipleOnActiveEvents = 0x25c; // Size: 1, Type: bool
			constexpr auto bAllowMultipleWhileActiveEvents = 0x25d; // Size: 1, Type: bool
			constexpr auto NumPreallocatedInstances = 0x260; // Size: 4, Type: int32_t
	}
} 
