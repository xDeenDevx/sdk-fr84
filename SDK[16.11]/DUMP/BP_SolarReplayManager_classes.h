// BlueprintGeneratedClass BP_SolarReplayManager.BP_SolarReplayManager_C
// Size: 0x588 (Inherited: 0x588)
struct UBP_SolarReplayManager_C : USolarReplayManager {

	void OnRecordingStartedDelegate_E4567F5744467519AC18708378449737(); // DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_E4567F5744467519AC18708378449737 // (MulticastDelegate|Public|Delegate) // @ game+0xb5be00
	void OnRecordingStartedDelegate_41C0F13D4CE9688426E52EB3A40C5A79(); // DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_41C0F13D4CE9688426E52EB3A40C5A79 // (MulticastDelegate|Public|Delegate) // @ game+0xb5be00
	void OnPlayingStartedDelegate_D07B65BA44A4DEB8371AB29635A32169(); // DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnPlayingStartedDelegate_D07B65BA44A4DEB8371AB29635A32169 // (MulticastDelegate|Public|Delegate) // @ game+0xb5be00
	bool ReceivePlayingFinished(enum class EReplayPlayingFinishReason reason, char StreamerErrorCode, struct FString StreamerErrorMsg); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingFinished // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	void OnLiveWatchTargetLost(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.OnLiveWatchTargetLost // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	void RequestBattleList(int32_t PageIndex, int32_t PageSize); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestBattleList // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	struct FString GetBattleIDByIndex(int32_t Index); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetBattleIDByIndex // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	void ReceivePlayingStartFailed(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingStartFailed // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	bool IsHighlightVersionOut(struct FString HighlightFileName); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsHighlightVersionOut // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	bool IsReady(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsReady // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	void LuaOnPostLoadMapWithWorld(struct FString LevelName); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaOnPostLoadMapWithWorld // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	void SetRequestTryStrategy(float Interval, int32_t Times); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetRequestTryStrategy // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6a060
	bool IsRequestingReplayDownloadInfo(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsRequestingReplayDownloadInfo // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	void RequestWatchingLiveOfPlayer(struct FString SolarPlayerID); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestWatchingLiveOfPlayer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6a060
	bool NotifyBackendPlayReplayFinished(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.NotifyBackendPlayReplayFinished // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	void RequestPlayReplayOfCurrentBattle(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplayOfCurrentBattle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6a060
	void RequestPlayReplay(struct FString InBattleID, bool IsLive); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6a060
	void GetStartRecordingParams(struct FStartRecordingParams& OutParams); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetStartRecordingParams // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xb6a060
	void SetReadyToRecord(bool bIsReady, struct TArray<struct FString>& OBPlayerIDs); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetReadyToRecord // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xb6a060
	void LuaBindDelegates(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaBindDelegates // (Event|Public|BlueprintEvent) // @ game+0xb6a060
	void RequestCheckpointForLiveWatch(); // Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestCheckpointForLiveWatch // (Event|Protected|BlueprintEvent) // @ game+0xb6a060
};

