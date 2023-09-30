namespace offsets
{
	namespace USolarInputMappingManager
	{
			constexpr auto OnInputMappingUpdate = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto KeyMappingEntryDict = 0x48; // Size: 80, Type: struct TMap<struct FString, struct FInputKeyMappingEntry>
			constexpr auto CacheKeyMappingEntries = 0x98; // Size: 16, Type: struct TArray<struct FInputKeyMappingEntry>
	}
} 
