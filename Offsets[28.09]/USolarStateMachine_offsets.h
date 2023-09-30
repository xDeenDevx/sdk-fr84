namespace offsets
{
	namespace USolarStateMachine
	{
			constexpr auto StateMap = 0x28; // Size: 80, Type: struct TMap<struct FName, struct USolarState*>
			constexpr auto CurrentState = 0x78; // Size: 8, Type: struct USolarState*
			constexpr auto PreviousState = 0x80; // Size: 8, Type: struct USolarState*
	}
} 
