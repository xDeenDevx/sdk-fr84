namespace offsets
{
	namespace USolarGlobalEventSystem
	{
			constexpr auto ListenerEventsByClass = 0x30; // Size: 80, Type: struct TMap<USolarGlobalEventBase*, struct FMulticastInlineDelegate>
			constexpr auto ListenerEventsByName = 0x80; // Size: 80, Type: struct TMap<struct FName, struct FMulticastInlineDelegate>
			constexpr auto ListenerEventsByGameplayTag = 0xd0; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FMulticastInlineDelegate>
	}
} 
