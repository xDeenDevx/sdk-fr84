namespace offsets
{
	namespace UHoudiniParameterMultiParm
	{
			constexpr auto bIsShown = 0x108; // Size: 1, Type: bool
			constexpr auto Value = 0x10c; // Size: 4, Type: int32_t
			constexpr auto TemplateName = 0x110; // Size: 16, Type: struct FString
			constexpr auto MultiparmValue = 0x120; // Size: 4, Type: int32_t
			constexpr auto MultiParmInstanceNum = 0x124; // Size: 4, Type: uint32_t
			constexpr auto MultiParmInstanceLength = 0x128; // Size: 4, Type: uint32_t
			constexpr auto MultiParmInstanceCount = 0x12c; // Size: 4, Type: uint32_t
			constexpr auto InstanceStartOffset = 0x130; // Size: 4, Type: uint32_t
			constexpr auto MultiParmInstanceLastModifyArray = 0x138; // Size: 16, Type: struct TArray<enum class EHoudiniMultiParmModificationType>
			constexpr auto DefaultInstanceCount = 0x148; // Size: 4, Type: int32_t
	}
} 
