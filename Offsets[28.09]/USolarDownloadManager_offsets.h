namespace offsets
{
	namespace USolarDownloadManager
	{
			constexpr auto OnCDNURLSelectionChanged = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CDNResBaseURL = 0x60; // Size: 16, Type: struct FString
			constexpr auto ActivedFileDownloaders = 0x70; // Size: 80, Type: struct TMap<struct FName, struct USolarlandFileDownloader*>
			constexpr auto ActivedContentStringDownloaders = 0xc0; // Size: 80, Type: struct TMap<struct FName, struct USolarlandContentStringDownloader*>
			constexpr auto ActiveMounters = 0x110; // Size: 80, Type: struct TMap<struct FName, struct USolarlandPakMounter*>
	}
} 
