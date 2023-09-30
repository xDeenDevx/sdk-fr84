namespace offsets
{
	namespace USolarBTT_BotModifyShootParam
	{
			constexpr auto ShootTargetType = 0x70; // Size: 1, Type: enum class EBotShootTargetType
			constexpr auto ShootDisperse = 0x74; // Size: 4, Type: float
			constexpr auto HitRate = 0x78; // Size: 4, Type: float
			constexpr auto DamageRate = 0x7c; // Size: 4, Type: float
			constexpr auto DamageFactor = 0x80; // Size: 4, Type: float
			constexpr auto bModifyShootDisperse = 0x84; // Size: 1, Type: bool
			constexpr auto bModifyHitRate = 0x85; // Size: 1, Type: bool
			constexpr auto bModifyDamageRate = 0x86; // Size: 1, Type: bool
			constexpr auto bModifyDamageFactor = 0x87; // Size: 1, Type: bool
	}
} 
