namespace offsets
{
	namespace USolarHomeActorManager
	{
			constexpr auto SpawnedHomeActors = 0x40; // Size: 80, Type: struct TMap<struct FString, struct ASolarHomeActor*>
			constexpr auto SpawnedConstructsLocKey = 0x90; // Size: 80, Type: struct TMap<struct FIntVector, struct ASolarHomeActor*>
			constexpr auto PreviewConstructsLocKey = 0xe0; // Size: 80, Type: struct TMap<struct FIntVector, struct ASolarHomeActor*>
			constexpr auto ConnectedGraphSet = 0x130; // Size: 80, Type: struct TSet<struct USolarHomeConnectedGraph*>
			constexpr auto ClippingHomeActors = 0x180; // Size: 80, Type: struct TMap<struct FString, struct ASolarHomeActor*>
			constexpr auto InValidHomeActors = 0x1d0; // Size: 80, Type: struct TMap<struct FString, struct ASolarHomeActor*>
			constexpr auto HomeActorPools = 0x220; // Size: 80, Type: struct TMap<struct FString, struct USubPoolOfHomeActor*>
			constexpr auto StaticDataMap = 0x270; // Size: 80, Type: struct TMap<int32_t, struct FHomeActorStaticData>
			constexpr auto HomeActorClassPool = 0x2c0; // Size: 80, Type: struct TMap<struct FString, UObject*>
			constexpr auto SpawnedSpacesLocKey = 0x378; // Size: 80, Type: struct TMap<struct FIntVector, struct ASolarHomeBaseSpace*>
			constexpr auto ShowsSpacesLocKey = 0x3c8; // Size: 80, Type: struct TMap<struct FIntVector, struct ASolarHomeBaseSpace*>
			constexpr auto HomeObjectTable = 0x470; // Size: 8, Type: struct UDataTable*
			constexpr auto ShaderConfig = 0x478; // Size: 8, Type: struct USolarHomeShaderConfig*
			constexpr auto TextureDataTable = 0x480; // Size: 8, Type: struct UDataTable*
			constexpr auto IconDataTable = 0x488; // Size: 8, Type: struct UDataTable*
			constexpr auto PicDataTable = 0x490; // Size: 8, Type: struct UDataTable*
			constexpr auto BuildCountPerFrame = 0x498; // Size: 4, Type: int32_t
			constexpr auto HomeSpaceSpawner = 0x4b0; // Size: 8, Type: struct ASolarHomeSpaceSpawner*
			constexpr auto HomePlayerCtrl = 0x4b8; // Size: 8, Type: struct ASolarHomePlayerController*
			constexpr auto WaterActor = 0x4e0; // Size: 8, Type: struct ASolarWaterActorNew*
			constexpr auto HomeObjShadersPool = 0x4e8; // Size: 80, Type: struct TMap<struct FHomeShaderData, struct UMaterialInstanceDynamic*>
			constexpr auto bIsConstruct = 0x579; // Size: 1, Type: bool
			constexpr auto IsLoadingOpen = 0x57a; // Size: 1, Type: bool
			constexpr auto CacheDragUIs = 0x5a8; // Size: 80, Type: struct TSet<struct ASolarHomeDragUI*>
			constexpr auto UsedDragUIs = 0x5f8; // Size: 80, Type: struct TSet<struct ASolarHomeDragUI*>
	}
} 
