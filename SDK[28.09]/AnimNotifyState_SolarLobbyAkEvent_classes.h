// BlueprintGeneratedClass AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C
// Size: 0x80 (Inherited: 0x30)
struct UAnimNotifyState_SolarLobbyAkEvent_C : UAnimNotifyState {
	bool Follow; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString Attach Name; // 0x38(0x10)
	struct UAkAudioEvent* Begin Event; // 0x48(0x08)
	struct FString Begin Event Name; // 0x50(0x10)
	struct UAkAudioEvent* End Event; // 0x60(0x08)
	struct FString End Event Name; // 0x68(0x10)
	struct UAkComponent* NewVar_1; // 0x78(0x08)

	void AK Event Fun(struct USkeletalMeshComponent* Skeletal Mesh Comp, struct UAkAudioEvent* Event, struct FString Event Name, bool isNotifyEnd, bool& Return Value); // Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.AK Event Fun // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void Get Mesh AK Component(struct USkeletalMeshComponent* InSkeletalMeshComp, struct UAkComponent*& OutAkComp, bool& IsSuccess); // Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Get Mesh AK Component // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void GetAkSwitch(struct USkeletalMeshComponent* InSkeletalMeshComp, bool& ShouldPlaySounds); // Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.GetAkSwitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
};

