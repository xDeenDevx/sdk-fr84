namespace offsets
{
	namespace USolarlandResUpdater
	{
			constexpr auto ToDownloadPakList = 0x30; // Size: 16, Type: struct TArray<struct FPakFileEntry>
			constexpr auto OnPatchPrompt = 0x40; // Size: 16, Type: struct FDelegate
			constexpr auto OnPatchComplete = 0x50; // Size: 16, Type: struct FDelegate
			constexpr auto OnPatchFailed = 0x60; // Size: 16, Type: struct FDelegate
			constexpr auto OnCDNDownloadFailed = 0x70; // Size: 16, Type: struct FDelegate
			constexpr auto OnPatchProgress = 0x80; // Size: 16, Type: struct FDelegate
			constexpr auto OnDownloadServerList = 0x90; // Size: 16, Type: struct FDelegate
			constexpr auto OnServerClose = 0xa0; // Size: 16, Type: struct FDelegate
			constexpr auto OnBackdoorComplete = 0xb0; // Size: 16, Type: struct FDelegate
			constexpr auto OnBackdoorFaild = 0xc0; // Size: 16, Type: struct FDelegate
			constexpr auto OnBackdoorProgress = 0xd0; // Size: 16, Type: struct FDelegate
			constexpr auto OnAnnouncementGet = 0xe0; // Size: 16, Type: struct FDelegate
			constexpr auto OnAnnouncementGetFail = 0xf0; // Size: 16, Type: struct FDelegate
	}
} 
