namespace offsets
{
	namespace UBodySetup
	{
			constexpr auto AggGeom = 0x28; // Size: 88, Type: struct FKAggregateGeom
			constexpr auto BoneName = 0x80; // Size: 8, Type: struct FName
			constexpr auto PhysicsType = 0x88; // Size: 1, Type: enum class EPhysicsType
			constexpr auto bAlwaysFullAnimWeight = 0x89; // Size: 1, Type: char
			constexpr auto bConsiderForBounds = 0x89; // Size: 1, Type: char
			constexpr auto bMeshCollideAll = 0x89; // Size: 1, Type: char
			constexpr auto bDoubleSidedGeometry = 0x89; // Size: 1, Type: char
			constexpr auto bGenerateNonMirroredCollision = 0x89; // Size: 1, Type: char
			constexpr auto bSharedCookedData = 0x89; // Size: 1, Type: char
			constexpr auto bGenerateMirroredCollision = 0x89; // Size: 1, Type: char
			constexpr auto bSupportUVsAndFaceRemap = 0x89; // Size: 1, Type: char
			constexpr auto CollisionReponse = 0x8b; // Size: 1, Type: enum class EBodyCollisionResponse
			constexpr auto CollisionTraceFlag = 0x8c; // Size: 1, Type: enum class ECollisionTraceFlag
			constexpr auto PhysMaterial = 0x90; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto WalkableSlopeOverride = 0x98; // Size: 16, Type: struct FWalkableSlopeOverride
			constexpr auto DefaultInstance = 0x120; // Size: 304, Type: struct FBodyInstance
			constexpr auto BuildScale3D = 0x258; // Size: 12, Type: struct FVector
	}
} 
