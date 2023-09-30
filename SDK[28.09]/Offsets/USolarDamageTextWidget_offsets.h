namespace offsets
{
	namespace USolarDamageTextWidget
	{
			constexpr auto FloatDamageTextConfig = 0x350; // Size: 80, Type: struct TMap<enum class ESolarDamageTextType, struct FSolarDamageTextStyle>
			constexpr auto StackDamageTextConfig = 0x3a0; // Size: 80, Type: struct TMap<enum class ESolarDamageTextType, struct FSolarDamageTextStyle>
			constexpr auto HitCharacterPositionOffset = 0x3f0; // Size: 8, Type: struct FVector2D
			constexpr auto CommonHitPositionOffset = 0x3f8; // Size: 8, Type: struct FVector2D
			constexpr auto FloatDamageTextOffset = 0x400; // Size: 8, Type: struct FVector2D
			constexpr auto DamageTextDisplayAreaRatio = 0x408; // Size: 8, Type: struct FVector2D
			constexpr auto FloatDamageTextMaxinum = 0x410; // Size: 4, Type: int32_t
			constexpr auto FloatDamageTextScaleMaximum = 0x414; // Size: 4, Type: float
			constexpr auto FloatDamageTextScaleMinimum = 0x418; // Size: 4, Type: float
			constexpr auto StackDamageTextScaleMaximum = 0x41c; // Size: 4, Type: float
			constexpr auto StackDamageTextScaleMinimum = 0x420; // Size: 4, Type: float
			constexpr auto StackDamageTextHitScaleRatio = 0x424; // Size: 4, Type: float
			constexpr auto HeadShotDamageTextScaleRatio = 0x428; // Size: 4, Type: float
			constexpr auto AllDamageTextSlotWidget = 0x430; // Size: 16, Type: struct TArray<struct USolarDamageTextSlotWidget*>
			constexpr auto DamageTextGroups = 0x440; // Size: 16, Type: struct TArray<struct UVerticalBox*>
			constexpr auto DamageTextGroupDatas = 0x450; // Size: 80, Type: struct TMap<uint32_t, struct FSolarDamageTextGroupData>
			constexpr auto PendingSlotWidgetDatas = 0x4a0; // Size: 80, Type: struct TMap<uint32_t, struct FSolarDamageTextGroupData>
			constexpr auto OBSlotScaleCurve = 0x4f0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto FloatDamageTextMaxinumBasedOnDetailMode = 0x578; // Size: 80, Type: struct TMap<enum class ESlateDetailMode, int32_t>
			constexpr auto FloatDamageTextWidgetPoolBasedOnDetailMode = 0x5c8; // Size: 80, Type: struct TMap<enum class ESlateDetailMode, int32_t>
			constexpr auto FloatDamageTextWidget = 0x618; // Size: 8, Type: USolarDamageTextSlotWidget*
	}
} 
