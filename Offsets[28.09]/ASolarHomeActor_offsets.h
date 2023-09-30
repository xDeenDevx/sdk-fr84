namespace offsets
{
	namespace ASolarHomeActor
	{
			constexpr auto StaticMeshComp = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto HomeActorStaticData = 0x230; // Size: 56, Type: struct FHomeActorStaticData
			constexpr auto HomeActorServerData = 0x268; // Size: 104, Type: struct FHomeActorServerData
			constexpr auto OriginalShaders = 0x2d0; // Size: 80, Type: struct TMap<struct FName, struct FHomeOriginalShader>
			constexpr auto HomeActorMgr = 0x330; // Size: 8, Type: struct USolarHomeActorManager*
			constexpr auto BoxComps = 0x338; // Size: 16, Type: struct TArray<struct UBoxComponent*>
			constexpr auto HitHomeActors = 0x348; // Size: 80, Type: struct TMap<struct ASolarHomeActor*, int32_t>
			constexpr auto CurrentConnectedGraph = 0x398; // Size: 8, Type: struct USolarHomeConnectedGraph*
			constexpr auto NeighborFloors = 0x3a0; // Size: 16, Type: struct TArray<struct ASolarHomeActor*>
			constexpr auto NeighborWalls = 0x3b0; // Size: 16, Type: struct TArray<struct ASolarHomeActor*>
	}
} 
