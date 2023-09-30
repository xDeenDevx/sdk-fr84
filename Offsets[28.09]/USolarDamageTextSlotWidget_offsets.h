namespace offsets
{
	namespace USolarDamageTextSlotWidget
	{
			constexpr auto TextDatas = 0x358; // Size: 80, Type: struct TMap<enum class ESolarDamageTextType, struct FSolarDamageTextData>
			constexpr auto IconDatas = 0x3a8; // Size: 80, Type: struct TMap<enum class ESolarDamageTextType, struct FSolarDamageTextIconData>
			constexpr auto Img_Crit = 0x3f8; // Size: 8, Type: struct UImage*
			constexpr auto Crit_Anim = 0x400; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto UniqueId = 0x408; // Size: 4, Type: uint32_t
			constexpr auto DamageForSpecialAnimation = 0x40c; // Size: 4, Type: int32_t
			constexpr auto Text_Special_Anim = 0x410; // Size: 8, Type: struct UWidgetAnimation*
	}
} 
