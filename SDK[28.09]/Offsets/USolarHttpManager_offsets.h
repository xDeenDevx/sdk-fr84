namespace offsets
{
	namespace USolarHttpManager
	{
			constexpr auto ReportStr2ReprotTimes = 0x48; // Size: 80, Type: struct TMap<struct FString, int32_t>
			constexpr auto ReportRetryTimes = 0x98; // Size: 4, Type: int32_t
			constexpr auto OnImgUploaded = 0xa0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Jank = 0xcc; // Size: 4, Type: int32_t
			constexpr auto BigJank = 0xd0; // Size: 4, Type: int32_t
			constexpr auto FPS25 = 0xd4; // Size: 4, Type: float
			constexpr auto PeakPlayerNum = 0x100; // Size: 4, Type: int32_t
			constexpr auto PeakAINum = 0x104; // Size: 4, Type: int32_t
			constexpr auto PeakVehicleNum = 0x108; // Size: 4, Type: int32_t
	}
} 
