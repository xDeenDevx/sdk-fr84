/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package RichtapTools.

/// Class /Script/RichtapTools.RichtapController
/// Size: 0x0068 (0x000028 - 0x000090)
class URichtapController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0028   (0x0018)  MISSED
	TMap<FString, URichtapClip*>                       HeDataMap;                                                  // 0x0040   (0x0050)  


	/// Functions
	// Function /Script/RichtapTools.RichtapController.SetRichtapEnable
	void SetRichtapEnable(bool On);                                                                                          // [0xb4c390] Final|Native|Public  
	// Function /Script/RichtapTools.RichtapController.SetEnableRichtap
	void SetEnableRichtap(bool bIsEnableRichtap);                                                                            // [0xb4c310] Final|Native|Static|Public|BlueprintCallable 
};

