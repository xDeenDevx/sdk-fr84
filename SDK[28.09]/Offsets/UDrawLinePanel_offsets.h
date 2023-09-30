namespace offsets
{
	namespace UDrawLinePanel
	{
			constexpr auto MapSize = 0x348; // Size: 4, Type: float
			constexpr auto CurrentFOV = 0x34c; // Size: 4, Type: float
			constexpr auto SafeAreaColor = 0x388; // Size: 16, Type: struct FLinearColor
			constexpr auto PosionCircleColor = 0x398; // Size: 16, Type: struct FLinearColor
			constexpr auto DotLineColor = 0x3a8; // Size: 16, Type: struct FLinearColor
			constexpr auto AirlineProgressColor = 0x3b8; // Size: 16, Type: struct FLinearColor
			constexpr auto CapsuleBackgroundColor = 0x3c8; // Size: 16, Type: struct FLinearColor
			constexpr auto AirdropBackgroundColor = 0x3d8; // Size: 16, Type: struct FLinearColor
			constexpr auto AirdropAirlineSizeY = 0x3e8; // Size: 4, Type: float
			constexpr auto MaterialCircleSize = 0x3ec; // Size: 4, Type: float
			constexpr auto DotLineDottedLength = 0x3f0; // Size: 4, Type: float
			constexpr auto DotLineDottedInterval = 0x3f4; // Size: 4, Type: float
			constexpr auto DotLineDataList = 0x400; // Size: 16, Type: struct TArray<struct FDotLineData>
			constexpr auto CircleDataList = 0x410; // Size: 16, Type: struct TArray<struct FCircleData>
			constexpr auto MapManager = 0x420; // Size: 8, Type: struct USolarMapManager*
			constexpr auto CapsuleRoot = 0x428; // Size: 8, Type: struct TWeakObjectPtr<ASolarCapsuleRoot>
			constexpr auto CircleMaterialPath = 0x430; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DottedLineMaterialPath = 0x448; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto CircleMaterialInstanceArray = 0x460; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto DottedLineMaterialInstanceArray = 0x470; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto InitFOV = 0x480; // Size: 4, Type: float
	}
} 
