namespace offsets
{
	namespace USolarPreservedBotPopTask
	{
			constexpr auto CurrentTaskID = 0x28; // Size: 4, Type: int32_t
			constexpr auto PickedTeleportCenters = 0x40; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto FailedBots = 0x50; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto PendingSeparateBots = 0x60; // Size: 16, Type: struct TArray<struct ASolarBotAIController*>
			constexpr auto OnGetTeleportLocationSuccess = 0x70; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPopBotsFinished = 0x80; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetFinalTeleportLocSuccess = 0x90; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnGetFinalTeleportLocFail = 0xa0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
