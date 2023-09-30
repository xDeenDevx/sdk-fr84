namespace offsets
{
	namespace UHUD_WorldMark
	{
			constexpr auto LiveTime = 0x348; // Size: 4, Type: float
			constexpr auto ExtraLiveTime = 0x34c; // Size: 4, Type: float
			constexpr auto ResponCheckRangeParam = 0x350; // Size: 4, Type: float
			constexpr auto RefreshTime = 0x354; // Size: 4, Type: float
			constexpr auto WorldPos = 0x358; // Size: 12, Type: struct FVector
			constexpr auto ScreenSize = 0x364; // Size: 8, Type: struct FVector2D
			constexpr auto IconSize = 0x36c; // Size: 8, Type: struct FVector2D
			constexpr auto bIsOutOfRangeLastTime = 0x374; // Size: 1, Type: bool
			constexpr auto bHasBeenAnsweredByMe = 0x375; // Size: 1, Type: bool
			constexpr auto bIfWasChosen = 0x376; // Size: 1, Type: bool
			constexpr auto bIsCreateBySelf = 0x377; // Size: 1, Type: bool
			constexpr auto ImgMarkArrow = 0x378; // Size: 8, Type: struct UImage*
			constexpr auto ImgItemMarkArrow = 0x380; // Size: 8, Type: struct UImage*
			constexpr auto Distance = 0x388; // Size: 8, Type: struct UTextBlock*
			constexpr auto UpdateIconStyleTime_LowLevel = 0x390; // Size: 4, Type: float
			constexpr auto UpdateIconStyleTime_HighLevel = 0x394; // Size: 4, Type: float
			constexpr auto PosInTeam = 0x39c; // Size: 4, Type: int32_t
			constexpr auto Data = 0x3a0; // Size: 80, Type: struct FWorldMarkData
			constexpr auto Type = 0x3f0; // Size: 1, Type: enum class EWorldMarkType
			constexpr auto MaxWorldDistance = 0x3f4; // Size: 4, Type: float
			constexpr auto MinWorldDistance = 0x3f8; // Size: 4, Type: float
			constexpr auto OpacityCurve = 0x400; // Size: 8, Type: struct UCurveFloat*
			constexpr auto bAttachToObject = 0x408; // Size: 1, Type: bool
	}
} 
