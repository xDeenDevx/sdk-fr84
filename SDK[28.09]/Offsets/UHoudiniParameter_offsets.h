namespace offsets
{
	namespace UHoudiniParameter
	{
			constexpr auto Name = 0x28; // Size: 16, Type: struct FString
			constexpr auto Label = 0x38; // Size: 16, Type: struct FString
			constexpr auto ParmType = 0x48; // Size: 1, Type: enum class EHoudiniParameterType
			constexpr auto TupleSize = 0x4c; // Size: 4, Type: uint32_t
			constexpr auto NodeId = 0x50; // Size: 4, Type: int32_t
			constexpr auto ParmId = 0x54; // Size: 4, Type: int32_t
			constexpr auto ParentParmId = 0x58; // Size: 4, Type: int32_t
			constexpr auto ChildIndex = 0x5c; // Size: 4, Type: int32_t
			constexpr auto bIsVisible = 0x60; // Size: 1, Type: bool
			constexpr auto bIsParentFolderVisible = 0x61; // Size: 1, Type: bool
			constexpr auto bIsDisabled = 0x62; // Size: 1, Type: bool
			constexpr auto bHasChanged = 0x63; // Size: 1, Type: bool
			constexpr auto bNeedsToTriggerUpdate = 0x64; // Size: 1, Type: bool
			constexpr auto bIsDefault = 0x65; // Size: 1, Type: bool
			constexpr auto bIsSpare = 0x66; // Size: 1, Type: bool
			constexpr auto bJoinNext = 0x67; // Size: 1, Type: bool
			constexpr auto bIsChildOfMultiParm = 0x68; // Size: 1, Type: bool
			constexpr auto bIsDirectChildOfMultiParm = 0x69; // Size: 1, Type: bool
			constexpr auto bPendingRevertToDefault = 0x6a; // Size: 1, Type: bool
			constexpr auto TuplePendingRevertToDefault = 0x70; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto help = 0x80; // Size: 16, Type: struct FString
			constexpr auto TagCount = 0x90; // Size: 4, Type: uint32_t
			constexpr auto ValueIndex = 0x94; // Size: 4, Type: int32_t
			constexpr auto bHasExpression = 0x98; // Size: 1, Type: bool
			constexpr auto bShowExpression = 0x99; // Size: 1, Type: bool
			constexpr auto ParamExpression = 0xa0; // Size: 16, Type: struct FString
			constexpr auto Tags = 0xb0; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto bAutoUpdate = 0x100; // Size: 1, Type: bool
	}
} 
