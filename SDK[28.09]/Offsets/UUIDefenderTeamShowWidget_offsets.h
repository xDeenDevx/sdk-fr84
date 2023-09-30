namespace offsets
{
	namespace UUIDefenderTeamShowWidget
	{
			constexpr auto Player_2 = 0x348; // Size: 8, Type: struct UUIDefenderPlaerShowWidget*
			constexpr auto Player_3 = 0x350; // Size: 8, Type: struct UUIDefenderPlaerShowWidget*
			constexpr auto Player_4 = 0x358; // Size: 8, Type: struct UUIDefenderPlaerShowWidget*
			constexpr auto Player_5 = 0x360; // Size: 8, Type: struct UUIDefenderPlaerShowWidget*
			constexpr auto Exit_Anim = 0x368; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto PlayerNum = 0x370; // Size: 4, Type: int32_t
			constexpr auto bIsMyTeam = 0x374; // Size: 1, Type: bool
			constexpr auto LevelName = 0x378; // Size: 8, Type: struct FName
			constexpr auto ActorName_2 = 0x380; // Size: 16, Type: struct FString
			constexpr auto ActorName_3 = 0x390; // Size: 16, Type: struct FString
			constexpr auto ActorName_4 = 0x3a0; // Size: 16, Type: struct FString
			constexpr auto ActorName_5 = 0x3b0; // Size: 16, Type: struct FString
			constexpr auto CameraName_2 = 0x3c0; // Size: 16, Type: struct FString
			constexpr auto CameraName_3 = 0x3d0; // Size: 16, Type: struct FString
			constexpr auto CameraName_4 = 0x3e0; // Size: 16, Type: struct FString
			constexpr auto CameraName_5 = 0x3f0; // Size: 16, Type: struct FString
			constexpr auto MyTeamPlayerState = 0x400; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto DefenderTeamPlayerState = 0x410; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto ShowWidget = 0x420; // Size: 16, Type: struct TArray<struct UUIDefenderPlaerShowWidget*>
			constexpr auto OutActors = 0x430; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto OutSceneCapture2Ds = 0x440; // Size: 16, Type: struct TArray<struct ASceneCapture2D*>
			constexpr auto Transforms = 0x450; // Size: 16, Type: struct TArray<struct FWidgetTransform>
	}
} 
