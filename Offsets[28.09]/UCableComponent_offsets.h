namespace offsets
{
	namespace UCableComponent
	{
			constexpr auto bAttachStart = 0x578; // Size: 1, Type: bool
			constexpr auto bAttachEnd = 0x579; // Size: 1, Type: bool
			constexpr auto AttachEndTo = 0x580; // Size: 40, Type: struct FComponentReference
			constexpr auto AttachEndToSocketName = 0x5a8; // Size: 8, Type: struct FName
			constexpr auto EndLocation = 0x5b0; // Size: 12, Type: struct FVector
			constexpr auto CableLength = 0x5bc; // Size: 4, Type: float
			constexpr auto NumSegments = 0x5c0; // Size: 4, Type: int32_t
			constexpr auto SubstepTime = 0x5c4; // Size: 4, Type: float
			constexpr auto SolverIterations = 0x5c8; // Size: 4, Type: int32_t
			constexpr auto bEnableStiffness = 0x5cc; // Size: 1, Type: bool
			constexpr auto bEnableCollision = 0x5cd; // Size: 1, Type: bool
			constexpr auto CollisionFriction = 0x5d0; // Size: 4, Type: float
			constexpr auto CableForce = 0x5d4; // Size: 12, Type: struct FVector
			constexpr auto CableGravityScale = 0x5e0; // Size: 4, Type: float
			constexpr auto CableWidth = 0x5e4; // Size: 4, Type: float
			constexpr auto NumSides = 0x5e8; // Size: 4, Type: int32_t
			constexpr auto TileMaterial = 0x5ec; // Size: 4, Type: float
	}
} 
