namespace offsets
{
	namespace UControlRig
	{
			constexpr auto ExecutionType = 0x74; // Size: 1, Type: enum class ERigExecutionType
			constexpr auto VM = 0x78; // Size: 8, Type: struct URigVM*
			constexpr auto Hierarchy = 0x80; // Size: 432, Type: struct FRigHierarchyContainer
			constexpr auto GizmoLibrary = 0x230; // Size: 40, Type: struct TSoftObjectPtr<UControlRigGizmoLibrary>
			constexpr auto InputProperties = 0x268; // Size: 80, Type: struct TMap<struct FName, struct FCachedPropertyPath>
			constexpr auto OutputProperties = 0x2b8; // Size: 80, Type: struct TMap<struct FName, struct FCachedPropertyPath>
			constexpr auto DrawContainer = 0x308; // Size: 16, Type: struct FControlRigDrawContainer
			constexpr auto DataSourceRegistry = 0x320; // Size: 8, Type: struct UAnimationDataSourceRegistry*
	}
} 
