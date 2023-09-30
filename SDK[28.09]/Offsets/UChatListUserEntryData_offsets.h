namespace offsets
{
	namespace UChatListUserEntryData
	{
			constexpr auto Uid = 0x28; // Size: 16, Type: struct FString
			constexpr auto NickName = 0x38; // Size: 16, Type: struct FString
			constexpr auto AvatarUrl = 0x48; // Size: 16, Type: struct FString
			constexpr auto AvatarFrameUrl = 0x58; // Size: 16, Type: struct FString
			constexpr auto Sex = 0x68; // Size: 1, Type: enum class ELimNativeUserSexType
			constexpr auto VipLevel = 0x6c; // Size: 4, Type: int32_t
			constexpr auto IsShowVip = 0x70; // Size: 1, Type: bool
			constexpr auto OnlineState = 0x71; // Size: 1, Type: enum class ELimNativeFriendStateType
			constexpr auto UnreadCount = 0x74; // Size: 4, Type: int32_t
	}
} 
