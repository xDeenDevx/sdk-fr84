/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LimNativeWidget.

/// Class /Script/LimNativeWidget.AudioPermissionHelperProxy
/// Size: 0x0020 (0x000028 - 0x000048)
class UAudioPermissionHelperProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/LimNativeWidget.ChatGMEManager
/// Size: 0x0770 (0x000028 - 0x000798)
class UChatGMEManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FLimNativeLowLevelWrapper                          ctx;                                                        // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnEnterRoom;                                                // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0050   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnExitRoom;                                                 // 0x0068   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0078   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnRoomDisconnect;                                           // 0x0090   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x00A0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnUserUpdate;                                               // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x00C8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnNumberOfUsersUpdate;                                      // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x00F0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnNumberOfAudioStreamsUpdate;                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData06_5[0x18];                                      // 0x0118   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnReconnectStart;                                           // 0x0130   (0x0010)  
	unsigned char                                      UnknownData07_5[0x18];                                      // 0x0140   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnReconnectSuccess;                                         // 0x0158   (0x0010)  
	unsigned char                                      UnknownData08_5[0x18];                                      // 0x0168   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnSwitchRoom;                                               // 0x0180   (0x0010)  
	unsigned char                                      UnknownData09_5[0x18];                                      // 0x0190   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnChangeRoomType;                                           // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData10_5[0x18];                                      // 0x01B8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnAudioDataEmpty;                                           // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData11_5[0x18];                                      // 0x01E0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnRoomSharingStart;                                         // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData12_5[0x18];                                      // 0x0208   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnRoomSharingStop;                                          // 0x0220   (0x0010)  
	unsigned char                                      UnknownData13_5[0x18];                                      // 0x0230   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnRecordCompleted;                                          // 0x0248   (0x0010)  
	unsigned char                                      UnknownData14_5[0x18];                                      // 0x0258   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnRecordPreviewCompleted;                                   // 0x0270   (0x0010)  
	unsigned char                                      UnknownData15_5[0x18];                                      // 0x0280   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnRecordMixCompleted;                                       // 0x0298   (0x0010)  
	unsigned char                                      UnknownData16_5[0x18];                                      // 0x02A8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnAudioRouteUpdate;                                         // 0x02C0   (0x0010)  
	unsigned char                                      UnknownData17_5[0x18];                                      // 0x02D0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnSpeakerDefaultDeviceChanged;                              // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData18_5[0x18];                                      // 0x02F8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnSpeakerNewDevice;                                         // 0x0310   (0x0010)  
	unsigned char                                      UnknownData19_5[0x18];                                      // 0x0320   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnSpeakerLostDevice;                                        // 0x0338   (0x0010)  
	unsigned char                                      UnknownData20_5[0x18];                                      // 0x0348   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnMicNewDevice;                                             // 0x0360   (0x0010)  
	unsigned char                                      UnknownData21_5[0x18];                                      // 0x0370   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnMicLostDevice;                                            // 0x0388   (0x0010)  
	unsigned char                                      UnknownData22_5[0x18];                                      // 0x0398   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnMicDefaultDeviceChanged;                                  // 0x03B0   (0x0010)  
	unsigned char                                      UnknownData23_5[0x18];                                      // 0x03C0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnAudioRouteChanged;                                        // 0x03D8   (0x0010)  
	unsigned char                                      UnknownData24_5[0x18];                                      // 0x03E8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnUserVolumes;                                              // 0x0400   (0x0010)  
	unsigned char                                      UnknownData25_5[0x18];                                      // 0x0410   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnChangeRoomQuality;                                        // 0x0428   (0x0010)  
	unsigned char                                      UnknownData26_5[0x18];                                      // 0x0438   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnAccompanyFinish;                                          // 0x0450   (0x0010)  
	unsigned char                                      UnknownData27_5[0x18];                                      // 0x0460   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnServerAudioRouteEvent;                                    // 0x0478   (0x0010)  
	unsigned char                                      UnknownData28_5[0x18];                                      // 0x0488   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnCustomDataUpdate;                                         // 0x04A0   (0x0010)  
	unsigned char                                      UnknownData29_5[0x18];                                      // 0x04B0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnRealtimeASR;                                              // 0x04C8   (0x0010)  
	unsigned char                                      UnknownData30_5[0x18];                                      // 0x04D8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnChorusEvent;                                              // 0x04F0   (0x0010)  
	unsigned char                                      UnknownData31_5[0x18];                                      // 0x0500   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnChangeTeamId;                                             // 0x0518   (0x0010)  
	unsigned char                                      UnknownData32_5[0x18];                                      // 0x0528   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnAudioReady;                                               // 0x0540   (0x0010)  
	unsigned char                                      UnknownData33_5[0x18];                                      // 0x0550   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnHardwareTestRecordFinish;                                 // 0x0568   (0x0010)  
	unsigned char                                      UnknownData34_5[0x18];                                      // 0x0578   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnHardwareTestPreviewFinish;                                // 0x0590   (0x0010)  
	unsigned char                                      UnknownData35_5[0x18];                                      // 0x05A0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPTTRecordComplete;                                        // 0x05B8   (0x0010)  
	unsigned char                                      UnknownData36_5[0x18];                                      // 0x05C8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPTTUploadComplete;                                        // 0x05E0   (0x0010)  
	unsigned char                                      UnknownData37_5[0x18];                                      // 0x05F0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPTTDownloadComplete;                                      // 0x0608   (0x0010)  
	unsigned char                                      UnknownData38_5[0x18];                                      // 0x0618   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPTTPlayComplete;                                          // 0x0630   (0x0010)  
	unsigned char                                      UnknownData39_5[0x18];                                      // 0x0640   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPTTSpeech2TextComplete;                                   // 0x0658   (0x0010)  
	unsigned char                                      UnknownData40_5[0x18];                                      // 0x0668   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPTTStreamingRecognitionComplete;                          // 0x0680   (0x0010)  
	unsigned char                                      UnknownData41_5[0x18];                                      // 0x0690   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPTTStreamingRecognitionIsRunning;                         // 0x06A8   (0x0010)  
	unsigned char                                      UnknownData42_5[0x18];                                      // 0x06B8   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnRoomManagementOperator;                                   // 0x06D0   (0x0010)  
	unsigned char                                      UnknownData43_5[0x18];                                      // 0x06E0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnPermissionResult;                                         // 0x06F8   (0x0010)  
	unsigned char                                      UnknownData44_6[0x90];                                      // 0x0708   (0x0090)  MISSED


	/// Functions
	// Function /Script/LimNativeWidget.ChatGMEManager.UpdateSelfPosition
	void UpdateSelfPosition(FVector InSelfPosition);                                                                         // [0x949a50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.UpdateAudioRecvRange
	void UpdateAudioRecvRange(int32_t InRange);                                                                              // [0x9499c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.UnRegisterLuaEvent
	void UnRegisterLuaEvent();                                                                                               // [0xb43660] Event|Public|BlueprintEvent 
	// Function /Script/LimNativeWidget.ChatGMEManager.Uninit
	void Uninit();                                                                                                           // [0x9499a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.SwitchRoomCompatible
	bool SwitchRoomCompatible(FString InRoomId, FString GmeToken);                                                           // [0x9498a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.SwitchRoom
	bool SwitchRoom(FString InRoomId);                                                                                       // [0x9497f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.SetRangeAudioTeamID
	void SetRangeAudioTeamID(int32_t InTeamId);                                                                              // [0x949760] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.SetRangeAudioMode
	void SetRangeAudioMode(EChatGMERangeAudioMode InAudioMode);                                                              // [0x9496e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.SetAudioSendAndRecvRules
	void SetAudioSendAndRecvRules(EChatGMEAudioRouteSendType SendType, TArray<FString> SendOpenIDList, EChatGMEAudioRouteRecvType RecvType, TArray<FString> RecvOpenIDList); // [0x9493f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.SelectSpeak
	void SelectSpeak(FString InDeviceID);                                                                                    // [0x949350] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.SelectMic
	void SelectMic(FString InDeviceID);                                                                                      // [0x9492b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.PreInit
	void PreInit();                                                                                                          // [0x949290] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnUserVolumesDelegate__DelegateSignature
	void OnUserVolumesDelegate__DelegateSignature(FChatGMEDataUserVolumes InData);                                           // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnUserUpdateDelegate__DelegateSignature
	void OnUserUpdateDelegate__DelegateSignature(FChatGMEDataUserUpdate InData);                                             // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnRoomManagementOperatorDelegate__DelegateSignature
	void OnRoomManagementOperatorDelegate__DelegateSignature(FChatGMEDataRoomOperator InData);                               // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnResultDelegate__DelegateSignature
	void OnResultDelegate__DelegateSignature(FChatGMEDataResult Result);                                                     // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnRecordCompletedDelegate__DelegateSignature
	void OnRecordCompletedDelegate__DelegateSignature(FChatGMEDataRecordCompleted InData);                                   // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnNumberOfUsersUpdateDelegate__DelegateSignature
	void OnNumberOfUsersUpdateDelegate__DelegateSignature(FChatGMEDataNumberOfUserUpdate InData);                            // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature
	void OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature(FChatGMEDataNumberOfAudioStreamsUpdate InData);             // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnNotifyFileInfoDelegate__DelegateSignature
	void OnNotifyFileInfoDelegate__DelegateSignature(FChatGMEDataFileInfo InData);                                           // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnNotifyDelegate__DelegateSignature
	void OnNotifyDelegate__DelegateSignature(FString InData);                                                                // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnGetAuthBuffer
	void OnGetAuthBuffer(FLimNativeLowLevelWrapper& InWrapper, FLimNativeGetGMETokenCallBack& RetData);                      // [0x9490e0] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnDeviceChangedDelegate__DelegateSignature
	void OnDeviceChangedDelegate__DelegateSignature(FChatGMEDataDeviceInfo InData);                                          // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnChangeRoomTypeDelegate__DelegateSignature
	void OnChangeRoomTypeDelegate__DelegateSignature(FChatGMEDataChangeRoomType InData);                                     // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnChangeRoomQualityDelegate__DelegateSignature
	void OnChangeRoomQualityDelegate__DelegateSignature(FChatGMEDataRoomQuality InData);                                     // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.OnAndroidPermissionResult__DelegateSignature
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess);                                                        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.ChatGMEManager.MediaMute
	void MediaMute(FString InUserId, bool InMute);                                                                           // [0x948ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.IsRoomEntered
	bool IsRoomEntered();                                                                                                    // [0x948e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.IsAudioSendEnabled
	bool IsAudioSendEnabled();                                                                                               // [0x948e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.IsAudioRecvEnabled
	bool IsAudioRecvEnabled();                                                                                               // [0x948e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.IsAudioPlayDeviceEnabled
	bool IsAudioPlayDeviceEnabled();                                                                                         // [0x948e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.IsAudioCaptureDeviceEnabled
	bool IsAudioCaptureDeviceEnabled();                                                                                      // [0x948dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.InnerEnableMic
	void InnerEnableMic(bool InEnable);                                                                                      // [0x947d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.InitGME
	void InitGME(FString InEnvId, FString InGMEUserID);                                                                      // [0x948c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.Init
	void Init(FString InUserId, FString InAppId, FString InEnvId);                                                           // [0x948ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GetSpeakerState
	bool GetSpeakerState();                                                                                                  // [0x948a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GetSpeakerList
	TArray<FChatGMEDataDeviceInfo> GetSpeakerList();                                                                         // [0x948a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GetRecordingLocalFilePath
	FString GetRecordingLocalFilePath();                                                                                     // [0x9489c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GetMicState
	bool GetMicState();                                                                                                      // [0x948990] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GetMicList
	TArray<FChatGMEDataDeviceInfo> GetMicList();                                                                             // [0x948940] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GetInstance
	UChatGMEManager* GetInstance();                                                                                          // [0x948910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameUploadRecordedFileCompatible
	void GameUploadRecordedFileCompatible(FString FilePath, FString Token);                                                  // [0x948810] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameUploadRecordedFile
	void GameUploadRecordedFile(FString FilePath);                                                                           // [0x948770] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameStopRecording
	void GameStopRecording();                                                                                                // [0x948750] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameStopPlayFile
	void GameStopPlayFile();                                                                                                 // [0x948730] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameStartRecording
	void GameStartRecording(FString FilePath);                                                                               // [0x948690] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameSetSpeakerVolume
	int32_t GameSetSpeakerVolume(int32_t Volume);                                                                            // [0x9485f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameSetMicVolume
	int32_t GameSetMicVolume(int32_t MicVolume);                                                                             // [0x948550] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameResumeRecording
	void GameResumeRecording();                                                                                              // [0x948530] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GamePlayRecordedFile
	void GamePlayRecordedFile(FString FilePath);                                                                             // [0x948490] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GamePauseRecording
	void GamePauseRecording();                                                                                               // [0x948470] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameGetVoiceFileDuration
	int32_t GameGetVoiceFileDuration(FString FilePath);                                                                      // [0x9483c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameGetSpeakerVolume
	int32_t GameGetSpeakerVolume();                                                                                          // [0x948390] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameGetSpeakerLevel
	int32_t GameGetSpeakerLevel();                                                                                           // [0x948360] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameGetMicVolume
	int32_t GameGetMicVolume();                                                                                              // [0x948330] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameGetMicLevel
	int32_t GameGetMicLevel();                                                                                               // [0x948300] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameDownloadRecordedFileeCompatible
	void GameDownloadRecordedFileeCompatible(FString FileID, FString FilePath, FString Token);                               // [0x9481b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameDownloadRecordedFile
	void GameDownloadRecordedFile(FString FileID, FString FilePath);                                                         // [0x9480b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.GameCancleRecording
	void GameCancleRecording();                                                                                              // [0x948090] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.ExitRoom
	bool ExitRoom();                                                                                                         // [0x948060] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.EnterRoomCompatible
	bool EnterRoomCompatible(FString InRoomId, FString GmeToken);                                                            // [0x947f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.EnterRoom
	bool EnterRoom(FString InRoomId, EChatGMERoomType InRoomType);                                                           // [0x947e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.EnableSpeaker
	void EnableSpeaker(bool InEnable);                                                                                       // [0x947de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.EnableMic
	void EnableMic(bool InEnable);                                                                                           // [0x947d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.EnableAudioSend
	void EnableAudioSend(bool bEnable);                                                                                      // [0x947cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.EnableAudioRecv
	void EnableAudioRecv(bool bEnable);                                                                                      // [0x947c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.EnableAudioPlayDevice
	void EnableAudioPlayDevice(bool InEnable);                                                                               // [0x947ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.EnableAudioCaptureDevice
	void EnableAudioCaptureDevice(bool InEnable);                                                                            // [0x947b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.DestroyInstance
	void DestroyInstance();                                                                                                  // [0x947af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.DeleteCacheFiles
	void DeleteCacheFiles();                                                                                                 // [0x947ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.ChatGMEManager.CheckPlatformMicPermission
	int32_t CheckPlatformMicPermission();                                                                                    // [0x947aa0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LimNativeWidget.ChatListEmojiEntryData
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UChatListEmojiEntryData : public UObject
{ 
public:
	FString                                            Tag;                                                        // 0x0028   (0x0010)  
	FSlateBrush                                        Image;                                                      // 0x0038   (0x0098)  
};

/// Class /Script/LimNativeWidget.ChatListEntryDataBase
/// Size: 0x0070 (0x000028 - 0x000098)
class UChatListEntryDataBase : public UObject
{ 
public:
	ELimNativeMsgContentType                           MessageType;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FDateTime                                          Timestamp;                                                  // 0x0030   (0x0008)  
	FString                                            SenderId;                                                   // 0x0038   (0x0010)  
	FString                                            SenderName;                                                 // 0x0048   (0x0010)  
	FString                                            SenderAvatarUrl;                                            // 0x0058   (0x0010)  
	ELimNativeMsgState                                 MsgState;                                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            ConvID;                                                     // 0x0070   (0x0010)  
	ELimNativeConvType                                 ConvType;                                                   // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FString                                            MsgId;                                                      // 0x0088   (0x0010)  
};

/// Class /Script/LimNativeWidget.ChatListEntryDataText
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UChatListEntryDataText : public UChatListEntryDataBase
{ 
public:
	FString                                            Message;                                                    // 0x0098   (0x0010)  
};

/// Class /Script/LimNativeWidget.ChatListEntryDataSystem
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UChatListEntryDataSystem : public UChatListEntryDataBase
{ 
public:
	FString                                            Message;                                                    // 0x0098   (0x0010)  
};

/// Class /Script/LimNativeWidget.ChatListEntryDataVoice
/// Size: 0x0038 (0x000098 - 0x0000D0)
class UChatListEntryDataVoice : public UChatListEntryDataBase
{ 
public:
	FString                                            UUID;                                                       // 0x0098   (0x0010)  
	FString                                            URL;                                                        // 0x00A8   (0x0010)  
	FString                                            Size;                                                       // 0x00B8   (0x0010)  
	int32_t                                            Duration;                                                   // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/LimNativeWidget.ChatListEntryDataImage
/// Size: 0x0048 (0x000098 - 0x0000E0)
class UChatListEntryDataImage : public UChatListEntryDataBase
{ 
public:
	FString                                            UUID;                                                       // 0x0098   (0x0010)  
	FString                                            Fmt;                                                        // 0x00A8   (0x0010)  
	FString                                            URL;                                                        // 0x00B8   (0x0010)  
	int32_t                                            Width;                                                      // 0x00C8   (0x0004)  
	int32_t                                            Height;                                                     // 0x00CC   (0x0004)  
	FString                                            Size;                                                       // 0x00D0   (0x0010)  
};

/// Class /Script/LimNativeWidget.ChatListEntryDataCustomEmotion
/// Size: 0x0058 (0x000098 - 0x0000F0)
class UChatListEntryDataCustomEmotion : public UChatListEntryDataBase
{ 
public:
	FString                                            PackName;                                                   // 0x0098   (0x0010)  
	ELimNativePackType                                 PackType;                                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FString                                            EmotionName;                                                // 0x00B0   (0x0010)  
	FString                                            EmotionId;                                                  // 0x00C0   (0x0010)  
	FString                                            EmotionUrl;                                                 // 0x00D0   (0x0010)  
	FString                                            Desc;                                                       // 0x00E0   (0x0010)  
};

/// Class /Script/LimNativeWidget.ChatListEntryDataShaderedGameCard
/// Size: 0x0068 (0x000098 - 0x000100)
class UChatListEntryDataShaderedGameCard : public UChatListEntryDataBase
{ 
public:
	int32_t                                            Type;                                                       // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FString                                            Text;                                                       // 0x00A0   (0x0010)  
	FString                                            Title;                                                      // 0x00B0   (0x0010)  
	FString                                            Detail;                                                     // 0x00C0   (0x0010)  
	FString                                            Img;                                                        // 0x00D0   (0x0010)  
	FString                                            URL;                                                        // 0x00E0   (0x0010)  
	FString                                            Extra;                                                      // 0x00F0   (0x0010)  
};

/// Class /Script/LimNativeWidget.ChatListUserEntryData
/// Size: 0x0050 (0x000028 - 0x000078)
class UChatListUserEntryData : public UObject
{ 
public:
	FString                                            Uid;                                                        // 0x0028   (0x0010)  
	FString                                            NickName;                                                   // 0x0038   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0048   (0x0010)  
	FString                                            AvatarFrameUrl;                                             // 0x0058   (0x0010)  
	ELimNativeUserSexType                              Sex;                                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            VipLevel;                                                   // 0x006C   (0x0004)  
	bool                                               IsShowVip;                                                  // 0x0070   (0x0001)  
	ELimNativeFriendStateType                          OnlineState;                                                // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	int32_t                                            UnreadCount;                                                // 0x0074   (0x0004)  
};

/// Class /Script/LimNativeWidget.LimChatManager
/// Size: 0x02F8 (0x000028 - 0x000320)
class ULimChatManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	ULimNative*                                        LimNativeInstance;                                          // 0x0030   (0x0008)  
	FLimNativeLowLevelWrapper                          ctx;                                                        // 0x0038   (0x0010)  
	FString                                            CurrentLanguage;                                            // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnLoginCallBackHandle;                                      // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnConvsGetCallBackHandle;                                   // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnNewGetMessageHandle;                                      // 0x0078   (0x0010)  
	FMulticastInlineDelegate                           OnMessageReceivedHandle;                                    // 0x0088   (0x0010)  
	FMulticastInlineDelegate                           OnNewMessageReceivedHandle;                                 // 0x0098   (0x0010)  
	FMulticastInlineDelegate                           OnMessageSendCallBackHandle;                                // 0x00A8   (0x0010)  
	FMulticastInlineDelegate                           OnNewMessageSendCallBackHandle;                             // 0x00B8   (0x0010)  
	FMulticastInlineDelegate                           OnReceiveLogicMsgHandle;                                    // 0x00C8   (0x0010)  
	FMulticastInlineDelegate                           OnConvDiscardHandle;                                        // 0x00D8   (0x0010)  
	FMulticastInlineDelegate                           OnConfigInfoHandle;                                         // 0x00E8   (0x0010)  
	FMulticastInlineDelegate                           OnGetConnStatHandle;                                        // 0x00F8   (0x0010)  
	FMulticastInlineDelegate                           OnNetStatHandle;                                            // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnGetConfigChatLevelHandle;                                 // 0x0118   (0x0010)  
	FMulticastInlineDelegate                           OnTextTranslateDynamicDelegate;                             // 0x0128   (0x0010)  
	FString                                            SelfRoleID;                                                 // 0x0138   (0x0010)  
	FChatListConvData                                  CurrentConvData;                                            // 0x0148   (0x0018)  
	TArray<FLimNativeConversationData>                 ConvListFullData;                                           // 0x0160   (0x0010)  
	TArray<FNewChatListMessageData>                    ChatMsgDataList;                                            // 0x0170   (0x0010)  
	TArray<FLimNativeConvChatLevelConfigData>          ChatLevelDataList;                                          // 0x0180   (0x0010)  
	TMap<FChatListConvData, FString>                   MsgIDMap;                                                   // 0x0190   (0x0050)  
	TArray<FChatListUserData>                          PeerDataList;                                               // 0x01E0   (0x0010)  
	TArray<FChatListUserData>                          FriendDataList;                                             // 0x01F0   (0x0010)  
	TMap<FChatListConvData, FString>                   BaseMsgIDMap;                                               // 0x0200   (0x0050)  
	TMap<FChatListConvData, int32_t>                   UnreadMsgMap;                                               // 0x0250   (0x0050)  
	FMulticastInlineDelegate                           OnGetFriendsCallBackHandle;                                 // 0x02A0   (0x0010)  
	FMulticastInlineDelegate                           OnGetUserHandle;                                            // 0x02B0   (0x0010)  
	FMulticastInlineDelegate                           OnGetUserListHandle;                                        // 0x02C0   (0x0010)  
	FMulticastInlineDelegate                           OnGetUserListStateHandle;                                   // 0x02D0   (0x0010)  
	FMulticastInlineDelegate                           OnRedHintUpdateHandle;                                      // 0x02E0   (0x0010)  
	FMulticastInlineDelegate                           OnInputBoxChangeHandle;                                     // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0300   (0x0020)  MISSED


	/// Functions
	// Function /Script/LimNativeWidget.LimChatManager.UnRegisterLuaEvent
	void UnRegisterLuaEvent();                                                                                               // [0xb43660] Event|Public|BlueprintEvent 
	// Function /Script/LimNativeWidget.LimChatManager.UnInitChatManager
	void UnInitChatManager();                                                                                                // [0x951ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.TranslateText
	void TranslateText(FString Text, FString Lang, FString ExtraInfo);                                                       // [0x951b90] Final|Native|Public  
	// Function /Script/LimNativeWidget.LimChatManager.SwitchConvTo
	void SwitchConvTo(FChatListConvData& InConvData, bool RefreshConvList);                                                  // [0x951a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.SetCtxLanguage
	void SetCtxLanguage(FString Lang);                                                                                       // [0x9519f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.SetConvRead
	void SetConvRead(FChatListConvData& ConvData);                                                                           // [0x951940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.SetConvMsgRead
	void SetConvMsgRead(FString ConvID, ELimNativeConvType ConvType, FString MsgId, FString Extra);                          // [0x9517b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.SendVoiceMessageToConv
	void SendVoiceMessageToConv(FString ConvID, ELimNativeConvType ConvType, FString FileID, FString Extra);                 // [0x9515e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.SendTextMessageToConv
	void SendTextMessageToConv(FString ConvID, ELimNativeConvType ConvType, FString Message, FString Extra);                 // [0x951410] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.SendTextMessage
	void SendTextMessage(FString Message, FString Extra);                                                                    // [0x951310] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.PostInitChatManager
	void PostInitChatManager(FLimNativeReportConfig ReportConfig, FLimNativeParkConfig ParkConfig);                          // [0x950bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.OpenChatUI
	UUserWidget* OpenChatUI(UObject* WorldContextObject, FString ChatWidgetPath, int32_t ZOrder);                            // [0x950a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.OnTextTranslateDynamicDelegate__DelegateSignature
	void OnTextTranslateDynamicDelegate__DelegateSignature(bool TranslateRes, FString TranslatedText, FString Translator, FString ExtraInfo); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnSendMessageCallBackDynamicDelegate__DelegateSignature
	void OnSendMessageCallBackDynamicDelegate__DelegateSignature(FChatListMessageData& MsgCallBack);                         // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnRedHintUpdateDynamicDelegate__DelegateSignature
	void OnRedHintUpdateDynamicDelegate__DelegateSignature();                                                                // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnReceiveMessageDynamicDelegate__DelegateSignature
	void OnReceiveMessageDynamicDelegate__DelegateSignature(FChatListMessageData& Msg);                                      // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnReceiveLogicMessageDynamicDelegate__DelegateSignature
	void OnReceiveLogicMessageDynamicDelegate__DelegateSignature(int32_t MsgType, FLimNativeDataBizFullObj& NativeMsg);      // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnOpenChatUI
	void OnOpenChatUI();                                                                                                     // [0x8f2720] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.OnNewSendMessageCallBackDynamicDelegate__DelegateSignature
	void OnNewSendMessageCallBackDynamicDelegate__DelegateSignature(FNewChatListMessageData& MsgCallBack, FString RetData, int32_t Code); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnNewReceiveMessageDynamicDelegate__DelegateSignature
	void OnNewReceiveMessageDynamicDelegate__DelegateSignature(FNewChatListMessageData& Msg);                                // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnMiscConfigInfoHandle
	void OnMiscConfigInfoHandle(FLimNativeLowLevelWrapper& InWrapper, FLimNativeGetMiscConfigInfoCallBack& RetData);         // [0x9508b0] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnMessageSend
	void OnMessageSend(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnSendMsgCallBack& RetData);                          // [0x950670] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnMessageReceived
	void OnMessageReceived(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnMsgReceivedEventCallBack& RetData);             // [0x950480] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnLoginDynamicDelegate__DelegateSignature
	void OnLoginDynamicDelegate__DelegateSignature(bool LoginRes, int32_t Code, FString RetData);                            // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnLogin
	void OnLogin(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnLoginCallBack& RetData);                                  // [0x950310] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnLogicMsgReceived
	void OnLogicMsgReceived(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnMsgLogicReceivedEventCallBack& RetData);       // [0x950190] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnLog
	void OnLog(FLimNativeLowLevelWrapper& InWrapper, FString Data);                                                          // [0x950060] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnInputBoxStateChangeDelegate__DelegateSignature
	void OnInputBoxStateChangeDelegate__DelegateSignature(bool bUp, int32_t Left, int32_t Top, int32_t Right, int32_t Bottom); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetUsersStateCallBackDynamicDelegate__DelegateSignature
	void OnGetUsersStateCallBackDynamicDelegate__DelegateSignature();                                                        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetUsersCallBackDynamicDelegate__DelegateSignature
	void OnGetUsersCallBackDynamicDelegate__DelegateSignature(TArray<FChatListUserData>& UserDataList);                      // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetUserListState
	void OnGetUserListState(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetUsersStateCallBack& RetData);               // [0x94fe40] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetUserListInfo
	void OnGetUserListInfo(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetUsersCallBack& RetData);                     // [0x94fb70] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetUserInfo
	void OnGetUserInfo(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetUserCallBack& RetData);                          // [0x94fa10] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetUserCallBackDynamicDelegate__DelegateSignature
	void OnGetUserCallBackDynamicDelegate__DelegateSignature(FChatListUserData& UserData);                                   // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetTextTranslateHandle
	void OnGetTextTranslateHandle(FLimNativeLowLevelWrapper& InWrapper, FLimNativeTextTranslateCallBack& RetData);           // [0x94f830] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetNetStatHandle
	void OnGetNetStatHandle(FLimNativeLowLevelWrapper& InWrapper, int32_t RetData);                                          // [0x94f720] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetNetStatDynamicDelegate__DelegateSignature
	void OnGetNetStatDynamicDelegate__DelegateSignature(int32_t val);                                                        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetMessageInRange
	void OnGetMessageInRange(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetMsgsCallBack& RetData);                    // [0x94f560] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetMessageDataDynamicDelegate__DelegateSignature
	void OnGetMessageDataDynamicDelegate__DelegateSignature(int32_t Code, FString ConvID, ELimNativeConvType ConvType);      // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetFriendsCallBackDynamicDelegate__DelegateSignature
	void OnGetFriendsCallBackDynamicDelegate__DelegateSignature(TArray<FChatListUserData>& FriendList);                      // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetFriends
	void OnGetFriends(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetFriendCallBack& RetData);                         // [0x94f290] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetConnStateHandle
	void OnGetConnStateHandle(FLimNativeLowLevelWrapper& InWrapper, FLimNativeGetConnStateCallBack& RetData);                // [0x94f110] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnGetConnStatDynamicDelegate__DelegateSignature
	void OnGetConnStatDynamicDelegate__DelegateSignature(bool Result, int32_t val);                                          // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnConvsGetDynamicDelegate__DelegateSignature
	void OnConvsGetDynamicDelegate__DelegateSignature(bool GetConvRes);                                                      // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnConvRead
	void OnConvRead(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnSetConvReadCallBack& RetData);                         // [0x94efa0] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnConvListGet
	void OnConvListGet(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnConvsGetCallBack& RetData);                         // [0x94ed60] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnConvHandleDynamicDelegate__DelegateSignature
	void OnConvHandleDynamicDelegate__DelegateSignature(bool Result, FLimNativeConvHandleCallBackData& Data);                // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnConvHandle
	void OnConvHandle(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnConvHandleCallBack& RetData);                        // [0x94ebb0] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnConvChatLevelConfig
	void OnConvChatLevelConfig(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetConvChatLevelConfigCallBack& RetData);   // [0x94e9e0] Final|Native|Protected|HasOutParms 
	// Function /Script/LimNativeWidget.LimChatManager.OnConfigInfoHandleDynamicDelegate__DelegateSignature
	void OnConfigInfoHandleDynamicDelegate__DelegateSignature(bool Result, int32_t val);                                     // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.OnConfigGetChatLevlDynamicDelegate__DelegateSignature
	void OnConfigGetChatLevlDynamicDelegate__DelegateSignature(bool Result);                                                 // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.LimChatManager.Logout
	void Logout();                                                                                                           // [0x94e9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.Login
	void Login(FString InAppId, FString InAppUserID, FString InToken, FString InRoleID, FString InExtra);                    // [0x94e7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.InitChatManager
	void InitChatManager(FLimNativeInitConfig InitConfig, FString InEnvId, FString InGMEUserID);                             // [0x94e460] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetUserListState
	void GetUserListState(TArray<FString>& InUserIDList);                                                                    // [0x94e390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetUserListInfo
	void GetUserListInfo(TArray<FString> InUserIDList);                                                                      // [0x94e220] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetUserInfo
	void GetUserInfo(FString InUserId);                                                                                      // [0x94e180] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetMiscConfigInfo
	void GetMiscConfigInfo();                                                                                                // [0x94e160] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetMessageInRange
	void GetMessageInRange(FString ConvID, ELimNativeConvType ConvType, FString FromMsgId, FString ToMsgId);                 // [0x94dfd0] Final|Native|Public  
	// Function /Script/LimNativeWidget.LimChatManager.GetMessage
	void GetMessage(FChatListConvData& TargetConv);                                                                          // [0x94df20] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetLimSlssvr
	FString GetLimSlssvr();                                                                                                  // [0x94dea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetLimSDKRegion
	FString GetLimSDKRegion();                                                                                               // [0x94de20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetLimGameID
	int32_t GetLimGameID();                                                                                                  // [0x94ddf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetInstance
	ULimChatManager* GetInstance();                                                                                          // [0x94ddc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetFriendList
	void GetFriendList();                                                                                                    // [0x94dda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetFarlightDomain
	int32_t GetFarlightDomain();                                                                                             // [0x94dd70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetConvMessage
	void GetConvMessage(FString ConvID, ELimNativeConvType ConvType, FString FromMsgId, FString ToMsgId);                    // [0x94db30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetConvList
	void GetConvList();                                                                                                      // [0x94db10] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetConvChatLevelConfig
	void GetConvChatLevelConfig();                                                                                           // [0x94daf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.GetConnState
	void GetConnState();                                                                                                     // [0x94dad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.DiscardConv
	void DiscardConv(FString ConvID, ELimNativeConvType ConvType);                                                           // [0x94d9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.DestroyInstance
	void DestroyInstance();                                                                                                  // [0x94d980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.LimChatManager.CheckTargetIsContainIn
	bool CheckTargetIsContainIn(FChatListConvData& InConvData);                                                              // [0x94d8c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LimNativeWidget.LimNativeWidgetSettings
/// Size: 0x0150 (0x000038 - 0x000188)
class ULimNativeWidgetSettings : public UDeveloperSettings
{ 
public:
	FString                                            rDownloadPath;                                              // 0x0038   (0x0010)  
	int32_t                                            FileIOThreadIntervalMs;                                     // 0x0048   (0x0004)  
	float                                              CachedDiskFileExpiredDuration;                              // 0x004C   (0x0004)  
	float                                              CachedResponseExpiredDuration;                              // 0x0050   (0x0004)  
	int32_t                                            CachedResponseMaxCount;                                     // 0x0054   (0x0004)  
	FSoftObjectPath                                    LocalizationTable;                                          // 0x0058   (0x0018)  
	FString                                            EnvId;                                                      // 0x0070   (0x0010)  
	FString                                            GME_AppId;                                                  // 0x0080   (0x0010)  
	FString                                            GME_PrivateKey;                                             // 0x0090   (0x0010)  
	FString                                            GME_Test_AppId;                                             // 0x00A0   (0x0010)  
	FString                                            GME_Test_PrivateKey;                                        // 0x00B0   (0x0010)  
	bool                                               bTestGmeEnv;                                                // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              GME_EventTick;                                              // 0x00C4   (0x0004)  
	int32_t                                            MaxRecordingTime;                                           // 0x00C8   (0x0004)  
	bool                                               bShowLimSdkLog;                                             // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	FString                                            Lim_SDKRegion;                                              // 0x00D0   (0x0010)  
	int32_t                                            Lim_GameID;                                                 // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FString                                            Lim_Slssvr;                                                 // 0x00E8   (0x0010)  
	int32_t                                            Use_Farlight_Domain;                                        // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FString                                            Nertc_AppKey;                                               // 0x0100   (0x0010)  
	FString                                            Nertc_AppToken;                                             // 0x0110   (0x0010)  
	FString                                            Nertc_Test_AppKey;                                          // 0x0120   (0x0010)  
	FString                                            Nertc_Test_AppToken;                                        // 0x0130   (0x0010)  
	FString                                            Agora_AppKey;                                               // 0x0140   (0x0010)  
	FString                                            Agora_AppToken;                                             // 0x0150   (0x0010)  
	FString                                            Agora_Test_AppKey;                                          // 0x0160   (0x0010)  
	FString                                            Agora_Test_AppToken;                                        // 0x0170   (0x0010)  
	bool                                               bEnvOversea;                                                // 0x0180   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0181   (0x0007)  MISSED


	/// Functions
	// Function /Script/LimNativeWidget.LimNativeWidgetSettings.GetInstance
	ULimNativeWidgetSettings* GetInstance();                                                                                 // [0x952ef0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LimNativeWidget.NertcManager
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UNertcManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnPermissionResult;                                         // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnEnterRoom;                                                // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnExitRoom;                                                 // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnConnectionChanged;                                        // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnNertcUserInfoUpdate;                                      // 0x0078   (0x0010)  
	FMulticastInlineDelegate                           OnNertcLocalInfoUpdate;                                     // 0x0088   (0x0010)  
	FMulticastInlineDelegate                           OnUserRoomStateChange;                                      // 0x0098   (0x0010)  
	FMulticastInlineDelegate                           OnAudioStateChanged;                                        // 0x00A8   (0x0010)  
	TArray<int32_t>                                    MuteUIDList;                                                // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/LimNativeWidget.NertcManager.UpdateSelfPosition
	void UpdateSelfPosition(FVector& InSelfPosition, FRotator& InSelfRotator);                                               // [0x953c50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.UpdateAudioRecvRange
	void UpdateAudioRecvRange(int32_t InRange);                                                                              // [0x953bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.UnRegisterLuaEvent
	void UnRegisterLuaEvent();                                                                                               // [0xb43660] Event|Public|BlueprintEvent 
	// Function /Script/LimNativeWidget.NertcManager.Uninit
	void Uninit();                                                                                                           // [0x953ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SwitchRoom
	void SwitchRoom(FString RoomID, FString AppToken, int32_t Uid, int32_t TeamID, int32_t AudioDistance);                   // [0x9539f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SetSubscribeAudioOnlyBy
	void SetSubscribeAudioOnlyBy(TArray<int32_t>& OpenIDList);                                                               // [0x953940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SetSubscribeAudioBlocklist
	void SetSubscribeAudioBlocklist(TArray<int32_t>& OpenIDList);                                                            // [0x953890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SetSubscribeAudioAllowlist
	void SetSubscribeAudioAllowlist(TArray<int32_t>& OpenIDList);                                                            // [0x9537e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SetRangeAudioTeamID
	void SetRangeAudioTeamID(int32_t TeamID);                                                                                // [0x953750] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SetRangeAudioMode
	void SetRangeAudioMode(EChatGMERangeAudioMode InAudioMode);                                                              // [0x9536d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SetClientRole
	void SetClientRole(bool bBroadCast);                                                                                     // [0x953640] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SetAudioSessionRestriction
	void SetAudioSessionRestriction();                                                                                       // [0x8f2720] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SetAudioSendAndRecvRules
	void SetAudioSendAndRecvRules(EChatGMEAudioRouteSendType InSendType, TArray<int32_t>& InSendOpenIDList, EChatGMEAudioRouteRecvType InRecvType, TArray<int32_t>& InRecvOpenIDList); // [0x9534a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SelectSpeak
	void SelectSpeak(FString InDeviceID);                                                                                    // [0x953400] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.SelectMic
	void SelectMic(FString InDeviceID);                                                                                      // [0x953360] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.OnUserRoomStateChange__DelegateSignature
	void OnUserRoomStateChange__DelegateSignature(bool EnterRoom, int32_t Uid);                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.NertcManager.OnUserInfoUpdateDelegate__DelegateSignature
	void OnUserInfoUpdateDelegate__DelegateSignature(FNertcUserUpdateData UserData);                                         // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.NertcManager.OnNertcConnectionChange__DelegateSignature
	void OnNertcConnectionChange__DelegateSignature(int32_t State, int32_t reason);                                          // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.NertcManager.OnLocalUserVolumeChanged__DelegateSignature
	void OnLocalUserVolumeChanged__DelegateSignature(int32_t Volume, bool bVad);                                             // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.NertcManager.OnExitRoomDelegate__DelegateSignature
	void OnExitRoomDelegate__DelegateSignature(int32_t Result, int64_t reason);                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.NertcManager.OnEnterRoomDelegate__DelegateSignature
	void OnEnterRoomDelegate__DelegateSignature(int64_t RoomID, int32_t Uid, int32_t Result, int64_t Elapsed);               // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.NertcManager.OnAudioDeviceStateChanged__DelegateSignature
	void OnAudioDeviceStateChanged__DelegateSignature(bool bChanged);                                                        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.NertcManager.OnAndroidPermissionResult__DelegateSignature
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess);                                                        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LimNativeWidget.NertcManager.MuteLocalStream
	void MuteLocalStream(bool bMute);                                                                                        // [0x9532d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.MediaMute
	void MediaMute(int32_t Uid, bool bMute);                                                                                 // [0x953200] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.IsRoomEntered
	bool IsRoomEntered();                                                                                                    // [0x9531d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.InnerEnterRoom
	void InnerEnterRoom(FString RoomID, FString AppToken, int32_t Uid);                                                      // [0x953090] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.InnerEnableMic
	void InnerEnableMic(bool InEnable);                                                                                      // [0x952aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.Init
	void Init(FString Appkey);                                                                                               // [0x952ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.GetSpeakerList
	TArray<FChatGMEDataDeviceInfo> GetSpeakerList();                                                                         // [0x952fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.GetMicList
	TArray<FChatGMEDataDeviceInfo> GetMicList();                                                                             // [0x952f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.GetInstance
	UNertcManager* GetInstance();                                                                                            // [0x952f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.GameSetSpeakerVolume
	int32_t GameSetSpeakerVolume(int32_t Volume);                                                                            // [0x952e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.GameSetMicVolume
	int32_t GameSetMicVolume(int32_t MicVolume);                                                                             // [0x952db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.ExitRoom
	void ExitRoom();                                                                                                         // [0x952d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.EnterRoom
	void EnterRoom(FString RoomID, FString AppToken, int32_t Uid);                                                           // [0x952c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.EnableSpeaker
	void EnableSpeaker(bool InEnable);                                                                                       // [0x952bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.EnableRangeVoice
	void EnableRangeVoice(bool bEnbale);                                                                                     // [0x952b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.EnableMic
	void EnableMic(bool InEnable);                                                                                           // [0x952aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.EnabelAudioIndication
	void EnabelAudioIndication(bool InEnable, int32_t millions, bool bEnbaleLocal);                                          // [0x952990] Final|Native|Public|BlueprintCallable 
	// Function /Script/LimNativeWidget.NertcManager.DestroyInstance
	void DestroyInstance();                                                                                                  // [0x952970] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/LimNativeWidget.ChatGMEDataResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FChatGMEDataResult
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	bool                                               bSuccess;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            ErrorInfo;                                                  // 0x0010   (0x0010)  
	int32_t                                            ErrorCode;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LimNativeWidget.ChatGMEDataDeviceInfo
/// Size: 0x0028 (0x000028 - 0x000050)
struct FChatGMEDataDeviceInfo : FChatGMEDataResult
{ 
	FString                                            DeviceID;                                                   // 0x0028   (0x0010)  
	FString                                            DeviceName;                                                 // 0x0038   (0x0010)  
	bool                                               bNewDevice;                                                 // 0x0048   (0x0001)  
	bool                                               bUsedDevice;                                                // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/LimNativeWidget.ChatGMEDataRoomQuality
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChatGMEDataRoomQuality
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	int32_t                                            Weight;                                                     // 0x0008   (0x0004)  
	float                                              Loss;                                                       // 0x000C   (0x0004)  
	int32_t                                            Delay;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/LimNativeWidget.ChatGMEDataChangeRoomType
/// Size: 0x0008 (0x000028 - 0x000030)
struct FChatGMEDataChangeRoomType : FChatGMEDataResult
{ 
	EChatGMERoomTypeSubEvent                           NewRoomType;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/LimNativeWidget.ChatGMEDataFileInfo
/// Size: 0x0030 (0x000028 - 0x000058)
struct FChatGMEDataFileInfo : FChatGMEDataResult
{ 
	FString                                            FileID;                                                     // 0x0028   (0x0010)  
	FString                                            FilePath;                                                   // 0x0038   (0x0010)  
	FString                                            Text;                                                       // 0x0048   (0x0010)  
};

/// Struct /Script/LimNativeWidget.ChatGMEDataNumberOfAudioStreamsUpdate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FChatGMEDataNumberOfAudioStreamsUpdate
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	int32_t                                            AudioStreamsNum;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/LimNativeWidget.ChatGMEDataNumberOfUserUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChatGMEDataNumberOfUserUpdate
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	int32_t                                            AllUserNum;                                                 // 0x0008   (0x0004)  
	int32_t                                            AccUserNum;                                                 // 0x000C   (0x0004)  
	int32_t                                            ProxyUserNum;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/LimNativeWidget.ChatGMEDataRecordCompleted
/// Size: 0x0020 (0x000028 - 0x000048)
struct FChatGMEDataRecordCompleted : FChatGMEDataResult
{ 
	FString                                            FilePath;                                                   // 0x0028   (0x0010)  
	FString                                            Duration;                                                   // 0x0038   (0x0010)  
};

/// Struct /Script/LimNativeWidget.ChatGMEDataRoomOperator
/// Size: 0x0028 (0x000028 - 0x000050)
struct FChatGMEDataRoomOperator : FChatGMEDataResult
{ 
	FString                                            SenderId;                                                   // 0x0028   (0x0010)  
	FString                                            ReceiverId;                                                 // 0x0038   (0x0010)  
	EChatGMERoomManagementOp                           OperateType;                                                // 0x0048   (0x0001)  
	bool                                               bOpenCmd;                                                   // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/LimNativeWidget.ChatGMEDataUserUpdate
/// Size: 0x0020 (0x000000 - 0x000020)
struct FChatGMEDataUserUpdate
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	EChatGMEEventIDUserUpdate                          EventId;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FString>                                    UserList;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/LimNativeWidget.ChatGMEDataUserVolumes
/// Size: 0x0058 (0x000000 - 0x000058)
struct FChatGMEDataUserVolumes
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TMap<FString, float>                               Volumes;                                                    // 0x0008   (0x0050)  
};

/// Struct /Script/LimNativeWidget.ChatListConvData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChatListConvData
{ 
	FString                                            ConvID;                                                     // 0x0000   (0x0010)  
	ELimNativeConvType                                 ConvType;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/LimNativeWidget.ChatListUserData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FChatListUserData
{ 
	FString                                            Uid;                                                        // 0x0000   (0x0010)  
	FString                                            NickName;                                                   // 0x0010   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0020   (0x0010)  
	FString                                            AvatarFrameUrl;                                             // 0x0030   (0x0010)  
	ELimNativeUserSexType                              Sex;                                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            VipLevel;                                                   // 0x0044   (0x0004)  
	bool                                               IsShowVip;                                                  // 0x0048   (0x0001)  
	ELimNativeFriendStateType                          OnlineState;                                                // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/LimNativeWidget.NewChatListMessageData
/// Size: 0x0178 (0x000000 - 0x000178)
struct FNewChatListMessageData
{ 
	FString                                            SendId;                                                     // 0x0000   (0x0010)  
	FString                                            MsgId;                                                      // 0x0010   (0x0010)  
	ELimNativeMsgState                                 MsgState;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FString                                            MsgContent;                                                 // 0x0028   (0x0010)  
	FString                                            UUID;                                                       // 0x0038   (0x0010)  
	FString                                            URL;                                                        // 0x0048   (0x0010)  
	FString                                            Size;                                                       // 0x0058   (0x0010)  
	int32_t                                            Duration;                                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            Ext;                                                        // 0x0070   (0x0010)  
	ELimNativeMsgContentType                           MsgType;                                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FString                                            ConvID;                                                     // 0x0088   (0x0010)  
	ELimNativeConvType                                 ConvType;                                                   // 0x0098   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            Timestamp;                                                  // 0x00A0   (0x0010)  
	FLimNativeIMChatMessage                            MsgData;                                                    // 0x00B0   (0x0070)  
	FLimNativeIMChatMessageBase                        MsgBase;                                                    // 0x0120   (0x0058)  
};

/// Struct /Script/LimNativeWidget.ChatListMessageData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FChatListMessageData
{ 
	FString                                            SendId;                                                     // 0x0000   (0x0010)  
	FString                                            MsgId;                                                      // 0x0010   (0x0010)  
	ELimNativeMsgState                                 MsgState;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FLimNativeIMChatMessage                            MsgData;                                                    // 0x0028   (0x0070)  
};

/// Struct /Script/LimNativeWidget.NertcUserUpdateData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNertcUserUpdateData
{ 
	TArray<FString>                                    UserList;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/LimNativeWidget.ChatLogicMessageData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FChatLogicMessageData
{ 
	int32_t                                            Type;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FLimNativeDataObjectBase                           BizObj;                                                     // 0x0008   (0x0008)  
};

/// Enum /Script/LimNativeWidget.EChatGMERoomType
/// Size: 0x04
enum EChatGMERoomType : uint8_t
{
	EChatGMERoomType__Fluency                                                        = 0,
	EChatGMERoomType__Standard                                                       = 1,
	EChatGMERoomType__HighQuality                                                    = 2,
	EChatGMERoomType__EChatGMERoomType_MAX                                           = 3
};

/// Enum /Script/LimNativeWidget.EChatGMERoomTypeSubEvent
/// Size: 0x05
enum EChatGMERoomTypeSubEvent : uint8_t
{
	EChatGMERoomTypeSubEvent__EnterRoom                                              = 0,
	EChatGMERoomTypeSubEvent__Start                                                  = 1,
	EChatGMERoomTypeSubEvent__Complete                                               = 2,
	EChatGMERoomTypeSubEvent__Request                                                = 3,
	EChatGMERoomTypeSubEvent__EChatGMERoomTypeSubEvent_MAX                           = 4
};

/// Enum /Script/LimNativeWidget.EChatGMERoomManagementOp
/// Size: 0x10
enum EChatGMERoomManagementOp : uint8_t
{
	EChatGMERoomManagementOp__Capture                                                = 0,
	EChatGMERoomManagementOp__Play                                                   = 1,
	EChatGMERoomManagementOp__AudioSend                                              = 2,
	EChatGMERoomManagementOp__AudioREC                                               = 3,
	EChatGMERoomManagementOp__Mic                                                    = 4,
	EChatGMERoomManagementOp__Speaker                                                = 5,
	EChatGMERoomManagementOp__GetMicState                                            = 6,
	EChatGMERoomManagementOp__GetSpeakerState                                        = 7,
	EChatGMERoomManagementOp__Fobin                                                  = 8,
	EChatGMERoomManagementOp__EChatGMERoomManagementOp_MAX                           = 9
};

/// Enum /Script/LimNativeWidget.EChatGMEEventIDUserUpdate
/// Size: 0x07
enum EChatGMEEventIDUserUpdate : uint8_t
{
	EChatGMEEventIDUserUpdate__Enter                                                 = 0,
	EChatGMEEventIDUserUpdate__Exit                                                  = 1,
	EChatGMEEventIDUserUpdate__HasCameraVideo                                        = 2,
	EChatGMEEventIDUserUpdate__NoCameraVideo                                         = 3,
	EChatGMEEventIDUserUpdate__HasAudio                                              = 4,
	EChatGMEEventIDUserUpdate__NoAudio                                               = 5,
	EChatGMEEventIDUserUpdate__EChatGMEEventIDUserUpdate_MAX                         = 6
};

/// Enum /Script/LimNativeWidget.EChatGMEAudioRouteRecvType
/// Size: 0x06
enum EChatGMEAudioRouteRecvType : uint8_t
{
	EChatGMEAudioRouteRecvType__RecvInquireError                                     = 0,
	EChatGMEAudioRouteRecvType__NotRecvFromAnyone                                    = 1,
	EChatGMEAudioRouteRecvType__RecvFromAll                                          = 2,
	EChatGMEAudioRouteRecvType__RecvBlacklist                                        = 3,
	EChatGMEAudioRouteRecvType__RecvWhitelist                                        = 4,
	EChatGMEAudioRouteRecvType__EChatGMEAudioRouteRecvType_MAX                       = 5
};

/// Enum /Script/LimNativeWidget.EChatGMEAudioRouteSendType
/// Size: 0x06
enum EChatGMEAudioRouteSendType : uint8_t
{
	EChatGMEAudioRouteSendType__InquireError                                         = 0,
	EChatGMEAudioRouteSendType__NotSendToAnyone                                      = 1,
	EChatGMEAudioRouteSendType__SendToAll                                            = 2,
	EChatGMEAudioRouteSendType__SendBlacklist                                        = 3,
	EChatGMEAudioRouteSendType__SendWhitelist                                        = 4,
	EChatGMEAudioRouteSendType__EChatGMEAudioRouteSendType_MAX                       = 5
};

/// Enum /Script/LimNativeWidget.EChatGMERangeAudioMode
/// Size: 0x03
enum EChatGMERangeAudioMode : uint8_t
{
	EChatGMERangeAudioMode__World                                                    = 0,
	EChatGMERangeAudioMode__Team                                                     = 1,
	EChatGMERangeAudioMode__EChatGMERangeAudioMode_MAX                               = 2
};

/// Enum /Script/LimNativeWidget.EIOSAudioPermissionState
/// Size: 0x05
enum EIOSAudioPermissionState : uint8_t
{
	EIOSAudioPermissionState__AudioPermission_Unknown                                = 0,
	EIOSAudioPermissionState__AudioPermission_Undetermined                           = 1,
	EIOSAudioPermissionState__AudioPermission_Denied                                 = 2,
	EIOSAudioPermissionState__AudioPermission_Granted                                = 3,
	EIOSAudioPermissionState__AudioPermission_MAX                                    = 4
};

/// Enum /Script/LimNativeWidget.EChatGMEAudioRouteType
/// Size: 0x06
enum EChatGMEAudioRouteType : uint8_t
{
	EChatGMEAudioRouteType__Others                                                   = 0,
	EChatGMEAudioRouteType__BuildInreciever                                          = 1,
	EChatGMEAudioRouteType__Speaker                                                  = 2,
	EChatGMEAudioRouteType__Headphone                                                = 3,
	EChatGMEAudioRouteType__Bluetooth                                                = 4,
	EChatGMEAudioRouteType__EChatGMEAudioRouteType_MAX                               = 5
};

/// Enum /Script/LimNativeWidget.EChatGMEKaraokeType
/// Size: 0x11
enum EChatGMEKaraokeType : uint8_t
{
	EChatGMEKaraokeType__Original                                                    = 0,
	EChatGMEKaraokeType__Pop                                                         = 1,
	EChatGMEKaraokeType__Rock                                                        = 2,
	EChatGMEKaraokeType__RB                                                          = 3,
	EChatGMEKaraokeType__Dance                                                       = 4,
	EChatGMEKaraokeType__Heaven                                                      = 5,
	EChatGMEKaraokeType__TTS                                                         = 6,
	EChatGMEKaraokeType__Vigorous                                                    = 7,
	EChatGMEKaraokeType__Limpid                                                      = 8,
	EChatGMEKaraokeType__Count                                                       = 9,
	EChatGMEKaraokeType__EChatGMEKaraokeType_MAX                                     = 10
};

/// Enum /Script/LimNativeWidget.EChatGMEVoiceType
/// Size: 0x15
enum EChatGMEVoiceType : uint8_t
{
	EChatGMEVoiceType__OriginalSound                                                 = 0,
	EChatGMEVoiceType__Lotita                                                        = 1,
	EChatGMEVoiceType__Uncle                                                         = 2,
	EChatGMEVoiceType__Intangible                                                    = 3,
	EChatGMEVoiceType__DeadFatboy                                                    = 4,
	EChatGMEVoiceType__HeavyMental                                                   = 5,
	EChatGMEVoiceType__Dialect                                                       = 6,
	EChatGMEVoiceType__Influenza                                                     = 7,
	EChatGMEVoiceType__CagedAnimal                                                   = 8,
	EChatGMEVoiceType__HeavyMachine                                                  = 9,
	EChatGMEVoiceType__StrongCurrent                                                 = 10,
	EChatGMEVoiceType__Kindergarten                                                  = 11,
	EChatGMEVoiceType__Huang                                                         = 12,
	EChatGMEVoiceType__Count                                                         = 13,
	EChatGMEVoiceType__EChatGMEVoiceType_MAX                                         = 14
};

/// Enum /Script/LimNativeWidget.EChatGMELogLevel
/// Size: 0x06
enum EChatGMELogLevel : uint8_t
{
	EChatGMELogLevel__None                                                           = 0,
	EChatGMELogLevel__Error                                                          = 1,
	EChatGMELogLevel__Info                                                           = 2,
	EChatGMELogLevel__Debug                                                          = 3,
	EChatGMELogLevel__Verbose                                                        = 4,
	EChatGMELogLevel__EChatGMELogLevel_MAX                                           = 5
};

/// Enum /Script/LimNativeWidget.EChatGMEAudioRouteSubEventType
/// Size: 0x02
enum EChatGMEAudioRouteSubEventType : uint8_t
{
	EChatGMEAudioRouteSubEventType__Update                                           = 0,
	EChatGMEAudioRouteSubEventType__EChatGMEAudioRouteSubEventType_MAX               = 1
};

/// Enum /Script/LimNativeWidget.EChatGMECustomDataSubEvent
/// Size: 0x02
enum EChatGMECustomDataSubEvent : uint8_t
{
	EChatGMECustomDataSubEvent__Update                                               = 0,
	EChatGMECustomDataSubEvent__EChatGMECustomDataSubEvent_MAX                       = 1
};

/// Enum /Script/LimNativeWidget.EChatGMEChorusSubEvent
/// Size: 0x08
enum EChatGMEChorusSubEvent : uint8_t
{
	EChatGMEChorusSubEvent__HasNoCMDPack                                             = 0,
	EChatGMEChorusSubEvent__HadCMDPack                                               = 1,
	EChatGMEChorusSubEvent__Start                                                    = 2,
	EChatGMEChorusSubEvent__Stop                                                     = 3,
	EChatGMEChorusSubEvent__AccompanierOption                                        = 4,
	EChatGMEChorusSubEvent__StatusRefuse                                             = 5,
	EChatGMEChorusSubEvent__StopByPeer                                               = 6,
	EChatGMEChorusSubEvent__EChatGMEChorusSubEvent_MAX                               = 7
};

/// Enum /Script/LimNativeWidget.EChatGMEEventType
/// Size: 0x45
enum EChatGMEEventType : uint8_t
{
	EChatGMEEventType__None                                                          = 0,
	EChatGMEEventType__EnterRoom                                                     = 1,
	EChatGMEEventType__ExitRoom                                                      = 2,
	EChatGMEEventType__RoomDisconnect                                                = 3,
	EChatGMEEventType__UserUpdate                                                    = 4,
	EChatGMEEventType__NumberOfUsersUpdate                                           = 5,
	EChatGMEEventType__NumberOfAudioStreamsUpdate                                    = 6,
	EChatGMEEventType__ReconnectStart                                                = 7,
	EChatGMEEventType__ReconnectSuccess                                              = 8,
	EChatGMEEventType__SwitchRoom                                                    = 9,
	EChatGMEEventType__ChangeRoomType                                                = 10,
	EChatGMEEventType__AudioDataEmpty                                                = 11,
	EChatGMEEventType__RoomSharingStart                                              = 12,
	EChatGMEEventType__RoomSharingStop                                               = 13,
	EChatGMEEventType__RecordCompleted                                               = 14,
	EChatGMEEventType__RecordPreviewCompleted                                        = 15,
	EChatGMEEventType__RecordMixCompleted                                            = 16,
	EChatGMEEventType__AudioRouteUpdate                                              = 17,
	EChatGMEEventType__SpeakerDefaultDeviceChanged                                   = 18,
	EChatGMEEventType__SpeakerNewDevice                                              = 19,
	EChatGMEEventType__SpeakerLostDevice                                             = 20,
	EChatGMEEventType__MicNewDevice                                                  = 21,
	EChatGMEEventType__MicLostDevice                                                 = 22,
	EChatGMEEventType__MicDefaultDeviceChanged                                       = 23,
	EChatGMEEventType__AudioRouteChanged                                             = 24,
	EChatGMEEventType__UserVolumes                                                   = 25,
	EChatGMEEventType__ChangeRoomQuality                                             = 26,
	EChatGMEEventType__AccompanyFinish                                               = 27,
	EChatGMEEventType__ServerAudioRouteEvent                                         = 28,
	EChatGMEEventType__CustomDataUpdate                                              = 29,
	EChatGMEEventType__RealtimeASR                                                   = 30,
	EChatGMEEventType__ChorusEvent                                                   = 31,
	EChatGMEEventType__ChangeTeamId                                                  = 32,
	EChatGMEEventType__AudioReady                                                    = 33,
	EChatGMEEventType__HardwareTestRecordFinish                                      = 34,
	EChatGMEEventType__HardwareTestPreviewFinish                                     = 35,
	EChatGMEEventType__PTTRecordComplete                                             = 36,
	EChatGMEEventType__PTTUploadComplete                                             = 37,
	EChatGMEEventType__PTTDownloadComplete                                           = 38,
	EChatGMEEventType__PTTPlayComplete                                               = 39,
	EChatGMEEventType__PTTSpeech2TextComplete                                        = 40,
	EChatGMEEventType__PTTStreamingRecognitionComplete                               = 41,
	EChatGMEEventType__PTTStreamingRecognitionIsRunning                              = 42,
	EChatGMEEventType__RoomManagementOperator                                        = 43,
	EChatGMEEventType__EChatGMEEventType_MAX                                         = 44
};

/// Enum /Script/LimNativeWidget.EChatGMEASRSubEvent
/// Size: 0x04
enum EChatGMEASRSubEvent : uint8_t
{
	EChatGMEASRSubEvent__Start                                                       = 0,
	EChatGMEASRSubEvent__Content                                                     = 1,
	EChatGMEASRSubEvent__End                                                         = 2,
	EChatGMEASRSubEvent__EChatGMEASRSubEvent_MAX                                     = 3
};

/// Enum /Script/LimNativeWidget.EChatGMERecordPermission
/// Size: 0x05
enum EChatGMERecordPermission : uint8_t
{
	EChatGMERecordPermission__Granted                                                = 0,
	EChatGMERecordPermission__Denied                                                 = 1,
	EChatGMERecordPermission__NotDetermined                                          = 2,
	EChatGMERecordPermission__Error                                                  = 3,
	EChatGMERecordPermission__EChatGMERecordPermission_MAX                           = 4
};

