namespace offsets
{
	namespace APartyBeaconClient
	{
			constexpr auto DestSessionId = 0x2e8; // Size: 16, Type: struct FString
			constexpr auto PendingReservation = 0x2f8; // Size: 80, Type: struct FPartyReservation
			constexpr auto RequestType = 0x348; // Size: 1, Type: enum class EClientRequestType
			constexpr auto bPendingReservationSent = 0x349; // Size: 1, Type: bool
			constexpr auto bCancelReservation = 0x34a; // Size: 1, Type: bool
	}
} 
