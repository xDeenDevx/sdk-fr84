namespace offsets
{
	namespace ULimNative
	{
			constexpr auto ShowLog = 0x28; // Size: 1, Type: bool
			constexpr auto OnLog = 0x30; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnEvent = 0x40; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetLanguage = 0x50; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSetLanguage = 0x60; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSetAllConfig = 0x70; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSetReportConfig = 0x80; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSetParkConfig = 0x90; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetResDir = 0xa0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSetResDir = 0xb0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnLogin = 0xc0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnLoginV2 = 0xd0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnLogout = 0xe0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCreateGroup = 0xf0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnJoinGroup = 0x100; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnQuitGroup = 0x110; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnDestoryGroup = 0x120; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetGroup = 0x130; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetGroups = 0x140; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetAttr = 0x150; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetAllGroupAttr = 0x160; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSetGroupAttr = 0x170; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetGroupMembers = 0x180; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAddGroupMember = 0x190; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveGroupMember = 0x1a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetGroupMember = 0x1b0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSetConvRead = 0x1c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSendMsg = 0x1d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRevokeMsg = 0x1e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetBeforeMsg = 0x1f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetAfterMsg = 0x200; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetMsgsById = 0x210; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetCommonMsgs = 0x220; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSetMsgState = 0x230; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnConvHandle = 0x240; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnConvsGet = 0x250; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetFriends = 0x260; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveFriend = 0x270; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCreateFriendRequest = 0x280; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetFriendRequests = 0x290; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAcceptFriendRequest = 0x2a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRefuseFriendRequest = 0x2b0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCancelFriendRequest = 0x2c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetBlockees = 0x2d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAddToBlockee = 0x2e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRemoveFromBlockee = 0x2f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetUser = 0x300; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetUsers = 0x310; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetUsersState = 0x320; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReportMsg = 0x330; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTranslateText = 0x340; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCheckImage = 0x350; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetOssToken = 0x360; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetGMEToken = 0x370; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMsgReceived = 0x380; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMsgLogicReceived = 0x390; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMsgRevoked = 0x3a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetMiscConfigInfo = 0x3b0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetConvChatLevelConfig = 0x3c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetConnState = 0x3d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNetState = 0x3e0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
