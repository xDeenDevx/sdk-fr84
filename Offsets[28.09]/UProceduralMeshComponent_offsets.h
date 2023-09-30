namespace offsets
{
	namespace UProceduralMeshComponent
	{
			constexpr auto bUseComplexAsSimpleCollision = 0x580; // Size: 1, Type: bool
			constexpr auto bUseAsyncCooking = 0x581; // Size: 1, Type: bool
			constexpr auto ProcMeshBodySetup = 0x588; // Size: 8, Type: struct UBodySetup*
			constexpr auto ProcMeshSections = 0x590; // Size: 16, Type: struct TArray<struct FProcMeshSection>
			constexpr auto CollisionConvexElems = 0x5a0; // Size: 16, Type: struct TArray<struct FKConvexElem>
			constexpr auto LocalBounds = 0x5b0; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto AsyncBodySetupQueue = 0x5d0; // Size: 16, Type: struct TArray<struct UBodySetup*>
	}
} 
