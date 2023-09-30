namespace offsets
{
	namespace USolarInputActionContext
	{
			constexpr auto InputMappingContext = 0x48; // Size: 8, Type: struct UInputMappingContext*
			constexpr auto KeyChordInputActionDict = 0x50; // Size: 80, Type: struct TMap<struct FKey, struct UInputAction*>
			constexpr auto ActionInputActionDict = 0xa0; // Size: 80, Type: struct TMap<struct FName, struct FSolarInputActionEntry>
			constexpr auto ChordActionInputActionDict = 0xf0; // Size: 80, Type: struct TMap<struct FName, struct FSolarInputActionEntry>
			constexpr auto NullInputAction = 0x140; // Size: 8, Type: struct UInputAction*
	}
} 
