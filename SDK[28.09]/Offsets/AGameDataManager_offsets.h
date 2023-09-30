namespace offsets
{
	namespace AGameDataManager
	{
			constexpr auto IntegerValues = 0x230; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto FloatValues = 0x240; // Size: 16, Type: struct TArray<float>
			constexpr auto ByteValues = 0x250; // Size: 16, Type: struct TArray<char>
			constexpr auto BoolValues = 0x260; // Size: 16, Type: struct TArray<bool>
			constexpr auto FVectorValues = 0x270; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto FStringValues = 0x280; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto GlobalDataMap = 0x2f0; // Size: 1160, Type: struct FSCMHostData
			constexpr auto SideDataMap = 0x778; // Size: 80, Type: struct TMap<struct FString, struct FSCMHostData>
			constexpr auto PlayerDataMap = 0x7c8; // Size: 80, Type: struct TMap<struct FString, struct FSCMHostData>
			constexpr auto SideDataDefaultTemplate = 0x818; // Size: 1160, Type: struct FSCMHostData
			constexpr auto PlayerDataDefaultTemplate = 0xca0; // Size: 1160, Type: struct FSCMHostData
			constexpr auto RanKMap = 0x1128; // Size: 80, Type: struct TMap<struct FString, struct URank*>
			constexpr auto DataTable = 0x1198; // Size: 8, Type: struct UDataTable*
			constexpr auto GeneralDataTable = 0x11a0; // Size: 8, Type: struct UDataTable*
	}
} 
