namespace offsets
{
	namespace USolarHomeCameraManager
	{
			constexpr auto CameraMovementSetting = 0xb8; // Size: 104, Type: struct FCameraMovementParameters
			constexpr auto LookAtLocation = 0x134; // Size: 12, Type: struct FVector
			constexpr auto HomeActorMgr = 0x140; // Size: 8, Type: struct USolarHomeActorManager*
			constexpr auto CacheHomeSpaceSpawner = 0x150; // Size: 8, Type: struct ASolarHomeSpaceSpawner*
			constexpr auto BuildCamera = 0x158; // Size: 8, Type: struct ACameraActor*
			constexpr auto BattleCamera = 0x160; // Size: 8, Type: struct AActor*
			constexpr auto BuildCameraComp = 0x168; // Size: 8, Type: struct UCameraComponent*
	}
} 
