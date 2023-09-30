namespace offsets
{
	namespace ASCustomGameMode
	{
			constexpr auto TimeOutSeconds = 0x590; // Size: 4, Type: float
			constexpr auto LogicComponent = 0x648; // Size: 8, Type: struct UCGMLogicComponent*
			constexpr auto DeathComponent = 0x650; // Size: 8, Type: struct UCGMDeathComponent*
			constexpr auto WaitingPlayers = 0x668; // Size: 16, Type: struct TArray<struct ASCMPlayerController*>
			constexpr auto OnPlayerJoin = 0x688; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAIJoin = 0x698; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayerOutEvent = 0x6a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto GameManagerClasses = 0x6b8; // Size: 16, Type: struct TArray<AGameManagerBase*>
			constexpr auto LogicComponentClass = 0x6c8; // Size: 8, Type: UCGMLogicComponent*
			constexpr auto DeathComponentClass = 0x6d0; // Size: 8, Type: UCGMDeathComponent*
			constexpr auto PlayerRPCComponentClass = 0x6d8; // Size: 8, Type: USCMPlayerRPCComponent*
	}
} 
