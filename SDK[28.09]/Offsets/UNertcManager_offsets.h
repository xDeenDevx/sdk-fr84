namespace offsets
{
	namespace UNertcManager
	{
			constexpr auto OnPermissionResult = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnEnterRoom = 0x48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnExitRoom = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnConnectionChanged = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNertcUserInfoUpdate = 0x78; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNertcLocalInfoUpdate = 0x88; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUserRoomStateChange = 0x98; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioStateChanged = 0xa8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MuteUIDList = 0xb8; // Size: 16, Type: struct TArray<int32_t>
	}
} 
