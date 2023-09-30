/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UnLua.

/// Class /Script/UnLua.UnLuaInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UUnLuaInterface : public UInterface
{ 
public:
};

/// Class /Script/UnLua.UnLuaManager
/// Size: 0x04F0 (0x000028 - 0x000518)
class UUnLuaManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x4F0];                                     // 0x0028   (0x04F0)  MISSED
};

/// Class /Script/UnLua.UnLuaPerformanceTestProxy
/// Size: 0x0060 (0x000228 - 0x000288)
class AUnLuaPerformanceTestProxy : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0228   (0x0008)  MISSED
	int32_t                                            MeshID;                                                     // 0x0230   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0234   (0x0004)  MISSED
	FString                                            MeshName;                                                   // 0x0238   (0x0010)  
	FVector                                            COM;                                                        // 0x0248   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	TArray<int32_t>                                    Indices;                                                    // 0x0258   (0x0010)  
	TArray<FVector>                                    Positions;                                                  // 0x0268   (0x0010)  
	TArray<FVector>                                    PredictedPositions;                                         // 0x0278   (0x0010)  


	/// Functions
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdatePositions
	void UpdatePositions(TArray<FVector>& NewPositions);                                                                     // [0xb443e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
	FString UpdateMeshName(FString NewName);                                                                                 // [0xb44c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
	int32_t UpdateMeshID(int32_t NewID);                                                                                     // [0xb44b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateIndices
	void UpdateIndices(TArray<int32_t>& NewIndices);                                                                         // [0xb443e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.Simulate
	void Simulate(float DeltaTime);                                                                                          // [0xb44b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.Raycast
	bool Raycast(FVector& Origin, FVector& Direction);                                                                       // [0xb44a00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.NOP
	void NOP();                                                                                                              // [0x8f2720] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
	TArray<FVector> GetPredictedPositions();                                                                                 // [0xb44850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetPositions
	void GetPositions(TArray<FVector>& OutPositions);                                                                        // [0xb443e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshName
	FString GetMeshName();                                                                                                   // [0xb44740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
	bool GetMeshInfo(int32_t& OutMeshID, FString& OutMeshName, FVector& OutCOM, TArray<int32_t>& OutIndices, TArray<FVector>& OutPositions, TArray<FVector>& OutPredictedPositions); // [0xb444c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshID
	int32_t GetMeshID();                                                                                                     // [0xb44490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetIndices
	void GetIndices(TArray<int32_t>& OutIndices);                                                                            // [0xb443e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetCOM
	FVector GetCOM();                                                                                                        // [0xb443a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UnLua.PropertyCollector
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPropertyCollector
{ 
	ETutorialTriggerType                               None;                                                       // 0x0000   (0x0001)  
	AActor*                                            None;                                                       // 0x0000   (0x0008)  
	int32_t                                            None;                                                       // 0x0000   (0x0004)  
	UClass*                                            None;                                                       // 0x0000   (0x0008)  
	FTutorialTableRow                                  None;                                                       // 0x0000   (0x0098)  
	FGateAddress_Dep                                   None;                                                       // 0x0000   (0x0020)  
	FServerInfo_Dep                                    None;                                                       // 0x0000   (0x0050)  
	FInputKeyMappingEntry                              None;                                                       // 0x0000   (0x0040)  
};

/// Struct /Script/UnLua.InSightEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FInSightEvent
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

