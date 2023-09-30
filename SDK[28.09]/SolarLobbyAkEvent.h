/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SolarLobbyAkEvent.

/// Class /Wwise/SolarLobbyAkEvent/AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C
/// Size: 0x0050 (0x000030 - 0x000080)
class UAnimNotifyState_SolarLobbyAkEvent_C : public UAnimNotifyState
{ 
public:
	bool                                               Follow;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            Attach_Name;                                                // 0x0038   (0x0010)  
	UAkAudioEvent*                                     Begin_Event;                                                // 0x0048   (0x0008)  
	FString                                            Begin_Event_Name;                                           // 0x0050   (0x0010)  
	UAkAudioEvent*                                     End_Event;                                                  // 0x0060   (0x0008)  
	FString                                            End_Event_Name;                                             // 0x0068   (0x0010)  
	UAkComponent*                                      NewVar;                                                     // 0x0078   (0x0008)  


	/// Functions
	// Function /Wwise/SolarLobbyAkEvent/AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.AK Event Fun
	void AK Event Fun(USkeletalMeshComponent* Skeletal Mesh Comp, UAkAudioEvent* Event, FString Event Name, bool isNotifyEnd, bool& Return Value); // [0x2649560] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Wwise/SolarLobbyAkEvent/AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Get Mesh AK Component
	void Get Mesh AK Component(USkeletalMeshComponent* InSkeletalMeshComp, UAkComponent*& OutAkComp, bool& IsSuccess);       // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Wwise/SolarLobbyAkEvent/AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.GetAkSwitch
	void GetAkSwitch(USkeletalMeshComponent* InSkeletalMeshComp, bool& ShouldPlaySounds);                                    // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Wwise/SolarLobbyAkEvent/AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyEnd
	bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Wwise/SolarLobbyAkEvent/AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyBegin
	bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);          // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

