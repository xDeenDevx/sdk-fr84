namespace offsets
{
	namespace USeparatedPkgManager
	{
			constexpr auto OnFileListDownloaded = 0x30; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnFileListFailed = 0x40; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSepPkgDataInitFinish = 0x50; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ActiveDownloaders = 0xf0; // Size: 80, Type: struct TMap<int32_t, struct USeparatedPkgDownloader*>
			constexpr auto FileListDownloader = 0x140; // Size: 8, Type: struct USolarlandFileDownloader*
	}
} 
