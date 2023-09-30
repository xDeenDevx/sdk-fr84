namespace offsets
{
	namespace UPhysicsAsset
	{
			constexpr auto BoundsBodies = 0x30; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto SkeletalBodySetups = 0x40; // Size: 16, Type: struct TArray<struct USkeletalBodySetup*>
			constexpr auto ConstraintSetup = 0x50; // Size: 16, Type: struct TArray<struct UPhysicsConstraintTemplate*>
			constexpr auto SolverIterations = 0x60; // Size: 24, Type: struct FSolverIterations
			constexpr auto bNotForDedicatedServer = 0x78; // Size: 1, Type: char
			constexpr auto ThumbnailInfo = 0x120; // Size: 8, Type: struct UThumbnailInfo*
			constexpr auto BodySetup = 0x128; // Size: 16, Type: struct TArray<struct UBodySetup*>
	}
} 
