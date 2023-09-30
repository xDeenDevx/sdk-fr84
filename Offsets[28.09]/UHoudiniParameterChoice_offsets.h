namespace offsets
{
	namespace UHoudiniParameterChoice
	{
			constexpr auto IntValue = 0x108; // Size: 4, Type: int32_t
			constexpr auto DefaultIntValue = 0x10c; // Size: 4, Type: int32_t
			constexpr auto StringValue = 0x110; // Size: 16, Type: struct FString
			constexpr auto DefaultStringValue = 0x120; // Size: 16, Type: struct FString
			constexpr auto StringChoiceValues = 0x130; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto StringChoiceLabels = 0x140; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto bIsChildOfRamp = 0x160; // Size: 1, Type: bool
			constexpr auto IntValuesArray = 0x168; // Size: 16, Type: struct TArray<int32_t>
	}
} 
