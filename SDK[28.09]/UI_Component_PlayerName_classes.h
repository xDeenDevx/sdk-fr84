// WidgetBlueprintGeneratedClass UI_Component_PlayerName.UI_Component_PlayerName_C
// Size: 0x688 (Inherited: 0x348)
struct UUI_Component_PlayerName_C : UUIComponentPlayerName {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USolarTextBlock* Txt_PlayerName; // 0x350(0x08)
	struct FS_VIP_TxtInfo DefaultTxtInfo; // 0x358(0x88)
	enum class E_Type_PlayerName_Vip_Color VIP_State; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct TMap<enum class E_Type_PlayerName_Vip_Color, struct FS_VIP_TxtInfo> VIP_TxtInfos; // 0x3e8(0x50)
	bool Cheater; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FS_VIP_TxtInfo CheatTxtInfo; // 0x440(0x88)
	bool Killed; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct FS_VIP_TxtInfo KilledTxtInfo; // 0x4d0(0x88)
	bool bSpecialSelf; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct FS_VIP_TxtInfo SpecialSelfTxtInfo; // 0x560(0x88)
	struct FS_VIP_TxtInfo CurTxtInfo; // 0x5e8(0x88)
	struct FText DefaultText; // 0x670(0x18)

	void SetIsKilled(bool IsKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsKilled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetIsCheater(bool bCheater); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsCheater // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetVipStyle(enum class E_Type_PlayerName_Vip_Color VIP_Type); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVipStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetPlayerNameAndStyle(struct FString NickName, bool bCheat, enum class E_Type_PlayerName_Vip_Color VIP_Type, bool bKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerNameAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetPlayerName(struct FString NickName); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetDefaultStyle(bool bSpecialSelf); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDefaultStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetNameStyle(bool bCheater, enum class E_Type_PlayerName_Vip_Color VIP_State, bool bKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetNameStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ReSize(); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.ReSize // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void UpdatePlayerNameAndStyle(struct FString NickName, char VipType, bool bCheat, bool bKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.UpdatePlayerNameAndStyle // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void SetText(struct FString Content); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetText // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void SetTextColorAndOpacity(struct FSlateColor InColor); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetTextColorAndOpacity // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void SetStyle(char VipType, bool bCheat, bool bKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetStyle // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void SetDeath(bool bDeath); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDeath // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void SetVip(char VipType); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVip // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void SetCheater(bool bCheat); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetCheater // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_PlayerName(int32_t EntryPoint); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.ExecuteUbergraph_UI_Component_PlayerName // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

