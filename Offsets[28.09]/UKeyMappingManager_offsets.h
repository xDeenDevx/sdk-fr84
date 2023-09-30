namespace offsets
{
	namespace UKeyMappingManager
	{
			constexpr auto OnKeyMappingUpdate = 0x120; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnKeyMappingConfirm = 0x130; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnKeyboardUpdate = 0x140; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OccupiedKeyMap = 0x160; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto KeyMappingFileMgr = 0x260; // Size: 8, Type: struct UKeyMappingFileMgr*
	}
} 
