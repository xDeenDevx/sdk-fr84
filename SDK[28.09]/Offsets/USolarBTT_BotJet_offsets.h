namespace offsets
{
	namespace USolarBTT_BotJet
	{
			constexpr auto JetPackMode = 0x98; // Size: 1, Type: enum class EJetPackMode
			constexpr auto FinishMode = 0x99; // Size: 1, Type: enum class EJetTaskFinishMode
			constexpr auto bTestBlock = 0x9a; // Size: 1, Type: bool
			constexpr auto DisplacementExpected = 0x9c; // Size: 4, Type: float
			constexpr auto MinDisplacementExpected = 0xa0; // Size: 4, Type: float
			constexpr auto bUseLocalInput = 0xa4; // Size: 1, Type: bool
			constexpr auto LocalInput = 0xa8; // Size: 8, Type: struct FVector2D
			constexpr auto bSelectorAsTarget = 0xb0; // Size: 1, Type: bool
	}
} 
