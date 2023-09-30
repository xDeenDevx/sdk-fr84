namespace offsets
{
	namespace USolarlandContentStringDownloader
	{
			constexpr auto OnContentStringDownloaded = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnContentStringDownloading = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnContentStringFailed = 0x48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bForceRedownload = 0x79; // Size: 1, Type: bool
			constexpr auto ChunkSize = 0x84; // Size: 4, Type: int32_t
	}
} 
