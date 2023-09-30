namespace offsets
{
	namespace URigVM
	{
			constexpr auto WorkMemory = 0x28; // Size: 160, Type: struct FRigVMMemoryContainer
			constexpr auto LiteralMemory = 0xc8; // Size: 160, Type: struct FRigVMMemoryContainer
			constexpr auto ByteCode = 0x168; // Size: 16, Type: struct FRigVMByteCode
			constexpr auto Instructions = 0x178; // Size: 16, Type: struct FRigVMInstructionArray
			constexpr auto FunctionNames = 0x188; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto Parameters = 0x1a8; // Size: 16, Type: struct TArray<struct FRigVMParameter>
			constexpr auto ParametersNameMap = 0x1b8; // Size: 80, Type: struct TMap<struct FName, int32_t>
	}
} 
