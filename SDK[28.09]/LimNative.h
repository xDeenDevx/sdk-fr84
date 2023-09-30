/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LimNative.

/// Class /Script/LimNative.LimNative
/// Size: 0x03C8 (0x000028 - 0x0003F0)
class ULimNative : public UObject
{ 
public:
	bool                                               ShowLog;                                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnLog;                                                      // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnEvent;                                                    // 0x0040   (0x0010)  
	FMulticastInlineDelegate                           OnGetLanguage;                                              // 0x0050   (0x0010)  
	FMulticastInlineDelegate                           OnSetLanguage;                                              // 0x0060   (0x0010)  
	FMulticastInlineDelegate                           OnSetAllConfig;                                             // 0x0070   (0x0010)  
	FMulticastInlineDelegate                           OnSetReportConfig;                                          // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnSetParkConfig;                                            // 0x0090   (0x0010)  
	FMulticastInlineDelegate                           OnGetResDir;                                                // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           OnSetResDir;                                                // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           OnLogin;                                                    // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnLoginV2;                                                  // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           OnLogout;                                                   // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           OnCreateGroup;                                              // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           OnJoinGroup;                                                // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           OnQuitGroup;                                                // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           OnDestoryGroup;                                             // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroup;                                                 // 0x0130   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroups;                                                // 0x0140   (0x0010)  
	FMulticastInlineDelegate                           OnGetAttr;                                                  // 0x0150   (0x0010)  
	FMulticastInlineDelegate                           OnGetAllGroupAttr;                                          // 0x0160   (0x0010)  
	FMulticastInlineDelegate                           OnSetGroupAttr;                                             // 0x0170   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroupMembers;                                          // 0x0180   (0x0010)  
	FMulticastInlineDelegate                           OnAddGroupMember;                                           // 0x0190   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveGroupMember;                                        // 0x01A0   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroupMember;                                           // 0x01B0   (0x0010)  
	FMulticastInlineDelegate                           OnSetConvRead;                                              // 0x01C0   (0x0010)  
	FMulticastInlineDelegate                           OnSendMsg;                                                  // 0x01D0   (0x0010)  
	FMulticastInlineDelegate                           OnRevokeMsg;                                                // 0x01E0   (0x0010)  
	FMulticastInlineDelegate                           OnGetBeforeMsg;                                             // 0x01F0   (0x0010)  
	FMulticastInlineDelegate                           OnGetAfterMsg;                                              // 0x0200   (0x0010)  
	FMulticastInlineDelegate                           OnGetMsgsById;                                              // 0x0210   (0x0010)  
	FMulticastInlineDelegate                           OnGetCommonMsgs;                                            // 0x0220   (0x0010)  
	FMulticastInlineDelegate                           OnSetMsgState;                                              // 0x0230   (0x0010)  
	FMulticastInlineDelegate                           OnConvHandle;                                               // 0x0240   (0x0010)  
	FMulticastInlineDelegate                           OnConvsGet;                                                 // 0x0250   (0x0010)  
	FMulticastInlineDelegate                           OnGetFriends;                                               // 0x0260   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveFriend;                                             // 0x0270   (0x0010)  
	FMulticastInlineDelegate                           OnCreateFriendRequest;                                      // 0x0280   (0x0010)  
	FMulticastInlineDelegate                           OnGetFriendRequests;                                        // 0x0290   (0x0010)  
	FMulticastInlineDelegate                           OnAcceptFriendRequest;                                      // 0x02A0   (0x0010)  
	FMulticastInlineDelegate                           OnRefuseFriendRequest;                                      // 0x02B0   (0x0010)  
	FMulticastInlineDelegate                           OnCancelFriendRequest;                                      // 0x02C0   (0x0010)  
	FMulticastInlineDelegate                           OnGetBlockees;                                              // 0x02D0   (0x0010)  
	FMulticastInlineDelegate                           OnAddToBlockee;                                             // 0x02E0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveFromBlockee;                                        // 0x02F0   (0x0010)  
	FMulticastInlineDelegate                           OnGetUser;                                                  // 0x0300   (0x0010)  
	FMulticastInlineDelegate                           OnGetUsers;                                                 // 0x0310   (0x0010)  
	FMulticastInlineDelegate                           OnGetUsersState;                                            // 0x0320   (0x0010)  
	FMulticastInlineDelegate                           OnReportMsg;                                                // 0x0330   (0x0010)  
	FMulticastInlineDelegate                           OnTranslateText;                                            // 0x0340   (0x0010)  
	FMulticastInlineDelegate                           OnCheckImage;                                               // 0x0350   (0x0010)  
	FMulticastInlineDelegate                           OnGetOssToken;                                              // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           OnGetGMEToken;                                              // 0x0370   (0x0010)  
	FMulticastInlineDelegate                           OnMsgReceived;                                              // 0x0380   (0x0010)  
	FMulticastInlineDelegate                           OnMsgLogicReceived;                                         // 0x0390   (0x0010)  
	FMulticastInlineDelegate                           OnMsgRevoked;                                               // 0x03A0   (0x0010)  
	FMulticastInlineDelegate                           OnGetMiscConfigInfo;                                        // 0x03B0   (0x0010)  
	FMulticastInlineDelegate                           OnGetConvChatLevelConfig;                                   // 0x03C0   (0x0010)  
	FMulticastInlineDelegate                           OnGetConnState;                                             // 0x03D0   (0x0010)  
	FMulticastInlineDelegate                           OnNetState;                                                 // 0x03E0   (0x0010)  


	/// Functions
	// Function /Script/LimNative.LimNative.TranslateText
	void TranslateText(FLimNativeLowLevelWrapper& InCtx, FString InText, ELimNativeSupportedLanguage InLang, FString ExtraInfo); // [0x9a8330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SetResDir
	void SetResDir(FLimNativeLowLevelWrapper& InCtx, FString InResDir);                                                      // [0x9a8210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SetMsgState
	void SetMsgState(FLimNativeLowLevelWrapper& InCtx, FLimNativeSetMsgState& SetMsgParams);                                 // [0x9a80b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SetLogHandler
	void SetLogHandler(FLimNativeLowLevelWrapper& InCtx);                                                                    // [0x9a8000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SetLanguage
	void SetLanguage(FLimNativeLowLevelWrapper& InCtx, ELimNativeSupportedLanguage InLanguage);                              // [0x9a7f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SetGroupAttr
	void SetGroupAttr(FLimNativeLowLevelWrapper& InCtx, FString groupid, FString Key, FString Value);                        // [0x9a7d40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SetEventHandler
	void SetEventHandler(FLimNativeLowLevelWrapper& InCtx);                                                                  // [0x9a7c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SetConvRead
	void SetConvRead(FLimNativeLowLevelWrapper& InCtx, FString ConvID, ELimNativeConvType ConvType, FString InMsgID, FString Extra); // [0x9a7a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SetAllConfig
	void SetAllConfig(FLimNativeLowLevelWrapper& InCtx, FLimNativeInitConfig InConfig);                                      // [0x9a77d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SendVoiceMsg
	void SendVoiceMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMVoiceMessage& VoiceMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp, FString Extra); // [0x9a7440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SendTextWithAtMsg
	void SendTextWithAtMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMTextWithAtMessage& TextWithAtMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp, FString Extra); // [0x9a70f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SendTextMsg
	void SendTextMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMTextMessage& TextMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp, FString Extra); // [0x9a6da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SendShareMsg
	void SendShareMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMShareMessage& ShareMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp, FString Extra); // [0x9a69d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SendImageMsg
	void SendImageMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMImageMessage& ImageMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp, FString Extra); // [0x9a6630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.SendEmotionMsg
	void SendEmotionMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMEmotionMessage& EmotionMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp, FString Extra); // [0x9a6270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RevokeVoiceMsg
	void RevokeVoiceMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMVoiceMessage& VoiceMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp); // [0x9a5f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RevokeTextWithAtMsg
	void RevokeTextWithAtMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMTextWithAtMessage& TextWithAtMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp); // [0x9a5c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RevokeTextMsg
	void RevokeTextMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMTextMessage& TextMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp); // [0x9a5970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RevokeShareMsg
	void RevokeShareMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMShareMessage& ShareMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp); // [0x9a55f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RevokeImageMsg
	void RevokeImageMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMImageMessage& ImageMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp); // [0x9a52a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RevokeEmotionMsg
	void RevokeEmotionMsg(FLimNativeLowLevelWrapper& InCtx, FLimNativeIMEmotionMessage& EmotionMsg, FString ConvID, ELimNativeConvType ConvType, FString Nonce, FString Timestamp); // [0x9a4f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.ReportMsg
	void ReportMsg(FLimNativeLowLevelWrapper& InCtx, FString InType, FString InMsg);                                         // [0x9a4dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RemoveGroupMember
	void RemoveGroupMember(FLimNativeLowLevelWrapper& InCtx, FString groupid, FString memberid);                             // [0x9a4c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RemoveFromBlockee
	void RemoveFromBlockee(FLimNativeLowLevelWrapper& InCtx, FString InUserId);                                              // [0x9a4b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RemoveFriend
	void RemoveFriend(FLimNativeLowLevelWrapper& InCtx, FString InUserId, FString InExtra);                                  // [0x9a49c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.RefuseFriendRequest
	void RefuseFriendRequest(FLimNativeLowLevelWrapper& InCtx, FString InRequestID, FString InExtra);                        // [0x9a4850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.QuitGroup
	void QuitGroup(FLimNativeLowLevelWrapper& InCtx, FString groupid);                                                       // [0x9a4730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.PostInitLIM
	void PostInitLIM(FLimNativeLowLevelWrapper& ctx, FLimNativeReportConfig ReportConfig, FLimNativeParkConfig ParkConfig);  // [0x9a3f60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.MsgsGetCommon
	void MsgsGetCommon(FLimNativeLowLevelWrapper& InCtx);                                                                    // [0x9a3eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.Logout
	void Logout(FLimNativeLowLevelWrapper& InCtx);                                                                           // [0x9a3e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.LoginV2
	void LoginV2(FLimNativeLowLevelWrapper& InCtx, FString InEnvId, FString InRoleID);                                       // [0x9a3c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.Login
	void Login(FLimNativeLowLevelWrapper& InCtx, FString InAppId, FString InAppUserID, FString InToken, FString InRoleID, FString InExtra); // [0x9a3a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.LIMOnTranslateTextDynamicDelegate__DelegateSignature
	void LIMOnTranslateTextDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeTextTranslateCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSetResDirDynamicDelegate__DelegateSignature
	void LIMOnSetResDirDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeResDirConfig& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSetReportConfigDynamicDelegate__DelegateSignature
	void LIMOnSetReportConfigDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeReportConfig& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSetParkConfigDynamicDelegate__DelegateSignature
	void LIMOnSetParkConfigDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeParkConfig& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSetMsgStateDynamicDelegate__DelegateSignature
	void LIMOnSetMsgStateDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnSetMsgStateCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSetLanguageDynamicDelegate__DelegateSignature
	void LIMOnSetLanguageDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeLanguageConfig& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSetGroupAttrDynamicDelegate__DelegateSignature
	void LIMOnSetGroupAttrDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupAttrSetCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSetConvReadDynamicDelegate__DelegateSignature
	void LIMOnSetConvReadDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnSetConvReadCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSetAllConfigDynamicDelegate__DelegateSignature
	void LIMOnSetAllConfigDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeInitConfig& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnSendMsgDynamicDelegate__DelegateSignature
	void LIMOnSendMsgDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnSendMsgCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnRevokeMsgDynamicDelegate__DelegateSignature
	void LIMOnRevokeMsgDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnRevokeMsgCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnReportMsgDynamicDelegate__DelegateSignature
	void LIMOnReportMsgDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeDataCallBackBase& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature
	void LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupMemberRemoveCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature
	void LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeFriendCommonCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnRemoveFriendDynamicDelegate__DelegateSignature
	void LIMOnRemoveFriendDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeFriendCommonCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature
	void LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeFriendCommonCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnQuitGroupDynamicDelegate__DelegateSignature
	void LIMOnQuitGroupDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupQuitCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnNetConnectStateDynamicDelegate__DelegateSignature
	void LIMOnNetConnectStateDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, int32_t EventCode);    // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnMsgRevokedDynamicDelegate__DelegateSignature
	void LIMOnMsgRevokedDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnMsgRevokedEventCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnMsgReceivedDynamicDelegate__DelegateSignature
	void LIMOnMsgReceivedDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnMsgReceivedEventCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature
	void LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnMsgLogicReceivedEventCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnLogoutDynamicDelegate__DelegateSignature
	void LIMOnLogoutDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnLogoutCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnLoginDynamicDelegate__DelegateSignature
	void LIMOnLoginDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnLoginCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnJoinGroupDynamicDelegate__DelegateSignature
	void LIMOnJoinGroupDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupJoinCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetUsersStateDynamicDelegate__DelegateSignature
	void LIMOnGetUsersStateDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetUsersStateCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetUsersDynamicDelegate__DelegateSignature
	void LIMOnGetUsersDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetUsersCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetUserDynamicDelegate__DelegateSignature
	void LIMOnGetUserDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetUserCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetOssTokenDynamicDelegate__DelegateSignature
	void LIMOnGetOssTokenDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeGetOssTokenCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetMsgsDynamicDelegate__DelegateSignature
	void LIMOnGetMsgsDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetMsgsCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature
	void LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeGetMiscConfigInfoCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetGroupsDynamicDelegate__DelegateSignature
	void LIMOnGetGroupsDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupsGetCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetGroupMembersDynamicDelegate__DelegateSignature
	void LIMOnGetGroupMembersDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupMembersGetCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetGroupMemberDynamicDelegate__DelegateSignature
	void LIMOnGetGroupMemberDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupMemberGetCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetGroupDynamicDelegate__DelegateSignature
	void LIMOnGetGroupDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupGetCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetGroupAttrDynamicDelegate__DelegateSignature
	void LIMOnGetGroupAttrDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupAttrGetCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetGMETokenDynamicDelegate__DelegateSignature
	void LIMOnGetGMETokenDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeGetGMETokenCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetFriendsDynamicDelegate__DelegateSignature
	void LIMOnGetFriendsDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetFriendCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature
	void LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetFriendRequestCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature
	void LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetConvChatLevelConfigCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetConnStateDynamicDelegate__DelegateSignature
	void LIMOnGetConnStateDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeGetConnStateCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetConfigDynamicDelegate__DelegateSignature
	void LIMOnGetConfigDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetConfigCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature
	void LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetCommonMsgsCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetBlockeesDynamicDelegate__DelegateSignature
	void LIMOnGetBlockeesDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGetBlockeesCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature
	void LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupAttrGetAllCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnDestoryGroupDynamicDelegate__DelegateSignature
	void LIMOnDestoryGroupDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupDestoryCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnCreateGroupDynamicDelegate__DelegateSignature
	void LIMOnCreateGroupDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnCreateGroupCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature
	void LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnCreateFriendRequestCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnConvsGetDynamicDelegate__DelegateSignature
	void LIMOnConvsGetDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnConvsGetCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnConvHandleynamicDelegate__DelegateSignature
	void LIMOnConvHandleynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnConvHandleCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnCheckImageDynamicDelegate__DelegateSignature
	void LIMOnCheckImageDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeDataCallBackBase& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature
	void LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeFriendCommonCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnAddToBlockeeDynamicDelegate__DelegateSignature
	void LIMOnAddToBlockeeDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeFriendCommonCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnAddGroupMemberDynamicDelegate__DelegateSignature
	void LIMOnAddGroupMemberDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeOnGroupMemberAddCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature
	void LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FLimNativeFriendCommonCallBack& RetData); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMLogDynamicDelegate__DelegateSignature
	void LIMLogDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FString InData);                     // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.LIMEventDynamicDelegate__DelegateSignature
	void LIMEventDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FString InData);                   // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNative.JoinGroup
	void JoinGroup(FLimNativeLowLevelWrapper& InCtx, FString groupid);                                                       // [0x9a38f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.InitLIM
	FLimNativeLowLevelWrapper InitLIM(FString InServerEnvID, FLimNativeInitConfig InConfig);                                 // [0x9a3630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetUsersState
	void GetUsersState(FLimNativeLowLevelWrapper& InCtx, TArray<FString>& InUserIDs);                                        // [0x9a34e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetUsers
	void GetUsers(FLimNativeLowLevelWrapper& InCtx, FUidList& InUserIDs);                                                    // [0x9a3380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetUser
	void GetUser(FLimNativeLowLevelWrapper& InCtx, FString InUserId);                                                        // [0x9a3260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetResDir
	void GetResDir(FLimNativeLowLevelWrapper& InCtx);                                                                        // [0x9a31b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetOssToken
	void GetOssToken(FLimNativeLowLevelWrapper& InCtx);                                                                      // [0x9a3100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetMiscConfigInfo
	void GetMiscConfigInfo(FLimNativeLowLevelWrapper& InCtx);                                                                // [0x9a3050] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetMessagesByID
	void GetMessagesByID(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, FString InFromMsgID, FString InToMsgID); // [0x9a2e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetLIMVersion
	FString GetLIMVersion();                                                                                                 // [0x9a2ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetLimNativeInstance
	ULimNative* GetLimNativeInstance();                                                                                      // [0x9a2e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetLanguage
	void GetLanguage(FLimNativeLowLevelWrapper& InCtx);                                                                      // [0x9a2d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetGroups
	void GetGroups(FLimNativeLowLevelWrapper& InCtx, FString Tag, FString Size);                                             // [0x9a2b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetGroupMembers
	void GetGroupMembers(FLimNativeLowLevelWrapper& InCtx, FString groupid, FString Tag, FString Size);                      // [0x9a29b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetGroupAttr
	void GetGroupAttr(FLimNativeLowLevelWrapper& InCtx, FString groupid, FString Key);                                       // [0x9a2840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetGroupAllAttr
	void GetGroupAllAttr(FLimNativeLowLevelWrapper& InCtx, FString groupid);                                                 // [0x9a2720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetGroup
	void GetGroup(FLimNativeLowLevelWrapper& InCtx, FString groupid);                                                        // [0x9a2600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetGMEToken
	void GetGMEToken(FLimNativeLowLevelWrapper& InCtx, FString InAppId, FString InUserId, FString InRoomId);                 // [0x9a2440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetFriendsV2
	void GetFriendsV2(FLimNativeLowLevelWrapper& InCtx, bool InNeedPresence);                                                // [0x9a2330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetFriends
	void GetFriends(FLimNativeLowLevelWrapper& InCtx, int32_t InTag, FString InSize, FString InExtra);                       // [0x9a2180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetFriendRequests
	void GetFriendRequests(FLimNativeLowLevelWrapper& InCtx, int32_t InTag, FString InSize, FString InExtra);                // [0x9a1fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetConvChatLevelConfig
	void GetConvChatLevelConfig(FLimNativeLowLevelWrapper& InCtx);                                                           // [0x9a1f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetConnState
	void GetConnState(FLimNativeLowLevelWrapper& InCtx);                                                                     // [0x9a1e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetBlockees
	void GetBlockees(FLimNativeLowLevelWrapper& InCtx, int32_t InTag, FString InSize, FString InExtra);                      // [0x9a1cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetBeforeMessages
	void GetBeforeMessages(FLimNativeLowLevelWrapper& InCtx, FString ConvID, ELimNativeConvType ConvType, int32_t MsgId);    // [0x9a1b20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.GetAfterMessages
	void GetAfterMessages(FLimNativeLowLevelWrapper& InCtx, FString ConvID, ELimNativeConvType ConvType, int32_t MsgId);     // [0x9a1980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.DestoryLimNativeInstance
	void DestoryLimNativeInstance();                                                                                         // [0x9a1960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.DestoryGroup
	void DestoryGroup(FLimNativeLowLevelWrapper& InCtx, FString groupid);                                                    // [0x9a1840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.CreateLIM
	FLimNativeLowLevelWrapper CreateLIM(FString InServerEnvID);                                                              // [0x9a1760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.CreateGroup
	void CreateGroup(FLimNativeLowLevelWrapper& InCtx, FString Name, TArray<FString>& members, FString Extra);               // [0x9a1560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.CreateFriendRequest
	void CreateFriendRequest(FLimNativeLowLevelWrapper& InCtx, FString InUserId, FString InExtra);                           // [0x9a13f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.ConversationsGet
	void ConversationsGet(FLimNativeLowLevelWrapper& InCtx, int32_t Size, FString Extra);                                    // [0x9a1290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.ConversationSetSticky
	void ConversationSetSticky();                                                                                            // [0x9a1270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.ConversationSetRead
	void ConversationSetRead();                                                                                              // [0x9a1270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.ConversationSetMute
	void ConversationSetMute();                                                                                              // [0x9a1270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.ConversationSetHide
	void ConversationSetHide();                                                                                              // [0x9a1270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNative.ConversationDiscard
	void ConversationDiscard(FLimNativeLowLevelWrapper& InCtx, FString ConvID, ELimNativeConvType ConvType);                 // [0x9a1110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.CheckImage
	void CheckImage(FLimNativeLowLevelWrapper& InCtx, FString InUrl);                                                        // [0x9a0ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.CancelFriendRequest
	void CancelFriendRequest(FLimNativeLowLevelWrapper& InCtx, FString InUserId, FString InRequestID, FString InExtra);      // [0x9a0e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.AddToBlockee
	void AddToBlockee(FLimNativeLowLevelWrapper& InCtx, FString InUserId);                                                   // [0x9a0d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.AddGroupMember
	void AddGroupMember(FLimNativeLowLevelWrapper& InCtx, FString groupid, FString memberid);                                // [0x9a0ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNative.AcceptFriendRequest
	void AcceptFriendRequest(FLimNativeLowLevelWrapper& InCtx, FString InRequestID, FString InExtra);                        // [0x9a0a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LimNative.LimNativeChatMsgReader
/// Size: 0x0000 (0x000028 - 0x000028)
class ULimNativeChatMsgReader : public UObject
{ 
public:
};

/// Class /Script/LimNative.LimNativeHelper
/// Size: 0x0000 (0x000028 - 0x000028)
class ULimNativeHelper : public UObject
{ 
public:
};

/// Class /Script/LimNative.LimNativeLowLevel
/// Size: 0x03F0 (0x000028 - 0x000418)
class ULimNativeLowLevel : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnEvent;                                                    // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnLog;                                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnCall;                                                     // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnSetConfig;                                                // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnSetAllConfigs;                                            // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnGetConfig;                                                // 0x0078   (0x0010)  
	FMulticastInlineDelegate                           OnGetAllConfigs;                                            // 0x0088   (0x0010)  
	FMulticastInlineDelegate                           OnLogin;                                                    // 0x0098   (0x0010)  
	FMulticastInlineDelegate                           OnLoginV2;                                                  // 0x00A8   (0x0010)  
	FMulticastInlineDelegate                           OnLogout;                                                   // 0x00B8   (0x0010)  
	FMulticastInlineDelegate                           OnSendMsg;                                                  // 0x00C8   (0x0010)  
	FMulticastInlineDelegate                           OnRevokeMsg;                                                // 0x00D8   (0x0010)  
	FMulticastInlineDelegate                           OnGetMsgs;                                                  // 0x00E8   (0x0010)  
	FMulticastInlineDelegate                           OnGetMsgsV2;                                                // 0x00F8   (0x0010)  
	FMulticastInlineDelegate                           OnSetMsgRead;                                               // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnSetMsgState;                                              // 0x0118   (0x0010)  
	FMulticastInlineDelegate                           OnCreateConv;                                               // 0x0128   (0x0010)  
	FMulticastInlineDelegate                           OnDestroyConv;                                              // 0x0138   (0x0010)  
	FMulticastInlineDelegate                           OnClearConv;                                                // 0x0148   (0x0010)  
	FMulticastInlineDelegate                           OnGetConvs;                                                 // 0x0158   (0x0010)  
	FMulticastInlineDelegate                           OnGetConv;                                                  // 0x0168   (0x0010)  
	FMulticastInlineDelegate                           OnSetConvRead;                                              // 0x0178   (0x0010)  
	FMulticastInlineDelegate                           OnSetConvSticky;                                            // 0x0188   (0x0010)  
	FMulticastInlineDelegate                           OnSetConvMute;                                              // 0x0198   (0x0010)  
	FMulticastInlineDelegate                           OnGetConvAttr;                                              // 0x01A8   (0x0010)  
	FMulticastInlineDelegate                           OnGetConvAllAttrs;                                          // 0x01B8   (0x0010)  
	FMulticastInlineDelegate                           OnSetConvAttr;                                              // 0x01C8   (0x0010)  
	FMulticastInlineDelegate                           OnCreateGroup;                                              // 0x01D8   (0x0010)  
	FMulticastInlineDelegate                           OnJoinGroup;                                                // 0x01E8   (0x0010)  
	FMulticastInlineDelegate                           OnQuitGroup;                                                // 0x01F8   (0x0010)  
	FMulticastInlineDelegate                           OnDestroyGroup;                                             // 0x0208   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroup;                                                 // 0x0218   (0x0010)  
	FMulticastInlineDelegate                           OnSetGroup;                                                 // 0x0228   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroups;                                                // 0x0238   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroupAttr;                                             // 0x0248   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroupAllAttrs;                                         // 0x0258   (0x0010)  
	FMulticastInlineDelegate                           OnSetGroupAttr;                                             // 0x0268   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroupMembers;                                          // 0x0278   (0x0010)  
	FMulticastInlineDelegate                           OnGetGroupMember;                                           // 0x0288   (0x0010)  
	FMulticastInlineDelegate                           OnAddGroupMember;                                           // 0x0298   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveGroupMember;                                        // 0x02A8   (0x0010)  
	FMulticastInlineDelegate                           OnGetFriends;                                               // 0x02B8   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveFriend;                                             // 0x02C8   (0x0010)  
	FMulticastInlineDelegate                           OnGetFriendRequests;                                        // 0x02D8   (0x0010)  
	FMulticastInlineDelegate                           OnCreateFriendRequest;                                      // 0x02E8   (0x0010)  
	FMulticastInlineDelegate                           OnAcceptFriendRequest;                                      // 0x02F8   (0x0010)  
	FMulticastInlineDelegate                           OnRefuseFriendRequest;                                      // 0x0308   (0x0010)  
	FMulticastInlineDelegate                           OnCancelFriendRequest;                                      // 0x0318   (0x0010)  
	FMulticastInlineDelegate                           OnGetBlockees;                                              // 0x0328   (0x0010)  
	FMulticastInlineDelegate                           OnAddToBlockee;                                             // 0x0338   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveFromBlockee;                                        // 0x0348   (0x0010)  
	FMulticastInlineDelegate                           OnBlockeeExists;                                            // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           OnGetUser;                                                  // 0x0368   (0x0010)  
	FMulticastInlineDelegate                           OnGetUsers;                                                 // 0x0378   (0x0010)  
	FMulticastInlineDelegate                           OnGetUsersState;                                            // 0x0388   (0x0010)  
	FMulticastInlineDelegate                           OnGetOssToken;                                              // 0x0398   (0x0010)  
	FMulticastInlineDelegate                           OnGetGMEToken;                                              // 0x03A8   (0x0010)  
	FMulticastInlineDelegate                           OnReportMsg;                                                // 0x03B8   (0x0010)  
	FMulticastInlineDelegate                           OnTranslateText;                                            // 0x03C8   (0x0010)  
	FMulticastInlineDelegate                           OnCheckImage;                                               // 0x03D8   (0x0010)  
	FMulticastInlineDelegate                           OnGetMiscConfigInfo;                                        // 0x03E8   (0x0010)  
	FMulticastInlineDelegate                           OnGetConvChatLevelConfig;                                   // 0x03F8   (0x0010)  
	FMulticastInlineDelegate                           OnGetConnState;                                             // 0x0408   (0x0010)  


	/// Functions
	// Function /Script/LimNative.LimNativeLowLevel.TranslateText
	void TranslateText(FLimNativeLowLevelWrapper& InCtx, FString InText, ELimNativeSupportedLanguage InLang, FString ExtraInfo); // [0x9bdcd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetMsgState
	void SetMsgState(FLimNativeLowLevelWrapper& InCtx, FString InMsgParams);                                                 // [0x9bdbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetMsgRead
	void SetMsgRead(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, FString InMsgID, FString InExtra); // [0x9bd9a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetLogHandler
	void SetLogHandler(FLimNativeLowLevelWrapper& InCtx);                                                                    // [0x9bd8f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetGroupAttr
	void SetGroupAttr(FLimNativeLowLevelWrapper& InCtx, FString InGroupID, FString InKey, FString InValue);                  // [0x9bd730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetGroup
	void SetGroup(FLimNativeLowLevelWrapper& InCtx, FString InGroupID, FString InGroupName, FString InExtra);                // [0x9bd570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetEventHandler
	void SetEventHandler(FLimNativeLowLevelWrapper& InCtx);                                                                  // [0x9bd4c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetConvSticky
	void SetConvSticky(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, bool bSticky);     // [0x9bd320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetConvRead
	void SetConvRead(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, FString InMsgID, FString InExtra); // [0x9bd110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetConvMute
	void SetConvMute(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, bool bMute);         // [0x9bcf70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetConvAttr
	void SetConvAttr(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, FString InKey, FString InValue); // [0x9bcd60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SetAllConfigs
	void SetAllConfigs(FLimNativeLowLevelWrapper& InCtx, FString InJsonString);                                              // [0x9bcc40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.SendMsg
	void SendMsg(FLimNativeLowLevelWrapper& InCtx, FString InMsg);                                                           // [0x9bcb20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.RevokeMsg
	void RevokeMsg(FLimNativeLowLevelWrapper& InCtx, FString InMsg);                                                         // [0x9bca00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.Resume
	void Resume(FLimNativeLowLevelWrapper& InCtx);                                                                           // [0x9a2d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.ReportMsg
	void ReportMsg(FLimNativeLowLevelWrapper& InCtx, FString InMsg);                                                         // [0x9bc8e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.RemoveGroupMember
	void RemoveGroupMember(FLimNativeLowLevelWrapper& InCtx, FString InGroupID, FString InMemberID);                         // [0x9bc770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.RemoveFromBlockee
	void RemoveFromBlockee(FLimNativeLowLevelWrapper& InCtx, FString InUserId);                                              // [0x9bc650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.RemoveFriend
	void RemoveFriend(FLimNativeLowLevelWrapper& InCtx, FString InUserId, FString InExtra);                                  // [0x9bc4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.RefuseFriendRequest
	void RefuseFriendRequest(FLimNativeLowLevelWrapper& InCtx, FString InRequestID, FString InExtra);                        // [0x9bc370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.QuitGroup
	void QuitGroup(FLimNativeLowLevelWrapper& InCtx, FString InGroupID);                                                     // [0x9bc250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.Pause
	void Pause(FLimNativeLowLevelWrapper& InCtx);                                                                            // [0x9a2d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.Logout
	void Logout(FLimNativeLowLevelWrapper& InCtx);                                                                           // [0x9bc0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.LoginV2
	void LoginV2(FLimNativeLowLevelWrapper& InCtx, FString InEnv, FString InRoleID);                                         // [0x9bbf40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.Login
	void Login(FLimNativeLowLevelWrapper& InCtx, FString InAppId, FString InAppUserID, FString InToken, FString InRoleID, FString InExtra); // [0x9bbcc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.LIMResultDynamicDelegate__DelegateSignature
	void LIMResultDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FString InData);                  // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNativeLowLevel.LIMLogDynamicDelegate__DelegateSignature
	void LIMLogDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FString InData);                     // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNativeLowLevel.LIMEventDynamicDelegate__DelegateSignature
	void LIMEventDynamicDelegate__DelegateSignature(FLimNativeLowLevelWrapper& InWrapper, FString InData);                   // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LimNative.LimNativeLowLevel.JoinGroup
	void JoinGroup(FLimNativeLowLevelWrapper& InCtx, FString InGroupID);                                                     // [0x9bbba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetUsersState
	void GetUsersState(FLimNativeLowLevelWrapper& InCtx, TArray<FString>& InUserIDs);                                        // [0x9bba50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetUsers
	void GetUsers(FLimNativeLowLevelWrapper& InCtx, FString InUserIDs);                                                      // [0x9bb930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetUser
	void GetUser(FLimNativeLowLevelWrapper& InCtx, FString InUserId);                                                        // [0x9bb810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetOssToken
	void GetOssToken(FLimNativeLowLevelWrapper& InCtx);                                                                      // [0x9bb5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetMsgsV2
	void GetMsgsV2(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, FString InFromMsgID, FString InToMsgID); // [0x9bb3d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetMsgs
	void GetMsgs(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, ELimNativeMsgDirType InDir, FString InMsgID, FString InExtra); // [0x9bb190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetMiscConfigInfo
	void GetMiscConfigInfo(FLimNativeLowLevelWrapper& InCtx);                                                                // [0x9bb0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetLIMVersion
	FString GetLIMVersion();                                                                                                 // [0x9a2ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetInstance
	ULimNativeLowLevel* GetInstance();                                                                                       // [0x9bb0b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetGroups
	void GetGroups(FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, FString InExtra);                        // [0x9baf10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetGroupMembers
	void GetGroupMembers(FLimNativeLowLevelWrapper& InCtx, FString InGroupID, int32_t InTag, int32_t InSize, FString InExtra); // [0x9bad30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetGroupMember
	void GetGroupMember(FLimNativeLowLevelWrapper& InCtx, FString InGroupID, FString InMemberID);                            // [0x9babc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetGroupAttr
	void GetGroupAttr(FLimNativeLowLevelWrapper& InCtx, FString InGroupID, FString InKey);                                   // [0x9baa50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetGroupAllAttrs
	void GetGroupAllAttrs(FLimNativeLowLevelWrapper& InCtx, FString InGroupID);                                              // [0x9ba930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetGroup
	void GetGroup(FLimNativeLowLevelWrapper& InCtx, FString InGroupID);                                                      // [0x9ba810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetGMEToken
	void GetGMEToken(FLimNativeLowLevelWrapper& InCtx, FString InAppId, FString InUserId, FString InRoomId);                 // [0x9ba5d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetFriends
	void GetFriends(FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, FString InExtra);                       // [0x9ba430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetFriendRequests
	void GetFriendRequests(FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, FString InExtra);                // [0x9ba290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetConvs
	void GetConvs(FLimNativeLowLevelWrapper& InCtx, int32_t InSize, FString InExtra);                                        // [0x9b9f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetConvChatLevelConfig
	void GetConvChatLevelConfig(FLimNativeLowLevelWrapper& InCtx);                                                           // [0x9b9ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetConvAttr
	void GetConvAttr(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, FString InKey);      // [0x9b9d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetConvAllAttrs
	void GetConvAllAttrs(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType);                 // [0x9b9ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetConv
	void GetConv(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType);                         // [0x9b9a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetConnState
	void GetConnState(FLimNativeLowLevelWrapper& InCtx);                                                                     // [0x9b9990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetBlockees
	void GetBlockees(FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, FString InExtra);                      // [0x9b97f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.GetAllConfigs
	void GetAllConfigs(FLimNativeLowLevelWrapper& InCtx);                                                                    // [0x9b9740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.DestroyGroup
	void DestroyGroup(FLimNativeLowLevelWrapper& InCtx, FString InGroupID);                                                  // [0x9b9180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.DestroyConv
	void DestroyConv(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType);                     // [0x9b9020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x9b9000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.CreateLIM
	FLimNativeLowLevelWrapper CreateLIM(FString InServerEnvID);                                                              // [0x9b8ee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.CreateGroup
	void CreateGroup(FLimNativeLowLevelWrapper& InCtx, TArray<FString> InMembers, FString InGroupName, FString InExtra);     // [0x9b8c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.CreateFriendRequest
	void CreateFriendRequest(FLimNativeLowLevelWrapper& InCtx, FString InUserId, FString InExtra);                           // [0x9b8ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.CreateConv
	void CreateConv(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType, FString InExtra);     // [0x9b8910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.ClearConv
	void ClearConv(FLimNativeLowLevelWrapper& InCtx, FString InConvID, ELimNativeConvType InConvType);                       // [0x9b87b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.CheckImage
	void CheckImage(FLimNativeLowLevelWrapper& InCtx, FString InUrl);                                                        // [0x9b8690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.CancelFriendRequest
	void CancelFriendRequest(FLimNativeLowLevelWrapper& InCtx, FString InUserId, FString InRequestID, FString InExtra);      // [0x9b84d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.Call
	void Call(FLimNativeLowLevelWrapper& InCtx, FString InJsonString);                                                       // [0x9b83b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.BlockeeExists
	void BlockeeExists(FLimNativeLowLevelWrapper& InCtx, FString InUserId);                                                  // [0x9b8290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.AddToBlockee
	void AddToBlockee(FLimNativeLowLevelWrapper& InCtx, FString InUserId);                                                   // [0x9b8170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.AddGroupMember
	void AddGroupMember(FLimNativeLowLevelWrapper& InCtx, FString InGroupID, FString InMemberID);                            // [0x9b8000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LimNative.LimNativeLowLevel.AcceptFriendRequest
	void AcceptFriendRequest(FLimNativeLowLevelWrapper& InCtx, FString InRequestID, FString InExtra);                        // [0x9b7e90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LimNative.LimNativeLowLevelWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLimNativeLowLevelWrapper
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/LimNative.LimNativeDataObjectBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLimNativeDataObjectBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/LimNative.UidList
/// Size: 0x0010 (0x000008 - 0x000018)
struct FUidList : FLimNativeDataObjectBase
{ 
	TArray<FString>                                    Uids;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeInitConfig
/// Size: 0x0058 (0x000008 - 0x000060)
struct FLimNativeInitConfig : FLimNativeDataObjectBase
{ 
	ELimNativeSupportedLanguage                        Lang;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Mode;                                                       // 0x000C   (0x0004)  
	FString                                            EnvId;                                                      // 0x0010   (0x0010)  
	FString                                            AppId;                                                      // 0x0020   (0x0010)  
	FString                                            SDKRegion;                                                  // 0x0030   (0x0010)  
	int32_t                                            GameID;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            SlsSvr;                                                     // 0x0048   (0x0010)  
	int32_t                                            FarlightDomain;                                             // 0x0058   (0x0004)  
	int32_t                                            Timeout;                                                    // 0x005C   (0x0004)  
};

/// Struct /Script/LimNative.LimNativeDataCallBackBase
/// Size: 0x0028 (0x000008 - 0x000030)
struct FLimNativeDataCallBackBase : FLimNativeDataObjectBase
{ 
	FString                                            FuncName;                                                   // 0x0008   (0x0010)  
	ELimNativeErrorType                                ErrorCode;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            Code;                                                       // 0x001C   (0x0004)  
	FString                                            Message;                                                    // 0x0020   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeFriendCommonCallBack
/// Size: 0x0028 (0x000030 - 0x000058)
struct FLimNativeFriendCommonCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeDataCallBackDataBase                     ResultData;                                                 // 0x0030   (0x0028)  
};

/// Struct /Script/LimNative.LimNativeDataCallBackDataBase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FLimNativeDataCallBackDataBase : FLimNativeDataObjectBase
{ 
	FLimNativeResult                                   ResultData;                                                 // 0x0008   (0x0020)  
};

/// Struct /Script/LimNative.LimNativeResult
/// Size: 0x0018 (0x000008 - 0x000020)
struct FLimNativeResult : FLimNativeDataObjectBase
{ 
	int32_t                                            ErrCode;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ErrMsg;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnGroupMemberAddCallBack
/// Size: 0x0068 (0x000030 - 0x000098)
struct FLimNativeOnGroupMemberAddCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeIMGroup                                  Data;                                                       // 0x0030   (0x0068)  
};

/// Struct /Script/LimNative.LimNativeIMGroupBrief
/// Size: 0x0030 (0x000008 - 0x000038)
struct FLimNativeIMGroupBrief : FLimNativeDataObjectBase
{ 
	FString                                            ChannelId;                                                  // 0x0008   (0x0010)  
	FString                                            Name;                                                       // 0x0018   (0x0010)  
	FString                                            Extra;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMGroup
/// Size: 0x0030 (0x000038 - 0x000068)
struct FLimNativeIMGroup : FLimNativeIMGroupBrief
{ 
	FString                                            GameID;                                                     // 0x0038   (0x0010)  
	FString                                            Uid;                                                        // 0x0048   (0x0010)  
	TArray<FLimNativeIMChannelMember>                  members;                                                    // 0x0058   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMChannelMember
/// Size: 0x0030 (0x000008 - 0x000038)
struct FLimNativeIMChannelMember : FLimNativeDataObjectBase
{ 
	FString                                            ChannelId;                                                  // 0x0008   (0x0010)  
	FString                                            Uid;                                                        // 0x0018   (0x0010)  
	FString                                            Role;                                                       // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnConvHandleCallBack
/// Size: 0x0038 (0x000030 - 0x000068)
struct FLimNativeOnConvHandleCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeConvHandleCallBackData                   Data;                                                       // 0x0030   (0x0038)  
};

/// Struct /Script/LimNative.LimNativeConvHandleCallBackData
/// Size: 0x0030 (0x000008 - 0x000038)
struct FLimNativeConvHandleCallBackData : FLimNativeDataObjectBase
{ 
	FLimNativeResult                                   Result;                                                     // 0x0008   (0x0020)  
	FString                                            Msg;                                                        // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnConvsGetCallBack
/// Size: 0x0018 (0x000030 - 0x000048)
struct FLimNativeOnConvsGetCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeOnConvsGetCallBackData                   Data;                                                       // 0x0030   (0x0018)  
};

/// Struct /Script/LimNative.LimNativeOnConvsGetCallBackData
/// Size: 0x0010 (0x000008 - 0x000018)
struct FLimNativeOnConvsGetCallBackData : FLimNativeDataObjectBase
{ 
	TArray<FLimNativeConversationData>                 ConvList;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeConversationData
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FLimNativeConversationData : FLimNativeDataObjectBase
{ 
	FString                                            ConvID;                                                     // 0x0008   (0x0010)  
	ELimNativeConvType                                 ConvType;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            SubType;                                                    // 0x001C   (0x0004)  
	FString                                            Name;                                                       // 0x0020   (0x0010)  
	FString                                            Avatar;                                                     // 0x0030   (0x0010)  
	int32_t                                            UnreadCount;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            LastMsgId;                                                  // 0x0048   (0x0010)  
	ELimNativeMsgContentType                           LastMsgType;                                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FString                                            LastMsgTs;                                                  // 0x0060   (0x0010)  
	FString                                            LastReadMsgId;                                              // 0x0070   (0x0010)  
	FString                                            LastMsgContent;                                             // 0x0080   (0x0010)  
	FString                                            BaseMsgId;                                                  // 0x0090   (0x0010)  
	FString                                            Flags;                                                      // 0x00A0   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnCreateFriendRequestCallBack
/// Size: 0x0038 (0x000030 - 0x000068)
struct FLimNativeOnCreateFriendRequestCallBack : FLimNativeDataCallBackBase
{ 
	FCreateFriendRequestData                           FriendRequestCallBackData;                                  // 0x0030   (0x0038)  
};

/// Struct /Script/LimNative.CreateFriendRequestData
/// Size: 0x0010 (0x000028 - 0x000038)
struct FCreateFriendRequestData : FLimNativeDataCallBackDataBase
{ 
	FString                                            RequestID;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnCreateGroupCallBack
/// Size: 0x0068 (0x000030 - 0x000098)
struct FLimNativeOnCreateGroupCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeIMGroup                                  Data;                                                       // 0x0030   (0x0068)  
};

/// Struct /Script/LimNative.LimNativeOnGroupDestoryCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnGroupDestoryCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnGroupAttrGetAllCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnGroupAttrGetAllCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnGetBlockeesCallBack
/// Size: 0x0038 (0x000030 - 0x000068)
struct FLimNativeOnGetBlockeesCallBack : FLimNativeDataCallBackBase
{ 
	FGetBlockeesData                                   Data;                                                       // 0x0030   (0x0038)  
};

/// Struct /Script/LimNative.GetBlockeesData
/// Size: 0x0010 (0x000028 - 0x000038)
struct FGetBlockeesData : FLimNativeDataCallBackDataBase
{ 
	TArray<FLimUserInfo>                               UserInfoList;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimUserInfo
/// Size: 0x0030 (0x000008 - 0x000038)
struct FLimUserInfo : FLimNativeDataObjectBase
{ 
	FString                                            Uid;                                                        // 0x0008   (0x0010)  
	FString                                            NickName;                                                   // 0x0018   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnGetCommonMsgsCallBack
/// Size: 0x0038 (0x000030 - 0x000068)
struct FLimNativeOnGetCommonMsgsCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeGetCommonCallBackData                    Data;                                                       // 0x0030   (0x0038)  
};

/// Struct /Script/LimNative.LimNativeGetCommonCallBackData
/// Size: 0x0030 (0x000008 - 0x000038)
struct FLimNativeGetCommonCallBackData : FLimNativeDataObjectBase
{ 
	TArray<FLimNativeCommonMsg>                        CommonMessages;                                             // 0x0008   (0x0010)  
	FLimNativeResult                                   Result;                                                     // 0x0018   (0x0020)  
};

/// Struct /Script/LimNative.LimNativeCommonMsg
/// Size: 0x0058 (0x000008 - 0x000060)
struct FLimNativeCommonMsg : FLimNativeDataObjectBase
{ 
	FString                                            ServerMsgId;                                                // 0x0008   (0x0010)  
	FString                                            TargetId;                                                   // 0x0018   (0x0010)  
	int32_t                                            TargetType;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FLimNativeCommonMsgData                            Data;                                                       // 0x0030   (0x0020)  
	FString                                            Timestamp;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeCommonMsgData
/// Size: 0x0018 (0x000008 - 0x000020)
struct FLimNativeCommonMsgData : FLimNativeDataObjectBase
{ 
	int32_t                                            Type;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x000C   (0x0014)  MISSED
};

/// Struct /Script/LimNative.LimNativeOnGetConfigCallBack
/// Size: 0x0020 (0x000030 - 0x000050)
struct FLimNativeOnGetConfigCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeIMConfig                                 Data;                                                       // 0x0030   (0x0020)  
};

/// Struct /Script/LimNative.LimNativeIMConfig
/// Size: 0x0018 (0x000008 - 0x000020)
struct FLimNativeIMConfig : FLimNativeDataObjectBase
{ 
	ELimNativeSupportedLanguage                        Lang;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            ResDir;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeGetConnStateCallBack
/// Size: 0x0010 (0x000030 - 0x000040)
struct FLimNativeGetConnStateCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativConnStateData                             Data;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/LimNative.LimNativConnStateData
/// Size: 0x0008 (0x000008 - 0x000010)
struct FLimNativConnStateData : FLimNativeDataObjectBase
{ 
	int32_t                                            Connect_State;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/LimNative.LimNativeOnGetConvChatLevelConfigCallBack
/// Size: 0x0010 (0x000030 - 0x000040)
struct FLimNativeOnGetConvChatLevelConfigCallBack : FLimNativeDataCallBackBase
{ 
	TArray<FLimNativeConvChatLevelConfigData>          DataList;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeConvChatLevelConfigData
/// Size: 0x0020 (0x000028 - 0x000048)
struct FLimNativeConvChatLevelConfigData : FLimNativeDataCallBackDataBase
{ 
	ELimNativeConvType                                 ConvType;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            Level;                                                      // 0x002C   (0x0004)  
	int32_t                                            Interval;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FLimNativeConvNumLimitData>                 NumLimits;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeConvNumLimitData
/// Size: 0x0008 (0x000008 - 0x000010)
struct FLimNativeConvNumLimitData : FLimNativeDataObjectBase
{ 
	int32_t                                            Duration;                                                   // 0x0008   (0x0004)  
	int32_t                                            Number;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/LimNative.LimNativeOnGetFriendRequestCallBack
/// Size: 0x0048 (0x000030 - 0x000078)
struct FLimNativeOnGetFriendRequestCallBack : FLimNativeDataCallBackBase
{ 
	FGetFriendRequestData                              GetFriendRequestData;                                       // 0x0030   (0x0048)  
};

/// Struct /Script/LimNative.GetFriendRequestData
/// Size: 0x0020 (0x000028 - 0x000048)
struct FGetFriendRequestData : FLimNativeDataCallBackDataBase
{ 
	TArray<FSendFriendRequestData>                     SendRequests;                                               // 0x0028   (0x0010)  
	TArray<FReceivedFriendRequestData>                 ReceiveRequests;                                            // 0x0038   (0x0010)  
};

/// Struct /Script/LimNative.ReceivedFriendRequestData
/// Size: 0x0058 (0x000008 - 0x000060)
struct FReceivedFriendRequestData : FLimNativeDataObjectBase
{ 
	FString                                            RequestID;                                                  // 0x0008   (0x0010)  
	FString                                            TargetId;                                                   // 0x0018   (0x0010)  
	FString                                            NickName;                                                   // 0x0028   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0038   (0x0010)  
	FString                                            Timestamp;                                                  // 0x0048   (0x0010)  
	bool                                               IsOffLineRequest;                                           // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Struct /Script/LimNative.SendFriendRequestData
/// Size: 0x0050 (0x000008 - 0x000058)
struct FSendFriendRequestData : FLimNativeDataObjectBase
{ 
	FString                                            RequestID;                                                  // 0x0008   (0x0010)  
	FString                                            TargetId;                                                   // 0x0018   (0x0010)  
	FString                                            NickName;                                                   // 0x0028   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0038   (0x0010)  
	FString                                            Timestamp;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnGetFriendCallBack
/// Size: 0x0038 (0x000030 - 0x000068)
struct FLimNativeOnGetFriendCallBack : FLimNativeDataCallBackBase
{ 
	FFriendInfoList                                    FriendData;                                                 // 0x0030   (0x0038)  
};

/// Struct /Script/LimNative.FriendInfoList
/// Size: 0x0010 (0x000028 - 0x000038)
struct FFriendInfoList : FLimNativeDataCallBackDataBase
{ 
	TArray<FFriendInfo>                                FriendList;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.FriendInfo
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FFriendInfo : FLimNativeDataObjectBase
{ 
	FString                                            Uid;                                                        // 0x0008   (0x0010)  
	FString                                            NickName;                                                   // 0x0018   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0028   (0x0010)  
	ELimNativeUserSexType                              Sex;                                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FGuild                                             Guild;                                                      // 0x0040   (0x0048)  
	FKingdom                                           Kingdom;                                                    // 0x0088   (0x0048)  
	TArray<FSubTitleItem>                              SubTitleList;                                               // 0x00D0   (0x0010)  
	FString                                            BadgeUrl;                                                   // 0x00E0   (0x0010)  
	FString                                            AvatarFrameUrl;                                             // 0x00F0   (0x0010)  
	FBubbleConfigs                                     BubbleConfigs;                                              // 0x0100   (0x00A8)  
	int32_t                                            VipLevel;                                                   // 0x01A8   (0x0004)  
	bool                                               IsShowVip;                                                  // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01AD   (0x0003)  MISSED
	int32_t                                            ServerTime;                                                 // 0x01B0   (0x0004)  
	int32_t                                            LastFetchTime;                                              // 0x01B4   (0x0004)  
	FPresence                                          Presence;                                                   // 0x01B8   (0x0018)  
};

/// Struct /Script/LimNative.Presence
/// Size: 0x0010 (0x000008 - 0x000018)
struct FPresence : FLimNativeDataObjectBase
{ 
	bool                                               IsOnline;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            TeamID;                                                     // 0x000C   (0x0004)  
	int32_t                                            TeamStatus;                                                 // 0x0010   (0x0004)  
	bool                                               IsInMyTeam;                                                 // 0x0014   (0x0001)  
	ELimNativeFriendStateType                          FriendState;                                                // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/LimNative.BubbleConfigs
/// Size: 0x00A0 (0x000008 - 0x0000A8)
struct FBubbleConfigs : FLimNativeDataObjectBase
{ 
	FBubbleConfig                                      LeftNormal;                                                 // 0x0008   (0x0028)  
	FBubbleConfig                                      LeftPressed;                                                // 0x0030   (0x0028)  
	FBubbleConfig                                      RightNormal;                                                // 0x0058   (0x0028)  
	FBubbleConfig                                      RightPressed;                                               // 0x0080   (0x0028)  
};

/// Struct /Script/LimNative.BubbleConfig
/// Size: 0x0020 (0x000008 - 0x000028)
struct FBubbleConfig : FLimNativeDataObjectBase
{ 
	FString                                            URL;                                                        // 0x0008   (0x0010)  
	float                                              Top;                                                        // 0x0018   (0x0004)  
	float                                              Left;                                                       // 0x001C   (0x0004)  
	float                                              Bottom;                                                     // 0x0020   (0x0004)  
	float                                              Right;                                                      // 0x0024   (0x0004)  
};

/// Struct /Script/LimNative.SubTitleItem
/// Size: 0x0030 (0x000008 - 0x000038)
struct FSubTitleItem : FLimNativeDataObjectBase
{ 
	FString                                            Key;                                                        // 0x0008   (0x0010)  
	FString                                            Content;                                                    // 0x0018   (0x0010)  
	FString                                            BGUrl;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.Kingdom
/// Size: 0x0040 (0x000008 - 0x000048)
struct FKingdom : FLimNativeDataObjectBase
{ 
	FString                                            StoryId;                                                    // 0x0008   (0x0010)  
	FString                                            KingdomId;                                                  // 0x0018   (0x0010)  
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/LimNative.Guild
/// Size: 0x0040 (0x000008 - 0x000048)
struct FGuild : FLimNativeDataObjectBase
{ 
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FString                                            Name;                                                       // 0x0018   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0028   (0x0010)  
	FString                                            AbbrName;                                                   // 0x0038   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeGetGMETokenCallBack
/// Size: 0x0038 (0x000030 - 0x000068)
struct FLimNativeGetGMETokenCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeGetGMETokenData                          Data;                                                       // 0x0030   (0x0038)  
};

/// Struct /Script/LimNative.LimNativeGetGMETokenData
/// Size: 0x0010 (0x000028 - 0x000038)
struct FLimNativeGetGMETokenData : FLimNativeDataCallBackDataBase
{ 
	TArray<char>                                       AuthBuffer;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnGroupAttrGetCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnGroupAttrGetCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnGroupGetCallBack
/// Size: 0x0068 (0x000030 - 0x000098)
struct FLimNativeOnGroupGetCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeIMGroup                                  Data;                                                       // 0x0030   (0x0068)  
};

/// Struct /Script/LimNative.LimNativeOnGroupMemberGetCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnGroupMemberGetCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnGroupMembersGetCallBack
/// Size: 0x0068 (0x000030 - 0x000098)
struct FLimNativeOnGroupMembersGetCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeIMGroup                                  Data;                                                       // 0x0030   (0x0068)  
};

/// Struct /Script/LimNative.LimNativeOnGroupsGetCallBack
/// Size: 0x0020 (0x000030 - 0x000050)
struct FLimNativeOnGroupsGetCallBack : FLimNativeDataCallBackBase
{ 
	FString                                            GameID;                                                     // 0x0030   (0x0010)  
	TArray<FLimNativeIMGroupBrief>                     Channels;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeGetMiscConfigInfoCallBack
/// Size: 0x0040 (0x000030 - 0x000070)
struct FLimNativeGetMiscConfigInfoCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeGetConfigInfoData                        Data;                                                       // 0x0030   (0x0040)  
};

/// Struct /Script/LimNative.LimNativeGetConfigInfoData
/// Size: 0x0018 (0x000028 - 0x000040)
struct FLimNativeGetConfigInfoData : FLimNativeDataCallBackDataBase
{ 
	FLimNativConfigInfoData                            Data;                                                       // 0x0028   (0x0010)  
	int32_t                                            ResultCode;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/LimNative.LimNativConfigInfoData
/// Size: 0x0008 (0x000008 - 0x000010)
struct FLimNativConfigInfoData : FLimNativeDataObjectBase
{ 
	int32_t                                            Interval;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/LimNative.LimNativeOnGetMsgsCallBack
/// Size: 0x0018 (0x000030 - 0x000048)
struct FLimNativeOnGetMsgsCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeMsgConvData                              Data;                                                       // 0x0030   (0x0018)  
};

/// Struct /Script/LimNative.LimNativeMsgConvData
/// Size: 0x0010 (0x000008 - 0x000018)
struct FLimNativeMsgConvData : FLimNativeDataObjectBase
{ 
	TArray<FLimNativeMsgConvListData>                  MsgConvList;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeMsgConvListData
/// Size: 0x0028 (0x000008 - 0x000030)
struct FLimNativeMsgConvListData : FLimNativeDataObjectBase
{ 
	FString                                            ConvID;                                                     // 0x0008   (0x0010)  
	ELimNativeConvType                                 ConvType;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FLimNativeMsgListData>                      MsgList;                                                    // 0x0020   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnChatMsgCallBackData
/// Size: 0x0088 (0x000008 - 0x000090)
struct FLimNativeOnChatMsgCallBackData : FLimNativeDataObjectBase
{ 
	FString                                            MsgId;                                                      // 0x0008   (0x0010)  
	ELimNativeMsgState                                 State;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FLimNativeIMChatMessage                            Msg;                                                        // 0x0020   (0x0070)  
};

/// Struct /Script/LimNative.LimNativeIMChatMessage
/// Size: 0x0068 (0x000008 - 0x000070)
struct FLimNativeIMChatMessage : FLimNativeDataObjectBase
{ 
	FLimNativeIMChatMessageInfo                        BaseInfo;                                                   // 0x0008   (0x0050)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0058   (0x0010)  MISSED
	ELimNativeMsgContentType                           MsgType;                                                    // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/LimNative.LimNativeIMChatMessageInfo
/// Size: 0x0048 (0x000008 - 0x000050)
struct FLimNativeIMChatMessageInfo : FLimNativeDataObjectBase
{ 
	FString                                            ConvID;                                                     // 0x0008   (0x0010)  
	ELimNativeConvType                                 ConvType;                                                   // 0x0018   (0x0001)  
	ELimNativeMsgContentType                           MsgType;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	FString                                            Ext;                                                        // 0x0020   (0x0010)  
	FString                                            Nonce;                                                      // 0x0030   (0x0010)  
	FString                                            Timestamp;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeMsgListData
/// Size: 0x0018 (0x000090 - 0x0000A8)
struct FLimNativeMsgListData : FLimNativeOnChatMsgCallBackData
{ 
	FString                                            SenderId;                                                   // 0x0090   (0x0010)  
	bool                                               IsISent;                                                    // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Struct /Script/LimNative.LimNativeGetOssTokenCallBack
/// Size: 0x00A0 (0x000030 - 0x0000D0)
struct FLimNativeGetOssTokenCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeGetOssTokenData                          Data;                                                       // 0x0030   (0x00A0)  
};

/// Struct /Script/LimNative.LimNativeGetOssTokenData
/// Size: 0x0078 (0x000028 - 0x0000A0)
struct FLimNativeGetOssTokenData : FLimNativeDataCallBackDataBase
{ 
	FLimNativeOssTokenData                             Data;                                                       // 0x0028   (0x0070)  
	int32_t                                            ResultCode;                                                 // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/LimNative.LimNativeOssTokenData
/// Size: 0x0068 (0x000008 - 0x000070)
struct FLimNativeOssTokenData : FLimNativeDataObjectBase
{ 
	FString                                            AssessKeyID;                                                // 0x0008   (0x0010)  
	FString                                            AccessKeySecret;                                            // 0x0018   (0x0010)  
	int32_t                                            ExpirationUtc;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            SecurityToken;                                              // 0x0030   (0x0010)  
	FString                                            Bucket;                                                     // 0x0040   (0x0010)  
	FString                                            EndPoint;                                                   // 0x0050   (0x0010)  
	FString                                            FilePath;                                                   // 0x0060   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnGetUserCallBack
/// Size: 0x0138 (0x000030 - 0x000168)
struct FLimNativeOnGetUserCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeGetUserData                              Data;                                                       // 0x0030   (0x0138)  
};

/// Struct /Script/LimNative.LimNativeGetUserData
/// Size: 0x0110 (0x000028 - 0x000138)
struct FLimNativeGetUserData : FLimNativeDataCallBackDataBase
{ 
	FString                                            AvatarFrameUrl;                                             // 0x0028   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0038   (0x0010)  
	int32_t                                            CreateTime;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FGuild                                             Guild;                                                      // 0x0050   (0x0048)  
	FKingdom                                           Kingdom;                                                    // 0x0098   (0x0048)  
	int32_t                                            LastFetchTime;                                              // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FString                                            NickName;                                                   // 0x00E8   (0x0010)  
	int32_t                                            ServerTime;                                                 // 0x00F8   (0x0004)  
	bool                                               IsShowVip;                                                  // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	TArray<FSubTitleItem>                              SubTitleList;                                               // 0x0100   (0x0010)  
	FString                                            Uid;                                                        // 0x0110   (0x0010)  
	int32_t                                            VipLevel;                                                   // 0x0120   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FString                                            GameExtra;                                                  // 0x0128   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnGetUsersCallBack
/// Size: 0x0038 (0x000030 - 0x000068)
struct FLimNativeOnGetUsersCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeGetUsersData                             Data;                                                       // 0x0030   (0x0038)  
};

/// Struct /Script/LimNative.LimNativeGetUsersData
/// Size: 0x0010 (0x000028 - 0x000038)
struct FLimNativeGetUsersData : FLimNativeDataCallBackDataBase
{ 
	TArray<FLimNativeGetUserData>                      DataResultList;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnGetUsersStateCallBack
/// Size: 0x0078 (0x000030 - 0x0000A8)
struct FLimNativeOnGetUsersStateCallBack : FLimNativeDataCallBackBase
{ 
	FUsersPresence                                     Data;                                                       // 0x0030   (0x0078)  
};

/// Struct /Script/LimNative.UsersPresence
/// Size: 0x0050 (0x000028 - 0x000078)
struct FUsersPresence : FLimNativeDataCallBackDataBase
{ 
	TMap<FString, FPresence>                           Result;                                                     // 0x0028   (0x0050)  
};

/// Struct /Script/LimNative.LimNativeOnGroupJoinCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnGroupJoinCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnLoginCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnLoginCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnLogoutCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnLogoutCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnMsgLogicReceivedEventCallBack
/// Size: 0x0030 (0x000008 - 0x000038)
struct FLimNativeOnMsgLogicReceivedEventCallBack : FLimNativeDataObjectBase
{ 
	FLimNativeMsgLogiMsgData                           Data;                                                       // 0x0008   (0x0030)  
};

/// Struct /Script/LimNative.LimNativeMsgLogiMsgData
/// Size: 0x0028 (0x000008 - 0x000030)
struct FLimNativeMsgLogiMsgData : FLimNativeDataObjectBase
{ 
	FLimNativeMsgLogiCommonMsgData                     Data;                                                       // 0x0008   (0x0028)  
};

/// Struct /Script/LimNative.LimNativeMsgLogiCommonMsgData
/// Size: 0x0020 (0x000008 - 0x000028)
struct FLimNativeMsgLogiCommonMsgData : FLimNativeDataObjectBase
{ 
	int32_t                                            Type;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FLimNativeDataBizFullObj                           BizObj;                                                     // 0x0010   (0x0018)  
};

/// Struct /Script/LimNative.LimNativeDataBizFullObj
/// Size: 0x0010 (0x000008 - 0x000018)
struct FLimNativeDataBizFullObj : FLimNativeDataObjectBase
{ 
	FString                                            Uid;                                                        // 0x0008   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnMsgReceivedEventCallBack
/// Size: 0x0038 (0x000008 - 0x000040)
struct FLimNativeOnMsgReceivedEventCallBack : FLimNativeDataObjectBase
{ 
	FLimNativeOnMsgReceivedData                        Data;                                                       // 0x0008   (0x0038)  
};

/// Struct /Script/LimNative.LimNativeOnMsgReceivedData
/// Size: 0x0010 (0x000028 - 0x000038)
struct FLimNativeOnMsgReceivedData : FLimNativeDataCallBackDataBase
{ 
	TArray<FLimNativeReceivedMsgData>                  MsgDataList;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeReceivedMsgData
/// Size: 0x00A0 (0x000028 - 0x0000C8)
struct FLimNativeReceivedMsgData : FLimNativeDataCallBackDataBase
{ 
	FString                                            LanguageList;                                               // 0x0028   (0x0010)  
	FString                                            SenderId;                                                   // 0x0038   (0x0010)  
	FString                                            MsgId;                                                      // 0x0048   (0x0010)  
	FLimNativeIMChatMessage                            Msg;                                                        // 0x0058   (0x0070)  
};

/// Struct /Script/LimNative.LimNativeOnMsgRevokedEventCallBack
/// Size: 0x0058 (0x000008 - 0x000060)
struct FLimNativeOnMsgRevokedEventCallBack : FLimNativeDataObjectBase
{ 
	FLimNativeOnMsgRevokedData                         Data;                                                       // 0x0008   (0x0058)  
};

/// Struct /Script/LimNative.LimNativeOnMsgRevokedData
/// Size: 0x0030 (0x000028 - 0x000058)
struct FLimNativeOnMsgRevokedData : FLimNativeDataCallBackDataBase
{ 
	FString                                            ConvID;                                                     // 0x0028   (0x0010)  
	ELimNativeConvType                                 ConvType;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            MessageId;                                                  // 0x0040   (0x0010)  
	int32_t                                            SenderId;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/LimNative.LimNativeOnGroupQuitCallBack
/// Size: 0x0020 (0x000030 - 0x000050)
struct FLimNativeOnGroupQuitCallBack : FLimNativeDataCallBackBase
{ 
	FString                                            GameID;                                                     // 0x0030   (0x0010)  
	FString                                            ChannelId;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeOnGroupMemberRemoveCallBack
/// Size: 0x0068 (0x000030 - 0x000098)
struct FLimNativeOnGroupMemberRemoveCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeIMGroup                                  Data;                                                       // 0x0030   (0x0068)  
};

/// Struct /Script/LimNative.LimNativeOnRevokeMsgCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnRevokeMsgCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnSendMsgCallBack
/// Size: 0x0090 (0x000030 - 0x0000C0)
struct FLimNativeOnSendMsgCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeOnChatMsgCallBackData                    Data;                                                       // 0x0030   (0x0090)  
};

/// Struct /Script/LimNative.LimNativeOnSetConvReadCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnSetConvReadCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeOnGroupAttrSetCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnGroupAttrSetCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeLanguageConfig
/// Size: 0x0008 (0x000008 - 0x000010)
struct FLimNativeLanguageConfig : FLimNativeDataObjectBase
{ 
	ELimNativeSupportedLanguage                        Lang;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/LimNative.LimNativeOnSetMsgStateCallBack
/// Size: 0x0000 (0x000030 - 0x000030)
struct FLimNativeOnSetMsgStateCallBack : FLimNativeDataCallBackBase
{ 
};

/// Struct /Script/LimNative.LimNativeParkConfig
/// Size: 0x0050 (0x000008 - 0x000058)
struct FLimNativeParkConfig : FLimNativeDataObjectBase
{ 
	FString                                            App_Id;                                                     // 0x0008   (0x0010)  
	FString                                            Sdk_Env;                                                    // 0x0018   (0x0010)  
	FString                                            Sdk_Region;                                                 // 0x0028   (0x0010)  
	FString                                            Gid;                                                        // 0x0038   (0x0010)  
	FString                                            SlsSvr;                                                     // 0x0048   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeReportConfig
/// Size: 0x00C0 (0x000008 - 0x0000C8)
struct FLimNativeReportConfig : FLimNativeDataObjectBase
{ 
	FString                                            PackageName;                                                // 0x0008   (0x0010)  
	FString                                            Android_Id;                                                 // 0x0018   (0x0010)  
	FString                                            Goodle_Aid;                                                 // 0x0028   (0x0010)  
	FString                                            Os_Version;                                                 // 0x0038   (0x0010)  
	FString                                            Mac;                                                        // 0x0048   (0x0010)  
	FString                                            Device_Model;                                               // 0x0058   (0x0010)  
	FString                                            Open_Id;                                                    // 0x0068   (0x0010)  
	FString                                            Idfa;                                                       // 0x0078   (0x0010)  
	FString                                            App_Version;                                                // 0x0088   (0x0010)  
	FString                                            Server_Id;                                                  // 0x0098   (0x0010)  
	FString                                            Device_Id;                                                  // 0x00A8   (0x0010)  
	FString                                            SlsSvr;                                                     // 0x00B8   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeResDirConfig
/// Size: 0x0010 (0x000008 - 0x000018)
struct FLimNativeResDirConfig : FLimNativeDataObjectBase
{ 
	FString                                            ResDir;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeTextTranslateCallBack
/// Size: 0x0058 (0x000030 - 0x000088)
struct FLimNativeTextTranslateCallBack : FLimNativeDataCallBackBase
{ 
	FLimNativeTextTranslateData                        Data;                                                       // 0x0030   (0x0058)  
};

/// Struct /Script/LimNative.LimNativeTextTranslateData
/// Size: 0x0030 (0x000028 - 0x000058)
struct FLimNativeTextTranslateData : FLimNativeDataCallBackDataBase
{ 
	FString                                            TranslatedText;                                             // 0x0028   (0x0010)  
	FString                                            Translator;                                                 // 0x0038   (0x0010)  
	FString                                            ExtraInfo;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMChatMessageBase
/// Size: 0x0050 (0x000008 - 0x000058)
struct FLimNativeIMChatMessageBase : FLimNativeDataObjectBase
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0008   (0x0050)  MISSED
};

/// Struct /Script/LimNative.LimNativeIMEmotionMessage
/// Size: 0x0058 (0x000058 - 0x0000B0)
struct FLimNativeIMEmotionMessage : FLimNativeIMChatMessageBase
{ 
	FString                                            PackName;                                                   // 0x0058   (0x0010)  
	ELimNativePackType                                 PackType;                                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            EmotionName;                                                // 0x0070   (0x0010)  
	FString                                            EmotionId;                                                  // 0x0080   (0x0010)  
	FString                                            EmotionUrl;                                                 // 0x0090   (0x0010)  
	FString                                            Desc;                                                       // 0x00A0   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMImageMessage
/// Size: 0x0048 (0x000058 - 0x0000A0)
struct FLimNativeIMImageMessage : FLimNativeIMChatMessageBase
{ 
	FString                                            UUID;                                                       // 0x0058   (0x0010)  
	FString                                            Fmt;                                                        // 0x0068   (0x0010)  
	FString                                            URL;                                                        // 0x0078   (0x0010)  
	int32_t                                            Width;                                                      // 0x0088   (0x0004)  
	int32_t                                            Height;                                                     // 0x008C   (0x0004)  
	FString                                            Size;                                                       // 0x0090   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMShareMessage
/// Size: 0x0068 (0x000058 - 0x0000C0)
struct FLimNativeIMShareMessage : FLimNativeIMChatMessageBase
{ 
	int32_t                                            Type;                                                       // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            Text;                                                       // 0x0060   (0x0010)  
	FString                                            Title;                                                      // 0x0070   (0x0010)  
	FString                                            Detail;                                                     // 0x0080   (0x0010)  
	FString                                            Img;                                                        // 0x0090   (0x0010)  
	FString                                            URL;                                                        // 0x00A0   (0x0010)  
	FString                                            Extra;                                                      // 0x00B0   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMTextMessage
/// Size: 0x0010 (0x000058 - 0x000068)
struct FLimNativeIMTextMessage : FLimNativeIMChatMessageBase
{ 
	FString                                            Text;                                                       // 0x0058   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMTextWithAtMessage
/// Size: 0x0010 (0x000058 - 0x000068)
struct FLimNativeIMTextWithAtMessage : FLimNativeIMChatMessageBase
{ 
	FString                                            Text;                                                       // 0x0058   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMVoiceMessage
/// Size: 0x0038 (0x000058 - 0x000090)
struct FLimNativeIMVoiceMessage : FLimNativeIMChatMessageBase
{ 
	FString                                            UUID;                                                       // 0x0058   (0x0010)  
	FString                                            URL;                                                        // 0x0068   (0x0010)  
	FString                                            Size;                                                       // 0x0078   (0x0010)  
	int32_t                                            Duration;                                                   // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/LimNative.LimNativeSetMsgState
/// Size: 0x0038 (0x000008 - 0x000040)
struct FLimNativeSetMsgState : FLimNativeDataObjectBase
{ 
	ELimNativeConvType                                 ConvType;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            ConvID;                                                     // 0x0010   (0x0010)  
	ELimNativeMsgContentType                           MsgType;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FString                                            MsgId;                                                      // 0x0028   (0x0010)  
	ELimNativeMsgState                                 MsgState;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/LimNative.LimNativeOnMsgLogicReceivedData
/// Size: 0x0010 (0x000028 - 0x000038)
struct FLimNativeOnMsgLogicReceivedData : FLimNativeDataCallBackDataBase
{ 
	TArray<FLimNativeCommonMsg>                        CommonMessage;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeBizObjFriendBase
/// Size: 0x0040 (0x000008 - 0x000048)
struct FLimNativeBizObjFriendBase : FLimNativeDataObjectBase
{ 
	FString                                            Uid;                                                        // 0x0008   (0x0010)  
	FString                                            NickName;                                                   // 0x0018   (0x0010)  
	FString                                            AvatarUrl;                                                  // 0x0028   (0x0010)  
	FString                                            AvatarFrameUrl;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeBizObjRefreshFriend
/// Size: 0x0010 (0x000048 - 0x000058)
struct FLimNativeBizObjRefreshFriend : FLimNativeBizObjFriendBase
{ 
	FString                                            EmblemUrls;                                                 // 0x0048   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeBizObjFriendRequest
/// Size: 0x0050 (0x000048 - 0x000098)
struct FLimNativeBizObjFriendRequest : FLimNativeBizObjFriendBase
{ 
	FString                                            RequestID;                                                  // 0x0048   (0x0010)  
	FString                                            RequestMsg;                                                 // 0x0058   (0x0010)  
	FString                                            RequestSource;                                              // 0x0068   (0x0010)  
	FString                                            Timestamp;                                                  // 0x0078   (0x0010)  
	FString                                            Lang;                                                       // 0x0088   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeBizObjGroupBase
/// Size: 0x0010 (0x000008 - 0x000018)
struct FLimNativeBizObjGroupBase : FLimNativeDataObjectBase
{ 
	FString                                            groupid;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeBizObjExitGroup
/// Size: 0x0018 (0x000018 - 0x000030)
struct FLimNativeBizObjExitGroup : FLimNativeBizObjGroupBase
{ 
	ELimNativeGroupType                                Type;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FString                                            Uid;                                                        // 0x0020   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeBizObjGroupPerms
/// Size: 0x0010 (0x000018 - 0x000028)
struct FLimNativeBizObjGroupPerms : FLimNativeBizObjGroupBase
{ 
	FString                                            Perms;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeIMNotificationMessage
/// Size: 0x0010 (0x000058 - 0x000068)
struct FLimNativeIMNotificationMessage : FLimNativeIMChatMessageBase
{ 
	FString                                            Text;                                                       // 0x0058   (0x0010)  
};

/// Struct /Script/LimNative.LimNativeEventDataBase
/// Size: 0x0038 (0x000008 - 0x000040)
struct FLimNativeEventDataBase : FLimNativeDataObjectBase
{ 
	FString                                            JsonData;                                                   // 0x0008   (0x0010)  
	FString                                            ErrorCode;                                                  // 0x0018   (0x0010)  
	FString                                            Message;                                                    // 0x0028   (0x0010)  
	ELimNativeEventType                                EventCode;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Enum /Script/LimNative.ELimNativeConvType
/// Size: 0x08
enum ELimNativeConvType : uint8_t
{
	ELimNativeConvType__Group                                                        = 0,
	ELimNativeConvType__Peer                                                         = 1,
	ELimNativeConvType__Room                                                         = 2,
	ELimNativeConvType__CustomGroup                                                  = 3,
	ELimNativeConvType__Robot                                                        = 4,
	ELimNativeConvType__System                                                       = 5,
	ELimNativeConvType__TempGroup                                                    = 6,
	ELimNativeConvType__ELimNativeConvType_MAX                                       = 7
};

/// Enum /Script/LimNative.ELimNativeMsgDirType
/// Size: 0x04
enum ELimNativeMsgDirType : uint8_t
{
	ELimNativeMsgDirType__After                                                      = 0,
	ELimNativeMsgDirType__Around                                                     = 1,
	ELimNativeMsgDirType__Before                                                     = 2,
	ELimNativeMsgDirType__ELimNativeMsgDirType_MAX                                   = 3
};

/// Enum /Script/LimNative.ELimNativeSupportedLanguage
/// Size: 0x24
enum ELimNativeSupportedLanguage : uint8_t
{
	ELimNativeSupportedLanguage__DefaultLanguage                                     = 0,
	ELimNativeSupportedLanguage__SimplifiedChinese                                   = 1,
	ELimNativeSupportedLanguage__TraditionalChinese                                  = 2,
	ELimNativeSupportedLanguage__Arabic                                              = 3,
	ELimNativeSupportedLanguage__German                                              = 4,
	ELimNativeSupportedLanguage__English                                             = 5,
	ELimNativeSupportedLanguage__Spanish                                             = 6,
	ELimNativeSupportedLanguage__French                                              = 7,
	ELimNativeSupportedLanguage__Hindi                                               = 8,
	ELimNativeSupportedLanguage__Indonesian                                          = 9,
	ELimNativeSupportedLanguage__Italian                                             = 10,
	ELimNativeSupportedLanguage__Japanese                                            = 11,
	ELimNativeSupportedLanguage__Korean                                              = 12,
	ELimNativeSupportedLanguage__Malay                                               = 13,
	ELimNativeSupportedLanguage__Polish                                              = 14,
	ELimNativeSupportedLanguage__Portuguese                                          = 15,
	ELimNativeSupportedLanguage__Russian                                             = 16,
	ELimNativeSupportedLanguage__Thai                                                = 17,
	ELimNativeSupportedLanguage__Turkish                                             = 18,
	ELimNativeSupportedLanguage__Vietnamese                                          = 19,
	ELimNativeSupportedLanguage__Tagalog                                             = 20,
	ELimNativeSupportedLanguage__PO                                                  = 21,
	ELimNativeSupportedLanguage__OP                                                  = 22,
	ELimNativeSupportedLanguage__ELimNativeSupportedLanguage_MAX                     = 23
};

/// Enum /Script/LimNative.ELimNativeErrorType
/// Size: 0x20
enum ELimNativeErrorType : uint8_t
{
	ELimNativeErrorType__OK                                                          = 0,
	ELimNativeErrorType__ApiNotFound                                                 = 1,
	ELimNativeErrorType__ParameterInvalid                                            = 2,
	ELimNativeErrorType__NetworkError                                                = 3,
	ELimNativeErrorType__InitializeError                                             = 4,
	ELimNativeErrorType__ResourceNotFound                                            = 5,
	ELimNativeErrorType__ApiTimeout                                                  = 6,
	ELimNativeErrorType__LoginFailed                                                 = 7,
	ELimNativeErrorType__MsgSendFailed                                               = 8,
	ELimNativeErrorType__MsgSendTimeout                                              = 9,
	ELimNativeErrorType__MsgBuildFailed                                              = 10,
	ELimNativeErrorType__MsgSetStateFailed                                           = 11,
	ELimNativeErrorType__ConvsGetFailed                                              = 12,
	ELimNativeErrorType__ConvDiscardFailed                                           = 13,
	ELimNativeErrorType__UnImplemented                                               = 14,
	ELimNativeErrorType__Exception                                                   = 15,
	ELimNativeErrorType__UserInfoGetFailed                                           = 16,
	ELimNativeErrorType__JsonDecodeFailed                                            = 17,
	ELimNativeErrorType__Unknown                                                     = 18,
	ELimNativeErrorType__ELimNativeErrorType_MAX                                     = 19
};

/// Enum /Script/LimNative.ELimNativeMsgContentType
/// Size: 0x09
enum ELimNativeMsgContentType : uint8_t
{
	ELimNativeMsgContentType__Unknown                                                = 0,
	ELimNativeMsgContentType__Text                                                   = 1,
	ELimNativeMsgContentType__Voice                                                  = 2,
	ELimNativeMsgContentType__Image                                                  = 3,
	ELimNativeMsgContentType__Notification                                           = 4,
	ELimNativeMsgContentType__ShareGameCard                                          = 5,
	ELimNativeMsgContentType__CustomEmotion                                          = 6,
	ELimNativeMsgContentType__Recalled                                               = 7,
	ELimNativeMsgContentType__ELimNativeMsgContentType_MAX                           = 8
};

/// Enum /Script/LimNative.ELimNativeFriendStateType
/// Size: 0x06
enum ELimNativeFriendStateType : uint8_t
{
	ELimNativeFriendStateType__InIdle                                                = 0,
	ELimNativeFriendStateType__InTeam                                                = 1,
	ELimNativeFriendStateType__InMatching                                            = 2,
	ELimNativeFriendStateType__InGaming                                              = 3,
	ELimNativeFriendStateType__Offline                                               = 4,
	ELimNativeFriendStateType__ELimNativeFriendStateType_MAX                         = 5
};

/// Enum /Script/LimNative.ELimNativeUserSexType
/// Size: 0x04
enum ELimNativeUserSexType : uint8_t
{
	ELimNativeUserSexType__Unknow                                                    = 0,
	ELimNativeUserSexType__Male                                                      = 1,
	ELimNativeUserSexType__FeMale                                                    = 2,
	ELimNativeUserSexType__ELimNativeUserSexType_MAX                                 = 3
};

/// Enum /Script/LimNative.ELimNativeMsgState
/// Size: 0x10
enum ELimNativeMsgState : uint8_t
{
	ELimNativeMsgState__Created                                                      = 0,
	ELimNativeMsgState__Sending                                                      = 1,
	ELimNativeMsgState__Sent                                                         = 2,
	ELimNativeMsgState__Failed                                                       = 3,
	ELimNativeMsgState__Unread                                                       = 4,
	ELimNativeMsgState__Read                                                         = 5,
	ELimNativeMsgState__ReadAll                                                      = 6,
	ELimNativeMsgState__Played                                                       = 7,
	ELimNativeMsgState__Revoked                                                      = 8,
	ELimNativeMsgState__ELimNativeMsgState_MAX                                       = 9
};

/// Enum /Script/LimNative.ELimNativePackType
/// Size: 0x03
enum ELimNativePackType : uint8_t
{
	ELimNativePackType__StaticPicture                                                = 0,
	ELimNativePackType__DynamicPicture                                               = 1,
	ELimNativePackType__ELimNativePackType_MAX                                       = 2
};

/// Enum /Script/LimNative.ELimNativeOSType
/// Size: 0x04
enum ELimNativeOSType : uint8_t
{
	ELimNativeOSType__Android                                                        = 0,
	ELimNativeOSType__iOS                                                            = 1,
	ELimNativeOSType__Windows                                                        = 2,
	ELimNativeOSType__ELimNativeOSType_MAX                                           = 3
};

/// Enum /Script/LimNative.ELimNativeUserPeerStatus
/// Size: 0x04
enum ELimNativeUserPeerStatus : uint8_t
{
	ELimNativeUserPeerStatus__Online                                                 = 0,
	ELimNativeUserPeerStatus__Blocking                                               = 1,
	ELimNativeUserPeerStatus__Blocked                                                = 2,
	ELimNativeUserPeerStatus__ELimNativeUserPeerStatus_MAX                           = 3
};

/// Enum /Script/LimNative.ELimNativeUserAllowType
/// Size: 0x04
enum ELimNativeUserAllowType : uint8_t
{
	ELimNativeUserAllowType__Any                                                     = 0,
	ELimNativeUserAllowType__Confirm                                                 = 1,
	ELimNativeUserAllowType__None                                                    = 2,
	ELimNativeUserAllowType__ELimNativeUserAllowType_MAX                             = 3
};

/// Enum /Script/LimNative.ELimNativeProtType
/// Size: 0x03
enum ELimNativeProtType : uint8_t
{
	ELimNativeProtType__Game                                                         = 0,
	ELimNativeProtType__App                                                          = 1,
	ELimNativeProtType__ELimNativeProtType_MAX                                       = 2
};

/// Enum /Script/LimNative.ELimNativeGroupRoleType
/// Size: 0x04
enum ELimNativeGroupRoleType : uint8_t
{
	ELimNativeGroupRoleType__Owner                                                   = 0,
	ELimNativeGroupRoleType__Admin                                                   = 1,
	ELimNativeGroupRoleType__Member                                                  = 2,
	ELimNativeGroupRoleType__ELimNativeGroupRoleType_MAX                             = 3
};

/// Enum /Script/LimNative.ELimNativeGroupJoinType
/// Size: 0x04
enum ELimNativeGroupJoinType : uint8_t
{
	ELimNativeGroupJoinType__Free                                                    = 0,
	ELimNativeGroupJoinType__Verify                                                  = 1,
	ELimNativeGroupJoinType__Forbidden                                               = 2,
	ELimNativeGroupJoinType__ELimNativeGroupJoinType_MAX                             = 3
};

/// Enum /Script/LimNative.ELimNativeGroupType
/// Size: 0x05
enum ELimNativeGroupType : uint8_t
{
	ELimNativeGroupType__Normal                                                      = 0,
	ELimNativeGroupType__Temp                                                        = 1,
	ELimNativeGroupType__Room                                                        = 2,
	ELimNativeGroupType__Custom                                                      = 3,
	ELimNativeGroupType__ELimNativeGroupType_MAX                                     = 4
};

/// Enum /Script/LimNative.ELimNativeEventType
/// Size: 0x28
enum ELimNativeEventType : uint8_t
{
	ELimNativeEventType__SDKReady                                                    = 0,
	ELimNativeEventType__SDKError                                                    = 1,
	ELimNativeEventType__NetDisconnected                                             = 2,
	ELimNativeEventType__NetConnecting                                               = 3,
	ELimNativeEventType__NetConnected                                                = 4,
	ELimNativeEventType__NetReconnected                                              = 5,
	ELimNativeEventType__NetReconnecting                                             = 6,
	ELimNativeEventType__NetInterrupt                                                = 7,
	ELimNativeEventType__TokenRenewed                                                = 8,
	ELimNativeEventType__TokenExpired                                                = 9,
	ELimNativeEventType__KickedOut                                                   = 10,
	ELimNativeEventType__LoginFreqLimit                                              = 11,
	ELimNativeEventType__Logining                                                    = 12,
	ELimNativeEventType__Logined                                                     = 13,
	ELimNativeEventType__MsgReceived                                                 = 14,
	ELimNativeEventType__MsgRevoked                                                  = 15,
	ELimNativeEventType__MsgRead                                                     = 16,
	ELimNativeEventType__MsgEdited                                                   = 17,
	ELimNativeEventType__MsgLogicReceived                                            = 18,
	ELimNativeEventType__MsgCaptTriggerred                                           = 19,
	ELimNativeEventType__MsgCaptDispose                                              = 20,
	ELimNativeEventType__ConvsUpdated                                                = 21,
	ELimNativeEventType__FriendChanged                                               = 22,
	ELimNativeEventType__FriendRequestChanged                                        = 23,
	ELimNativeEventType__BlockeeChanged                                              = 24,
	ELimNativeEventType__BadgesChanged                                               = 25,
	ELimNativeEventType__UnkownEvent                                                 = 26,
	ELimNativeEventType__ELimNativeEventType_MAX                                     = 27
};

/// Enum /Script/LimNative.ELimNativeConvMentionType
/// Size: 0x04
enum ELimNativeConvMentionType : uint8_t
{
	ELimNativeConvMentionType__AtMe                                                  = 0,
	ELimNativeConvMentionType__AtAll                                                 = 1,
	ELimNativeConvMentionType__AtAllMe                                               = 2,
	ELimNativeConvMentionType__ELimNativeConvMentionType_MAX                         = 3
};

