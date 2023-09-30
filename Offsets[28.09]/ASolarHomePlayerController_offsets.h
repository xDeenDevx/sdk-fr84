namespace offsets
{
	namespace ASolarHomePlayerController
	{
			constexpr auto ConstructionInputComponent = 0xea0; // Size: 8, Type: struct UInputComponent*
			constexpr auto HomeActorMgr = 0xea8; // Size: 8, Type: struct USolarHomeActorManager*
			constexpr auto DragActor = 0xeb0; // Size: 8, Type: struct ASolarHomeActor*
			constexpr auto MinCheckDistance = 0xeb8; // Size: 4, Type: float
			constexpr auto MaxCheckDistance = 0xebc; // Size: 4, Type: float
			constexpr auto CacheHomeSpaceSpawner = 0xec0; // Size: 8, Type: struct ASolarHomeSpaceSpawner*
			constexpr auto bIsViewMode = 0xec8; // Size: 1, Type: bool
			constexpr auto bIsConstruction = 0xec9; // Size: 1, Type: bool
			constexpr auto AkAudioComponent = 0xed0; // Size: 8, Type: struct UAkComponent*
			constexpr auto MoveCheckDis = 0xed8; // Size: 4, Type: float
			constexpr auto CheckDis = 0x1070; // Size: 4, Type: float
			constexpr auto CameraManager = 0x1100; // Size: 8, Type: struct USolarHomeCameraManager*
			constexpr auto LookAtLocation = 0x1108; // Size: 12, Type: struct FVector
			constexpr auto OriginalLookAtLocation = 0x1114; // Size: 12, Type: struct FVector
			constexpr auto CurrentViewTarget = 0x1120; // Size: 8, Type: struct AActor*
			constexpr auto OriginalViewTarget = 0x1128; // Size: 8, Type: struct AActor*
	}
} 
