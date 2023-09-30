namespace offsets
{
	namespace ASpectatorBeaconClient
	{
			constexpr auto DestSessionId = 0x2e8; // Size: 16, Type: struct FString
			constexpr auto PendingReservation = 0x2f8; // Size: 120, Type: struct FSpectatorReservation
			constexpr auto RequestType = 0x370; // Size: 1, Type: enum class ESpectatorClientRequestType
			constexpr auto bPendingReservationSent = 0x371; // Size: 1, Type: bool
			constexpr auto bCancelReservation = 0x372; // Size: 1, Type: bool
	}
} 
