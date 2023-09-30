namespace offsets
{
	namespace UInputAction
	{
			constexpr auto bConsumeInput = 0x30; // Size: 1, Type: bool
			constexpr auto bTriggerWhenPaused = 0x31; // Size: 1, Type: bool
			constexpr auto bReserveAllMappings = 0x32; // Size: 1, Type: bool
			constexpr auto ValueType = 0x33; // Size: 1, Type: enum class EInputActionValueType
			constexpr auto Triggers = 0x38; // Size: 16, Type: struct TArray<struct UInputTrigger*>
			constexpr auto Modifiers = 0x48; // Size: 16, Type: struct TArray<struct UInputModifier*>
	}
} 
