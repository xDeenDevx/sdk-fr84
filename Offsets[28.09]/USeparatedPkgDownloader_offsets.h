namespace offsets
{
	namespace USeparatedPkgDownloader
	{
			constexpr auto OnDownloadInfoDetected = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSepPkgDownloading = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSepPkgReady = 0x48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSepPkgDownloadFailed = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHashCheckFailedPkgDownloader = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto DownloadState = 0x78; // Size: 1, Type: enum class EDownloadState
			constexpr auto StartTimestamp = 0xa0; // Size: 8, Type: int64_t
	}
} 
