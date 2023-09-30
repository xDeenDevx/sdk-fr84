namespace offsets
{
	namespace UIpNetDriver
	{
			constexpr auto LogPortUnreach = 0x758; // Size: 1, Type: char
			constexpr auto AllowPlayerPortUnreach = 0x758; // Size: 1, Type: char
			constexpr auto MaxPortCountToTry = 0x75c; // Size: 4, Type: uint32_t
			constexpr auto ServerDesiredSocketReceiveBufferBytes = 0x76c; // Size: 4, Type: uint32_t
			constexpr auto ServerDesiredSocketSendBufferBytes = 0x770; // Size: 4, Type: uint32_t
			constexpr auto ClientDesiredSocketReceiveBufferBytes = 0x774; // Size: 4, Type: uint32_t
			constexpr auto ClientDesiredSocketSendBufferBytes = 0x778; // Size: 4, Type: uint32_t
			constexpr auto MaxSecondsInReceive = 0x780; // Size: 8, Type: double
			constexpr auto NbPacketsBetweenReceiveTimeTest = 0x788; // Size: 4, Type: int32_t
			constexpr auto ResolutionConnectionTimeout = 0x78c; // Size: 4, Type: float
	}
} 
