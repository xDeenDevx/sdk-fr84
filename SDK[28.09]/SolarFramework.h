/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SolarFramework.

/// Class /Script/SolarFramework.SolarContainer
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarContainer : public UObject
{ 
public:
};

/// Class /Script/SolarFramework.SolarAbstractManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarAbstractManager : public USolarContainer
{ 
public:
};

/// Class /Script/SolarFramework.SolarAbstractModel
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarAbstractModel : public USolarContainer
{ 
public:
};

/// Class /Script/SolarFramework.SolarArchitecture
/// Size: 0x01A8 (0x0001A0 - 0x000348)
class USolarArchitecture : public UGameInstance
{ 
public:
	FMulticastInlineDelegate                           OnOnScopeChangeDelegate;                                    // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x198];                                     // 0x01B0   (0x0198)  MISSED


	/// Functions
	// Function /Script/SolarFramework.SolarArchitecture.OnScopeChanged
	void OnScopeChanged(EScope InLastScope, EScope InCurScope);                                                              // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Script/SolarFramework.SolarArchitecture.IsScopeSettlement
	bool IsScopeSettlement();                                                                                                // [0x23451c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SolarFramework.SolarArchitecture.IsScopeLogin
	bool IsScopeLogin();                                                                                                     // [0x2345190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SolarFramework.SolarArchitecture.IsScopeLobby
	bool IsScopeLobby();                                                                                                     // [0x2345160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SolarFramework.SolarArchitecture.IsScopeBattle
	bool IsScopeBattle();                                                                                                    // [0x2345130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SolarFramework.SolarArchitecture.IsInScope
	bool IsInScope(EScope InScopeMask);                                                                                      // [0x23450a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SolarFramework.SolarArchitecture.GetModel
	USolarAbstractModel* GetModel(UClass*& ModelClass);                                                                      // [0x2345000] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SolarFramework.SolarArchitecture.GetManager
	USolarAbstractManager* GetManager(UClass*& ManagerClass);                                                                // [0x2344f60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SolarFramework.SolarArchitecture.GetCurScope
	EScope GetCurScope();                                                                                                    // [0x2344f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SolarFramework.SolarFrameworkSettings
/// Size: 0x0020 (0x000038 - 0x000058)
class USolarFrameworkSettings : public UDeveloperSettings
{ 
public:
	TArray<FSolarConfigEntry>                          ManagerConfigs;                                             // 0x0038   (0x0010)  
	TArray<FSolarConfigEntry>                          ModelConfigs;                                               // 0x0048   (0x0010)  
};

/// Struct /Script/SolarFramework.SolarConfigEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSolarConfigEntry
{ 
	TWeakObjectPtr<UClass*>                            ContainerPath;                                              // 0x0000   (0x0028)  
	EScope                                             Scope;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Enum /Script/SolarFramework.EScope
/// Size: 0x08
enum EScope : uint8_t
{
	EScope__None                                                                     = 0,
	EScope__Login                                                                    = 1,
	EScope__Lobby                                                                    = 2,
	EScope__Battle                                                                   = 4,
	EScope__Settlement                                                               = 8,
	EScope__Game                                                                     = 14,
	EScope__Global                                                                   = 15,
	EScope__EScope_MAX                                                               = 16
};

