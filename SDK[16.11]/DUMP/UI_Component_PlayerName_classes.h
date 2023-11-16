// WidgetBlueprintGeneratedClass UI_Component_PlayerName.UI_Component_PlayerName_C
// Size: 0x740 (Inherited: 0x400)
struct UUI_Component_PlayerName_C : UUIComponentPlayerName {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarTextBlock* Txt_PlayerName; // 0x408(0x08)
	struct FS_VIP_TxtInfo DefaultTxtInfo; // 0x410(0x88)
	enum class E_Type_PlayerName_Vip_Color VIP_State; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct TMap<enum class E_Type_PlayerName_Vip_Color, struct FS_VIP_TxtInfo> VIP_TxtInfos; // 0x4a0(0x50)
	bool Cheater; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct FS_VIP_TxtInfo CheatTxtInfo; // 0x4f8(0x88)
	bool Killed; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct FS_VIP_TxtInfo KilledTxtInfo; // 0x588(0x88)
	bool bSpecialSelf; // 0x610(0x01)
	char pad_611[0x7]; // 0x611(0x07)
	struct FS_VIP_TxtInfo SpecialSelfTxtInfo; // 0x618(0x88)
	struct FS_VIP_TxtInfo CurTxtInfo; // 0x6a0(0x88)
	struct FText DefaultText; // 0x728(0x18)

	void SetIsKilled(bool IsKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsKilled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetIsCheater(bool bCheater); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsCheater // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetVipStyle(enum class E_Type_PlayerName_Vip_Color VIP_Type); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVipStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetPlayerNameAndStyle(struct FString NickName, bool bCheat, enum class E_Type_PlayerName_Vip_Color VIP_Type, bool bKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerNameAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetPlayerName(struct FString NickName); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetDefaultStyle(bool bSpecialSelf); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDefaultStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetNameStyle(bool bCheater, enum class E_Type_PlayerName_Vip_Color VIP_State, bool bKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetNameStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ReSize(); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.ReSize // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void UpdatePlayerNameAndStyle(struct FString NickName, char VipType, bool bCheat, bool bKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.UpdatePlayerNameAndStyle // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void SetText(struct FString Content); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetText // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void SetTextColorAndOpacity(struct FSlateColor InColor); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetTextColorAndOpacity // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void SetStyle(char VipType, bool bCheat, bool bKilled); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetStyle // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void SetDeath(bool bDeath); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDeath // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void SetVip(char VipType); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVip // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void SetCheater(bool bCheat); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetCheater // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_PlayerName(int32_t EntryPoint); // Function UI_Component_PlayerName.UI_Component_PlayerName_C.ExecuteUbergraph_UI_Component_PlayerName // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

