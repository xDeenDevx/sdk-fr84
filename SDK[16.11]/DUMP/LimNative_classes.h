// Class LimNative.LimNative
// Size: 0x3f0 (Inherited: 0x28)
struct ULimNative : UObject {
	bool ShowLog; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FMulticastInlineDelegate OnLog; // 0x30(0x10)
	struct FMulticastInlineDelegate OnEvent; // 0x40(0x10)
	struct FMulticastInlineDelegate OnGetLanguage; // 0x50(0x10)
	struct FMulticastInlineDelegate OnSetLanguage; // 0x60(0x10)
	struct FMulticastInlineDelegate OnSetAllConfig; // 0x70(0x10)
	struct FMulticastInlineDelegate OnSetReportConfig; // 0x80(0x10)
	struct FMulticastInlineDelegate OnSetParkConfig; // 0x90(0x10)
	struct FMulticastInlineDelegate OnGetResDir; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnSetResDir; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnLogin; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnLoginV2; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnLogout; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnCreateGroup; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnJoinGroup; // 0x100(0x10)
	struct FMulticastInlineDelegate OnQuitGroup; // 0x110(0x10)
	struct FMulticastInlineDelegate OnDestoryGroup; // 0x120(0x10)
	struct FMulticastInlineDelegate OnGetGroup; // 0x130(0x10)
	struct FMulticastInlineDelegate OnGetGroups; // 0x140(0x10)
	struct FMulticastInlineDelegate OnGetAttr; // 0x150(0x10)
	struct FMulticastInlineDelegate OnGetAllGroupAttr; // 0x160(0x10)
	struct FMulticastInlineDelegate OnSetGroupAttr; // 0x170(0x10)
	struct FMulticastInlineDelegate OnGetGroupMembers; // 0x180(0x10)
	struct FMulticastInlineDelegate OnAddGroupMember; // 0x190(0x10)
	struct FMulticastInlineDelegate OnRemoveGroupMember; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnGetGroupMember; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnSetConvRead; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnSendMsg; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnRevokeMsg; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnGetBeforeMsg; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnGetAfterMsg; // 0x200(0x10)
	struct FMulticastInlineDelegate OnGetMsgsById; // 0x210(0x10)
	struct FMulticastInlineDelegate OnGetCommonMsgs; // 0x220(0x10)
	struct FMulticastInlineDelegate OnSetMsgState; // 0x230(0x10)
	struct FMulticastInlineDelegate OnConvHandle; // 0x240(0x10)
	struct FMulticastInlineDelegate OnConvsGet; // 0x250(0x10)
	struct FMulticastInlineDelegate OnGetFriends; // 0x260(0x10)
	struct FMulticastInlineDelegate OnRemoveFriend; // 0x270(0x10)
	struct FMulticastInlineDelegate OnCreateFriendRequest; // 0x280(0x10)
	struct FMulticastInlineDelegate OnGetFriendRequests; // 0x290(0x10)
	struct FMulticastInlineDelegate OnAcceptFriendRequest; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnRefuseFriendRequest; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnCancelFriendRequest; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnGetBlockees; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnAddToBlockee; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnRemoveFromBlockee; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnGetUser; // 0x300(0x10)
	struct FMulticastInlineDelegate OnGetUsers; // 0x310(0x10)
	struct FMulticastInlineDelegate OnGetUsersState; // 0x320(0x10)
	struct FMulticastInlineDelegate OnReportMsg; // 0x330(0x10)
	struct FMulticastInlineDelegate OnTranslateText; // 0x340(0x10)
	struct FMulticastInlineDelegate OnCheckImage; // 0x350(0x10)
	struct FMulticastInlineDelegate OnGetOssToken; // 0x360(0x10)
	struct FMulticastInlineDelegate OnGetGMEToken; // 0x370(0x10)
	struct FMulticastInlineDelegate OnMsgReceived; // 0x380(0x10)
	struct FMulticastInlineDelegate OnMsgLogicReceived; // 0x390(0x10)
	struct FMulticastInlineDelegate OnMsgRevoked; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnGetMiscConfigInfo; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnGetConvChatLevelConfig; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnGetConnState; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnNetState; // 0x3e0(0x10)

	void TranslateText(struct FLimNativeLowLevelWrapper& InCtx, struct FString InText, enum class ELimNativeSupportedLanguage InLang, struct FString ExtraInfo); // Function LimNative.LimNative.TranslateText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bf230
	void SetResDir(struct FLimNativeLowLevelWrapper& InCtx, struct FString InResDir); // Function LimNative.LimNative.SetResDir // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bf110
	void SetMsgState(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeSetMsgState& SetMsgParams); // Function LimNative.LimNative.SetMsgState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9befb0
	void SetLogHandler(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.SetLogHandler // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bef00
	void SetLanguage(struct FLimNativeLowLevelWrapper& InCtx, enum class ELimNativeSupportedLanguage InLanguage); // Function LimNative.LimNative.SetLanguage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bee00
	void SetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid, struct FString Key, struct FString Value); // Function LimNative.LimNative.SetGroupAttr // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bec40
	void SetEventHandler(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.SetEventHandler // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9beb90
	void SetConvRead(struct FLimNativeLowLevelWrapper& InCtx, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString InMsgID, struct FString Extra); // Function LimNative.LimNative.SetConvRead // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9be980
	void SetAllConfig(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeInitConfig InConfig); // Function LimNative.LimNative.SetAllConfig // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9be650
	void SendVoiceMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMVoiceMessage& VoiceMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp, struct FString Extra); // Function LimNative.LimNative.SendVoiceMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9be2c0
	void SendTextWithAtMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp, struct FString Extra); // Function LimNative.LimNative.SendTextWithAtMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bdf70
	void SendTextMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextMessage& TextMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp, struct FString Extra); // Function LimNative.LimNative.SendTextMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bdc20
	void SendShareMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMShareMessage& ShareMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp, struct FString Extra); // Function LimNative.LimNative.SendShareMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bd850
	void SendImageMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMImageMessage& ImageMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp, struct FString Extra); // Function LimNative.LimNative.SendImageMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bd4b0
	void SendEmotionMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMEmotionMessage& EmotionMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp, struct FString Extra); // Function LimNative.LimNative.SendEmotionMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bd0f0
	void RevokeVoiceMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMVoiceMessage& VoiceMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp); // Function LimNative.LimNative.RevokeVoiceMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bcdd0
	void RevokeTextWithAtMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp); // Function LimNative.LimNative.RevokeTextWithAtMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bcae0
	void RevokeTextMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextMessage& TextMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp); // Function LimNative.LimNative.RevokeTextMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bc7f0
	void RevokeShareMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMShareMessage& ShareMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp); // Function LimNative.LimNative.RevokeShareMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bc470
	void RevokeImageMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMImageMessage& ImageMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp); // Function LimNative.LimNative.RevokeImageMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bc120
	void RevokeEmotionMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMEmotionMessage& EmotionMsg, struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Nonce, struct FString Timestamp); // Function LimNative.LimNative.RevokeEmotionMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bbdb0
	void ReportMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FString InType, struct FString InMsg); // Function LimNative.LimNative.ReportMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bbc40
	void RemoveGroupMember(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid, struct FString memberid); // Function LimNative.LimNative.RemoveGroupMember // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bbad0
	void RemoveFromBlockee(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId); // Function LimNative.LimNative.RemoveFromBlockee // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bb9b0
	void RemoveFriend(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId, struct FString InExtra); // Function LimNative.LimNative.RemoveFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bb840
	void RefuseFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, struct FString InRequestID, struct FString InExtra); // Function LimNative.LimNative.RefuseFriendRequest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bb6d0
	void QuitGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid); // Function LimNative.LimNative.QuitGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bb5b0
	void PostInitLIM(struct FLimNativeLowLevelWrapper& ctx, struct FLimNativeReportConfig ReportConfig, struct FLimNativeParkConfig ParkConfig); // Function LimNative.LimNative.PostInitLIM // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bade0
	void MsgsGetCommon(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.MsgsGetCommon // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bad30
	void Logout(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.Logout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bac80
	void LoginV2(struct FLimNativeLowLevelWrapper& InCtx, struct FString InEnvId, struct FString InRoleID); // Function LimNative.LimNative.LoginV2 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9bab10
	void Login(struct FLimNativeLowLevelWrapper& InCtx, struct FString InAppId, struct FString InAppUserID, struct FString InToken, struct FString InRoleID, struct FString InExtra); // Function LimNative.LimNative.Login // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ba890
	void LIMOnTranslateTextDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeTextTranslateCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnTranslateTextDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSetResDirDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeResDirConfig& RetData); // DelegateFunction LimNative.LimNative.LIMOnSetResDirDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSetReportConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeReportConfig& RetData); // DelegateFunction LimNative.LimNative.LIMOnSetReportConfigDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSetParkConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeParkConfig& RetData); // DelegateFunction LimNative.LimNative.LIMOnSetParkConfigDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSetMsgStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetMsgStateCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnSetMsgStateDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSetLanguageDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeLanguageConfig& RetData); // DelegateFunction LimNative.LimNative.LIMOnSetLanguageDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSetGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrSetCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnSetGroupAttrDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSetConvReadDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetConvReadCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnSetConvReadDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSetAllConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeInitConfig& RetData); // DelegateFunction LimNative.LimNative.LIMOnSetAllConfigDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnSendMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSendMsgCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnSendMsgDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnRevokeMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnRevokeMsgCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnRevokeMsgDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnReportMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeDataCallBackBase& RetData); // DelegateFunction LimNative.LimNative.LIMOnReportMsgDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberRemoveCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnRemoveFriendDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnRemoveFriendDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnQuitGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupQuitCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnQuitGroupDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnNetConnectStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, int32_t EventCode); // DelegateFunction LimNative.LimNative.LIMOnNetConnectStateDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnMsgRevokedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgRevokedEventCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnMsgRevokedDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnMsgReceivedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgReceivedEventCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnMsgReceivedDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnLogoutDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLogoutCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnLogoutDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnLoginDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLoginCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnLoginDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnJoinGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupJoinCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnJoinGroupDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetUsersStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersStateCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetUsersStateDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetUsersDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetUsersDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetUserDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUserCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetUserDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetOssTokenDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetOssTokenCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetOssTokenDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetMsgsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetMsgsCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetMsgsDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetMiscConfigInfoCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetGroupsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupsGetCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetGroupsDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetGroupMembersDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMembersGetCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetGroupMembersDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberGetCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetGroupMemberDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupGetCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetGroupDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrGetCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetGroupAttrDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetGMETokenDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetGMETokenCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetGMETokenDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetFriendsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetFriendsDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendRequestCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetConnStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetConnStateCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetConnStateDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConfigCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetConfigDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetCommonMsgsCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetBlockeesDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetBlockeesCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetBlockeesDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrGetAllCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnDestoryGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupDestoryCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnDestoryGroupDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnCreateGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnCreateGroupCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnCreateGroupDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnCreateFriendRequestCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnConvsGetDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvsGetCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnConvsGetDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnConvHandleynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvHandleCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnConvHandleynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnCheckImageDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeDataCallBackBase& RetData); // DelegateFunction LimNative.LimNative.LIMOnCheckImageDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnAddToBlockeeDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnAddToBlockeeDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnAddGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberAddCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnAddGroupMemberDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData); // DelegateFunction LimNative.LimNative.LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMLogDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FString InData); // DelegateFunction LimNative.LimNative.LIMLogDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMEventDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FString InData); // DelegateFunction LimNative.LimNative.LIMEventDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void JoinGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid); // Function LimNative.LimNative.JoinGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ba770
	struct FLimNativeLowLevelWrapper InitLIM(struct FString InServerEnvID, struct FLimNativeInitConfig InConfig); // Function LimNative.LimNative.InitLIM // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ba430
	void GetUsersState(struct FLimNativeLowLevelWrapper& InCtx, struct TArray<struct FString>& InUserIDs); // Function LimNative.LimNative.GetUsersState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ba2e0
	void GetUsers(struct FLimNativeLowLevelWrapper& InCtx, struct FUidList& InUserIDs); // Function LimNative.LimNative.GetUsers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ba180
	void GetUser(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId); // Function LimNative.LimNative.GetUser // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ba060
	void GetResDir(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.GetResDir // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9fb0
	void GetOssToken(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.GetOssToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9f00
	void GetMiscConfigInfo(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.GetMiscConfigInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9e50
	void GetMessagesByID(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, struct FString InFromMsgID, struct FString InToMsgID); // Function LimNative.LimNative.GetMessagesByID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9c40
	struct FString GetLIMVersion(); // Function LimNative.LimNative.GetLIMVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b9ae0
	struct ULimNative* GetLimNativeInstance(); // Function LimNative.LimNative.GetLimNativeInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b9c10
	void GetLanguage(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.GetLanguage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9b60
	void GetGroups(struct FLimNativeLowLevelWrapper& InCtx, struct FString Tag, struct FString Size); // Function LimNative.LimNative.GetGroups // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9970
	void GetGroupMembers(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid, struct FString Tag, struct FString Size); // Function LimNative.LimNative.GetGroupMembers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b97b0
	void GetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid, struct FString Key); // Function LimNative.LimNative.GetGroupAttr // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9640
	void GetGroupAllAttr(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid); // Function LimNative.LimNative.GetGroupAllAttr // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9520
	void GetGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid); // Function LimNative.LimNative.GetGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9400
	void GetGMEToken(struct FLimNativeLowLevelWrapper& InCtx, struct FString InAppId, struct FString InUserId, struct FString InRoomId); // Function LimNative.LimNative.GetGMEToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9240
	void GetFriendsV2(struct FLimNativeLowLevelWrapper& InCtx, bool InNeedPresence); // Function LimNative.LimNative.GetFriendsV2 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9130
	void GetFriends(struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, struct FString InSize, struct FString InExtra); // Function LimNative.LimNative.GetFriends // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8f80
	void GetFriendRequests(struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, struct FString InSize, struct FString InExtra); // Function LimNative.LimNative.GetFriendRequests // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8dd0
	void GetConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.GetConvChatLevelConfig // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8d20
	void GetConnState(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNative.GetConnState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8c70
	void GetBlockees(struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, struct FString InSize, struct FString InExtra); // Function LimNative.LimNative.GetBlockees // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8ac0
	void GetBeforeMessages(struct FLimNativeLowLevelWrapper& InCtx, struct FString ConvID, enum class ELimNativeConvType ConvType, int32_t MsgId); // Function LimNative.LimNative.GetBeforeMessages // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8920
	void GetAfterMessages(struct FLimNativeLowLevelWrapper& InCtx, struct FString ConvID, enum class ELimNativeConvType ConvType, int32_t MsgId); // Function LimNative.LimNative.GetAfterMessages // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8780
	void DestoryLimNativeInstance(); // Function LimNative.LimNative.DestoryLimNativeInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b8760
	void DestoryGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid); // Function LimNative.LimNative.DestoryGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8640
	struct FLimNativeLowLevelWrapper CreateLIM(struct FString InServerEnvID); // Function LimNative.LimNative.CreateLIM // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b8560
	void CreateGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString Name, struct TArray<struct FString>& members, struct FString Extra); // Function LimNative.LimNative.CreateGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8360
	void CreateFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId, struct FString InExtra); // Function LimNative.LimNative.CreateFriendRequest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b81f0
	void ConversationsGet(struct FLimNativeLowLevelWrapper& InCtx, int32_t Size, struct FString Extra); // Function LimNative.LimNative.ConversationsGet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b8090
	void ConversationSetSticky(); // Function LimNative.LimNative.ConversationSetSticky // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b8070
	void ConversationSetRead(); // Function LimNative.LimNative.ConversationSetRead // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b8070
	void ConversationSetMute(); // Function LimNative.LimNative.ConversationSetMute // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b8070
	void ConversationSetHide(); // Function LimNative.LimNative.ConversationSetHide // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b8070
	void ConversationDiscard(struct FLimNativeLowLevelWrapper& InCtx, struct FString ConvID, enum class ELimNativeConvType ConvType); // Function LimNative.LimNative.ConversationDiscard // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b7f10
	void CheckImage(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUrl); // Function LimNative.LimNative.CheckImage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b7df0
	void CancelFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId, struct FString InRequestID, struct FString InExtra); // Function LimNative.LimNative.CancelFriendRequest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b7c30
	void AddToBlockee(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId); // Function LimNative.LimNative.AddToBlockee // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b7b10
	void AddGroupMember(struct FLimNativeLowLevelWrapper& InCtx, struct FString groupid, struct FString memberid); // Function LimNative.LimNative.AddGroupMember // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b79a0
	void AcceptFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, struct FString InRequestID, struct FString InExtra); // Function LimNative.LimNative.AcceptFriendRequest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b7830
};

// Class LimNative.LimNativeChatMsgReader
// Size: 0x28 (Inherited: 0x28)
struct ULimNativeChatMsgReader : UObject {

	struct FLimNativeIMVoiceMessage GetVoiceMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo& MsgInfo); // Function LimNative.LimNativeChatMsgReader.GetVoiceMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cd350
	struct FLimNativeIMTextMessage GetTextMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo& MsgInfo); // Function LimNative.LimNativeChatMsgReader.GetTextMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cd0a0
	struct FLimNativeIMShareMessage GetShareMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo& MsgInfo); // Function LimNative.LimNativeChatMsgReader.GetShareMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cce70
	struct FLimNativeIMNotificationMessage GetNotificationMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo& MsgInfo); // Function LimNative.LimNativeChatMsgReader.GetNotificationMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ccbc0
	struct FLimNativeIMImageMessage GetImageMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo& MsgInfo); // Function LimNative.LimNativeChatMsgReader.GetImageMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cc830
	struct FLimNativeIMEmotionMessage GetEmotionMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo& MsgInfo); // Function LimNative.LimNativeChatMsgReader.GetEmotionMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cc4d0
};

// Class LimNative.LimNativeHelper
// Size: 0x28 (Inherited: 0x28)
struct ULimNativeHelper : UObject {

	int32_t NameStringToEnumValue(struct FString Enum, struct FString EnumName); // Function LimNative.LimNativeHelper.NameStringToEnumValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d34c0
	struct FString GetUE4LogFilePath(); // Function LimNative.LimNativeHelper.GetUE4LogFilePath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d2af0
	struct FString GetSavedPath(); // Function LimNative.LimNativeHelper.GetSavedPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x95e550
	struct FString GetProjectPath(); // Function LimNative.LimNativeHelper.GetProjectPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d2a70
	struct FString GetProjectContentPath(); // Function LimNative.LimNativeHelper.GetProjectContentPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d29f0
	struct FString GetGamePersistentDownloadDir(); // Function LimNative.LimNativeHelper.GetGamePersistentDownloadDir // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d1af0
	struct FString GetFileText(struct FString Path); // Function LimNative.LimNativeHelper.GetFileText // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d1510
	struct TArray<char> GetFileBinary(struct FString Path); // Function LimNative.LimNativeHelper.GetFileBinary // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d1430
	struct TArray<struct FString> EnumToStringArray(struct FString Enum, bool bExcludeHidden); // Function LimNative.LimNativeHelper.EnumToStringArray // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d0970
	struct FString EnumToString(struct FString Enum, int32_t EnumValue); // Function LimNative.LimNativeHelper.EnumToString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d0850
	struct TArray<struct FString> EnumToNameStringArray(struct FString Enum, bool bExcludeHidden); // Function LimNative.LimNativeHelper.EnumToNameStringArray // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d0720
	struct FString EnumToNameString(struct FString Enum, int32_t EnumValue); // Function LimNative.LimNativeHelper.EnumToNameString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d0600
};

// Class LimNative.LimNativeLowLevel
// Size: 0x418 (Inherited: 0x28)
struct ULimNativeLowLevel : UObject {
	struct FMulticastInlineDelegate OnEvent; // 0x28(0x10)
	struct FMulticastInlineDelegate OnLog; // 0x38(0x10)
	struct FMulticastInlineDelegate OnCall; // 0x48(0x10)
	struct FMulticastInlineDelegate OnSetConfig; // 0x58(0x10)
	struct FMulticastInlineDelegate OnSetAllConfigs; // 0x68(0x10)
	struct FMulticastInlineDelegate OnGetConfig; // 0x78(0x10)
	struct FMulticastInlineDelegate OnGetAllConfigs; // 0x88(0x10)
	struct FMulticastInlineDelegate OnLogin; // 0x98(0x10)
	struct FMulticastInlineDelegate OnLoginV2; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnLogout; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnSendMsg; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnRevokeMsg; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnGetMsgs; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnGetMsgsV2; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnSetMsgRead; // 0x108(0x10)
	struct FMulticastInlineDelegate OnSetMsgState; // 0x118(0x10)
	struct FMulticastInlineDelegate OnCreateConv; // 0x128(0x10)
	struct FMulticastInlineDelegate OnDestroyConv; // 0x138(0x10)
	struct FMulticastInlineDelegate OnClearConv; // 0x148(0x10)
	struct FMulticastInlineDelegate OnGetConvs; // 0x158(0x10)
	struct FMulticastInlineDelegate OnGetConv; // 0x168(0x10)
	struct FMulticastInlineDelegate OnSetConvRead; // 0x178(0x10)
	struct FMulticastInlineDelegate OnSetConvSticky; // 0x188(0x10)
	struct FMulticastInlineDelegate OnSetConvMute; // 0x198(0x10)
	struct FMulticastInlineDelegate OnGetConvAttr; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnGetConvAllAttrs; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnSetConvAttr; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnCreateGroup; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnJoinGroup; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnQuitGroup; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnDestroyGroup; // 0x208(0x10)
	struct FMulticastInlineDelegate OnGetGroup; // 0x218(0x10)
	struct FMulticastInlineDelegate OnSetGroup; // 0x228(0x10)
	struct FMulticastInlineDelegate OnGetGroups; // 0x238(0x10)
	struct FMulticastInlineDelegate OnGetGroupAttr; // 0x248(0x10)
	struct FMulticastInlineDelegate OnGetGroupAllAttrs; // 0x258(0x10)
	struct FMulticastInlineDelegate OnSetGroupAttr; // 0x268(0x10)
	struct FMulticastInlineDelegate OnGetGroupMembers; // 0x278(0x10)
	struct FMulticastInlineDelegate OnGetGroupMember; // 0x288(0x10)
	struct FMulticastInlineDelegate OnAddGroupMember; // 0x298(0x10)
	struct FMulticastInlineDelegate OnRemoveGroupMember; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnGetFriends; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnRemoveFriend; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnGetFriendRequests; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnCreateFriendRequest; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnAcceptFriendRequest; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnRefuseFriendRequest; // 0x308(0x10)
	struct FMulticastInlineDelegate OnCancelFriendRequest; // 0x318(0x10)
	struct FMulticastInlineDelegate OnGetBlockees; // 0x328(0x10)
	struct FMulticastInlineDelegate OnAddToBlockee; // 0x338(0x10)
	struct FMulticastInlineDelegate OnRemoveFromBlockee; // 0x348(0x10)
	struct FMulticastInlineDelegate OnBlockeeExists; // 0x358(0x10)
	struct FMulticastInlineDelegate OnGetUser; // 0x368(0x10)
	struct FMulticastInlineDelegate OnGetUsers; // 0x378(0x10)
	struct FMulticastInlineDelegate OnGetUsersState; // 0x388(0x10)
	struct FMulticastInlineDelegate OnGetOssToken; // 0x398(0x10)
	struct FMulticastInlineDelegate OnGetGMEToken; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnReportMsg; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnTranslateText; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnCheckImage; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnGetMiscConfigInfo; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnGetConvChatLevelConfig; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnGetConnState; // 0x408(0x10)

	void TranslateText(struct FLimNativeLowLevelWrapper& InCtx, struct FString InText, enum class ELimNativeSupportedLanguage InLang, struct FString ExtraInfo); // Function LimNative.LimNativeLowLevel.TranslateText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d5030
	void SetMsgState(struct FLimNativeLowLevelWrapper& InCtx, struct FString InMsgParams); // Function LimNative.LimNativeLowLevel.SetMsgState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d4f10
	void SetMsgRead(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, struct FString InMsgID, struct FString InExtra); // Function LimNative.LimNativeLowLevel.SetMsgRead // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d4d00
	void SetLogHandler(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.SetLogHandler // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d4c50
	void SetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID, struct FString InKey, struct FString InValue); // Function LimNative.LimNativeLowLevel.SetGroupAttr // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d4a90
	void SetGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID, struct FString InGroupName, struct FString InExtra); // Function LimNative.LimNativeLowLevel.SetGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d48d0
	void SetEventHandler(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.SetEventHandler // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d4820
	void SetConvSticky(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, bool bSticky); // Function LimNative.LimNativeLowLevel.SetConvSticky // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d4680
	void SetConvRead(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, struct FString InMsgID, struct FString InExtra); // Function LimNative.LimNativeLowLevel.SetConvRead // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d4470
	void SetConvMute(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, bool bMute); // Function LimNative.LimNativeLowLevel.SetConvMute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d42d0
	void SetConvAttr(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, struct FString InKey, struct FString InValue); // Function LimNative.LimNativeLowLevel.SetConvAttr // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d40c0
	void SetAllConfigs(struct FLimNativeLowLevelWrapper& InCtx, struct FString InJsonString); // Function LimNative.LimNativeLowLevel.SetAllConfigs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d3fa0
	void SendMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FString InMsg); // Function LimNative.LimNativeLowLevel.SendMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d3e80
	void RevokeMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FString InMsg); // Function LimNative.LimNativeLowLevel.RevokeMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d3d60
	void Resume(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.Resume // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9b60
	void ReportMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FString InMsg); // Function LimNative.LimNativeLowLevel.ReportMsg // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d3c40
	void RemoveGroupMember(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID, struct FString InMemberID); // Function LimNative.LimNativeLowLevel.RemoveGroupMember // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d3ad0
	void RemoveFromBlockee(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId); // Function LimNative.LimNativeLowLevel.RemoveFromBlockee // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d39b0
	void RemoveFriend(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId, struct FString InExtra); // Function LimNative.LimNativeLowLevel.RemoveFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d3840
	void RefuseFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, struct FString InRequestID, struct FString InExtra); // Function LimNative.LimNativeLowLevel.RefuseFriendRequest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d36d0
	void QuitGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID); // Function LimNative.LimNativeLowLevel.QuitGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d35b0
	void Pause(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.Pause // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b9b60
	void Logout(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.Logout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d3410
	void LoginV2(struct FLimNativeLowLevelWrapper& InCtx, struct FString InEnv, struct FString InRoleID); // Function LimNative.LimNativeLowLevel.LoginV2 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d32a0
	void Login(struct FLimNativeLowLevelWrapper& InCtx, struct FString InAppId, struct FString InAppUserID, struct FString InToken, struct FString InRoleID, struct FString InExtra); // Function LimNative.LimNativeLowLevel.Login // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d3020
	void LIMResultDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FString InData); // DelegateFunction LimNative.LimNativeLowLevel.LIMResultDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMLogDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FString InData); // DelegateFunction LimNative.LimNativeLowLevel.LIMLogDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void LIMEventDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FString InData); // DelegateFunction LimNative.LimNativeLowLevel.LIMEventDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2d656b0
	void JoinGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID); // Function LimNative.LimNativeLowLevel.JoinGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2f00
	void GetUsersState(struct FLimNativeLowLevelWrapper& InCtx, struct TArray<struct FString>& InUserIDs); // Function LimNative.LimNativeLowLevel.GetUsersState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2db0
	void GetUsers(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserIDs); // Function LimNative.LimNativeLowLevel.GetUsers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2c90
	void GetUser(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId); // Function LimNative.LimNativeLowLevel.GetUser // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2b70
	void GetOssToken(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.GetOssToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2940
	void GetMsgsV2(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, struct FString InFromMsgID, struct FString InToMsgID); // Function LimNative.LimNativeLowLevel.GetMsgsV2 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2730
	void GetMsgs(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, enum class ELimNativeMsgDirType InDir, struct FString InMsgID, struct FString InExtra); // Function LimNative.LimNativeLowLevel.GetMsgs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d24f0
	void GetMiscConfigInfo(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.GetMiscConfigInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2440
	struct FString GetLIMVersion(); // Function LimNative.LimNativeLowLevel.GetLIMVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9b9ae0
	struct ULimNativeLowLevel* GetInstance(); // Function LimNative.LimNativeLowLevel.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d2410
	void GetGroups(struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, struct FString InExtra); // Function LimNative.LimNativeLowLevel.GetGroups // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2270
	void GetGroupMembers(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID, int32_t InTag, int32_t InSize, struct FString InExtra); // Function LimNative.LimNativeLowLevel.GetGroupMembers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d2090
	void GetGroupMember(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID, struct FString InMemberID); // Function LimNative.LimNativeLowLevel.GetGroupMember // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d1f20
	void GetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID, struct FString InKey); // Function LimNative.LimNativeLowLevel.GetGroupAttr // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d1db0
	void GetGroupAllAttrs(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID); // Function LimNative.LimNativeLowLevel.GetGroupAllAttrs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d1c90
	void GetGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID); // Function LimNative.LimNativeLowLevel.GetGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d1b70
	void GetGMEToken(struct FLimNativeLowLevelWrapper& InCtx, struct FString InAppId, struct FString InUserId, struct FString InRoomId); // Function LimNative.LimNativeLowLevel.GetGMEToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d1930
	void GetFriends(struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, struct FString InExtra); // Function LimNative.LimNativeLowLevel.GetFriends // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d1790
	void GetFriendRequests(struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, struct FString InExtra); // Function LimNative.LimNativeLowLevel.GetFriendRequests // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d15f0
	void GetConvs(struct FLimNativeLowLevelWrapper& InCtx, int32_t InSize, struct FString InExtra); // Function LimNative.LimNativeLowLevel.GetConvs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d12d0
	void GetConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.GetConvChatLevelConfig // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d1220
	void GetConvAttr(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, struct FString InKey); // Function LimNative.LimNativeLowLevel.GetConvAttr // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d1060
	void GetConvAllAttrs(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType); // Function LimNative.LimNativeLowLevel.GetConvAllAttrs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d0f00
	void GetConv(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType); // Function LimNative.LimNativeLowLevel.GetConv // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d0da0
	void GetConnState(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.GetConnState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d0cf0
	void GetBlockees(struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, struct FString InExtra); // Function LimNative.LimNativeLowLevel.GetBlockees // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d0b50
	void GetAllConfigs(struct FLimNativeLowLevelWrapper& InCtx); // Function LimNative.LimNativeLowLevel.GetAllConfigs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d0aa0
	void DestroyGroup(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID); // Function LimNative.LimNativeLowLevel.DestroyGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d04e0
	void DestroyConv(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType); // Function LimNative.LimNativeLowLevel.DestroyConv // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9d0380
	void DestoryInstance(); // Function LimNative.LimNativeLowLevel.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d0360
	struct FLimNativeLowLevelWrapper CreateLIM(struct FString InServerEnvID); // Function LimNative.LimNativeLowLevel.CreateLIM // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d0240
	void CreateGroup(struct FLimNativeLowLevelWrapper& InCtx, struct TArray<struct FString> InMembers, struct FString InGroupName, struct FString InExtra); // Function LimNative.LimNativeLowLevel.CreateGroup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cffa0
	void CreateFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId, struct FString InExtra); // Function LimNative.LimNativeLowLevel.CreateFriendRequest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cfe30
	void CreateConv(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType, struct FString InExtra); // Function LimNative.LimNativeLowLevel.CreateConv // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cfc70
	void ClearConv(struct FLimNativeLowLevelWrapper& InCtx, struct FString InConvID, enum class ELimNativeConvType InConvType); // Function LimNative.LimNativeLowLevel.ClearConv // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cfb10
	void CheckImage(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUrl); // Function LimNative.LimNativeLowLevel.CheckImage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cf9f0
	void CancelFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId, struct FString InRequestID, struct FString InExtra); // Function LimNative.LimNativeLowLevel.CancelFriendRequest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cf830
	void Call(struct FLimNativeLowLevelWrapper& InCtx, struct FString InJsonString); // Function LimNative.LimNativeLowLevel.Call // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cf710
	void BlockeeExists(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId); // Function LimNative.LimNativeLowLevel.BlockeeExists // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cf5f0
	void AddToBlockee(struct FLimNativeLowLevelWrapper& InCtx, struct FString InUserId); // Function LimNative.LimNativeLowLevel.AddToBlockee // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cf4d0
	void AddGroupMember(struct FLimNativeLowLevelWrapper& InCtx, struct FString InGroupID, struct FString InMemberID); // Function LimNative.LimNativeLowLevel.AddGroupMember // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cf360
	void AcceptFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, struct FString InRequestID, struct FString InExtra); // Function LimNative.LimNativeLowLevel.AcceptFriendRequest // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9cf1f0
};

