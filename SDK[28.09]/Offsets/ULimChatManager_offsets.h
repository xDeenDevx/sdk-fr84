namespace offsets
{
	namespace ULimChatManager
	{
			constexpr auto LimNativeInstance = 0x30; // Size: 8, Type: struct ULimNative*
			constexpr auto ctx = 0x38; // Size: 16, Type: struct FLimNativeLowLevelWrapper
			constexpr auto CurrentLanguage = 0x48; // Size: 16, Type: struct FString
			constexpr auto OnLoginCallBackHandle = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnConvsGetCallBackHandle = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNewGetMessageHandle = 0x78; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMessageReceivedHandle = 0x88; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNewMessageReceivedHandle = 0x98; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMessageSendCallBackHandle = 0xa8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNewMessageSendCallBackHandle = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReceiveLogicMsgHandle = 0xc8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnConvDiscardHandle = 0xd8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnConfigInfoHandle = 0xe8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetConnStatHandle = 0xf8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNetStatHandle = 0x108; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetConfigChatLevelHandle = 0x118; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextTranslateDynamicDelegate = 0x128; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SelfRoleID = 0x138; // Size: 16, Type: struct FString
			constexpr auto CurrentConvData = 0x148; // Size: 24, Type: struct FChatListConvData
			constexpr auto ConvListFullData = 0x160; // Size: 16, Type: struct TArray<struct FLimNativeConversationData>
			constexpr auto ChatMsgDataList = 0x170; // Size: 16, Type: struct TArray<struct FNewChatListMessageData>
			constexpr auto ChatLevelDataList = 0x180; // Size: 16, Type: struct TArray<struct FLimNativeConvChatLevelConfigData>
			constexpr auto MsgIDMap = 0x190; // Size: 80, Type: struct TMap<struct FChatListConvData, struct FString>
			constexpr auto PeerDataList = 0x1e0; // Size: 16, Type: struct TArray<struct FChatListUserData>
			constexpr auto FriendDataList = 0x1f0; // Size: 16, Type: struct TArray<struct FChatListUserData>
			constexpr auto BaseMsgIDMap = 0x200; // Size: 80, Type: struct TMap<struct FChatListConvData, struct FString>
			constexpr auto UnreadMsgMap = 0x250; // Size: 80, Type: struct TMap<struct FChatListConvData, int32_t>
			constexpr auto OnGetFriendsCallBackHandle = 0x2a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetUserHandle = 0x2b0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetUserListHandle = 0x2c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetUserListStateHandle = 0x2d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRedHintUpdateHandle = 0x2e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnInputBoxChangeHandle = 0x2f0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
