namespace offsets
{
	namespace AGameStateBase
	{
			constexpr auto GameModeClass = 0x228; // Size: 8, Type: AGameModeBase*
			constexpr auto AuthorityGameMode = 0x230; // Size: 8, Type: struct AGameModeBase*
			constexpr auto SpectatorClass = 0x238; // Size: 8, Type: ASpectatorPawn*
			constexpr auto PlayerArray = 0x240; // Size: 16, Type: struct TArray<struct APlayerState*>
			constexpr auto bReplicatedHasBegunPlay = 0x250; // Size: 1, Type: bool
			constexpr auto ReplicatedWorldTimeSeconds = 0x254; // Size: 4, Type: float
			constexpr auto ServerWorldTimeSecondsDelta = 0x258; // Size: 4, Type: float
			constexpr auto ServerWorldTimeSecondsUpdateFrequency = 0x25c; // Size: 4, Type: float
	}
} 
