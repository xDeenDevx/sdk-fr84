namespace offsets
{
	namespace USolarSpecABP_Skill
	{
			constexpr auto SolarCharacterOwner = 0x268; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto ViewPitch = 0x270; // Size: 4, Type: float
			constexpr auto ViewYaw = 0x274; // Size: 4, Type: float
			constexpr auto InputDirection = 0x284; // Size: 4, Type: float
			constexpr auto Speed = 0x288; // Size: 4, Type: float
			constexpr auto bIsWalking = 0x28c; // Size: 1, Type: char
			constexpr auto bIsCrouching = 0x28c; // Size: 1, Type: char
			constexpr auto bIsSixDirRunForward = 0x28c; // Size: 1, Type: char
			constexpr auto CurrentWalkMode = 0x28d; // Size: 1, Type: enum class EWalkMode
			constexpr auto IdleTurnType = 0x28e; // Size: 1, Type: enum class EIdleTurnType
			constexpr auto TurnExplicitTime = 0x290; // Size: 4, Type: float
			constexpr auto DamageDirection = 0x294; // Size: 4, Type: float
			constexpr auto DamageReactionAlpha = 0x298; // Size: 4, Type: float
			constexpr auto DamageNormalizedTime = 0x29c; // Size: 4, Type: float
			constexpr auto CurrentAirMoveMode = 0x2a0; // Size: 1, Type: enum class EAirMoveMode
			constexpr auto LastAirMoveMode = 0x2a1; // Size: 1, Type: enum class EAirMoveMode
			constexpr auto bNewJet = 0x2b1; // Size: 1, Type: bool
			constexpr auto CurrentSkillAnimType = 0x2b2; // Size: 1, Type: enum class ESkillAnimType
			constexpr auto CurrentSkillAnimRightHandType = 0x2b3; // Size: 1, Type: enum class ESkillAnimRightHandType
	}
} 
