namespace offsets
{
	namespace USolarGameMode_ElementManager
	{
			constexpr auto ElementsList = 0x30; // Size: 16, Type: struct TArray<struct ASolarMapElementBase*>
			constexpr auto PlayerStartList = 0x40; // Size: 16, Type: struct TArray<struct ASolarPlayerStart*>
			constexpr auto HandleActorRPCBPs = 0x50; // Size: 80, Type: struct TMap<struct FName, USolarGameMode_HandleElementRPC*>
			constexpr auto ElementMap = 0xa0; // Size: 80, Type: struct TMap<struct FString, struct ASolarMapElementBase*>
	}
} 
