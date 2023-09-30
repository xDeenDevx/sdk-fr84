namespace offsets
{
	namespace UVisualSoundConfig
	{
			constexpr auto ElemMaxCount = 0x30; // Size: 1, Type: char
			constexpr auto VehicleMoveDecidingSpeed = 0x34; // Size: 4, Type: float
			constexpr auto IgnoredCheckRate = 0x38; // Size: 4, Type: float
			constexpr auto IgnoredCheckAngle = 0x3c; // Size: 4, Type: float
			constexpr auto IgnoredCheckDis_PlayerDefault = 0x40; // Size: 4, Type: float
			constexpr auto IgnoredCheckDis_VehicleDefault = 0x44; // Size: 4, Type: float
			constexpr auto IgnoredCheckDis_VehicleMap = 0x48; // Size: 80, Type: struct TMap<int32_t, float>
			constexpr auto VisualSoundDataMap = 0x98; // Size: 80, Type: struct TMap<enum class EBattlePromptType, struct FVisualSoundData>
	}
} 
