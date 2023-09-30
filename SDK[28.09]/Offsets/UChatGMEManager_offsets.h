namespace offsets
{
	namespace UChatGMEManager
	{
			constexpr auto ctx = 0x30; // Size: 16, Type: struct FLimNativeLowLevelWrapper
			constexpr auto OnEnterRoom = 0x40; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnExitRoom = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRoomDisconnect = 0x90; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUserUpdate = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNumberOfUsersUpdate = 0xe0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNumberOfAudioStreamsUpdate = 0x108; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReconnectStart = 0x130; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReconnectSuccess = 0x158; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSwitchRoom = 0x180; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnChangeRoomType = 0x1a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioDataEmpty = 0x1d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRoomSharingStart = 0x1f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRoomSharingStop = 0x220; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRecordCompleted = 0x248; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRecordPreviewCompleted = 0x270; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRecordMixCompleted = 0x298; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioRouteUpdate = 0x2c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSpeakerDefaultDeviceChanged = 0x2e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSpeakerNewDevice = 0x310; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSpeakerLostDevice = 0x338; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMicNewDevice = 0x360; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMicLostDevice = 0x388; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMicDefaultDeviceChanged = 0x3b0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioRouteChanged = 0x3d8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUserVolumes = 0x400; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnChangeRoomQuality = 0x428; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAccompanyFinish = 0x450; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnServerAudioRouteEvent = 0x478; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCustomDataUpdate = 0x4a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRealtimeASR = 0x4c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnChorusEvent = 0x4f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnChangeTeamId = 0x518; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioReady = 0x540; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHardwareTestRecordFinish = 0x568; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHardwareTestPreviewFinish = 0x590; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPTTRecordComplete = 0x5b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPTTUploadComplete = 0x5e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPTTDownloadComplete = 0x608; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPTTPlayComplete = 0x630; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPTTSpeech2TextComplete = 0x658; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPTTStreamingRecognitionComplete = 0x680; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPTTStreamingRecognitionIsRunning = 0x6a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRoomManagementOperator = 0x6d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPermissionResult = 0x6f8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
