namespace offsets
{
	namespace ASolarCapsuleRoot
	{
			constexpr auto RootComp = 0x230; // Size: 8, Type: struct USceneComponent*
			constexpr auto LocationSign = 0x238; // Size: 8, Type: struct UWidgetComponent*
			constexpr auto CatchupDuration = 0x250; // Size: 4, Type: float
			constexpr auto CatchupBaseLerp = 0x254; // Size: 4, Type: float
			constexpr auto MiniMapData = 0x27c; // Size: 48, Type: struct FMiniMapAirlineData
			constexpr auto CurrentAirline = 0x2ac; // Size: 68, Type: struct FUsingAirlineData
			constexpr auto CruiseStartTime = 0x2f0; // Size: 4, Type: float
			constexpr auto CruiseStartLoc = 0x2f4; // Size: 12, Type: struct FVector
			constexpr auto CruiseStartRot = 0x300; // Size: 12, Type: struct FRotator
			constexpr auto ForceParachuteWarningTime = 0x30c; // Size: 4, Type: int32_t
			constexpr auto MaxAllowedSmoothDistance = 0x310; // Size: 4, Type: float
			constexpr auto ClientSpeedScale = 0x314; // Size: 4, Type: float
			constexpr auto ClientRotationSmoothSpeed = 0x318; // Size: 4, Type: float
			constexpr auto CapsuleFormationData = 0x338; // Size: 8, Type: struct UCapsuleFormationData*
			constexpr auto CruiseFormation = 0x340; // Size: 80, Type: struct TMap<struct FVector, struct FTeamFormationUnit>
			constexpr auto BoardingPlayerList = 0x390; // Size: 16, Type: struct TArray<struct FBoarderInfo>
	}
} 
