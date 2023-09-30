namespace offsets
{
	namespace UWeaponAssistAimConfig
	{
			constexpr auto AssistAimTargetFlag = 0x30; // Size: 1, Type: char
			constexpr auto TargetDetectionBlockTypes = 0x38; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto LockAimingBlockTypes = 0x48; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto bEnableAssistFollow = 0x58; // Size: 1, Type: bool
			constexpr auto bEnableGlobalSensitivityScale = 0x59; // Size: 1, Type: bool
			constexpr auto DefaultAssistAimWeaponConfigAll = 0x60; // Size: 96, Type: struct FWeaponAssistAimWeaponConfigAll
			constexpr auto DefaultAssistAimWeaponConfigAllGamepad = 0xc0; // Size: 96, Type: struct FWeaponAssistAimWeaponConfigAll
			constexpr auto AssistAimWeaponConfigsByCharacterTag = 0x120; // Size: 16, Type: struct TArray<struct FWeaponAssistAimByCharacterTag>
	}
} 
