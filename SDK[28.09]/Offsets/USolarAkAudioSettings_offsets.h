namespace offsets
{
	namespace USolarAkAudioSettings
	{
			constexpr auto EnableBankLoadStrategy = 0x38; // Size: 1, Type: bool
			constexpr auto EnableDebugMode = 0x39; // Size: 1, Type: bool
			constexpr auto DelayReleaseBankTime = 0x3c; // Size: 4, Type: float
			constexpr auto SoundBankEventTable = 0x40; // Size: 40, Type: struct TSoftObjectPtr<UDataTable>
			constexpr auto InGameSceneName = 0x68; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto InLobbySceneName = 0x78; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto TutorialSceneName = 0x88; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto HomeSceneName = 0x98; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto WaitingLandSceneName = 0xa8; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto BankDetailsArray = 0xb8; // Size: 16, Type: struct TArray<struct FSolarAudioDetail>
	}
} 
