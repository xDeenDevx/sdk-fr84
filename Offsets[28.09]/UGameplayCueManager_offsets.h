namespace offsets
{
	namespace UGameplayCueManager
	{
			constexpr auto RuntimeGameplayCueObjectLibrary = 0x48; // Size: 80, Type: struct FGameplayCueObjectLibrary
			constexpr auto EditorGameplayCueObjectLibrary = 0x98; // Size: 80, Type: struct FGameplayCueObjectLibrary
			constexpr auto LoadedGameplayCueNotifyClasses = 0x2b0; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto GameplayCueClassesForPreallocation = 0x2c0; // Size: 16, Type: struct TArray<AGameplayCueNotify_Actor*>
			constexpr auto PendingExecuteCues = 0x2d0; // Size: 16, Type: struct TArray<struct FGameplayCuePendingExecute>
			constexpr auto GameplayCueSendContextCount = 0x2e0; // Size: 4, Type: int32_t
			constexpr auto PreallocationInfoList_Internal = 0x2e8; // Size: 16, Type: struct TArray<struct FPreallocationInfo>
	}
} 
