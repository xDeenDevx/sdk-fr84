namespace offsets
{
	namespace UChatListEntryDataBase
	{
			constexpr auto MessageType = 0x28; // Size: 1, Type: enum class ELimNativeMsgContentType
			constexpr auto Timestamp = 0x30; // Size: 8, Type: struct FDateTime
			constexpr auto SenderId = 0x38; // Size: 16, Type: struct FString
			constexpr auto SenderName = 0x48; // Size: 16, Type: struct FString
			constexpr auto SenderAvatarUrl = 0x58; // Size: 16, Type: struct FString
			constexpr auto MsgState = 0x68; // Size: 1, Type: enum class ELimNativeMsgState
			constexpr auto ConvID = 0x70; // Size: 16, Type: struct FString
			constexpr auto ConvType = 0x80; // Size: 1, Type: enum class ELimNativeConvType
			constexpr auto MsgId = 0x88; // Size: 16, Type: struct FString
	}
} 
