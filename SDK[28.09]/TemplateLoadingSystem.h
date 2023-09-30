/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TemplateLoadingSystem.

/// Class /Script/TemplateLoadingSystem.LoadingScreenSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class ULoadingScreenSubsystem : public UGameInstanceSubsystem
{ 
public:
	ULoadingWidgetBase*                                LoadingWidget;                                              // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateLoadingSystem.LoadingScreenSubsystem.StopLoadingScreen
	void StopLoadingScreen();                                                                                                // [0x8250f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateLoadingSystem.LoadingScreenSubsystem.StartLoadingScreen
	ULoadingWidgetBase* StartLoadingScreen(UClass* InWidgetClass);                                                           // [0x825050] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateLoadingSystem.LoadingScreenSubsystem.Get
	ULoadingScreenSubsystem* Get(UObject* WorldContextObject);                                                               // [0x824f80] Final|Native|Static|Private 
};

/// Class /Script/TemplateLoadingSystem.LoadingWidgetBase
/// Size: 0x0000 (0x000260 - 0x000260)
class ULoadingWidgetBase : public UUserWidget
{ 
public:
};

