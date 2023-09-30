namespace offsets
{
	namespace UHomeCharacterMovementComponent
	{
			constexpr auto ServerMoves = 0x8a8; // Size: 16, Type: struct TArray<struct FServerMoveData>
			constexpr auto NetSyncDeltaTime = 0x8b8; // Size: 4, Type: float
			constexpr auto VerifyDeltaTime = 0x8bc; // Size: 4, Type: float
			constexpr auto MaxDelayTime = 0x8c0; // Size: 4, Type: float
			constexpr auto bEnableMove = 0x8c4; // Size: 1, Type: bool
			constexpr auto CurrentServerTime = 0x8d8; // Size: 8, Type: int64_t
			constexpr auto ConfigSyncDeltaTime = 0x8e4; // Size: 4, Type: float
			constexpr auto ConfigVerifyStepTime = 0x8e8; // Size: 4, Type: float
			constexpr auto ConfigMaxDelay = 0x8ec; // Size: 4, Type: int32_t
			constexpr auto ConfigVerifyDistanceSquared = 0x8f0; // Size: 4, Type: float
	}
} 
