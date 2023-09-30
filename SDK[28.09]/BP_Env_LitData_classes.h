// BlueprintGeneratedClass BP_Env_LitData.BP_Env_LitData_C
// Size: 0x330 (Inherited: 0x228)
struct ABP_Env_LitData_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct ASkyLight* SkyLight; // 0x238(0x08)
	struct ADirectionalLight* DirectionalLight; // 0x240(0x08)
	struct FStr_LightData LocalLightData; // 0x248(0x70)
	struct TMap<struct FString, struct FStr_LightData> LightDatas; // 0x2b8(0x50)
	struct ABP_C_EdgeLitControl_C* CharacterEdgeLitControl; // 0x308(0x08)
	struct ASkyLight* NewVar_1; // 0x310(0x08)
	bool bUseDefaultLight; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FString CurrentLightDataKey; // 0x320(0x10)

	void Toggle Env Lighting(bool bUseDefaultLight); // Function BP_Env_LitData.BP_Env_LitData_C.Toggle Env Lighting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetEdgeLightSetting(struct FStr_EdgeLightSetting EdgeLightSetting); // Function BP_Env_LitData.BP_Env_LitData_C.SetEdgeLightSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Add or Set Light Data Element(struct FString& Key); // Function BP_Env_LitData.BP_Env_LitData_C.Add or Set Light Data Element // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void LoadSceneLightData(struct FString& Key); // Function BP_Env_LitData.BP_Env_LitData_C.LoadSceneLightData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void MakeLightData(); // Function BP_Env_LitData.BP_Env_LitData_C.MakeLightData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SaveLightData(); // Function BP_Env_LitData.BP_Env_LitData_C.SaveLightData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void LoadLightData(); // Function BP_Env_LitData.BP_Env_LitData_C.LoadLightData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetDirectionalLightSetting(struct ADirectionalLight* DirectionalLight, struct FStr_DirectionalLightSetting& Str_DirectionalLightSetting); // Function BP_Env_LitData.BP_Env_LitData_C.SetDirectionalLightSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetSkyLightSetting(struct ASkyLight* SkyLight, struct FStr_SkyLightSetting& Str_SkyLightSetting); // Function BP_Env_LitData.BP_Env_LitData_C.SetSkyLightSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ReceiveBeginPlay(); // Function BP_Env_LitData.BP_Env_LitData_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_BP_Env_LitData(int32_t EntryPoint); // Function BP_Env_LitData.BP_Env_LitData_C.ExecuteUbergraph_BP_Env_LitData // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

