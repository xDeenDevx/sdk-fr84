namespace offsets
{
	namespace UGameModeCompBase
	{
			constexpr auto bPreStartPlay = 0xb8; // Size: 1, Type: bool
			constexpr auto bTakeChargeStartPlay = 0xb9; // Size: 1, Type: bool
			constexpr auto bPostStartPlay = 0xba; // Size: 1, Type: bool
			constexpr auto bPreHandleMatchHasStarted = 0xbd; // Size: 1, Type: bool
			constexpr auto bTakeChargeHandleMatchHasStarted = 0xbe; // Size: 1, Type: bool
			constexpr auto bPostHandleMatchHasStarted = 0xbf; // Size: 1, Type: bool
			constexpr auto bPreRestartPlayer = 0xc2; // Size: 1, Type: bool
			constexpr auto bTakeChargeRestartPlayer = 0xc3; // Size: 1, Type: bool
			constexpr auto bPostRestartPlayer = 0xc4; // Size: 1, Type: bool
			constexpr auto bPreEndPlay = 0xc7; // Size: 1, Type: bool
			constexpr auto bTakeChargeEndPlay = 0xc8; // Size: 1, Type: bool
			constexpr auto bPostEndPlay = 0xc9; // Size: 1, Type: bool
	}
} 
