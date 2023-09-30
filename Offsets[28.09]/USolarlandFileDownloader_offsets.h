namespace offsets
{
	namespace USolarlandFileDownloader
	{
			constexpr auto OnEachFileDownloaded = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnDownloadCompleted = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnEachFileDownloading = 0x48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnFileDownloadFailed = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHashCheckFailedFileDownloader = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bForceRedownload = 0xa9; // Size: 1, Type: bool
			constexpr auto ChunkSize = 0xd4; // Size: 4, Type: int32_t
	}
} 
