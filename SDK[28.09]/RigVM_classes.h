// Class RigVM.RigVM
// Size: 0x240 (Inherited: 0x28)
struct URigVM : UObject {
	struct FRigVMMemoryContainer WorkMemory; // 0x28(0xa0)
	struct FRigVMMemoryContainer LiteralMemory; // 0xc8(0xa0)
	struct FRigVMByteCode ByteCode; // 0x168(0x10)
	struct FRigVMInstructionArray Instructions; // 0x178(0x10)
	struct TArray<struct FName> FunctionNames; // 0x188(0x10)
	char pad_198[0x10]; // 0x198(0x10)
	struct TArray<struct FRigVMParameter> Parameters; // 0x1a8(0x10)
	struct TMap<struct FName, int32_t> ParametersNameMap; // 0x1b8(0x50)
	char pad_208[0x38]; // 0x208(0x38)

	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4017770
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4017930
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4017540
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4017320
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4017150
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4016f90
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4016de0
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4016c20
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4016a60
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // Function RigVM.RigVM.GetRigVMFunctionName // (Final|Native|Public|Const) // @ game+0x4016980
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4016620
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x40167d0
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4016430
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x40162e0
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4016130
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4015f90
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4015df0
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4015c50
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4015ab0
	int32_t GetParameterArraySize(struct FName& InParameterName); // Function RigVM.RigVM.GetParameterArraySize // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4015970
	bool Execute(); // Function RigVM.RigVM.Execute // (Final|Native|Public|BlueprintCallable) // @ game+0x4015940
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName); // Function RigVM.RigVM.AddRigVMFunction // (Final|Native|Public|HasOutParms) // @ game+0x4015860
};

