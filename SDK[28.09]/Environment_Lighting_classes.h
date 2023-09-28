// BlueprintGeneratedClass Environment_Lighting.Environment_Lighting_C
// Size: 0x248 (Inherited: 0x230)
struct AEnvironment_Lighting_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct ASkyLight* SkyLight_0_ExecuteUbergraph_Environment_Lighting_RefProperty; // 0x238(0x08)
	struct ABP_Env_LitData_C* BP_Env_LitData_2_ExecuteUbergraph_Environment_Lighting_RefProperty; // 0x240(0x08)

	struct FString GetModuleName(); // Function Environment_Lighting.Environment_Lighting_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetLight(struct FString SceneName); // Function Environment_Lighting.Environment_Lighting_C.SetLight // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetCardSkyLightData(float Indensity); // Function Environment_Lighting.Environment_Lighting_C.SetCardSkyLightData // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Environment_Lighting(int32_t EntryPoint); // Function Environment_Lighting.Environment_Lighting_C.ExecuteUbergraph_Environment_Lighting // (Final|UbergraphFunction) // @ game+0x2649560
};

