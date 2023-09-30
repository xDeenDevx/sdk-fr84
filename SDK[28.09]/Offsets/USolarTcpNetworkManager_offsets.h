namespace offsets
{
	namespace USolarTcpNetworkManager
	{
			constexpr auto bIsSsmMatchEnd = 0x49; // Size: 1, Type: bool
			constexpr auto SocketClient = 0x50; // Size: 8, Type: struct ASolarTCPSocketClient*
			constexpr auto MatchChannelAction = 0x58; // Size: 8, Type: struct USCMMatchChannelAction*
			constexpr auto IsSsm = 0x60; // Size: 1, Type: bool
			constexpr auto EncryptKeyClientTCPDynamic = 0x68; // Size: 16, Type: struct FString
			constexpr auto bEncrypt = 0x78; // Size: 1, Type: bool
			constexpr auto bCompression = 0x79; // Size: 1, Type: bool
			constexpr auto DisconnectedDelegate = 0x7c; // Size: 16, Type: struct FDelegate
			constexpr auto ConnectedDelegate = 0x8c; // Size: 16, Type: struct FDelegate
			constexpr auto MessageReceivedDelegate = 0x9c; // Size: 16, Type: struct FDelegate
			constexpr auto MyReport = 0xb0; // Size: 1064, Type: struct FSolarPlayerReport
			constexpr auto MyPS = 0x4d8; // Size: 8, Type: struct ASolarPlayerState*
	}
} 
