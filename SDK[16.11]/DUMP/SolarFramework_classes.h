// Class SolarFramework.SolarContainer
// Size: 0x28 (Inherited: 0x28)
struct USolarContainer : UObject {

	void ReceiveInitialize(); // Function SolarFramework.SolarContainer.ReceiveInitialize // (Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveDeinitialize(); // Function SolarFramework.SolarContainer.ReceiveDeinitialize // (Event|Public|BlueprintEvent) // @ game+0x2d656b0
};

// Class SolarFramework.SolarAbstractManager
// Size: 0x28 (Inherited: 0x28)
struct USolarAbstractManager : USolarContainer {
};

// Class SolarFramework.SolarAbstractModel
// Size: 0x28 (Inherited: 0x28)
struct USolarAbstractModel : USolarContainer {
};

// Class SolarFramework.SolarArchitecture
// Size: 0x348 (Inherited: 0x1a0)
struct USolarArchitecture : UGameInstance {
	struct FMulticastInlineDelegate OnOnScopeChangeDelegate; // 0x1a0(0x10)
	char pad_1B0[0x198]; // 0x1b0(0x198)

	void OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope); // Function SolarFramework.SolarArchitecture.OnScopeChanged // (Event|Public|BlueprintEvent) // @ game+0x2d656b0
	bool IsScopeSettlement(); // Function SolarFramework.SolarArchitecture.IsScopeSettlement // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a5a300
	bool IsScopeLogin(); // Function SolarFramework.SolarArchitecture.IsScopeLogin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a5a2d0
	bool IsScopeLobby(); // Function SolarFramework.SolarArchitecture.IsScopeLobby // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a5a2a0
	bool IsScopeBattle(); // Function SolarFramework.SolarArchitecture.IsScopeBattle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a5a270
	bool IsInScope(enum class EScope InScopeMask); // Function SolarFramework.SolarArchitecture.IsInScope // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a5a1e0
	struct USolarAbstractModel* GetModel(struct USolarAbstractModel*& ModelClass); // Function SolarFramework.SolarArchitecture.GetModel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a5a140
	struct USolarAbstractManager* GetManager(struct USolarAbstractManager*& ManagerClass); // Function SolarFramework.SolarArchitecture.GetManager // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a5a0a0
	enum class EScope GetCurScope(); // Function SolarFramework.SolarArchitecture.GetCurScope // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a5a080
};

// Class SolarFramework.SolarFrameworkSettings
// Size: 0x58 (Inherited: 0x38)
struct USolarFrameworkSettings : UDeveloperSettings {
	struct TArray<struct FSolarConfigEntry> ManagerConfigs; // 0x38(0x10)
	struct TArray<struct FSolarConfigEntry> ModelConfigs; // 0x48(0x10)
};

