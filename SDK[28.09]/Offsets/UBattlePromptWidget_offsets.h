namespace offsets
{
	namespace UBattlePromptWidget
	{
			constexpr auto EnterAnimPanel = 0x358; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto MeshWidget_Arrow = 0x360; // Size: 8, Type: struct UMeshRectangleWidget*
			constexpr auto MeshWidget_Detail = 0x368; // Size: 8, Type: struct UMeshRectangleWidget*
			constexpr auto DisplayTypeMap = 0x370; // Size: 80, Type: struct TMap<enum class EBattlePromptType, enum class EBattlePromptType>
			constexpr auto TypeUVMap = 0x3c0; // Size: 80, Type: struct TMap<enum class EBattlePromptType, int32_t>
			constexpr auto ElemIconDifference = 0x410; // Size: 4, Type: float
			constexpr auto ElemRadiusMap = 0x418; // Size: 80, Type: struct TMap<enum class EBattlePromptType, float>
			constexpr auto ThreatFactorDefault = 0x468; // Size: 4, Type: int32_t
			constexpr auto ElemArrowColorCurveMap = 0x470; // Size: 80, Type: struct TMap<enum class EBattlePromptType, struct UCurveFloat*>
			constexpr auto ElemArrowLengthCurveMap = 0x4c0; // Size: 80, Type: struct TMap<enum class EBattlePromptType, struct UCurveFloat*>
			constexpr auto ElemIconScaleCurveMap = 0x510; // Size: 80, Type: struct TMap<enum class EBattlePromptType, struct UCurveFloat*>
			constexpr auto CloseCheckAngleDefault = 0x560; // Size: 4, Type: int32_t
			constexpr auto CloseCheckAngleCurve = 0x568; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ElemLerpSpeed = 0x570; // Size: 4, Type: float
			constexpr auto EditorTestColorFactor = 0x574; // Size: 4, Type: int32_t
			constexpr auto EditorTestLengthFactor = 0x578; // Size: 4, Type: int32_t
			constexpr auto EditorTestAngle = 0x57c; // Size: 4, Type: int32_t
			constexpr auto EffectedNightmareActors = 0x580; // Size: 80, Type: struct TSet<struct AActor*>
			constexpr auto Datas = 0x5f0; // Size: 16, Type: struct TArray<struct FPromptElemInfo>
	}
} 
