/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package 13_UI.

/// Class /Game/13_UI/Blueprints/Lobby/UIServerList_Item.UIServerList_Item_C
/// Size: 0x0018 (0x000348 - 0x000360)
class UUIServerList_Item_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UImage*                                            Img_Selected;                                               // 0x0350   (0x0008)  
	USolarTextBlock*                                   Txt_ServerName;                                             // 0x0358   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UIServerList_Item.UIServerList_Item_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UIServerList_Item.UIServerList_Item_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UIServerList_Item.UIServerList_Item_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UIServerList_Item.UIServerList_Item_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UIServerList_Item.UIServerList_Item_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UIServerList_Item.UIServerList_Item_C.ExecuteUbergraph_UIServerList_Item
	void ExecuteUbergraph_UIServerList_Item(int32_t EntryPoint);                                                             // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C
/// Size: 0x0138 (0x000348 - 0x000480)
class UUI_Update_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Enter;                                                 // 0x0350   (0x0008)  
	UButton*                                           Btn_Fix;                                                    // 0x0358   (0x0008)  
	USolarButton*                                      btn_link;                                                   // 0x0360   (0x0008)  
	USolarButton*                                      btn_new;                                                    // 0x0368   (0x0008)  
	UCanvasPanel*                                      CanvasPanel;                                                // 0x0370   (0x0008)  
	UImage*                                            icon_link;                                                  // 0x0378   (0x0008)  
	UImage*                                            Image;                                                      // 0x0380   (0x0008)  
	UImage*                                            Img_Bg_Update;                                              // 0x0388   (0x0008)  
	UImage*                                            img_light_link;                                             // 0x0390   (0x0008)  
	UImage*                                            Img_Logo;                                                   // 0x0398   (0x0008)  
	UImage*                                            img_Mask;                                                   // 0x03A0   (0x0008)  
	UCanvasPanel*                                      Panel_Load;                                                 // 0x03A8   (0x0008)  
	USizeBox*                                          Panel_ServerList;                                           // 0x03B0   (0x0008)  
	UProgressBar*                                      ProgressBar_Download;                                       // 0x03B8   (0x0008)  
	UButton*                                           StartGame;                                                  // 0x03C0   (0x0008)  
	USolarTextBlock*                                   StartGameText;                                              // 0x03C8   (0x0008)  
	USolarTextBlock*                                   text_link;                                                  // 0x03D0   (0x0008)  
	USolarTextBlock*                                   text_new;                                                   // 0x03D8   (0x0008)  
	USolarTextBlock*                                   text_or;                                                    // 0x03E0   (0x0008)  
	UTileView*                                         TileView_ServerList;                                        // 0x03E8   (0x0008)  
	UTextBlock*                                        Txt_LatestBuildNumber;                                      // 0x03F0   (0x0008)  
	USolarTextBlock*                                   Txt_Loading;                                                // 0x03F8   (0x0008)  
	UTextBlock*                                        Txt_SourceBuildNumber;                                      // 0x0400   (0x0008)  
	USolarTextBlock*                                   Txt_Speed;                                                  // 0x0408   (0x0008)  
	USolarTextBlock*                                   Txt_Tips;                                                   // 0x0410   (0x0008)  
	UUI_UpdateLoadingBase_C*                           UpdateLoadingBase;                                          // 0x0418   (0x0008)  
	UWidgetSwitcher*                                   wgs_start;                                                  // 0x0420   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0428   (0x0008)  
	FSlateColor                                        Color_hoverd;                                               // 0x0430   (0x0028)  
	FSlateColor                                        Color_default;                                              // 0x0458   (0x0028)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.OnVideoReady
	void OnVideoReady();                                                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.InitMedia
	void InitMedia(bool& Result);                                                                                            // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.FinishLoadLobby
	void FinishLoadLobby(int32_t Type);                                                                                      // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.ReceiveShow
	void ReceiveShow();                                                                                                      // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.ConnectGateExec
	void ConnectGateExec();                                                                                                  // [0xb43660] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.ReceiveHide
	void ReceiveHide();                                                                                                      // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();                              // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();                              // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Lobby/UI_Update.UI_Update_C.ExecuteUbergraph_UI_Update
	void ExecuteUbergraph_UI_Update(int32_t EntryPoint);                                                                     // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_UpdateLoadingBase.UI_UpdateLoadingBase_C
/// Size: 0x0010 (0x0004B0 - 0x0004C0)
class UUI_UpdateLoadingBase_C : public UUI_LoadingBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B0   (0x0008)  
	UCanvasPanel*                                      Panel_Load;                                                 // 0x04B8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetPercentText
	void SetPercentText(FText NewParam);                                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetImgBgHidden
	void SetImgBgHidden();                                                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.ExecuteUbergraph_UI_UpdateLoadingBase
	void ExecuteUbergraph_UI_UpdateLoadingBase(int32_t EntryPoint);                                                          // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Common/UI_Root.UI_Root_C
/// Size: 0x0089 (0x000348 - 0x0003D1)
class UUI_Root_C : public USolarUIRoot
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UCanvasPanel*                                      BattleNoticeRoot;                                           // 0x0350   (0x0008)  
	UCanvasPanel*                                      BattleRoot;                                                 // 0x0358   (0x0008)  
	UCanvasPanel*                                      BattleRootGuide;                                            // 0x0360   (0x0008)  
	UCanvasPanel*                                      BattleRootOverlay;                                          // 0x0368   (0x0008)  
	UCanvasPanel*                                      CommonRoot;                                                 // 0x0370   (0x0008)  
	UCanvasPanel*                                      ExternalToolsRoot;                                          // 0x0378   (0x0008)  
	UCanvasPanel*                                      Guide;                                                      // 0x0380   (0x0008)  
	UCanvasPanel*                                      Loading;                                                    // 0x0388   (0x0008)  
	UCanvasPanel*                                      Map;                                                        // 0x0390   (0x0008)  
	UCanvasPanel*                                      MiddleRoot;                                                 // 0x0398   (0x0008)  
	UCanvasPanel*                                      NoticeRoot;                                                 // 0x03A0   (0x0008)  
	UCanvasPanel*                                      PopRoot;                                                    // 0x03A8   (0x0008)  
	UCanvasPanel*                                      Reconnecting;                                               // 0x03B0   (0x0008)  
	UCanvasPanel*                                      TipsRoot;                                                   // 0x03B8   (0x0008)  
	UCanvasPanel*                                      UnderBattleRoot;                                            // 0x03C0   (0x0008)  
	float                                              AdapterOffsetLeft;                                          // 0x03C8   (0x0004)  
	float                                              AdapterOffsetRight;                                         // 0x03CC   (0x0004)  
	bool                                               EnableAutoAdaptation;                                       // 0x03D0   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Common/UI_Root.UI_Root_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Common/UI_Root.UI_Root_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/UI_Root.UI_Root_C.CustomEvent
	void CustomEvent(UObject* Publisher, UObject* Payload, TArray<FString>& MetaData);                                       // [0x2649560] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/UI_Root.UI_Root_C.ExecuteUbergraph_UI_Root
	void ExecuteUbergraph_UI_Root(int32_t EntryPoint);                                                                       // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Component/UI_Option.UI_Option_C
/// Size: 0x0020 (0x000348 - 0x000368)
class UUI_Option_C : public USolarUserWidget
{ 
public:
	UImage*                                            Img_Tick;                                                   // 0x0348   (0x0008)  
	UImage*                                            Img_Tick;                                                   // 0x0350   (0x0008)  
	USolarCheckBox*                                    SolarCheckBox_Switch;                                       // 0x0358   (0x0008)  
	USolarTextBlock*                                   SolarTxt_metion;                                            // 0x0360   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Option.UI_Option_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C
/// Size: 0x004C (0x000348 - 0x000394)
class UUI_Component_Close_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	USolarButton*                                      Btn_Close;                                                  // 0x0350   (0x0008)  
	UImage*                                            Img_Close_Nml;                                              // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           OnClicked;                                                  // 0x0360   (0x0010)  
	bool                                               Black;                                                      // 0x0370   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0371   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnPressed;                                                  // 0x0378   (0x0010)  
	bool                                               White;                                                      // 0x0388   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0389   (0x0003)  MISSED
	FVector2D                                          Icon_Size;                                                  // 0x038C   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                           // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();                             // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();                             // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();                           // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.ExecuteUbergraph_UI_Component_Close
	void ExecuteUbergraph_UI_Component_Close(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.OnPressed__DelegateSignature
	void OnPressed__DelegateSignature();                                                                                     // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Close.UI_Component_Close_C.OnClicked__DelegateSignature
	void OnClicked__DelegateSignature();                                                                                     // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C
/// Size: 0x00E8 (0x000350 - 0x000438)
class UUI_Component_Btn_C : public UComponentButtonBaseWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_Remind;                                                // 0x0358   (0x0008)  
	UWidgetAnimation*                                  Anim_Hold;                                                  // 0x0360   (0x0008)  
	UWidgetAnimation*                                  Anim_Hover;                                                 // 0x0368   (0x0008)  
	USolarImage*                                       Img_Btn;                                                    // 0x0370   (0x0008)  
	USolarImage*                                       Img_Icon;                                                   // 0x0378   (0x0008)  
	USolarImage*                                       img_Mask;                                                   // 0x0380   (0x0008)  
	USolarImage*                                       Img_Shadow;                                                 // 0x0388   (0x0008)  
	UCanvasPanel*                                      Panel_Press;                                                // 0x0390   (0x0008)  
	UScaleBox*                                         ScaleBox;                                                   // 0x0398   (0x0008)  
	USizeBox*                                          Size_Btn;                                                   // 0x03A0   (0x0008)  
	USizeBox*                                          Size_Icon;                                                  // 0x03A8   (0x0008)  
	USolarTextBlock*                                   Text_Btn;                                                   // 0x03B0   (0x0008)  
	UNamedSlot*                                        WidgetSlot;                                                 // 0x03B8   (0x0008)  
	TEnumAsByte<E_Type_Btn>                            BtnType;                                                    // 0x03C0   (0x0001)  
	TEnumAsByte<E_State_Btn>                           BtnState;                                                   // 0x03C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x03C2   (0x0002)  MISSED
	FVector2D                                          BtnSize;                                                    // 0x03C4   (0x0008)  
	bool                                               IsUseBtnImag;                                               // 0x03CC   (0x0001)  
	bool                                               IsUseText;                                                  // 0x03CD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x03CE   (0x0002)  MISSED
	FString                                            Text;                                                       // 0x03D0   (0x0010)  
	bool                                               IsUseLocID;                                                 // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x03E1   (0x0003)  MISSED
	int32_t                                            LocID;                                                      // 0x03E4   (0x0004)  
	ESolarSupportLanguages                             PreviewLang;                                                // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x03E9   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnClicked;                                                  // 0x03F0   (0x0010)  
	FMulticastInlineDelegate                           OnPressed;                                                  // 0x0400   (0x0010)  
	FMulticastInlineDelegate                           OnReleased;                                                 // 0x0410   (0x0010)  
	bool                                               IsIcon;                                                     // 0x0420   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0421   (0x0007)  MISSED
	UObject*                                           Icon;                                                       // 0x0428   (0x0008)  
	FVector2D                                          Icon_Size;                                                  // 0x0430   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.IsAvailable
	void IsAvailable(bool& Availble);                                                                                        // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.SetBtnTxt
	void SetBtnTxt(FString NewParam);                                                                                        // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.SetBtnState
	void SetBtnState(TEnumAsByte<E_State_Btn> State);                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.GetLocalText
	FString GetLocalText();                                                                                                  // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.Update
	void Update(bool IsDesignTime);                                                                                          // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.SetBtnText
	void SetBtnText(FString 	c®”, TEnumAsByte<E_State_Btn> 	c®”);                                                            // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();                         // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();                         // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();                        // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.OnLocLangChanged
	void OnLocLangChanged(UObject* Publisher, UObject* Payload, TArray<FString>& MetaData);                                  // [0x2649560] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.ExecuteUbergraph_UI_Component_Btn
	void ExecuteUbergraph_UI_Component_Btn(int32_t EntryPoint);                                                              // [0x2649560] Final|HasDefaults    
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.OnReleased__DelegateSignature
	void OnReleased__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.OnClicked__DelegateSignature
	void OnClicked__DelegateSignature();                                                                                     // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Btn.UI_Component_Btn_C.OnPressed__DelegateSignature
	void OnPressed__DelegateSignature();                                                                                     // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Common/NewRichTextBlockDecorator.NewRichTextBlockDecorator_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UNewRichTextBlockDecorator_C : public URichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C
/// Size: 0x0118 (0x000348 - 0x000460)
class UCommonTwiceConfirmWindow_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Enter_Anim;                                                 // 0x0350   (0x0008)  
	UBackgroundBlur*                                   BlurMask;                                                   // 0x0358   (0x0008)  
	UUI_Component_Btn_C*                               CancleBtn;                                                  // 0x0360   (0x0008)  
	USolarTextBlock*                                   CancleBtnText;                                              // 0x0368   (0x0008)  
	UTextBlock*                                        CancleText;                                                 // 0x0370   (0x0008)  
	UImage*                                            CancleTextBG;                                               // 0x0378   (0x0008)  
	UUI_Component_Close_C*                             CloseBtn;                                                   // 0x0380   (0x0008)  
	UUI_Component_Btn_C*                               ConfirmBtn;                                                 // 0x0388   (0x0008)  
	USolarTextBlock*                                   ConfirmBtnText;                                             // 0x0390   (0x0008)  
	UTextBlock*                                        ConfirmText;                                                // 0x0398   (0x0008)  
	UImage*                                            ConfirmTextBG;                                              // 0x03A0   (0x0008)  
	URichTextBlock*                                    Context;                                                    // 0x03A8   (0x0008)  
	UEditableText*                                     EditableText;                                               // 0x03B0   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x03B8   (0x0008)  
	UImage*                                            Img_Frame;                                                  // 0x03C0   (0x0008)  
	UImage*                                            Mask;                                                       // 0x03C8   (0x0008)  
	UCanvasPanel*                                      Panel_Enter;                                                // 0x03D0   (0x0008)  
	UScaleBox*                                         ScaleBox;                                                   // 0x03D8   (0x0008)  
	USolarTextBlock*                                   Title;                                                      // 0x03E0   (0x0008)  
	UUI_Option_C*                                      UI_Option;                                                  // 0x03E8   (0x0008)  
	FSlateColor                                        HiddenColor;                                                // 0x03F0   (0x0028)  
	FSlateColor                                        VisibleColor;                                               // 0x0418   (0x0028)  
	FMulticastInlineDelegate                           ConfirmClicked;                                             // 0x0440   (0x0010)  
	FMulticastInlineDelegate                           CancelClicked;                                              // 0x0450   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();                                     // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__CancleBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__CancleBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();                                      // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();                                       // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.ExecuteUbergraph_CommonTwiceConfirmWindow
	void ExecuteUbergraph_CommonTwiceConfirmWindow(int32_t EntryPoint);                                                      // [0x2649560] Final|HasDefaults    
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.CancelClicked__DelegateSignature
	void CancelClicked__DelegateSignature();                                                                                 // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.ConfirmClicked__DelegateSignature
	void ConfirmClicked__DelegateSignature();                                                                                // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Common/UI_BlockAll.UI_BlockAll_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UUI_BlockAll_C : public USolarUserWidget
{ 
public:
	UCanvasPanel*                                      Panel_Block;                                                // 0x0348   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Common/UI_BlockAll.UI_BlockAll_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Common/WidgetTween.WidgetTween_C
/// Size: 0x0000 (0x000388 - 0x000388)
class UWidgetTween_C : public UTweenWidget
{ 
public:
};

/// Class /Game/13_UI/Blueprints/Common/ImageTween.ImageTween_C
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UImageTween_C : public UTweenImage
{ 
public:
};

/// Class /Game/13_UI/Blueprints/Common/GaugeImage.GaugeImage_C
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UGaugeImage_C : public UGaugeImage
{ 
public:
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UUI_Lobby_Mention_Container_C : public USolarUserWidget
{ 
public:
	UCanvasPanel*                                      CanvasPanel_Container;                                      // 0x0348   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Config/WP_PanelConfig.WP_PanelConfig_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UWP_PanelConfig_C : public UUIPanelConfig
{ 
public:
};

/// Class /Game/13_UI/Blueprints/Common/LimRichTextBlockDecorator.LimRichTextBlockDecorator_C
/// Size: 0x0000 (0x000030 - 0x000030)
class ULimRichTextBlockDecorator_C : public URichTextBlockImageDecorator
{ 
public:
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C
/// Size: 0x0089 (0x000260 - 0x0002E9)
class UUI_Component_Switch_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Anim_SwitchCycle;                                           // 0x0268   (0x0008)  
	UWidgetAnimation*                                  Anim_Switch;                                                // 0x0270   (0x0008)  
	UImage*                                            Img_Line;                                                   // 0x0278   (0x0008)  
	UImage*                                            Img_Switch;                                                 // 0x0280   (0x0008)  
	USizeBox*                                          Size;                                                       // 0x0288   (0x0008)  
	USizeBox*                                          SizeBox;                                                    // 0x0290   (0x0008)  
	USolarTextBlock*                                   Text_Universal;                                             // 0x0298   (0x0008)  
	UButton*                                           TouchArea;                                                  // 0x02A0   (0x0008)  
	bool                                               IsCircleType;                                               // 0x02A8   (0x0001)  
	bool                                               Switch_On;                                                  // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02AA   (0x0002)  MISSED
	FVector2D                                          TouchSize;                                                  // 0x02AC   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnStateChanged;                                             // 0x02B8   (0x0010)  
	FVector2D                                          SwitchSize;                                                 // 0x02C8   (0x0008)  
	bool                                               bCustomClicked;                                             // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02D1   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnSwitchClicked;                                            // 0x02D8   (0x0010)  
	bool                                               Text;                                                       // 0x02E8   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C.SetType
	void SetType(bool IsCircleType);                                                                                         // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C.InitValue
	void InitValue(bool InValue);                                                                                            // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C.SetValue
	void SetValue(bool InValue, bool CallChangeEvent, bool PlayAnimation);                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C.BndEvt__TouchArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__TouchArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                           // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C.ExecuteUbergraph_UI_Component_Switch
	void ExecuteUbergraph_UI_Component_Switch(int32_t EntryPoint);                                                           // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C.OnSwitchClicked__DelegateSignature
	void OnSwitchClicked__DelegateSignature();                                                                               // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Switch.UI_Component_Switch_C.OnStateChanged__DelegateSignature
	void OnStateChanged__DelegateSignature(bool NewValue);                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Chat/UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C
/// Size: 0x00AC (0x000348 - 0x0003F4)
class UUI_MicroPhoneOperation_Item_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UImage*                                            BackBG;                                                     // 0x0350   (0x0008)  
	UImage*                                            Img_TeamPos;                                                // 0x0358   (0x0008)  
	UOverlay*                                          Overlay_PosInTeam;                                          // 0x0360   (0x0008)  
	USolarCheckBox*                                    SolarCheckBox_Switch;                                       // 0x0368   (0x0008)  
	FLinearColor                                       Color1;                                                     // 0x0370   (0x0010)  
	FLinearColor                                       Color2;                                                     // 0x0380   (0x0010)  
	FLinearColor                                       Color3;                                                     // 0x0390   (0x0010)  
	FLinearColor                                       Color4;                                                     // 0x03A0   (0x0010)  
	FLinearColor                                       ColorBG1;                                                   // 0x03B0   (0x0010)  
	FLinearColor                                       ColorBG2;                                                   // 0x03C0   (0x0010)  
	FLinearColor                                       ColorBG3;                                                   // 0x03D0   (0x0010)  
	FLinearColor                                       ColorBG4;                                                   // 0x03E0   (0x0010)  
	int32_t                                            OrderId;                                                    // 0x03F0   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Chat/UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Chat/UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.SetOrder
	void SetOrder(int32_t OrderId);                                                                                          // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Chat/UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Chat/UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.ExecuteUbergraph_UI_MicroPhoneOperation_Item
	void ExecuteUbergraph_UI_MicroPhoneOperation_Item(int32_t EntryPoint);                                                   // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C
/// Size: 0x003C (0x000348 - 0x000384)
class UUI_Component_Emoji_Item_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UButton*                                           Btn_Use;                                                    // 0x0350   (0x0008)  
	UImage*                                            Item_BG;                                                    // 0x0358   (0x0008)  
	UImage*                                            Item_BG_Empty;                                              // 0x0360   (0x0008)  
	UImage*                                            Item_icon;                                                  // 0x0368   (0x0008)  
	UWidgetSwitcher*                                   Switcher;                                                   // 0x0370   (0x0008)  
	TEnumAsByte<E_Item_Quality>                        Quality;                                                    // 0x0378   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0379   (0x0003)  MISSED
	float                                              EmojiUseCD;                                                 // 0x037C   (0x0004)  
	float                                              ValidEmojiUseDistance;                                      // 0x0380   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.SetQuality
	void SetQuality(TEnumAsByte<E_Item_Quality> Quality);                                                                    // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.ExecuteUbergraph_UI_Component_Emoji_Item
	void ExecuteUbergraph_UI_Component_Emoji_Item(int32_t EntryPoint);                                                       // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Vip/UI_Vip_Cards.UI_Vip_Cards_C
/// Size: 0x0054 (0x000348 - 0x00039C)
class UUI_Vip_Cards_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0350   (0x0008)  
	UButton*                                           Btn_Card;                                                   // 0x0358   (0x0008)  
	UImage*                                            Img_Card;                                                   // 0x0360   (0x0008)  
	UImage*                                            Img_Star;                                                   // 0x0368   (0x0008)  
	UImage*                                            MI_Glow;                                                    // 0x0370   (0x0008)  
	UImage*                                            MI_Glow;                                                    // 0x0378   (0x0008)  
	UImage*                                            MI_Wipes;                                                   // 0x0380   (0x0008)  
	USizeBox*                                          Size_Item;                                                  // 0x0388   (0x0008)  
	int32_t                                            Type_Card;                                                  // 0x0390   (0x0004)  
	int32_t                                            Size_W;                                                     // 0x0394   (0x0004)  
	int32_t                                            Size_H;                                                     // 0x0398   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Vip/UI_Vip_Cards.UI_Vip_Cards_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Vip/UI_Vip_Cards.UI_Vip_Cards_C.SetCardType
	void SetCardType(int32_t CardType);                                                                                      // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Vip/UI_Vip_Cards.UI_Vip_Cards_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Vip/UI_Vip_Cards.UI_Vip_Cards_C.ExecuteUbergraph_UI_Vip_Cards
	void ExecuteUbergraph_UI_Vip_Cards(int32_t EntryPoint);                                                                  // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C
/// Size: 0x0019 (0x000348 - 0x000361)
class UUI_Lobby_Banner_Slot2_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UButton*                                           Btn_Banner;                                                 // 0x0350   (0x0008)  
	UImage*                                            Img;                                                        // 0x0358   (0x0008)  
	bool                                               SelectType;                                                 // 0x0360   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.ChangeShowPanelView
	void ChangeShowPanelView();                                                                                              // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.ExecuteUbergraph_UI_Lobby_Banner_Slot2
	void ExecuteUbergraph_UI_Lobby_Banner_Slot2(int32_t EntryPoint);                                                         // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C
/// Size: 0x0018 (0x000348 - 0x000360)
class UUI_Lobby_Banner_Slot_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	USolarImageURL*                                    ImageURL;                                                   // 0x0350   (0x0008)  
	UImage*                                            Img_Default;                                                // 0x0358   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.ExecuteUbergraph_UI_Lobby_Banner_Slot
	void ExecuteUbergraph_UI_Lobby_Banner_Slot(int32_t EntryPoint);                                                          // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C
/// Size: 0x0060 (0x000358 - 0x0003B8)
class UUI_Lobby_DownLoad_Slot_C : public USolarItemCardViewWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0358   (0x0008)  
	USolarButton*                                      Btn_Down;                                                   // 0x0360   (0x0008)  
	USolarButton*                                      Btn_Downing;                                                // 0x0368   (0x0008)  
	USolarButton*                                      Btn_Pause;                                                  // 0x0370   (0x0008)  
	USolarImage*                                       Img_Line;                                                   // 0x0378   (0x0008)  
	UOverlay*                                          Overlay_Finish;                                             // 0x0380   (0x0008)  
	UProgressBar*                                      ProgressBar_Download;                                       // 0x0388   (0x0008)  
	USolarTextBlock*                                   Text_Title;                                                 // 0x0390   (0x0008)  
	USolarTextBlock*                                   Txt_Numb;                                                   // 0x0398   (0x0008)  
	USolarTextBlock*                                   Txt_Speed;                                                  // 0x03A0   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_Btn;                                         // 0x03A8   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_Text;                                        // 0x03B0   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.SetLineState
	void SetLineState(bool IsHide);                                                                                          // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.DownStatusChanged
	void DownStatusChanged(ESolarItemDownloadType NewParam);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BndEvt__Btn_Downing_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Btn_Downing_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.ExecuteUbergraph_UI_Lobby_DownLoad_Slot
	void ExecuteUbergraph_UI_Lobby_DownLoad_Slot(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Target/UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C
/// Size: 0x0040 (0x000348 - 0x000388)
class UUI_Target_Card_Medal_Item_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	USolarButton*                                      Btn_Press;                                                  // 0x0350   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0358   (0x0008)  
	UImage*                                            img_Medal;                                                  // 0x0360   (0x0008)  
	bool                                               bLargeMedal;                                                // 0x0368   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0369   (0x0007)  MISSED
	UObject*                                           MedalIcon;                                                  // 0x0370   (0x0008)  
	bool                                               bSmallMedal;                                                // 0x0378   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0379   (0x0007)  MISSED
	UTexture2D*                                        Medal;                                                      // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.BPCalLuaInitData
	void BPCalLuaInitData(int32_t ID, int32_t Type, int32_t Level);                                                          // [0xb43660] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.SetSmallIcon
	void SetSmallIcon(UTexture2D* NewParam, bool NewParam1);                                                                 // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.SetLargeIcon
	void SetLargeIcon(UTexture2D* NewParam1, bool NewParam);                                                                 // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.ChangeTargetCardMedalView
	void ChangeTargetCardMedalView(int32_t ID, int32_t Type, int32_t Level);                                                 // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.ExecuteUbergraph_UI_Target_Card_Medal_Item
	void ExecuteUbergraph_UI_Target_Card_Medal_Item(int32_t EntryPoint);                                                     // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C
/// Size: 0x00C7 (0x000348 - 0x00040F)
class UUI_Component_PlayerHead_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	USolarButton*                                      Btn_ShowCard;                                               // 0x0350   (0x0008)  
	UCanvasPanel*                                      Canvas_Frame;                                               // 0x0358   (0x0008)  
	USolarImageURL*                                    Img_Avatar;                                                 // 0x0360   (0x0008)  
	UImage*                                            Img_AvatarFrame;                                            // 0x0368   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0370   (0x0008)  
	UImage*                                            Img_BGLine;                                                 // 0x0378   (0x0008)  
	UImage*                                            Img_Empty;                                                  // 0x0380   (0x0008)  
	UImage*                                            Img_Gender;                                                 // 0x0388   (0x0008)  
	UImage*                                            Img_Gender_Bg;                                              // 0x0390   (0x0008)  
	UImage*                                            Img_Social;                                                 // 0x0398   (0x0008)  
	UOverlay*                                          Overlay_Normal;                                             // 0x03A0   (0x0008)  
	UCanvasPanel*                                      Panel_FrameAnim;                                            // 0x03A8   (0x0008)  
	USizeBox*                                          Size;                                                       // 0x03B0   (0x0008)  
	USizeBox*                                          Size;                                                       // 0x03B8   (0x0008)  
	USizeBox*                                          Size_Avatar;                                                // 0x03C0   (0x0008)  
	USizeBox*                                          Size_Vip;                                                   // 0x03C8   (0x0008)  
	UUI_Vip_Icon_Type_C*                               UI_Vip;                                                     // 0x03D0   (0x0008)  
	bool                                               ShowBusinessCardBtn;                                        // 0x03D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03D9   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnClicked;                                                  // 0x03E0   (0x0010)  
	FMulticastInlineDelegate                           OnReleased;                                                 // 0x03F0   (0x0010)  
	bool                                               IsNonuseFrame;                                              // 0x0400   (0x0001)  
	bool                                               Empty;                                                      // 0x0401   (0x0001)  
	TEnumAsByte<E_Type_Social>                         Social;                                                     // 0x0402   (0x0001)  
	bool                                               GenderOn;                                                   // 0x0403   (0x0001)  
	TEnumAsByte<E_Type_Gender>                         Gender;                                                     // 0x0404   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0405   (0x0003)  MISSED
	float                                              Size;                                                       // 0x0408   (0x0004)  
	bool                                               Vip;                                                        // 0x040C   (0x0001)  
	bool                                               IsExamine;                                                  // 0x040D   (0x0001)  
	bool                                               IsCustom;                                                   // 0x040E   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarSize
	void SetAvatarSize(bool IsCustom);                                                                                       // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetDefaultSteamAvatar
	void SetDefaultSteamAvatar();                                                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetVipType
	void SetVipType(char VipType);                                                                                           // [0xb43660] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnTouchMoved
	FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x2649560] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarState
	void SetAvatarState(bool IsCollapsed);                                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();                     // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                      // [0x2649560] BlueprintEvent       
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.ExecuteUbergraph_UI_Component_PlayerHead
	void ExecuteUbergraph_UI_Component_PlayerHead(int32_t EntryPoint);                                                       // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnReleased__DelegateSignature
	void OnReleased__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked__DelegateSignature
	void OnClicked__DelegateSignature();                                                                                     // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/UI_Anim_Circle.UI_Anim_Circle_1_C
/// Size: 0x0018 (0x000260 - 0x000278)
class UUI_Anim_Circle_1_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Anim_Loading;                                               // 0x0268   (0x0008)  
	UImage*                                            Img_Loading;                                                // 0x0270   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/UI_Anim_Circle.UI_Anim_Circle_1_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/UI_Anim_Circle.UI_Anim_Circle_1_C.PlayLoadingAnim
	void PlayLoadingAnim();                                                                                                  // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/UI_Anim_Circle.UI_Anim_Circle_1_C.StopLoadingAnim
	void StopLoadingAnim();                                                                                                  // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/UI_Anim_Circle.UI_Anim_Circle_1_C.ExecuteUbergraph_UI_Anim_Circle
	void ExecuteUbergraph_UI_Anim_Circle(int32_t EntryPoint);                                                                // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_2_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UBtn_Unlock_Anim_2_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Unlock;                                                // 0x0350   (0x0008)  
	UButton*                                           Btn_Locked;                                                 // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           OnAnimStarted;                                              // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           OnAnimEnded;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_2_C.OnAnimStart
	void OnAnimStart();                                                                                                      // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_2_C.OnAnimEnd
	void OnAnimEnd();                                                                                                        // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_2_C.ExecuteUbergraph_Btn_Unlock_Anim
	void ExecuteUbergraph_Btn_Unlock_Anim(int32_t EntryPoint);                                                               // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_2_C.OnAnimEnded__DelegateSignature
	void OnAnimEnded__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_2_C.OnAnimStarted__DelegateSignature
	void OnAnimStarted__DelegateSignature();                                                                                 // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Live.UI_Lobby_Live_C
/// Size: 0x0019 (0x000260 - 0x000279)
class UUI_Lobby_Live_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0268   (0x0008)  
	USolarRedHint_General_C*                           SolarHintPoint_Red;                                         // 0x0270   (0x0008)  
	bool                                               HintPoint;                                                  // 0x0278   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Live.UI_Lobby_Live_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Live.UI_Lobby_Live_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Live.UI_Lobby_Live_C.ExecuteUbergraph_UI_Lobby_Live
	void ExecuteUbergraph_UI_Lobby_Live(int32_t EntryPoint);                                                                 // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C
/// Size: 0x0140 (0x000348 - 0x000488)
class UTickerWidget_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	URichTextBlock*                                    RichText;                                                   // 0x0350   (0x0008)  
	USizeBox*                                          SizeBox;                                                    // 0x0358   (0x0008)  
	UCanvasPanel*                                      TextPanel;                                                  // 0x0360   (0x0008)  
	FText                                              Text;                                                       // 0x0368   (0x0018)  
	bool                                               bEnableTickering;                                           // 0x0380   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0381   (0x0003)  MISSED
	float                                              LoopIntervalDuration;                                       // 0x0384   (0x0004)  
	float                                              AnimationSpeed;                                             // 0x0388   (0x0004)  
	bool                                               bCanTicker;                                                 // 0x038C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	float                                              OriTextWidth;                                               // 0x0390   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0394   (0x0004)  MISSED
	FText                                              ShortenedText;                                              // 0x0398   (0x0018)  
	FTimerHandle                                       TimerHandle;                                                // 0x03B0   (0x0008)  
	bool                                               bEnableLocText;                                             // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x03B9   (0x0003)  MISSED
	int32_t                                            LocTextID;                                                  // 0x03BC   (0x0004)  
	bool                                               bIsAnimationPlaying;                                        // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x03C1   (0x0003)  MISSED
	float                                              TargetXVal;                                                 // 0x03C4   (0x0004)  
	float                                              DeltaTime;                                                  // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	FTimerHandle                                       TickerTimerHandle;                                          // 0x03D0   (0x0008)  
	FSlateFontInfo                                     Font;                                                       // 0x03D8   (0x0060)  
	FSlateColor                                        TxtColor;                                                   // 0x0438   (0x0028)  
	FLinearColor                                       ShadowColor;                                                // 0x0460   (0x0010)  
	FVector2D                                          ShadowOffset;                                               // 0x0470   (0x0008)  
	FVector2D                                          Size;                                                       // 0x0478   (0x0008)  
	float                                              Direction;                                                  // 0x0480   (0x0004)  
	bool                                               bAlwaysTickering;                                           // 0x0484   (0x0001)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x0485   (0x0001)  
	bool                                               bAlwaysKeepJustification;                                   // 0x0486   (0x0001)  
	TEnumAsByte<ETextJustify>                          NewVar;                                                     // 0x0487   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.UpdateText
	void UpdateText();                                                                                                       // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.ApplyJustification
	void ApplyJustification();                                                                                               // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.CanTicker
	void CanTicker();                                                                                                        // [0x2649560] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.PlayerTickerAnimHelper
	void PlayerTickerAnimHelper();                                                                                           // [0x2649560] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.SetTextEditorLoc
	void SetTextEditorLoc();                                                                                                 // [0x2649560] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.StopTickerAnimation
	void StopTickerAnimation();                                                                                              // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.PlayTickerAnimation
	void PlayTickerAnimation();                                                                                              // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.SetText
	void SetText(FText InText);                                                                                              // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.OnSynchronizeProperties
	void OnSynchronizeProperties();                                                                                          // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.OnHide
	void OnHide();                                                                                                           // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.OnSolarUIClosed
	void OnSolarUIClosed();                                                                                                  // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.CustomEvent
	void CustomEvent(UObject* Publisher, UObject* Payload, TArray<FString>& MetaData);                                       // [0x2649560] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Common/TickerWidget.TickerWidget_C.ExecuteUbergraph_TickerWidget
	void ExecuteUbergraph_TickerWidget(int32_t EntryPoint);                                                                  // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Vip/UI_Vip_Icon_Type.UI_Vip_Icon_Type_C
/// Size: 0x001C (0x000348 - 0x000364)
class UUI_Vip_Icon_Type_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	USolarImage*                                       Img_Vip_Icon;                                               // 0x0350   (0x0008)  
	USizeBox*                                          SizeBox;                                                    // 0x0358   (0x0008)  
	int32_t                                            Type;                                                       // 0x0360   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Vip/UI_Vip_Icon_Type.UI_Vip_Icon_Type_C.SetType
	void SetType(int32_t Type);                                                                                              // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Vip/UI_Vip_Icon_Type.UI_Vip_Icon_Type_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Vip/UI_Vip_Icon_Type.UI_Vip_Icon_Type_C.ExecuteUbergraph_UI_Vip_Icon_Type
	void ExecuteUbergraph_UI_Vip_Icon_Type(int32_t EntryPoint);                                                              // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C
/// Size: 0x0340 (0x000348 - 0x000688)
class UUI_Component_PlayerName_C : public UUIComponentPlayerName
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	USolarTextBlock*                                   Txt_PlayerName;                                             // 0x0350   (0x0008)  
	FS_VIP_TxtInfo                                     DefaultTxtInfo;                                             // 0x0358   (0x0088)  
	TEnumAsByte<E_Type_PlayerName_Vip_Color>           VIP_State;                                                  // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03E1   (0x0007)  MISSED
	TMap<TEnumAsByte, FS_VIP_TxtInfo>                  VIP_TxtInfos;                                               // 0x03E8   (0x0050)  
	bool                                               Cheater;                                                    // 0x0438   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0439   (0x0007)  MISSED
	FS_VIP_TxtInfo                                     CheatTxtInfo;                                               // 0x0440   (0x0088)  
	bool                                               Killed;                                                     // 0x04C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x04C9   (0x0007)  MISSED
	FS_VIP_TxtInfo                                     KilledTxtInfo;                                              // 0x04D0   (0x0088)  
	bool                                               bSpecialSelf;                                               // 0x0558   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0559   (0x0007)  MISSED
	FS_VIP_TxtInfo                                     SpecialSelfTxtInfo;                                         // 0x0560   (0x0088)  
	FS_VIP_TxtInfo                                     CurTxtInfo;                                                 // 0x05E8   (0x0088)  
	FText                                              DefaultText;                                                // 0x0670   (0x0018)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsKilled
	void SetIsKilled(bool IsKilled);                                                                                         // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsCheater
	void SetIsCheater(bool bCheater);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetVipStyle
	void SetVipStyle(TEnumAsByte<E_Type_PlayerName_Vip_Color> VIP_Type);                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerNameAndStyle
	void SetPlayerNameAndStyle(FString NickName, bool bCheat, TEnumAsByte<E_Type_PlayerName_Vip_Color> VIP_Type, bool bKilled); // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerName
	void SetPlayerName(FString NickName);                                                                                    // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetDefaultStyle
	void SetDefaultStyle(bool bSpecialSelf);                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetNameStyle
	void SetNameStyle(bool bCheater, TEnumAsByte<E_Type_PlayerName_Vip_Color> VIP_State, bool bKilled);                      // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.ReSize
	void ReSize();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.UpdatePlayerNameAndStyle
	void UpdatePlayerNameAndStyle(FString NickName, char VipType, bool bCheat, bool bKilled);                                // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetText
	void SetText(FString Content);                                                                                           // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetTextColorAndOpacity
	void SetTextColorAndOpacity(FSlateColor InColor);                                                                        // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetStyle
	void SetStyle(char VipType, bool bCheat, bool bKilled);                                                                  // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetDeath
	void SetDeath(bool bDeath);                                                                                              // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetVip
	void SetVip(char VipType);                                                                                               // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.SetCheater
	void SetCheater(bool bCheat);                                                                                            // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_PlayerName.UI_Component_PlayerName_C.ExecuteUbergraph_UI_Component_PlayerName
	void ExecuteUbergraph_UI_Component_PlayerName(int32_t EntryPoint);                                                       // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Platform.UI_Component_Platform_C
/// Size: 0x0020 (0x000348 - 0x000368)
class UUI_Component_Platform_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x0350   (0x0008)  
	USizeBox*                                          Size_Icon;                                                  // 0x0358   (0x0008)  
	TEnumAsByte<E_Platform>                            E_Platform;                                                 // 0x0360   (0x0001)  
	bool                                               UseIcon;                                                    // 0x0361   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0362   (0x0002)  MISSED
	int32_t                                            IconSize;                                                   // 0x0364   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Platform.UI_Component_Platform_C.SetBlendPlatform
	void SetBlendPlatform(bool UseIcon);                                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Platform.UI_Component_Platform_C.SetSizeState
	void SetSizeState(TEnumAsByte<E_Platform> Platform);                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Platform.UI_Component_Platform_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Platform.UI_Component_Platform_C.ExecuteUbergraph_UI_Component_Platform
	void ExecuteUbergraph_UI_Component_Platform(int32_t EntryPoint);                                                         // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Chat/UI_Chat_Wave.UI_Chat_Wave_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UUI_Chat_Wave_C : public USolarUserWidget
{ 
public:
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0348   (0x0008)  
};

/// Class /Game/13_UI/Blueprints/Rank/UI_Rank_Icon_Small.UI_Rank_Icon_Small_C
/// Size: 0x0054 (0x000348 - 0x00039C)
class UUI_Rank_Icon_Small_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UImage*                                            Img_Rank;                                                   // 0x0350   (0x0008)  
	UImage*                                            Img_Rank_Word;                                              // 0x0358   (0x0008)  
	USizeBox*                                          Size_Rank;                                                  // 0x0360   (0x0008)  
	USizeBox*                                          Size_Txt;                                                   // 0x0368   (0x0008)  
	USolarTextBlock*                                   TextBlock_StarNum;                                          // 0x0370   (0x0008)  
	USolarTextBlock*                                   Txt_LegendRank;                                             // 0x0378   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_Detail;                                      // 0x0380   (0x0008)  
	int32_t                                            LevelID;                                                    // 0x0388   (0x0004)  
	bool                                               STAR;                                                       // 0x038C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	int32_t                                            IconSize;                                                   // 0x0390   (0x0004)  
	FVector2D                                          TxtSize;                                                    // 0x0394   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Rank/UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Rank/UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewJustIcon
	void FormatViewJustIcon(int32_t LevelID);                                                                                // [0xb43660] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Rank/UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetStar
	void SetStar(bool STAR);                                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Rank/UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatView
	void FormatView(int32_t LevelID);                                                                                        // [0xb43660] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Rank/UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Rank/UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetRankIconView
	void SetRankIconView(int32_t Param);                                                                                     // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Rank/UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.ExecuteUbergraph_UI_Rank_Icon_Small
	void ExecuteUbergraph_UI_Rank_Icon_Small(int32_t EntryPoint);                                                            // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Video_Hunt.UI_Lobby_Video_Hunt_C
/// Size: 0x0018 (0x000348 - 0x000360)
class UUI_Lobby_Video_Hunt_C : public USolarUserWidget
{ 
public:
	UButton*                                           Btn_Close;                                                  // 0x0348   (0x0008)  
	UImage*                                            Img_VideoPlayer;                                            // 0x0350   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0358   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Video_Hunt.UI_Lobby_Video_Hunt_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Topup.UI_Lobby_Topup_C
/// Size: 0x0018 (0x000260 - 0x000278)
class UUI_Lobby_Topup_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0268   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0270   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Topup.UI_Lobby_Topup_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Topup.UI_Lobby_Topup_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Topup.UI_Lobby_Topup_C.ExecuteUbergraph_UI_Lobby_Topup
	void ExecuteUbergraph_UI_Lobby_Topup(int32_t EntryPoint);                                                                // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C
/// Size: 0x008D (0x000348 - 0x0003D5)
class UUI_Lobby_TeamMember_Operation_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	USolarButton*                                      Btn_QuitTeam;                                               // 0x0350   (0x0008)  
	USolarButton*                                      Btn_ShowOperationPanel;                                     // 0x0358   (0x0008)  
	UImage*                                            Img_AppDeactivated_Mark;                                    // 0x0360   (0x0008)  
	UImage*                                            Img_Captain;                                                // 0x0368   (0x0008)  
	UImage*                                            Img_Captain_Bg;                                             // 0x0370   (0x0008)  
	UImage*                                            Img_MicroPhone_Mark;                                        // 0x0378   (0x0008)  
	UOverlay*                                          Img_Ready_Mark;                                             // 0x0380   (0x0008)  
	UOverlay*                                          Overlay_Vip;                                                // 0x0388   (0x0008)  
	UCanvasPanel*                                      Panel_Captain;                                              // 0x0390   (0x0008)  
	USizeBox*                                          SizeBox_Wave;                                               // 0x0398   (0x0008)  
	USolarTextBlock*                                   Text_NickName;                                              // 0x03A0   (0x0008)  
	UUI_Chat_Wave_C*                                   UI_Chat_Wave;                                               // 0x03A8   (0x0008)  
	UUI_Component_Platform_C*                          UI_Component_Platform;                                      // 0x03B0   (0x0008)  
	UUI_Component_PlayerName_C*                        UI_Component_PlayerName;                                    // 0x03B8   (0x0008)  
	UUI_Rank_Icon_Small_C*                             UI_Rank_Icon_Small;                                         // 0x03C0   (0x0008)  
	UUI_Vip_Icon_Type_C*                               UI_Vip_Icon_Type;                                           // 0x03C8   (0x0008)  
	int32_t                                            IndexInLobby;                                               // 0x03D0   (0x0004)  
	bool                                               STEAM;                                                      // 0x03D4   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.ExecuteUbergraph_UI_Lobby_TeamMember_Operation
	void ExecuteUbergraph_UI_Lobby_TeamMember_Operation(int32_t EntryPoint);                                                 // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C
/// Size: 0x0274 (0x000348 - 0x0005BC)
class UUI_Lobby_SupplyBox_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Normal_Loop;                                           // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_Claim_Loop;                                            // 0x0358   (0x0008)  
	UButton*                                           Btn_SupplyBox;                                              // 0x0360   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0368   (0x0008)  
	UImage*                                            Img_Box;                                                    // 0x0370   (0x0008)  
	UImage*                                            Img_Glow;                                                   // 0x0378   (0x0008)  
	UImage*                                            Img_Glow_Claim;                                             // 0x0380   (0x0008)  
	UImage*                                            Img_Star;                                                   // 0x0388   (0x0008)  
	UOverlay*                                          Overlay_BarBg;                                              // 0x0390   (0x0008)  
	UOverlay*                                          Overlay_Claim;                                              // 0x0398   (0x0008)  
	UProgressBar*                                      ProgressBar_Num;                                            // 0x03A0   (0x0008)  
	USolarRichTextBlock*                               RichText_Progress;                                          // 0x03A8   (0x0008)  
	USlider*                                           Slider_Num;                                                 // 0x03B0   (0x0008)  
	UTickerWidget_C*                                   TickerWidget;                                               // 0x03B8   (0x0008)  
	USolarTextBlock*                                   Txt_Claimed;                                                // 0x03C0   (0x0008)  
	UTextBlock*                                        Txt_ClaimedNum;                                             // 0x03C8   (0x0008)  
	bool                                               Claim;                                                      // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03D1   (0x0003)  MISSED
	int32_t                                            State;                                                      // 0x03D4   (0x0004)  
	UImage*                                            Img_Bg_1;                                                   // 0x03D8   (0x0008)  
	UImage*                                            Img_Bg_3;                                                   // 0x03E0   (0x0008)  
	FProgressBarStyle                                  NewVar;                                                     // 0x03E8   (0x01D0)  
	float                                              PreviewPercent;                                             // 0x05B8   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.SetPercent
	void SetPercent(float Percent);                                                                                          // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.SetState
	void SetState(int32_t State, bool Claim);                                                                                // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.ExecuteUbergraph_UI_Lobby_SupplyBox
	void ExecuteUbergraph_UI_Lobby_SupplyBox(int32_t EntryPoint);                                                            // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_StartBtn.UI_Lobby_StartBtn_C
/// Size: 0x01D4 (0x000348 - 0x00051C)
class UUI_Lobby_StartBtn_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Tournament_Enter;                                      // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_Activity_Enter;                                        // 0x0358   (0x0008)  
	UWidgetAnimation*                                  Loop_Normal_Anim;                                           // 0x0360   (0x0008)  
	UWidgetAnimation*                                  Loading_Anim;                                               // 0x0368   (0x0008)  
	UWidgetAnimation*                                  Loop_Start_Anim;                                            // 0x0370   (0x0008)  
	UButton*                                           Btn_Activity_Point;                                         // 0x0378   (0x0008)  
	UButton*                                           Btn_Cancel;                                                 // 0x0380   (0x0008)  
	UButton*                                           Btn_Clan_Join;                                              // 0x0388   (0x0008)  
	UButton*                                           Btn_Clan_Reward;                                            // 0x0390   (0x0008)  
	UButton*                                           Btn_GameMode;                                               // 0x0398   (0x0008)  
	UButton*                                           Btn_Start;                                                  // 0x03A0   (0x0008)  
	UButton*                                           Btn_Tournament_Reward;                                      // 0x03A8   (0x0008)  
	UUI_Component_NationalFlag_C*                      ClanFlag;                                                   // 0x03B0   (0x0008)  
	UScaleBox*                                         GameMode;                                                   // 0x03B8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_PC;                                           // 0x03C0   (0x0008)  
	UImage*                                            Image_X;                                                    // 0x03C8   (0x0008)  
	UImage*                                            Img_Activity_BG;                                            // 0x03D0   (0x0008)  
	UImage*                                            Img_Activity_BG_Light;                                      // 0x03D8   (0x0008)  
	UImage*                                            Img_Activity_BG_Light;                                      // 0x03E0   (0x0008)  
	UImage*                                            Img_Activity_BG_Light;                                      // 0x03E8   (0x0008)  
	UImage*                                            Img_Activity_BG_Light;                                      // 0x03F0   (0x0008)  
	UImage*                                            Img_Arrow;                                                  // 0x03F8   (0x0008)  
	UImage*                                            Img_Arrow_Light;                                            // 0x0400   (0x0008)  
	UImage*                                            Img_GameMode;                                               // 0x0408   (0x0008)  
	UImage*                                            Img_Loading;                                                // 0x0410   (0x0008)  
	UImage*                                            Img_Start_Bg;                                               // 0x0418   (0x0008)  
	UImage*                                            Img_Start_Normal_Light;                                     // 0x0420   (0x0008)  
	UCanvasPanel*                                      Panel_Activity_All;                                         // 0x0428   (0x0008)  
	UCanvasPanel*                                      Panel_Anim;                                                 // 0x0430   (0x0008)  
	UCanvasPanel*                                      Panel_Battle;                                               // 0x0438   (0x0008)  
	UCanvasPanel*                                      Panel_Cancel;                                               // 0x0440   (0x0008)  
	UCanvasPanel*                                      Panel_Gamemode;                                             // 0x0448   (0x0008)  
	UCanvasPanel*                                      Panel_Matching;                                             // 0x0450   (0x0008)  
	UCanvasPanel*                                      panel_start;                                                // 0x0458   (0x0008)  
	UCanvasPanel*                                      Panel_Start_Anim;                                           // 0x0460   (0x0008)  
	USolarRedHint_General_C*                           RedHint_More;                                               // 0x0468   (0x0008)  
	USolarImage*                                       SolarImage_ClanFlag;                                        // 0x0470   (0x0008)  
	USolarRichTextBlock*                               SolarRichTextBlock_Team;                                    // 0x0478   (0x0008)  
	UTextBlock*                                        Text_MatchDuration;                                         // 0x0480   (0x0008)  
	USolarTextBlock*                                   Text_Matching;                                              // 0x0488   (0x0008)  
	USolarTextBlock*                                   Text_Start;                                                 // 0x0490   (0x0008)  
	UTickerWidget_C*                                   TickerWidget_Join;                                          // 0x0498   (0x0008)  
	UTickerWidget_C*                                   TickerWidget_Reward;                                        // 0x04A0   (0x0008)  
	USolarRichTextBlock*                               Txt_Activity_Point;                                         // 0x04A8   (0x0008)  
	USolarTextBlock*                                   TXT_GameMap;                                                // 0x04B0   (0x0008)  
	USolarTextBlock*                                   Txt_Mode;                                                   // 0x04B8   (0x0008)  
	UTextBlock*                                        Txt_Team_Num;                                               // 0x04C0   (0x0008)  
	URichTextBlock*                                    Txt_Tournament_Reward;                                      // 0x04C8   (0x0008)  
	UUI_Component_Platform_C*                          UI_Component_Platform;                                      // 0x04D0   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_Activity;                                    // 0x04D8   (0x0008)  
	bool                                               Leader;                                                     // 0x04E0   (0x0001)  
	bool                                               Matching;                                                   // 0x04E1   (0x0001)  
	bool                                               Ready;                                                      // 0x04E2   (0x0001)  
	bool                                               Disable;                                                    // 0x04E3   (0x0001)  
	bool                                               PC;                                                         // 0x04E4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04E5   (0x0003)  MISSED
	FLinearColor                                       StartBtnLinearColorWordSolid;                               // 0x04E8   (0x0010)  
	FLinearColor                                       StartBtnLinearColorTimeSolid;                               // 0x04F8   (0x0010)  
	FLinearColor                                       StartBtnLinearColorWordGreyout;                             // 0x0508   (0x0010)  
	float                                              ActivityIntervalTime;                                       // 0x0518   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.UpdatePlatformBlendState
	void UpdatePlatformBlendState(bool NewParam);                                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.UpdatePanelState
	void UpdatePanelState(bool Leader, bool Matching, bool Ready, bool Disable);                                             // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.Update All Widgets
	void Update All Widgets();                                                                                               // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.ExecuteUbergraph_UI_Lobby_StartBtn
	void ExecuteUbergraph_UI_Lobby_StartBtn(int32_t EntryPoint);                                                             // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C
/// Size: 0x0099 (0x000348 - 0x0003E1)
class UUI_Lobby_Social_Entrance_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UButton*                                           Btn_Discord;                                                // 0x0350   (0x0008)  
	UButton*                                           Btn_Facebook;                                               // 0x0358   (0x0008)  
	UButton*                                           Btn_Instagram;                                              // 0x0360   (0x0008)  
	UButton*                                           Btn_LiveVideo;                                              // 0x0368   (0x0008)  
	UButton*                                           Btn_TikTok;                                                 // 0x0370   (0x0008)  
	UButton*                                           Btn_YouTube;                                                // 0x0378   (0x0008)  
	UCanvasPanel*                                      Discord;                                                    // 0x0380   (0x0008)  
	UCanvasPanel*                                      FACEBOOK;                                                   // 0x0388   (0x0008)  
	UCanvasPanel*                                      Instagram;                                                  // 0x0390   (0x0008)  
	UCanvasPanel*                                      Panel_LiveVideo;                                            // 0x0398   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x03A0   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x03A8   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x03B0   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_Instagram;                                     // 0x03B8   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_TikTok;                                        // 0x03C0   (0x0008)  
	UCanvasPanel*                                      TikTok;                                                     // 0x03C8   (0x0008)  
	UUI_Lobby_Live_C*                                  UI_Lobby_Live;                                              // 0x03D0   (0x0008)  
	UCanvasPanel*                                      YouTube;                                                    // 0x03D8   (0x0008)  
	bool                                               isShowGuide;                                                // 0x03E0   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ShowGuide
	void ShowGuide(bool ShowGuide);                                                                                          // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ExecuteUbergraph_UI_Lobby_Social_Entrance
	void ExecuteUbergraph_UI_Lobby_Social_Entrance(int32_t EntryPoint);                                                      // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C
/// Size: 0x004A (0x000348 - 0x000392)
class UUI_Lobby_Sanctuary_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UButton*                                           Btn_Sanctuary;                                              // 0x0350   (0x0008)  
	UBtn_Unlock_Anim_2_C*                              Btn_Unlock_Anim;                                            // 0x0358   (0x0008)  
	UImage*                                            Img_Arrow;                                                  // 0x0360   (0x0008)  
	UCanvasPanel*                                      Panel_Sanctuary;                                            // 0x0368   (0x0008)  
	UCanvasPanel*                                      Panel_SanctuaryContent;                                     // 0x0370   (0x0008)  
	UUI_Anim_Circle_1_C*                               Sanctuary_Matching;                                         // 0x0378   (0x0008)  
	UHorizontalBox*                                    Txt_Sanctuary;                                              // 0x0380   (0x0008)  
	UOverlay*                                          UI_Lobby_Sanctuary;                                         // 0x0388   (0x0008)  
	bool                                               Locked;                                                     // 0x0390   (0x0001)  
	bool                                               Matching;                                                   // 0x0391   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.BP_RefreshSanctuaryUI
	void BP_RefreshSanctuaryUI(bool bInLocked, bool bInMatching);                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ExecuteUbergraph_UI_Lobby_Sanctuary
	void ExecuteUbergraph_UI_Lobby_Sanctuary(int32_t EntryPoint);                                                            // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_RedPacket.UI_Lobby_RedPacket_C
/// Size: 0x0028 (0x000348 - 0x000370)
class UUI_Lobby_RedPacket_C : public USolarUserWidget
{ 
public:
	UWidgetAnimation*                                  Anim_Enter;                                                 // 0x0348   (0x0008)  
	UCanvasPanel*                                      Panel_RedPacket;                                            // 0x0350   (0x0008)  
	USolarTextBlock*                                   Txt_Countdown;                                              // 0x0358   (0x0008)  
	USolarTextBlock*                                   Txt_Time;                                                   // 0x0360   (0x0008)  
	UUI_Component_Close_C*                             UI_Component_Close;                                         // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_RedPacket.UI_Lobby_RedPacket_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Recruit.UI_Lobby_Recruit_C
/// Size: 0x0041 (0x000348 - 0x000389)
class UUI_Lobby_Recruit_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UButton*                                           Btn_Recruit;                                                // 0x0358   (0x0008)  
	UButton*                                           Btn_Recruit;                                                // 0x0360   (0x0008)  
	USolarTextBlock*                                   Txt_Invite;                                                 // 0x0368   (0x0008)  
	USolarTextBlock*                                   Txt_Invite1;                                                // 0x0370   (0x0008)  
	USolarTextBlock*                                   Txt_Invite2;                                                // 0x0378   (0x0008)  
	USolarTextBlock*                                   Txt_Recruit;                                                // 0x0380   (0x0008)  
	bool                                               Recruiting;                                                 // 0x0388   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Recruit.UI_Lobby_Recruit_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Recruit.UI_Lobby_Recruit_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Recruit.UI_Lobby_Recruit_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Recruit.UI_Lobby_Recruit_C.ExecuteUbergraph_UI_Lobby_Recruit
	void ExecuteUbergraph_UI_Lobby_Recruit(int32_t EntryPoint);                                                              // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_RandomPack.UI_Lobby_RandomPack_C
/// Size: 0x0048 (0x000348 - 0x000390)
class UUI_Lobby_RandomPack_C : public USolarUserWidget
{ 
public:
	UWidgetAnimation*                                  Enter_Anim;                                                 // 0x0348   (0x0008)  
	USolarButton*                                      Btn_RandomPack;                                             // 0x0350   (0x0008)  
	UCanvasPanel*                                      Bubble;                                                     // 0x0358   (0x0008)  
	UHorizontalBox*                                    Bubble_ToBeClaimed;                                         // 0x0360   (0x0008)  
	UImage*                                            Img_XELB;                                                   // 0x0368   (0x0008)  
	UCanvasPanel*                                      Panel_VX;                                                   // 0x0370   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x0378   (0x0008)  
	UTickerWidget_C*                                   Txt_Reminder;                                               // 0x0380   (0x0008)  
	UTickerWidget_C*                                   Txt_ToBeClaimed;                                            // 0x0388   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_RandomPack.UI_Lobby_RandomPack_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Profession.UI_Lobby_Profession_C
/// Size: 0x0040 (0x000348 - 0x000388)
class UUI_Lobby_Profession_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	USolarButton*                                      Btn_Change;                                                 // 0x0350   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x0358   (0x0008)  
	UImage*                                            img_iconBg;                                                 // 0x0360   (0x0008)  
	UImage*                                            img_iconBorder;                                             // 0x0368   (0x0008)  
	UImage*                                            img_iconBorder;                                             // 0x0370   (0x0008)  
	UOverlay*                                          Overlay;                                                    // 0x0378   (0x0008)  
	bool                                               Myself;                                                     // 0x0380   (0x0001)  
	TEnumAsByte<E_ProfessionType>                      ProfessionType;                                             // 0x0381   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0382   (0x0002)  MISSED
	int32_t                                            Index;                                                      // 0x0384   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Profession.UI_Lobby_Profession_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Profession.UI_Lobby_Profession_C.SetSelection
	void SetSelection(char Index);                                                                                           // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Profession.UI_Lobby_Profession_C.UpdateState
	void UpdateState();                                                                                                      // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Profession.UI_Lobby_Profession_C.Render
	void Render();                                                                                                           // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Profession.UI_Lobby_Profession_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Profession.UI_Lobby_Profession_C.ExecuteUbergraph_UI_Lobby_Profession
	void ExecuteUbergraph_UI_Lobby_Profession(int32_t EntryPoint);                                                           // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C
/// Size: 0x0040 (0x000348 - 0x000388)
class UUI_Lobby_PlayerInfo_C : public USolarUserWidget
{ 
public:
	UButton*                                           Btn_PlayerInfo;                                             // 0x0348   (0x0008)  
	UCanvasPanel*                                      Panel_PlayerInformation;                                    // 0x0350   (0x0008)  
	UProgressBar*                                      ProgressBar_PlayerExp;                                      // 0x0358   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x0360   (0x0008)  
	UTextBlock*                                        Txt_PlayerLevel;                                            // 0x0368   (0x0008)  
	UUI_Component_NationalFlag_C*                      UI_Component_NationalFlag;                                  // 0x0370   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0378   (0x0008)  
	UUI_Component_PlayerName_C*                        UI_Component_PlayerName;                                    // 0x0380   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C
/// Size: 0x0028 (0x000348 - 0x000370)
class UUI_Lobby_Mission_Reward_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Enter;                                                 // 0x0350   (0x0008)  
	UButton*                                           Btn_MissionReward;                                          // 0x0358   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x0360   (0x0008)  
	USolarTextBlock*                                   Txt_GameRecommend;                                          // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.ExecuteUbergraph_UI_Lobby_Mission_Reward
	void ExecuteUbergraph_UI_Lobby_Mission_Reward(int32_t EntryPoint);                                                       // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_MedalShow.UI_Lobby_MedalShow_C
/// Size: 0x0024 (0x000348 - 0x00036C)
class UUI_Lobby_MedalShow_C : public USolarUserWidget
{ 
public:
	UImage*                                            Img_MedalBG;                                                // 0x0348   (0x0008)  
	UUI_Target_Card_Medal_Item_C*                      MedalItem;                                                  // 0x0350   (0x0008)  
	UUI_Target_Card_Medal_Item_C*                      MedalItem;                                                  // 0x0358   (0x0008)  
	UUI_Target_Card_Medal_Item_C*                      MedalItem;                                                  // 0x0360   (0x0008)  
	int32_t                                            IndexInLobby;                                               // 0x0368   (0x0004)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_MedalShow.UI_Lobby_MedalShow_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_Lobby_Mainmenu_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UButton*                                           Btn_Garage;                                                 // 0x0350   (0x0008)  
	UButton*                                           Btn_Warehouse;                                              // 0x0358   (0x0008)  
	UButton*                                           Btn_Weapons;                                                // 0x0360   (0x0008)  
	USolarRedHint_General_C*                           HintPoint_Garage;                                           // 0x0368   (0x0008)  
	USolarRedHint_General_C*                           HintPoint_Weapon;                                           // 0x0370   (0x0008)  
	USolarRedHint_General_C*                           RedHint_Warehouse;                                          // 0x0378   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.ExecuteUbergraph_UI_Lobby_Mainmenu
	void ExecuteUbergraph_UI_Lobby_Mainmenu(int32_t EntryPoint);                                                             // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UUI_Lobby_Invite_Btn_C : public USolarUserWidget
{ 
public:
	UButton*                                           Btn_Invite;                                                 // 0x0348   (0x0008)  
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_Lobby_GameRecommend_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Arrow_Loop_Anim;                                            // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Enter_Anim;                                                 // 0x0358   (0x0008)  
	UButton*                                           Btn_GameRecommend;                                          // 0x0360   (0x0008)  
	UImage*                                            Img_Icon_GameMode;                                          // 0x0368   (0x0008)  
	USolarTextBlock*                                   Txt_GameRecommend;                                          // 0x0370   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.ExecuteUbergraph_UI_Lobby_GameRecommend
	void ExecuteUbergraph_UI_Lobby_GameRecommend(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad.UI_Lobby_DownLoad_C
/// Size: 0x0061 (0x000348 - 0x0003A9)
class UUI_Lobby_DownLoad_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Enter_Anim;                                                 // 0x0350   (0x0008)  
	UUI_Component_Close_C*                             Btn_Close;                                                  // 0x0358   (0x0008)  
	USolarButton*                                      Btn_Down_Load;                                              // 0x0360   (0x0008)  
	USolarButton*                                      Btn_Down_Normal;                                            // 0x0368   (0x0008)  
	USolarImage*                                       img_Mask;                                                   // 0x0370   (0x0008)  
	UListView*                                         List_DownLoad;                                              // 0x0378   (0x0008)  
	UCanvasPanel*                                      Panel_Btn;                                                  // 0x0380   (0x0008)  
	UCanvasPanel*                                      Panel_DownList;                                             // 0x0388   (0x0008)  
	UProgressBar*                                      ProgressBar_Load;                                           // 0x0390   (0x0008)  
	USolarTextBlock*                                   Txt_Count;                                                  // 0x0398   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_State;                                       // 0x03A0   (0x0008)  
	bool                                               BOpened;                                                    // 0x03A8   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnOpenDownloadList
	void OnOpenDownloadList();                                                                                               // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnInitialized
	void OnInitialized();                                                                                                    // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.CustomEvent
	void CustomEvent();                                                                                                      // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.ExecuteUbergraph_UI_Lobby_DownLoad
	void ExecuteUbergraph_UI_Lobby_DownLoad(int32_t EntryPoint);                                                             // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C
/// Size: 0x00BB (0x000348 - 0x000403)
class UUI_Lobby_BattlePass_Next_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_Upgrade;                                               // 0x0358   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0360   (0x0008)  
	UWidgetAnimation*                                  Anim_Max_Upgrade;                                           // 0x0368   (0x0008)  
	UButton*                                           Btn_BattlePass;                                             // 0x0370   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0378   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0380   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0388   (0x0008)  
	UImage*                                            Img_BG_Light;                                               // 0x0390   (0x0008)  
	UImage*                                            Img_BPBG;                                                   // 0x0398   (0x0008)  
	UImage*                                            img_Hero;                                                   // 0x03A0   (0x0008)  
	UImage*                                            img_Hero;                                                   // 0x03A8   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x03B0   (0x0008)  
	UImage*                                            Img_Weapon;                                                 // 0x03B8   (0x0008)  
	UProgressBar*                                      Level_Progress;                                             // 0x03C0   (0x0008)  
	UCanvasPanel*                                      Panel_BattlePass;                                           // 0x03C8   (0x0008)  
	UScaleBox*                                         Scale_BattlePass;                                           // 0x03D0   (0x0008)  
	UScaleBox*                                         ScaleBox_Type;                                              // 0x03D8   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x03E0   (0x0008)  
	USolarTextBlock*                                   Txt_BattlePass;                                             // 0x03E8   (0x0008)  
	UTextBlock*                                        Txt_Battlepass_Level;                                       // 0x03F0   (0x0008)  
	USolarTextBlock*                                   Txt_Type;                                                   // 0x03F8   (0x0008)  
	bool                                               isMax;                                                      // 0x0400   (0x0001)  
	bool                                               isUpdate;                                                   // 0x0401   (0x0001)  
	bool                                               isClaim;                                                    // 0x0402   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetClaimable
	void SetClaimable(bool NewParam);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetUpdate
	void SetUpdate(bool NewParam);                                                                                           // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetLevel
	void SetLevel(bool NewParam);                                                                                            // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.BattlePassStateChange_Event
	void BattlePassStateChange_Event();                                                                                      // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.BattlePassPlayUpgradeAnimation
	void BattlePassPlayUpgradeAnimation();                                                                                   // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.ExecuteUbergraph_UI_Lobby_BattlePass_Next
	void ExecuteUbergraph_UI_Lobby_BattlePass_Next(int32_t EntryPoint);                                                      // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C
/// Size: 0x00C3 (0x000348 - 0x00040B)
class UUI_Lobby_BattlePass3_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_Upgrade;                                               // 0x0358   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0360   (0x0008)  
	UWidgetAnimation*                                  Anim_Max_Upgrade;                                           // 0x0368   (0x0008)  
	UButton*                                           Btn_BattlePass;                                             // 0x0370   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0378   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0380   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0388   (0x0008)  
	UImage*                                            Img_BG_Light;                                               // 0x0390   (0x0008)  
	UImage*                                            Img_BPBG;                                                   // 0x0398   (0x0008)  
	UImage*                                            img_Hero;                                                   // 0x03A0   (0x0008)  
	UImage*                                            img_Hero;                                                   // 0x03A8   (0x0008)  
	UImage*                                            img_Hero;                                                   // 0x03B0   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x03B8   (0x0008)  
	UImage*                                            Img_Weapon;                                                 // 0x03C0   (0x0008)  
	UProgressBar*                                      Level_Progress;                                             // 0x03C8   (0x0008)  
	UCanvasPanel*                                      Panel_BattlePass;                                           // 0x03D0   (0x0008)  
	UScaleBox*                                         Scale_BattlePass;                                           // 0x03D8   (0x0008)  
	UScaleBox*                                         ScaleBox_Type;                                              // 0x03E0   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x03E8   (0x0008)  
	USolarTextBlock*                                   Txt_BattlePass;                                             // 0x03F0   (0x0008)  
	UTextBlock*                                        Txt_Battlepass_Level;                                       // 0x03F8   (0x0008)  
	USolarTextBlock*                                   Txt_Type;                                                   // 0x0400   (0x0008)  
	bool                                               isMax;                                                      // 0x0408   (0x0001)  
	bool                                               isUpdate;                                                   // 0x0409   (0x0001)  
	bool                                               isClaim;                                                    // 0x040A   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.SetClaimable
	void SetClaimable(bool NewParam);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.SetUpdate
	void SetUpdate(bool NewParam);                                                                                           // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.SetLevel
	void SetLevel(bool NewParam);                                                                                            // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.BattlePassStateChange_Event
	void BattlePassStateChange_Event();                                                                                      // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.BattlePassPlayUpgradeAnimation
	void BattlePassPlayUpgradeAnimation();                                                                                   // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.ExecuteUbergraph_UI_Lobby_BattlePass3
	void ExecuteUbergraph_UI_Lobby_BattlePass3(int32_t EntryPoint);                                                          // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C
/// Size: 0x00B3 (0x000348 - 0x0003FB)
class UUI_Lobby_BattlePass_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_Upgrade;                                               // 0x0358   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0360   (0x0008)  
	UWidgetAnimation*                                  Anim_Max_Upgrade;                                           // 0x0368   (0x0008)  
	UButton*                                           Btn_BattlePass;                                             // 0x0370   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0378   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0380   (0x0008)  
	UImage*                                            Img_Arrow_Glow;                                             // 0x0388   (0x0008)  
	UImage*                                            Img_BG_Light;                                               // 0x0390   (0x0008)  
	UImage*                                            Img_BPBG;                                                   // 0x0398   (0x0008)  
	UImage*                                            img_Hero;                                                   // 0x03A0   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x03A8   (0x0008)  
	UImage*                                            Img_Weapon;                                                 // 0x03B0   (0x0008)  
	UProgressBar*                                      Level_Progress;                                             // 0x03B8   (0x0008)  
	UCanvasPanel*                                      Panel_BattlePass;                                           // 0x03C0   (0x0008)  
	UScaleBox*                                         Scale_BattlePass;                                           // 0x03C8   (0x0008)  
	UScaleBox*                                         ScaleBox_Type;                                              // 0x03D0   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x03D8   (0x0008)  
	USolarTextBlock*                                   Txt_BattlePass;                                             // 0x03E0   (0x0008)  
	UTextBlock*                                        Txt_Battlepass_Level;                                       // 0x03E8   (0x0008)  
	USolarTextBlock*                                   Txt_Type;                                                   // 0x03F0   (0x0008)  
	bool                                               isMax;                                                      // 0x03F8   (0x0001)  
	bool                                               isUpdate;                                                   // 0x03F9   (0x0001)  
	bool                                               isClaim;                                                    // 0x03FA   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetClaimable
	void SetClaimable(bool Claimable);                                                                                       // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetUpdate
	void SetUpdate(bool Update);                                                                                             // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetLevel
	void SetLevel(bool Max);                                                                                                 // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.BattlePassStateChange_Event
	void BattlePassStateChange_Event();                                                                                      // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.BattlePassPlayUpgradeAnimation
	void BattlePassPlayUpgradeAnimation();                                                                                   // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.ExecuteUbergraph_UI_Lobby_BattlePass
	void ExecuteUbergraph_UI_Lobby_BattlePass(int32_t EntryPoint);                                                           // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Battery.UI_Lobby_Battery_C
/// Size: 0x0278 (0x000260 - 0x0004D8)
class UUI_Lobby_Battery_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UImage*                                            Img_Charging;                                               // 0x0268   (0x0008)  
	UProgressBar*                                      ProgressBar_Battery;                                        // 0x0270   (0x0008)  
	FSlateBrush                                        ProgressBarBgImage;                                         // 0x0278   (0x0098)  
	FSlateBrush                                        ProgressBarMarqueeImage;                                    // 0x0310   (0x0098)  
	FSlateBrush                                        ProgressBarFillNormal;                                      // 0x03A8   (0x0098)  
	FSlateBrush                                        ProgressBarFillCharging;                                    // 0x0440   (0x0098)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Battery.UI_Lobby_Battery_C.ForceRefreshBatteryUI
	void ForceRefreshBatteryUI();                                                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Battery.UI_Lobby_Battery_C.RefreshBatteryUI
	void RefreshBatteryUI(int32_t BatteryLevelNewParam, bool bCharging);                                                     // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Battery.UI_Lobby_Battery_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Battery.UI_Lobby_Battery_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Battery.UI_Lobby_Battery_C.EventRefreshBatteryUI
	void EventRefreshBatteryUI();                                                                                            // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Battery.UI_Lobby_Battery_C.Destruct
	void Destruct();                                                                                                         // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Battery.UI_Lobby_Battery_C.ExecuteUbergraph_UI_Lobby_Battery
	void ExecuteUbergraph_UI_Lobby_Battery(int32_t EntryPoint);                                                              // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner.UI_Lobby_Banner_C
/// Size: 0x0028 (0x000348 - 0x000370)
class UUI_Lobby_Banner_C : public USolarUserWidget
{ 
public:
	USizeBox*                                          BannerSizeBox;                                              // 0x0348   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         DragPanel;                                                  // 0x0350   (0x0008)  
	USolarImageURL*                                    Image_URL;                                                  // 0x0358   (0x0008)  
	USolarListView*                                    SolarListView_Banner;                                       // 0x0360   (0x0008)  
	USolarListView*                                    SolarListView_Image;                                        // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Banner.UI_Lobby_Banner_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Component/UI_Currency_Bar.UI_Currency_Bar_C
/// Size: 0x00D0 (0x000348 - 0x000418)
class UUI_Currency_Bar_C : public USolarUserWidget
{ 
public:
	UButton*                                           Btn_charge;                                                 // 0x0348   (0x0008)  
	UImage*                                            img_charge;                                                 // 0x0350   (0x0008)  
	UImage*                                            Img_Currency;                                               // 0x0358   (0x0008)  
	UImage*                                            Img_Currency;                                               // 0x0360   (0x0008)  
	UImage*                                            Img_Currency_01;                                            // 0x0368   (0x0008)  
	UImage*                                            Img_Currency_02;                                            // 0x0370   (0x0008)  
	UImage*                                            Line;                                                       // 0x0378   (0x0008)  
	UImage*                                            Line;                                                       // 0x0380   (0x0008)  
	UImage*                                            Line;                                                       // 0x0388   (0x0008)  
	UImage*                                            Line;                                                       // 0x0390   (0x0008)  
	UOverlay*                                          Overlay_Vip;                                                // 0x0398   (0x0008)  
	UCanvasPanel*                                      Panel_Currency_01;                                          // 0x03A0   (0x0008)  
	UCanvasPanel*                                      Panel_Currency_02;                                          // 0x03A8   (0x0008)  
	UCanvasPanel*                                      Panel_Currency_03;                                          // 0x03B0   (0x0008)  
	UCanvasPanel*                                      Panel_Currency_04;                                          // 0x03B8   (0x0008)  
	UCanvasPanel*                                      Panel_Root;                                                 // 0x03C0   (0x0008)  
	USolarButton*                                      SolarBtn_BG;                                                // 0x03C8   (0x0008)  
	USolarButton*                                      SolarBtn_BG;                                                // 0x03D0   (0x0008)  
	USolarButton*                                      SolarBtn_BG;                                                // 0x03D8   (0x0008)  
	USolarButton*                                      SolarBtn_BG_02;                                             // 0x03E0   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x03E8   (0x0008)  
	UTextBlock*                                        Txt_Number;                                                 // 0x03F0   (0x0008)  
	UTextBlock*                                        Txt_Number;                                                 // 0x03F8   (0x0008)  
	UTextBlock*                                        Txt_Number_01;                                              // 0x0400   (0x0008)  
	UTextBlock*                                        Txt_Number_02;                                              // 0x0408   (0x0008)  
	UUI_Vip_Cards_C*                                   UI_Vip_Cards;                                               // 0x0410   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Currency_Bar.UI_Currency_Bar_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Emoji_List.UI_Component_Emoji_List_C
/// Size: 0x0028 (0x000348 - 0x000370)
class UUI_Component_Emoji_List_C : public USolarUserWidget
{ 
public:
	USolarCheckButton*                                 Btn_Action;                                                 // 0x0348   (0x0008)  
	USolarCheckButton*                                 Btn_Emoji;                                                  // 0x0350   (0x0008)  
	UTileView*                                         List_Emoji;                                                 // 0x0358   (0x0008)  
	UCanvasPanel*                                      Panel_Tab;                                                  // 0x0360   (0x0008)  
	USolarCheckButtonGroup*                            Tab;                                                        // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji_List.UI_Component_Emoji_List_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Component/SolarRedHint_General.SolarRedHint_General_C
/// Size: 0x0023 (0x000348 - 0x00036B)
class USolarRedHint_General_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UImage*                                            Img_HintPoint;                                              // 0x0350   (0x0008)  
	UTextBlock*                                        Text_HintNum;                                               // 0x0358   (0x0008)  
	int64_t                                            HintKey;                                                    // 0x0360   (0x0008)  
	ERedHintPath                                       HintPath;                                                   // 0x0368   (0x0001)  
	bool                                               IsAutoRefresh;                                              // 0x0369   (0x0001)  
	TEnumAsByte<E_Type_RedHint>                        Type;                                                       // 0x036A   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/SolarRedHint_General.SolarRedHint_General_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Component/SolarRedHint_General.SolarRedHint_General_C.OnSetHintDataComplete
	void OnSetHintDataComplete();                                                                                            // [0xb43660] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/SolarRedHint_General.SolarRedHint_General_C.SetStyle
	void SetStyle(TEnumAsByte<E_Type_RedHint> Type);                                                                         // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/SolarRedHint_General.SolarRedHint_General_C.SetHintData
	void SetHintData(int64_t Key, ERedHintPath Path, bool bAutoRefresh, TEnumAsByte<E_Type_RedHint> Type);                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/SolarRedHint_General.SolarRedHint_General_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/SolarRedHint_General.SolarRedHint_General_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/SolarRedHint_General.SolarRedHint_General_C.ExecuteUbergraph_SolarRedHint_General
	void ExecuteUbergraph_SolarRedHint_General(int32_t EntryPoint);                                                          // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C
/// Size: 0x001D (0x000378 - 0x000395)
class UUI_Component_NationalFlag_C : public UUIComponentNationalFlag
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0378   (0x0008)  
	USizeBox*                                          SizeBox;                                                    // 0x0380   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_Flag;                                        // 0x0388   (0x0008)  
	float                                              Size;                                                       // 0x0390   (0x0004)  
	TEnumAsByte<E_FlagType>                            FlagType;                                                   // 0x0394   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetEmptyClan
	void SetEmptyClan();                                                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetFlagType
	void SetFlagType(TEnumAsByte<E_FlagType> FlagType);                                                                      // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C.Set UI State
	void Set UI State();                                                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetNationalFlagType
	void SetNationalFlagType();                                                                                              // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetClanFlagType
	void SetClanFlagType();                                                                                                  // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Component_C/UI_Component_NationalFlag.UI_Component_NationalFlag_C.ExecuteUbergraph_UI_Component_NationalFlag
	void ExecuteUbergraph_UI_Component_NationalFlag(int32_t EntryPoint);                                                     // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Chat/UI_MicroPhoneSetting.UI_MicroPhoneSetting_C
/// Size: 0x0110 (0x000348 - 0x000458)
class UUI_MicroPhoneSetting_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UUI_MicroPhoneOperation_Item_C*                    Micro1;                                                     // 0x0350   (0x0008)  
	UUI_MicroPhoneOperation_Item_C*                    Micro2;                                                     // 0x0358   (0x0008)  
	UUI_MicroPhoneOperation_Item_C*                    Micro3;                                                     // 0x0360   (0x0008)  
	UUI_MicroPhoneOperation_Item_C*                    Micro4;                                                     // 0x0368   (0x0008)  
	USolarCheckBox*                                    Microphone_AllOpen;                                         // 0x0370   (0x0008)  
	USolarCheckBox*                                    Microphone_MuteAll;                                         // 0x0378   (0x0008)  
	USolarCheckBox*                                    Microphone_TeamOpen;                                        // 0x0380   (0x0008)  
	UCheckBoxGroup*                                    MicroPhoneType;                                             // 0x0388   (0x0008)  
	UWidgetSwitcher*                                   OperatorSwitcher;                                           // 0x0390   (0x0008)  
	UVerticalBox*                                      PartnerList;                                                // 0x0398   (0x0008)  
	USolarCheckBox*                                    Speaker_AllOpen;                                            // 0x03A0   (0x0008)  
	USolarCheckBox*                                    Speaker_MuteAll;                                            // 0x03A8   (0x0008)  
	USolarCheckBox*                                    Speaker_TeamOpen;                                           // 0x03B0   (0x0008)  
	UCheckBoxGroup*                                    SpeakerPanelType;                                           // 0x03B8   (0x0008)  
	UImage*                                            TabMicroPhoneImg;                                           // 0x03C0   (0x0008)  
	USolarTextBlock*                                   TabMicroPhoneText;                                          // 0x03C8   (0x0008)  
	UImage*                                            TabSpeakerImg;                                              // 0x03D0   (0x0008)  
	USolarTextBlock*                                   TabSpeakerText;                                             // 0x03D8   (0x0008)  
	TMap<int32_t, UUI_MicroPhoneOperation_Item_C*>     PlayerChatMap;                                              // 0x03E0   (0x0050)  
	UObject*                                           ImgClose;                                                   // 0x0430   (0x0008)  
	UObject*                                           SpeakImgOn;                                                 // 0x0438   (0x0008)  
	UObject*                                           SpeakImgOff;                                                // 0x0440   (0x0008)  
	UObject*                                           MicroImgOn;                                                 // 0x0448   (0x0008)  
	UObject*                                           MicroImgOff;                                                // 0x0450   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Chat/UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Chat/UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Chat/UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.ExecuteUbergraph_UI_MicroPhoneSetting
	void ExecuteUbergraph_UI_MicroPhoneSetting(int32_t EntryPoint);                                                          // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Chat/UI_ChatPanel.UI_ChatPanel_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_ChatPanel_C : public USolarUserWidget
{ 
public:
	UButton*                                           Btn_Interaction;                                            // 0x0348   (0x0008)  
	UWidgetSwitcher*                                   Chat_Switcher;                                              // 0x0350   (0x0008)  
	UImage*                                            Img_message_bg03;                                           // 0x0358   (0x0008)  
	URichTextBlock*                                    Message;                                                    // 0x0360   (0x0008)  
	UTextBlock*                                        UnreadMessageCount;                                         // 0x0368   (0x0008)  
	UOverlay*                                          UnreadMessageNotifyPanel;                                   // 0x0370   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_ChatType;                                    // 0x0378   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Chat/UI_ChatPanel.UI_ChatPanel_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Chat/UI_ChatPanel.UI_ChatPanel_C.SetMsgText
	void SetMsgText(char ChatType, FString playerName, FString Msg, FString& OutputText);                                    // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_1_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UBtn_Unlock_Anim_1_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Unlock;                                                // 0x0350   (0x0008)  
	UButton*                                           Btn_Locked;                                                 // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           OnAnimStarted;                                              // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           OnAnimEnded;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_1_C.SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1
	void SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1();                                                                       // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_1_C.SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1
	void SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1();                                                                       // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_1_C.OnAnimStart
	void OnAnimStart();                                                                                                      // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_1_C.OnAnimEnd
	void OnAnimEnd();                                                                                                        // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_1_C.ExecuteUbergraph_Btn_Unlock_Anim
	void ExecuteUbergraph_Btn_Unlock_Anim(int32_t EntryPoint);                                                               // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_1_C.OnAnimEnded__DelegateSignature
	void OnAnimEnded__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/Btn_Unlock_Anim.Btn_Unlock_Anim_1_C.OnAnimStarted__DelegateSignature
	void OnAnimStarted__DelegateSignature();                                                                                 // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Warehouse/UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C
/// Size: 0x0000 (0x000348 - 0x000348)
class UUI_Warehouse_DragPanel_C : public USolarUserWidget
{ 
public:
};

/// Class /Game/13_UI/Blueprints/Settings/Customize/UI_Customize_Data.UI_Customize_Data_C
/// Size: 0x0010 (0x000260 - 0x000270)
class UUI_Customize_Data_C : public UUserWidget
{ 
public:
	TArray<FS_Customize_Element>                       ElementConfig;                                              // 0x0260   (0x0010)  
};

/// Class /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C
/// Size: 0x0340 (0x000348 - 0x000688)
class UUI_CustomizeLayout_JoyStickControl_Mode3_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Cardown_Drag;                                            // 0x0350   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_CarInfo_Drag;                                            // 0x0358   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Carup_Drag;                                              // 0x0360   (0x0008)  
	USolarButton*                                      BT_ChangeSeat;                                              // 0x0368   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Drive_Stop_Drag;                                         // 0x0370   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_DriveJoyStick_Drag;                                      // 0x0378   (0x0008)  
	UImage*                                            BT_Driver_Fire;                                             // 0x0380   (0x0008)  
	UImage*                                            BT_Driver_Fire;                                             // 0x0388   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Driver_Fire_Drag;                                        // 0x0390   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Driver_Fire_Drag;                                        // 0x0398   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_DriveShot_Drag;                                          // 0x03A0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_ExitWeapon_Drag;                                         // 0x03A8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Gunsight_Drag;                                           // 0x03B0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_JoystickSprint_Drag;                                     // 0x03B8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_OutVehicle_Drag;                                         // 0x03C0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_QuickADS_Drag;                                           // 0x03C8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Reload_Drag;                                             // 0x03D0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Skill_Drag;                                              // 0x03D8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Skill_Drag;                                              // 0x03E0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Switch_Drag;                                             // 0x03E8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Trumpet_Drag;                                            // 0x03F0   (0x0008)  
	UUniformGridPanel*                                 GridPanel_Normal;                                           // 0x03F8   (0x0008)  
	UImage*                                            Image;                                                      // 0x0400   (0x0008)  
	UImage*                                            Image;                                                      // 0x0408   (0x0008)  
	UImage*                                            Image;                                                      // 0x0410   (0x0008)  
	UImage*                                            Image;                                                      // 0x0418   (0x0008)  
	UImage*                                            Image;                                                      // 0x0420   (0x0008)  
	UImage*                                            Image;                                                      // 0x0428   (0x0008)  
	UImage*                                            Image;                                                      // 0x0430   (0x0008)  
	UImage*                                            Image;                                                      // 0x0438   (0x0008)  
	UImage*                                            Image;                                                      // 0x0440   (0x0008)  
	UImage*                                            Image;                                                      // 0x0448   (0x0008)  
	UImage*                                            Image;                                                      // 0x0450   (0x0008)  
	UImage*                                            Image;                                                      // 0x0458   (0x0008)  
	UImage*                                            Image_Reload;                                               // 0x0460   (0x0008)  
	UImage*                                            Image_ReloadBg;                                             // 0x0468   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0470   (0x0008)  
	UImage*                                            Img_Body;                                                   // 0x0478   (0x0008)  
	UImage*                                            img_Brand;                                                  // 0x0480   (0x0008)  
	UImage*                                            Img_Cardown;                                                // 0x0488   (0x0008)  
	UImage*                                            Img_Carup;                                                  // 0x0490   (0x0008)  
	UImage*                                            Img_Drive_Shot_Bg;                                          // 0x0498   (0x0008)  
	UImage*                                            Img_Drive_Shot_Icon;                                        // 0x04A0   (0x0008)  
	UImage*                                            Img_DriverSeat;                                             // 0x04A8   (0x0008)  
	UImage*                                            Img_Exit;                                                   // 0x04B0   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x04B8   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x04C0   (0x0008)  
	UImage*                                            Img_JoystickSprint_Select;                                  // 0x04C8   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x04D0   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x04D8   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x04E0   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x04E8   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x04F0   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x04F8   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0500   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0508   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0510   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0518   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0520   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0528   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0530   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0538   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0540   (0x0008)  
	UImage*                                            Img_Select_CarInfo;                                         // 0x0548   (0x0008)  
	UImage*                                            Img_Select_QuickADS;                                        // 0x0550   (0x0008)  
	UImage*                                            Img_SkillOuter;                                             // 0x0558   (0x0008)  
	UImage*                                            Img_SkillOuter;                                             // 0x0560   (0x0008)  
	UImage*                                            Img_Stop;                                                   // 0x0568   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x0570   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x0578   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x0580   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x0588   (0x0008)  
	UUI_Customize_Data_C*                              LayoutData;                                                 // 0x0590   (0x0008)  
	UCanvasPanel*                                      Panel_CarInfo;                                              // 0x0598   (0x0008)  
	UCanvasPanel*                                      Panel_DisableFire_Left;                                     // 0x05A0   (0x0008)  
	UCanvasPanel*                                      Panel_DisableFire_Right;                                    // 0x05A8   (0x0008)  
	UCanvasPanel*                                      Panel_Drive_Out;                                            // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_DriveCardown;                                         // 0x05B8   (0x0008)  
	UCanvasPanel*                                      Panel_DriveCarup;                                           // 0x05C0   (0x0008)  
	UCanvasPanel*                                      Panel_DriveShot;                                            // 0x05C8   (0x0008)  
	UCanvasPanel*                                      Panel_Gunsight;                                             // 0x05D0   (0x0008)  
	UCanvasPanel*                                      Panel_JoystickSprint;                                       // 0x05D8   (0x0008)  
	UCanvasPanel*                                      Panel_Line;                                                 // 0x05E0   (0x0008)  
	UCanvasPanel*                                      Panel_MoveJoyStick;                                         // 0x05E8   (0x0008)  
	UCanvasPanel*                                      Panel_MoveJoyStickScaleAndOpacity;                          // 0x05F0   (0x0008)  
	UCanvasPanel*                                      Panel_QuickADS;                                             // 0x05F8   (0x0008)  
	UCanvasPanel*                                      Panel_Reload;                                               // 0x0600   (0x0008)  
	UCanvasPanel*                                      Panel_SwitchSeat;                                           // 0x0608   (0x0008)  
	UCanvasPanel*                                      Panel_Trumpet;                                              // 0x0610   (0x0008)  
	UCanvasPanel*                                      Panel_Vehicle_PrimaryFire;                                  // 0x0618   (0x0008)  
	UCanvasPanel*                                      Panel_Vehicle_SecondaryFire;                                // 0x0620   (0x0008)  
	UCanvasPanel*                                      Panel_VehicleDrift;                                         // 0x0628   (0x0008)  
	UCanvasPanel*                                      Panel_VehicleSkill;                                         // 0x0630   (0x0008)  
	UCanvasPanel*                                      Panel_VehicleSkill;                                         // 0x0638   (0x0008)  
	UCanvasPanel*                                      Panel_Weapon_Exit;                                          // 0x0640   (0x0008)  
	USolarCheckBox*                                    Seat1;                                                      // 0x0648   (0x0008)  
	USolarCheckBox*                                    Seat2;                                                      // 0x0650   (0x0008)  
	USolarCheckBox*                                    Seat3;                                                      // 0x0658   (0x0008)  
	USolarCheckBox*                                    Seat4;                                                      // 0x0660   (0x0008)  
	UCheckBoxGroup*                                    SeatFlag;                                                   // 0x0668   (0x0008)  
	UTextBlock*                                        Txt_Health;                                                 // 0x0670   (0x0008)  
	UTextBlock*                                        Txt_Health_percent;                                         // 0x0678   (0x0008)  
	UTextBlock*                                        Txt_Speed;                                                  // 0x0680   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.Get_Hero01_CheckedState
	ECheckBoxState Get_Hero01_CheckedState();                                                                                // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3
	void ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3(int32_t EntryPoint);                                      // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_SteeringControl.UI_CustomizeLayout_SteeringControl_C
/// Size: 0x0398 (0x000348 - 0x0006E0)
class UUI_CustomizeLayout_SteeringControl_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Cardown_Drag;                                            // 0x0350   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_CarInfo_Drag;                                            // 0x0358   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Carup_Drag;                                              // 0x0360   (0x0008)  
	USolarButton*                                      BT_ChangeSeat;                                              // 0x0368   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Drive_Return_Drag;                                       // 0x0370   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Drive_Steering_Drag;                                     // 0x0378   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Drive_Stop_Drag;                                         // 0x0380   (0x0008)  
	UImage*                                            BT_Driver_Fire;                                             // 0x0388   (0x0008)  
	UImage*                                            BT_Driver_Fire;                                             // 0x0390   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Driver_Fire_Drag;                                        // 0x0398   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Driver_Fire_Drag;                                        // 0x03A0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_DriveShot_Drag;                                          // 0x03A8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_ExitWeapon_Drag;                                         // 0x03B0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Gunsight_Drag;                                           // 0x03B8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_JoystickSprint_Drag;                                     // 0x03C0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_OutVehicle_Drag;                                         // 0x03C8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_QuickADS_Drag;                                           // 0x03D0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Reload_Drag;                                             // 0x03D8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Skill_Drag;                                              // 0x03E0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Skill_Drag;                                              // 0x03E8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_SpeedUp_Drag;                                            // 0x03F0   (0x0008)  
	UImage*                                            BT_Steering_Left;                                           // 0x03F8   (0x0008)  
	UImage*                                            BT_Steering_Right;                                          // 0x0400   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Switch_Drag;                                             // 0x0408   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Trumpet_Drag;                                            // 0x0410   (0x0008)  
	UUniformGridPanel*                                 GridPanel_Normal;                                           // 0x0418   (0x0008)  
	UImage*                                            Image;                                                      // 0x0420   (0x0008)  
	UImage*                                            Image;                                                      // 0x0428   (0x0008)  
	UImage*                                            Image;                                                      // 0x0430   (0x0008)  
	UImage*                                            Image;                                                      // 0x0438   (0x0008)  
	UImage*                                            Image;                                                      // 0x0440   (0x0008)  
	UImage*                                            Image;                                                      // 0x0448   (0x0008)  
	UImage*                                            Image;                                                      // 0x0450   (0x0008)  
	UImage*                                            Image;                                                      // 0x0458   (0x0008)  
	UImage*                                            Image;                                                      // 0x0460   (0x0008)  
	UImage*                                            Image;                                                      // 0x0468   (0x0008)  
	UImage*                                            Image;                                                      // 0x0470   (0x0008)  
	UImage*                                            Image;                                                      // 0x0478   (0x0008)  
	UImage*                                            Image_Reload;                                               // 0x0480   (0x0008)  
	UImage*                                            Image_ReloadBg;                                             // 0x0488   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0490   (0x0008)  
	UImage*                                            Img_Body;                                                   // 0x0498   (0x0008)  
	UImage*                                            img_Brand;                                                  // 0x04A0   (0x0008)  
	UImage*                                            Img_Cardown;                                                // 0x04A8   (0x0008)  
	UImage*                                            Img_Carup;                                                  // 0x04B0   (0x0008)  
	UImage*                                            Img_Drive_Shot_Bg;                                          // 0x04B8   (0x0008)  
	UImage*                                            Img_Drive_Shot_Icon;                                        // 0x04C0   (0x0008)  
	UImage*                                            Img_DriverSeat;                                             // 0x04C8   (0x0008)  
	UImage*                                            Img_Exit;                                                   // 0x04D0   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x04D8   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x04E0   (0x0008)  
	UImage*                                            Img_JoystickSprint_Select;                                  // 0x04E8   (0x0008)  
	UImage*                                            Img_Return;                                                 // 0x04F0   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x04F8   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0500   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0508   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0510   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0518   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0520   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0528   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0530   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0538   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0540   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0548   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0550   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0558   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0560   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0568   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0570   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0578   (0x0008)  
	UImage*                                            Img_Select_CarInfo;                                         // 0x0580   (0x0008)  
	UImage*                                            Img_Select_QuickADS;                                        // 0x0588   (0x0008)  
	UImage*                                            Img_SkillOuter;                                             // 0x0590   (0x0008)  
	UImage*                                            Img_SkillOuter;                                             // 0x0598   (0x0008)  
	UImage*                                            Img_SpeedUp;                                                // 0x05A0   (0x0008)  
	UImage*                                            Img_Steering;                                               // 0x05A8   (0x0008)  
	UImage*                                            Img_Steering_Bg;                                            // 0x05B0   (0x0008)  
	UImage*                                            Img_Stop;                                                   // 0x05B8   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x05C0   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x05C8   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x05D0   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x05D8   (0x0008)  
	UUI_Customize_Data_C*                              LayoutData;                                                 // 0x05E0   (0x0008)  
	UCanvasPanel*                                      Panel_CarInfo;                                              // 0x05E8   (0x0008)  
	UCanvasPanel*                                      Panel_DisableFire_Left;                                     // 0x05F0   (0x0008)  
	UCanvasPanel*                                      Panel_DisableFire_Right;                                    // 0x05F8   (0x0008)  
	UCanvasPanel*                                      Panel_Drive_Out;                                            // 0x0600   (0x0008)  
	UCanvasPanel*                                      Panel_DriveCardown;                                         // 0x0608   (0x0008)  
	UCanvasPanel*                                      Panel_DriveCarup;                                           // 0x0610   (0x0008)  
	UCanvasPanel*                                      Panel_DriveReturn;                                          // 0x0618   (0x0008)  
	UCanvasPanel*                                      Panel_DriveShot;                                            // 0x0620   (0x0008)  
	UCanvasPanel*                                      Panel_DriveSlowDown;                                        // 0x0628   (0x0008)  
	UCanvasPanel*                                      Panel_DriveSpeedUp;                                         // 0x0630   (0x0008)  
	UCanvasPanel*                                      Panel_Gunsight;                                             // 0x0638   (0x0008)  
	UCanvasPanel*                                      Panel_JoystickSprint;                                       // 0x0640   (0x0008)  
	UCanvasPanel*                                      Panel_Line;                                                 // 0x0648   (0x0008)  
	UCanvasPanel*                                      Panel_QuickADS;                                             // 0x0650   (0x0008)  
	UCanvasPanel*                                      Panel_Reload;                                               // 0x0658   (0x0008)  
	UCanvasPanel*                                      Panel_Steering;                                             // 0x0660   (0x0008)  
	UCanvasPanel*                                      Panel_SwitchSeat;                                           // 0x0668   (0x0008)  
	UCanvasPanel*                                      Panel_Trumpet;                                              // 0x0670   (0x0008)  
	UCanvasPanel*                                      Panel_Vehicle_PrimaryFire;                                  // 0x0678   (0x0008)  
	UCanvasPanel*                                      Panel_Vehicle_SecondaryFire;                                // 0x0680   (0x0008)  
	UCanvasPanel*                                      Panel_VehicleSkill;                                         // 0x0688   (0x0008)  
	UCanvasPanel*                                      Panel_VehicleSkill;                                         // 0x0690   (0x0008)  
	UCanvasPanel*                                      Panel_Weapon_Exit;                                          // 0x0698   (0x0008)  
	USolarCheckBox*                                    Seat1;                                                      // 0x06A0   (0x0008)  
	USolarCheckBox*                                    Seat2;                                                      // 0x06A8   (0x0008)  
	USolarCheckBox*                                    Seat3;                                                      // 0x06B0   (0x0008)  
	USolarCheckBox*                                    Seat4;                                                      // 0x06B8   (0x0008)  
	UCheckBoxGroup*                                    SeatFlag;                                                   // 0x06C0   (0x0008)  
	UTextBlock*                                        Txt_Health;                                                 // 0x06C8   (0x0008)  
	UTextBlock*                                        Txt_Health_percent;                                         // 0x06D0   (0x0008)  
	UTextBlock*                                        Txt_Speed;                                                  // 0x06D8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_SteeringControl.UI_CustomizeLayout_SteeringControl_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_SteeringControl.UI_CustomizeLayout_SteeringControl_C.Get_Hero01_CheckedState
	ECheckBoxState Get_Hero01_CheckedState();                                                                                // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_SteeringControl.UI_CustomizeLayout_SteeringControl_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_SteeringControl.UI_CustomizeLayout_SteeringControl_C.ExecuteUbergraph_UI_CustomizeLayout_SteeringControl
	void ExecuteUbergraph_UI_CustomizeLayout_SteeringControl(int32_t EntryPoint);                                            // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_DirectionControl.UI_CustomizeLayout_DirectionControl_C
/// Size: 0x03B0 (0x000348 - 0x0006F8)
class UUI_CustomizeLayout_DirectionControl_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Cardown_Drag;                                            // 0x0350   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_CarInfo_Drag;                                            // 0x0358   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Carup_Drag;                                              // 0x0360   (0x0008)  
	USolarButton*                                      BT_ChangeSeat;                                              // 0x0368   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Drive_D_Drag;                                            // 0x0370   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Drive_R_Drag;                                            // 0x0378   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Drive_S_Drag;                                            // 0x0380   (0x0008)  
	UImage*                                            BT_Driver_Fire;                                             // 0x0388   (0x0008)  
	UImage*                                            BT_Driver_Fire;                                             // 0x0390   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Driver_Fire_Drag;                                        // 0x0398   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Driver_Fire_Drag;                                        // 0x03A0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_DriveShot_Drag;                                          // 0x03A8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_ExitWeapon_Drag;                                         // 0x03B0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Gunsight_Drag;                                           // 0x03B8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_JoystickSprint_Drag;                                     // 0x03C0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Left_Drag;                                               // 0x03C8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_OutVehicle_Drag;                                         // 0x03D0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_QuickADS_Drag;                                           // 0x03D8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Reload_Drag;                                             // 0x03E0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Right_Drag;                                              // 0x03E8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Skill_Drag;                                              // 0x03F0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Skill_Drag;                                              // 0x03F8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Switch_Drag;                                             // 0x0400   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         BT_Trumpet_Drag;                                            // 0x0408   (0x0008)  
	UUniformGridPanel*                                 GridPanel_Normal;                                           // 0x0410   (0x0008)  
	UImage*                                            Image;                                                      // 0x0418   (0x0008)  
	UImage*                                            Image;                                                      // 0x0420   (0x0008)  
	UImage*                                            Image;                                                      // 0x0428   (0x0008)  
	UImage*                                            Image;                                                      // 0x0430   (0x0008)  
	UImage*                                            Image;                                                      // 0x0438   (0x0008)  
	UImage*                                            Image;                                                      // 0x0440   (0x0008)  
	UImage*                                            Image;                                                      // 0x0448   (0x0008)  
	UImage*                                            Image;                                                      // 0x0450   (0x0008)  
	UImage*                                            Image;                                                      // 0x0458   (0x0008)  
	UImage*                                            Image;                                                      // 0x0460   (0x0008)  
	UImage*                                            Image;                                                      // 0x0468   (0x0008)  
	UImage*                                            Image;                                                      // 0x0470   (0x0008)  
	UImage*                                            Image;                                                      // 0x0478   (0x0008)  
	UImage*                                            Image;                                                      // 0x0480   (0x0008)  
	UImage*                                            Image;                                                      // 0x0488   (0x0008)  
	UImage*                                            Image;                                                      // 0x0490   (0x0008)  
	UImage*                                            Image;                                                      // 0x0498   (0x0008)  
	UImage*                                            Image;                                                      // 0x04A0   (0x0008)  
	UImage*                                            Image;                                                      // 0x04A8   (0x0008)  
	UImage*                                            Image_Reload;                                               // 0x04B0   (0x0008)  
	UImage*                                            Image_ReloadBg;                                             // 0x04B8   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x04C0   (0x0008)  
	UImage*                                            Img_Body;                                                   // 0x04C8   (0x0008)  
	UImage*                                            img_Brand;                                                  // 0x04D0   (0x0008)  
	UImage*                                            Img_Cardown;                                                // 0x04D8   (0x0008)  
	UImage*                                            Img_Carup;                                                  // 0x04E0   (0x0008)  
	UImage*                                            Img_Drive_Shot_Bg;                                          // 0x04E8   (0x0008)  
	UImage*                                            Img_Drive_Shot_Icon;                                        // 0x04F0   (0x0008)  
	UImage*                                            Img_DriverSeat;                                             // 0x04F8   (0x0008)  
	UImage*                                            Img_Exit;                                                   // 0x0500   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x0508   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x0510   (0x0008)  
	UImage*                                            Img_JoystickSprint_Select;                                  // 0x0518   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0520   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0528   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0530   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0538   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0540   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0548   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0550   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0558   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0560   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0568   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0570   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0578   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0580   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0588   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0590   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x0598   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x05A0   (0x0008)  
	UImage*                                            img_Select;                                                 // 0x05A8   (0x0008)  
	UImage*                                            Img_Select_CarInfo;                                         // 0x05B0   (0x0008)  
	UImage*                                            Img_Select_QuickADS;                                        // 0x05B8   (0x0008)  
	UImage*                                            Img_SkillOuter;                                             // 0x05C0   (0x0008)  
	UImage*                                            Img_SkillOuter;                                             // 0x05C8   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x05D0   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x05D8   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x05E0   (0x0008)  
	UImage*                                            Img_WeakPoint;                                              // 0x05E8   (0x0008)  
	UUI_Customize_Data_C*                              LayoutData;                                                 // 0x05F0   (0x0008)  
	UCanvasPanel*                                      Panel_CarInfo;                                              // 0x05F8   (0x0008)  
	UCanvasPanel*                                      Panel_DisableFire_Left;                                     // 0x0600   (0x0008)  
	UCanvasPanel*                                      Panel_DisableFire_Right;                                    // 0x0608   (0x0008)  
	UCanvasPanel*                                      Panel_Drive_Out;                                            // 0x0610   (0x0008)  
	UCanvasPanel*                                      Panel_DriveBackward;                                        // 0x0618   (0x0008)  
	UCanvasPanel*                                      Panel_DriveCardown;                                         // 0x0620   (0x0008)  
	UCanvasPanel*                                      Panel_DriveCarup;                                           // 0x0628   (0x0008)  
	UCanvasPanel*                                      Panel_DriveForward;                                         // 0x0630   (0x0008)  
	UCanvasPanel*                                      Panel_DriveLeft;                                            // 0x0638   (0x0008)  
	UCanvasPanel*                                      Panel_DriveRight;                                           // 0x0640   (0x0008)  
	UCanvasPanel*                                      Panel_DriveShot;                                            // 0x0648   (0x0008)  
	UCanvasPanel*                                      Panel_DriveStop;                                            // 0x0650   (0x0008)  
	UCanvasPanel*                                      Panel_Gunsight;                                             // 0x0658   (0x0008)  
	UCanvasPanel*                                      Panel_JoystickSprint;                                       // 0x0660   (0x0008)  
	UCanvasPanel*                                      Panel_Line;                                                 // 0x0668   (0x0008)  
	UCanvasPanel*                                      Panel_QuickADS;                                             // 0x0670   (0x0008)  
	UCanvasPanel*                                      Panel_Reload;                                               // 0x0678   (0x0008)  
	UCanvasPanel*                                      Panel_SwitchSeat;                                           // 0x0680   (0x0008)  
	UCanvasPanel*                                      Panel_Trumpet;                                              // 0x0688   (0x0008)  
	UCanvasPanel*                                      Panel_Vehicle_PrimaryFire;                                  // 0x0690   (0x0008)  
	UCanvasPanel*                                      Panel_Vehicle_SecondaryFire;                                // 0x0698   (0x0008)  
	UCanvasPanel*                                      Panel_VehicleSkill;                                         // 0x06A0   (0x0008)  
	UCanvasPanel*                                      Panel_VehicleSkill;                                         // 0x06A8   (0x0008)  
	UCanvasPanel*                                      Panel_Weapon_Exit;                                          // 0x06B0   (0x0008)  
	USolarCheckBox*                                    Seat1;                                                      // 0x06B8   (0x0008)  
	USolarCheckBox*                                    Seat2;                                                      // 0x06C0   (0x0008)  
	USolarCheckBox*                                    Seat3;                                                      // 0x06C8   (0x0008)  
	USolarCheckBox*                                    Seat4;                                                      // 0x06D0   (0x0008)  
	UCheckBoxGroup*                                    SeatFlag;                                                   // 0x06D8   (0x0008)  
	UTextBlock*                                        Txt_Health;                                                 // 0x06E0   (0x0008)  
	UTextBlock*                                        Txt_Health_percent;                                         // 0x06E8   (0x0008)  
	UTextBlock*                                        Txt_Speed;                                                  // 0x06F0   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_DirectionControl.UI_CustomizeLayout_DirectionControl_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_DirectionControl.UI_CustomizeLayout_DirectionControl_C.Get_Hero01_CheckedState
	ECheckBoxState Get_Hero01_CheckedState();                                                                                // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_DirectionControl.UI_CustomizeLayout_DirectionControl_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Settings/Customize/UI_CustomizeLayout_DirectionControl.UI_CustomizeLayout_DirectionControl_C.ExecuteUbergraph_UI_CustomizeLayout_DirectionControl
	void ExecuteUbergraph_UI_CustomizeLayout_DirectionControl(int32_t EntryPoint);                                           // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Marquees.UI_Marquees_C
/// Size: 0x0020 (0x000348 - 0x000368)
class UUI_Marquees_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0350   (0x0008)  
	UCanvasPanel*                                      Panel_Marquees;                                             // 0x0358   (0x0008)  
	USolarTextBlock*                                   Txt_Marquees;                                               // 0x0360   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Marquees.UI_Marquees_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Marquees.UI_Marquees_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Marquees.UI_Marquees_C.ExecuteUbergraph_UI_Marquees
	void ExecuteUbergraph_UI_Marquees(int32_t EntryPoint);                                                                   // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C
/// Size: 0x04E8 (0x000398 - 0x000880)
class UUI_Lobby_C : public USolarPanelWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0398   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x03A0   (0x0008)  
	UWidgetAnimation*                                  Anim_Enter;                                                 // 0x03A8   (0x0008)  
	UCanvasPanel*                                      Adapter;                                                    // 0x03B0   (0x0008)  
	USolarButton*                                      Btn_Activity;                                               // 0x03B8   (0x0008)  
	UButton*                                           Btn_Character;                                              // 0x03C0   (0x0008)  
	UButton*                                           Btn_Clan;                                                   // 0x03C8   (0x0008)  
	UButton*                                           Btn_Collection;                                             // 0x03D0   (0x0008)  
	UButton*                                           Btn_Leaderboard;                                            // 0x03D8   (0x0008)  
	UButton*                                           Btn_MailBox;                                                // 0x03E0   (0x0008)  
	USolarButton*                                      Btn_MatchRoom;                                              // 0x03E8   (0x0008)  
	UButton*                                           Btn_More;                                                   // 0x03F0   (0x0008)  
	UButton*                                           Btn_PopupLayer;                                             // 0x03F8   (0x0008)  
	UButton*                                           Btn_Raffle;                                                 // 0x0400   (0x0008)  
	USolarButton*                                      Btn_Rank;                                                   // 0x0408   (0x0008)  
	UButton*                                           Btn_Settings;                                               // 0x0410   (0x0008)  
	USolarButton*                                      Btn_Shop;                                                   // 0x0418   (0x0008)  
	UButton*                                           Btn_Social;                                                 // 0x0420   (0x0008)  
	UButton*                                           Btn_Task;                                                   // 0x0428   (0x0008)  
	UButton*                                           Btn_Topup;                                                  // 0x0430   (0x0008)  
	UButton*                                           Btn_Tournament;                                             // 0x0438   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Activity;                                   // 0x0440   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Clan;                                       // 0x0448   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Collection;                                 // 0x0450   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Heros;                                      // 0x0458   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Leaderboard;                                // 0x0460   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Raffle;                                     // 0x0468   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Rank;                                       // 0x0470   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Shop;                                       // 0x0478   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_SupplyBox;                                  // 0x0480   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Task;                                       // 0x0488   (0x0008)  
	UBtn_Unlock_Anim_1_C*                              Btn_Unlock_Anim_Tournament;                                 // 0x0490   (0x0008)  
	UButton*                                           Button_CloseEmoji;                                          // 0x0498   (0x0008)  
	USolarButton*                                      Button_Emoji;                                               // 0x04A0   (0x0008)  
	USolarButton*                                      Button_Emoji_Close;                                         // 0x04A8   (0x0008)  
	UCanvasPanel*                                      CanvasPanel_Container;                                      // 0x04B0   (0x0008)  
	UUI_Component_NationalFlag_C*                      ClanFlag;                                                   // 0x04B8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         DragPanel;                                                  // 0x04C0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         DragPanel;                                                  // 0x04C8   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         DragPanel;                                                  // 0x04D0   (0x0008)  
	UUI_Warehouse_DragPanel_C*                         DragPanel;                                                  // 0x04D8   (0x0008)  
	UUI_Component_Emoji_List_C*                        Emoji_List;                                                 // 0x04E0   (0x0008)  
	USolarCheckBox*                                    EmojiBtn;                                                   // 0x04E8   (0x0008)  
	UScaleBox*                                         EmoteScaleBox;                                              // 0x04F0   (0x0008)  
	UScaleBox*                                         EmoteScaleBox;                                              // 0x04F8   (0x0008)  
	UScaleBox*                                         EmoteScaleBox;                                              // 0x0500   (0x0008)  
	UScaleBox*                                         EmoteScaleBox;                                              // 0x0508   (0x0008)  
	USolarRedHint_General_C*                           HintPoint_Clan;                                             // 0x0510   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Coin;                                         // 0x0518   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Diamond;                                      // 0x0520   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Dollar;                                       // 0x0528   (0x0008)  
	UImage*                                            Image;                                                      // 0x0530   (0x0008)  
	UImage*                                            Img_Activity;                                               // 0x0538   (0x0008)  
	UImage*                                            Img_Clan;                                                   // 0x0540   (0x0008)  
	UImage*                                            Img_Matchroom_Tips_Arrow;                                   // 0x0548   (0x0008)  
	UImage*                                            Img_Ping;                                                   // 0x0550   (0x0008)  
	UImage*                                            Img_UnlockAnim;                                             // 0x0558   (0x0008)  
	UOverlay*                                          Overlay_BattlePass;                                         // 0x0560   (0x0008)  
	UOverlay*                                          Overlay_Live;                                               // 0x0568   (0x0008)  
	UOverlay*                                          Overlay_Matchroom_Tips;                                     // 0x0570   (0x0008)  
	UCanvasPanel*                                      Panel;                                                      // 0x0578   (0x0008)  
	UCanvasPanel*                                      Panel_Activity;                                             // 0x0580   (0x0008)  
	UCanvasPanel*                                      Panel_ActivityContent;                                      // 0x0588   (0x0008)  
	UCanvasPanel*                                      Panel_Clan;                                                 // 0x0590   (0x0008)  
	UCanvasPanel*                                      Panel_Clan_Content;                                         // 0x0598   (0x0008)  
	UCanvasPanel*                                      Panel_Collection;                                           // 0x05A0   (0x0008)  
	UCanvasPanel*                                      Panel_Collection_Content;                                   // 0x05A8   (0x0008)  
	UCanvasPanel*                                      Panel_Commerce;                                             // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_Emoji;                                                // 0x05B8   (0x0008)  
	UCanvasPanel*                                      Panel_Heros;                                                // 0x05C0   (0x0008)  
	UCanvasPanel*                                      Panel_Heros_Content;                                        // 0x05C8   (0x0008)  
	UCanvasPanel*                                      Panel_Invite;                                               // 0x05D0   (0x0008)  
	UCanvasPanel*                                      Panel_Leaderboard;                                          // 0x05D8   (0x0008)  
	UCanvasPanel*                                      Panel_Leaderboard_Content;                                  // 0x05E0   (0x0008)  
	UCanvasPanel*                                      Panel_MailBox;                                              // 0x05E8   (0x0008)  
	UCanvasPanel*                                      Panel_MatchRoom;                                            // 0x05F0   (0x0008)  
	UCanvasPanel*                                      Panel_More;                                                 // 0x05F8   (0x0008)  
	UCanvasPanel*                                      Panel_Profession;                                           // 0x0600   (0x0008)  
	UCanvasPanel*                                      Panel_Raffle;                                               // 0x0608   (0x0008)  
	UCanvasPanel*                                      Panel_RaffleContent;                                        // 0x0610   (0x0008)  
	UCanvasPanel*                                      Panel_Rank;                                                 // 0x0618   (0x0008)  
	UCanvasPanel*                                      Panel_Rank_Content;                                         // 0x0620   (0x0008)  
	UCanvasPanel*                                      Panel_RedPacket;                                            // 0x0628   (0x0008)  
	UCanvasPanel*                                      Panel_Settings;                                             // 0x0630   (0x0008)  
	UCanvasPanel*                                      Panel_Shop;                                                 // 0x0638   (0x0008)  
	UCanvasPanel*                                      Panel_Shop_Content;                                         // 0x0640   (0x0008)  
	UCanvasPanel*                                      Panel_Social;                                               // 0x0648   (0x0008)  
	UCanvasPanel*                                      Panel_SupplyBox;                                            // 0x0650   (0x0008)  
	UCanvasPanel*                                      Panel_SupplyBox_Content;                                    // 0x0658   (0x0008)  
	UHorizontalBox*                                    Panel_System;                                               // 0x0660   (0x0008)  
	UCanvasPanel*                                      Panel_Task;                                                 // 0x0668   (0x0008)  
	UCanvasPanel*                                      Panel_Task_Content;                                         // 0x0670   (0x0008)  
	UCanvasPanel*                                      Panel_Topup;                                                // 0x0678   (0x0008)  
	UCanvasPanel*                                      Panel_Tournament;                                           // 0x0680   (0x0008)  
	UCanvasPanel*                                      Panel_Tournament_Content;                                   // 0x0688   (0x0008)  
	UCanvasPanel*                                      PopupLayer;                                                 // 0x0690   (0x0008)  
	UUI_Lobby_Profession_C*                            Profession;                                                 // 0x0698   (0x0008)  
	UUI_Lobby_Profession_C*                            Profession;                                                 // 0x06A0   (0x0008)  
	UUI_Lobby_Profession_C*                            Profession;                                                 // 0x06A8   (0x0008)  
	UUI_Lobby_Profession_C*                            Profession;                                                 // 0x06B0   (0x0008)  
	USolarRedHint_General_C*                           Red_Rank;                                                   // 0x06B8   (0x0008)  
	USolarRedHint_General_C*                           Red_Shop;                                                   // 0x06C0   (0x0008)  
	USolarRedHint_General_C*                           RedHint_Capsulers;                                          // 0x06C8   (0x0008)  
	USolarRedHint_General_C*                           RedHint_Collection;                                         // 0x06D0   (0x0008)  
	USolarRedHint_General_C*                           RedHint_E_Mail;                                             // 0x06D8   (0x0008)  
	USolarRedHint_General_C*                           RedHint_Leaderboard;                                        // 0x06E0   (0x0008)  
	USolarRedHint_General_C*                           RedHint_More;                                               // 0x06E8   (0x0008)  
	USolarRedHint_General_C*                           RedHint_Social;                                             // 0x06F0   (0x0008)  
	USolarRedHint_General_C*                           RedHint_Task;                                               // 0x06F8   (0x0008)  
	USolarRedHint_General_C*                           RedHint_Tournament;                                         // 0x0700   (0x0008)  
	USolarImageURL*                                    SolarImageURL_Icon;                                         // 0x0708   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x0710   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x0718   (0x0008)  
	USolarRichTextBlock*                               SolarRichTextBlock_Stage;                                   // 0x0720   (0x0008)  
	URichTextBlock*                                    STB_RewardCoinNum;                                          // 0x0728   (0x0008)  
	URichTextBlock*                                    STB_RewardDiamondNum;                                       // 0x0730   (0x0008)  
	URichTextBlock*                                    STB_RewardDollarNum;                                        // 0x0738   (0x0008)  
	UUI_Lobby_TeamMember_Operation_C*                  TeamMember_CallingCard;                                     // 0x0740   (0x0008)  
	UUI_Lobby_TeamMember_Operation_C*                  TeamMember_CallingCard;                                     // 0x0748   (0x0008)  
	UUI_Lobby_TeamMember_Operation_C*                  TeamMember_CallingCard;                                     // 0x0750   (0x0008)  
	UUI_Lobby_TeamMember_Operation_C*                  TeamMember_CallingCard;                                     // 0x0758   (0x0008)  
	UTextBlock*                                        Text_MatchInfo;                                             // 0x0760   (0x0008)  
	UTextBlock*                                        Text_RoomInfo;                                              // 0x0768   (0x0008)  
	USolarTextBlock*                                   Txt_Clan;                                                   // 0x0770   (0x0008)  
	USolarTextBlock*                                   Txt_Season;                                                 // 0x0778   (0x0008)  
	UUI_ChatPanel_C*                                   UI_ChatPanel;                                               // 0x0780   (0x0008)  
	UUI_Lobby_Banner_C*                                UI_Lobby_Banner;                                            // 0x0788   (0x0008)  
	UUI_Lobby_Battery_C*                               UI_Lobby_Battery;                                           // 0x0790   (0x0008)  
	UUI_Lobby_BattlePass_C*                            UI_Lobby_BattlePass;                                        // 0x0798   (0x0008)  
	UUI_Lobby_BattlePass3_C*                           UI_Lobby_BattlePass3;                                       // 0x07A0   (0x0008)  
	UUI_Lobby_BattlePass_Next_C*                       UI_Lobby_BattlePass_Next;                                   // 0x07A8   (0x0008)  
	UUI_Currency_Bar_C*                                UI_Lobby_Currency;                                          // 0x07B0   (0x0008)  
	UUI_Lobby_DownLoad_C*                              UI_Lobby_DownLoad;                                          // 0x07B8   (0x0008)  
	UUI_Lobby_GameRecommend_C*                         UI_Lobby_GameRecommend;                                     // 0x07C0   (0x0008)  
	UUI_Lobby_Invite_Btn_C*                            UI_Lobby_Invite_Btn;                                        // 0x07C8   (0x0008)  
	UUI_Lobby_Invite_Btn_C*                            UI_Lobby_Invite_Btn;                                        // 0x07D0   (0x0008)  
	UUI_Lobby_Invite_Btn_C*                            UI_Lobby_Invite_Btn;                                        // 0x07D8   (0x0008)  
	UUI_Lobby_Mainmenu_C*                              UI_Lobby_Mainmenu;                                          // 0x07E0   (0x0008)  
	UUI_Lobby_MedalShow_C*                             UI_Lobby_MedalShow;                                         // 0x07E8   (0x0008)  
	UUI_Lobby_MedalShow_C*                             UI_Lobby_MedalShow;                                         // 0x07F0   (0x0008)  
	UUI_Lobby_MedalShow_C*                             UI_Lobby_MedalShow;                                         // 0x07F8   (0x0008)  
	UUI_Lobby_MedalShow_C*                             UI_Lobby_MedalShow;                                         // 0x0800   (0x0008)  
	UUI_Lobby_Mission_Reward_C*                        UI_Lobby_Mission_Reward;                                    // 0x0808   (0x0008)  
	UUI_Lobby_PlayerInfo_C*                            UI_Lobby_PlayerInfo;                                        // 0x0810   (0x0008)  
	UUI_Lobby_RandomPack_C*                            UI_Lobby_RandomPack;                                        // 0x0818   (0x0008)  
	UUI_Lobby_Recruit_C*                               UI_Lobby_Recruit;                                           // 0x0820   (0x0008)  
	UUI_Lobby_RedPacket_C*                             UI_Lobby_RedPacket;                                         // 0x0828   (0x0008)  
	UUI_Lobby_Sanctuary_C*                             UI_Lobby_Sanctuary;                                         // 0x0830   (0x0008)  
	UUI_Lobby_Social_Entrance_C*                       UI_Lobby_Social_Entrance;                                   // 0x0838   (0x0008)  
	UUI_Lobby_StartBtn_C*                              UI_Lobby_StartBtn;                                          // 0x0840   (0x0008)  
	UUI_Lobby_SupplyBox_C*                             UI_Lobby_SupplyBox;                                         // 0x0848   (0x0008)  
	UUI_Lobby_Topup_C*                                 UI_Lobby_Topup;                                             // 0x0850   (0x0008)  
	UUI_MicroPhoneSetting_C*                           UI_MicroPhoneSetting;                                       // 0x0858   (0x0008)  
	UUI_Rank_Icon_Small_C*                             UI_Rank_Icon_Small;                                         // 0x0860   (0x0008)  
	UTextBlock*                                        UserId;                                                     // 0x0868   (0x0008)  
	UCanvasPanel*                                      Video;                                                      // 0x0870   (0x0008)  
	UWidgetSwitcher*                                   WidgetSwitcher_Tournament;                                  // 0x0878   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.SetLevel
	void SetLevel(int32_t Level);                                                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.SetClanLock
	void SetClanLock(int32_t ClanLock);                                                                                      // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.AddVideoPanel
	void AddVideoPanel();                                                                                                    // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.ShowFlyAnimation
	void ShowFlyAnimation();                                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.GetAnimTargetLocation
	void GetAnimTargetLocation(UWidget* TargetObject, UWidget* UserObject, FVector2D& TargetLocation);                       // [0x2649560] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.ReceiveShow
	void ReceiveShow();                                                                                                      // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby.UI_Lobby_C.ExecuteUbergraph_UI_Lobby
	void ExecuteUbergraph_UI_Lobby(int32_t EntryPoint);                                                                      // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_StellarForce_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.ExecuteUbergraph_UI_AvatarFrame_StellarForce
	void ExecuteUbergraph_UI_AvatarFrame_StellarForce(int32_t EntryPoint);                                                   // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_StellarForce.UI_AvatarFrame_StellarForce_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_GuerillaGallery_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.ExecuteUbergraph_UI_AvatarFrame_GuerillaGallery
	void ExecuteUbergraph_UI_AvatarFrame_GuerillaGallery(int32_t EntryPoint);                                                // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_GuerillaGallery.UI_AvatarFrame_GuerillaGallery_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Halloween_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.ExecuteUbergraph_UI_AvatarFrame_Halloween
	void ExecuteUbergraph_UI_AvatarFrame_Halloween(int32_t EntryPoint);                                                      // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Halloween.UI_AvatarFrame_Halloween_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Publish_Creator2_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.ExecuteUbergraph_UI_AvatarFrame_Publish_Creator2
	void ExecuteUbergraph_UI_AvatarFrame_Publish_Creator2(int32_t EntryPoint);                                               // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator2.UI_AvatarFrame_Publish_Creator2_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Night_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.ExecuteUbergraph_UI_AvatarFrame_Night
	void ExecuteUbergraph_UI_AvatarFrame_Night(int32_t EntryPoint);                                                          // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Night.UI_AvatarFrame_Night_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Glory_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.ExecuteUbergraph_UI_AvatarFrame_Glory
	void ExecuteUbergraph_UI_AvatarFrame_Glory(int32_t EntryPoint);                                                          // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Glory.UI_AvatarFrame_Glory_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_PH_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.ExecuteUbergraph_UI_AvatarFrame_PH
	void ExecuteUbergraph_UI_AvatarFrame_PH(int32_t EntryPoint);                                                             // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S12_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.ExecuteUbergraph_UI_AvatarFrame_S12
	void ExecuteUbergraph_UI_AvatarFrame_S12(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S12.UI_AvatarFrame_S12_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S11_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.ExecuteUbergraph_UI_AvatarFrame_S11
	void ExecuteUbergraph_UI_AvatarFrame_S11(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S11.UI_AvatarFrame_S11_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S10_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.ExecuteUbergraph_UI_AvatarFrame_S10
	void ExecuteUbergraph_UI_AvatarFrame_S10(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S10.UI_AvatarFrame_S10_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Summer_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.ExecuteUbergraph_UI_AvatarFrame_Summer
	void ExecuteUbergraph_UI_AvatarFrame_Summer(int32_t EntryPoint);                                                         // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Summer.UI_AvatarFrame_Summer_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_City_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.ExecuteUbergraph_UI_AvatarFrame_City
	void ExecuteUbergraph_UI_AvatarFrame_City(int32_t EntryPoint);                                                           // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_City.UI_AvatarFrame_City_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_Polar_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             Par_Snow;                                                   // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.ExecuteUbergraph_UI_AvatarFrame_Polar
	void ExecuteUbergraph_UI_AvatarFrame_Polar(int32_t EntryPoint);                                                          // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Polar.UI_AvatarFrame_Polar_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Publish_Moderator_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.ExecuteUbergraph_UI_AvatarFrame_Publish_Moderator
	void ExecuteUbergraph_UI_AvatarFrame_Publish_Moderator(int32_t EntryPoint);                                              // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Publish_Creator_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.ExecuteUbergraph_UI_AvatarFrame_Publish_Creator
	void ExecuteUbergraph_UI_AvatarFrame_Publish_Creator(int32_t EntryPoint);                                                // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Publish_Creator.UI_AvatarFrame_Publish_Creator_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Yuyan_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.ExecuteUbergraph_UI_AvatarFrame_Yuyan
	void ExecuteUbergraph_UI_AvatarFrame_Yuyan(int32_t EntryPoint);                                                          // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_Youyuanhui_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.ExecuteUbergraph_UI_AvatarFrame_Youyuanhui
	void ExecuteUbergraph_UI_AvatarFrame_Youyuanhui(int32_t EntryPoint);                                                     // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Youyuanhui.UI_AvatarFrame_Youyuanhui_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S09_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.ExecuteUbergraph_UI_AvatarFrame_S09
	void ExecuteUbergraph_UI_AvatarFrame_S09(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S08_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.ExecuteUbergraph_UI_AvatarFrame_S08
	void ExecuteUbergraph_UI_AvatarFrame_S08(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S07_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.ExecuteUbergraph_UI_AvatarFrame_S07
	void ExecuteUbergraph_UI_AvatarFrame_S07(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S07.UI_AvatarFrame_S07_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Chita_UR_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.ExecuteUbergraph_UI_AvatarFrame_Chita_UR
	void ExecuteUbergraph_UI_AvatarFrame_Chita_UR(int32_t EntryPoint);                                                       // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita_UR.UI_AvatarFrame_Chita_UR_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S06_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.ExecuteUbergraph_UI_AvatarFrame_S06
	void ExecuteUbergraph_UI_AvatarFrame_S06(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S06.UI_AvatarFrame_S06_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_HotStorm_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.ExecuteUbergraph_UI_AvatarFrame_HotStorm
	void ExecuteUbergraph_UI_AvatarFrame_HotStorm(int32_t EntryPoint);                                                       // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_HotStorm.UI_AvatarFrame_HotStorm_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_LimitLess_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.ExecuteUbergraph_UI_AvatarFrame_LimitLess
	void ExecuteUbergraph_UI_AvatarFrame_LimitLess(int32_t EntryPoint);                                                      // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_LimitLess.UI_AvatarFrame_LimitLess_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Chita_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.ExecuteUbergraph_UI_AvatarFrame_Chita
	void ExecuteUbergraph_UI_AvatarFrame_Chita(int32_t EntryPoint);                                                          // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Chita.UI_AvatarFrame_Chita_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_AvatarFrame_Rule_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0358   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.ExecuteUbergraph_UI_AvatarFrame_Rule
	void ExecuteUbergraph_UI_AvatarFrame_Rule(int32_t EntryPoint);                                                           // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S05_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.ExecuteUbergraph_UI_AvatarFrame_S05
	void ExecuteUbergraph_UI_AvatarFrame_S05(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S05.UI_AvatarFrame_S05_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C
/// Size: 0x0038 (0x000348 - 0x000380)
class UUI_AvatarFrame_S04_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Loop_Anim;                                                  // 0x0350   (0x0008)  
	UParticleSystemWidget*                             ParticleSystemWidget;                                       // 0x0358   (0x0008)  
	FMulticastInlineDelegate                           On_Clicked;                                                 // 0x0360   (0x0010)  
	FMulticastInlineDelegate                           On_Released;                                                // 0x0370   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.SetAvatarIcon
	void SetAvatarIcon(int32_t InAvatarID);                                                                                  // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.SetEmptyState
	void SetEmptyState(bool IsEmpty);                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.SetPlayerGender
	void SetPlayerGender(TEnumAsByte<E_Type_Gender> Gender);                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.SetSocialIcon
	void SetSocialIcon(TEnumAsByte<E_Type_Social> Social);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.Update
	void Update();                                                                                                           // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.ExecuteUbergraph_UI_AvatarFrame_S04
	void ExecuteUbergraph_UI_AvatarFrame_S04(int32_t EntryPoint);                                                            // [0x2649560] Final                
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.On Released__DelegateSignature
	void On Released__DelegateSignature();                                                                                   // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Animation/AvatarFrame/Season/UI_AvatarFrame_S04.UI_AvatarFrame_S04_C.On Clicked__DelegateSignature
	void On Clicked__DelegateSignature();                                                                                    // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/13_UI/Blueprints/Component/UI_Currency_BarPanel.UI_Currency_BarPanel_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UUI_Currency_BarPanel_C : public USolarUserWidget
{ 
public:
	UUI_Currency_Bar_C*                                UI_Currency_Bar;                                            // 0x0348   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Currency_BarPanel.UI_Currency_BarPanel_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C
/// Size: 0x0149 (0x000348 - 0x000491)
class UUI_Lobby_TeamInvite_Popup_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  RightToLeft_Anim;                                           // 0x0350   (0x0008)  
	USolarButton*                                      Btn_Join_Common;                                            // 0x0358   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x0360   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x0368   (0x0008)  
	UHorizontalBox*                                    HorizentalBox_Spectator;                                    // 0x0370   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_CreateRoom_Invitation;                        // 0x0378   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Home_Invitation;                              // 0x0380   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Player;                                       // 0x0388   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Team_Application;                             // 0x0390   (0x0008)  
	UImage*                                            Img_Btn_Join;                                               // 0x0398   (0x0008)  
	UImage*                                            Img_GameMode_Icon;                                          // 0x03A0   (0x0008)  
	UImage*                                            Img_GameMode_Icon;                                          // 0x03A8   (0x0008)  
	UImage*                                            Img_Join_Common_Light;                                      // 0x03B0   (0x0008)  
	UImage*                                            Img_Title_BG;                                               // 0x03B8   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x03C0   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x03C8   (0x0008)  
	UCanvasPanel*                                      Panel_Info_CreateRoom_Invitation;                           // 0x03D0   (0x0008)  
	UCanvasPanel*                                      Panel_Info_Invitation;                                      // 0x03D8   (0x0008)  
	UCanvasPanel*                                      Panel_Pop_Common;                                           // 0x03E0   (0x0008)  
	UProgressBar*                                      ProgressBar_CountDown;                                      // 0x03E8   (0x0008)  
	USolarRichTextBlock*                               RichTxt_LvlRequired;                                        // 0x03F0   (0x0008)  
	UScaleBox*                                         ScaleBox_Match;                                             // 0x03F8   (0x0008)  
	USolarTextBlock*                                   Text_RemarkName;                                            // 0x0400   (0x0008)  
	USolarTextBlock*                                   Txt_Capacity;                                               // 0x0408   (0x0008)  
	USolarTextBlock*                                   Txt_GameMode;                                               // 0x0410   (0x0008)  
	USolarTextBlock*                                   Txt_GameMode;                                               // 0x0418   (0x0008)  
	USolarTextBlock*                                   Txt_Home;                                                   // 0x0420   (0x0008)  
	USolarTextBlock*                                   Txt_Invitation;                                             // 0x0428   (0x0008)  
	USolarTextBlock*                                   Txt_Join_Common;                                            // 0x0430   (0x0008)  
	USolarTextBlock*                                   Txt_Map;                                                    // 0x0438   (0x0008)  
	USolarTextBlock*                                   Txt_Map;                                                    // 0x0440   (0x0008)  
	UTextBlock*                                        Txt_OBCurr;                                                 // 0x0448   (0x0008)  
	USolarTextBlock*                                   Txt_OBTotal;                                                // 0x0450   (0x0008)  
	USolarTextBlock*                                   Txt_PlayerIn;                                               // 0x0458   (0x0008)  
	USolarTextBlock*                                   Txt_Team_Invitation_Info;                                   // 0x0460   (0x0008)  
	USolarTextBlock*                                   Txt_Team_Invitation_Info;                                   // 0x0468   (0x0008)  
	UUI_Component_Close_C*                             UI_Component_Close;                                         // 0x0470   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0478   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0480   (0x0008)  
	UUI_Component_PlayerName_C*                        UI_Component_PlayerName;                                    // 0x0488   (0x0008)  
	TEnumAsByte<T_Type_Invitation>                     Pop_Type;                                                   // 0x0490   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.SetType
	void SetType(TEnumAsByte<T_Type_Invitation> Pop_Type);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.ExecuteUbergraph_UI_Lobby_TeamInvite_Popup
	void ExecuteUbergraph_UI_Lobby_TeamInvite_Popup(int32_t EntryPoint);                                                     // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C
/// Size: 0x0233 (0x000348 - 0x00057B)
class UUI_Lobby_RoomInvite_Popup_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_Exit;                                                  // 0x0358   (0x0008)  
	UWidgetAnimation*                                  Anim_Enter;                                                 // 0x0360   (0x0008)  
	USolarButton*                                      Btn_Join_Common;                                            // 0x0368   (0x0008)  
	USolarButton*                                      Btn_Join_League;                                            // 0x0370   (0x0008)  
	USolarButton*                                      Btn_Joining;                                                // 0x0378   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x0380   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x0388   (0x0008)  
	USolarButton*                                      Btn_Watch;                                                  // 0x0390   (0x0008)  
	UHorizontalBox*                                    HorizentalBox_Match;                                        // 0x0398   (0x0008)  
	UHorizontalBox*                                    HorizentalBox_Spectator;                                    // 0x03A0   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Join;                                         // 0x03A8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Joining;                                      // 0x03B0   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_League;                                       // 0x03B8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Player;                                       // 0x03C0   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Title_Common;                                 // 0x03C8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Title_Common;                                 // 0x03D0   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Title_League;                                 // 0x03D8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Watch;                                        // 0x03E0   (0x0008)  
	UImage*                                            Img_BG_Light;                                               // 0x03E8   (0x0008)  
	UImage*                                            Img_BG_Light_01;                                            // 0x03F0   (0x0008)  
	UImage*                                            Img_Btn_Join;                                               // 0x03F8   (0x0008)  
	UImage*                                            Img_Btn_Join;                                               // 0x0400   (0x0008)  
	UImage*                                            Img_Btn_Joining_Close;                                      // 0x0408   (0x0008)  
	UImage*                                            Img_Btn_Watch;                                              // 0x0410   (0x0008)  
	UImage*                                            Img_Division;                                               // 0x0418   (0x0008)  
	UImage*                                            Img_Join_Common_Light;                                      // 0x0420   (0x0008)  
	UImage*                                            Img_Join_Light;                                             // 0x0428   (0x0008)  
	USolarImageURL*                                    Img_League_Icon;                                            // 0x0430   (0x0008)  
	UImage*                                            Img_Title_BG;                                               // 0x0438   (0x0008)  
	UImage*                                            Img_Title_BG;                                               // 0x0440   (0x0008)  
	UImage*                                            Img_Watch_Light;                                            // 0x0448   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x0450   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x0458   (0x0008)  
	UOverlay*                                          Overlay_Cup;                                                // 0x0460   (0x0008)  
	UCanvasPanel*                                      Panel_Info_CreateRoom;                                      // 0x0468   (0x0008)  
	UCanvasPanel*                                      Panel_Info_Invitation;                                      // 0x0470   (0x0008)  
	UCanvasPanel*                                      Panel_Pop_Common;                                           // 0x0478   (0x0008)  
	UCanvasPanel*                                      Panel_Pop_League;                                           // 0x0480   (0x0008)  
	USolarRichTextBlock*                               RichTxt_LvlRequired;                                        // 0x0488   (0x0008)  
	USolarTextBlock*                                   Txt_Capacity;                                               // 0x0490   (0x0008)  
	USolarTextBlock*                                   Txt_Clan_Quantity;                                          // 0x0498   (0x0008)  
	USolarTextBlock*                                   Txt_GameMode;                                               // 0x04A0   (0x0008)  
	USolarTextBlock*                                   Txt_GameMode;                                               // 0x04A8   (0x0008)  
	USolarTextBlock*                                   Txt_Invitation;                                             // 0x04B0   (0x0008)  
	USolarTextBlock*                                   Txt_Join;                                                   // 0x04B8   (0x0008)  
	USolarTextBlock*                                   Txt_Join_Common;                                            // 0x04C0   (0x0008)  
	USolarTextBlock*                                   Txt_Joining;                                                // 0x04C8   (0x0008)  
	USolarTextBlock*                                   Txt_League_Name;                                            // 0x04D0   (0x0008)  
	USolarTextBlock*                                   Txt_Map;                                                    // 0x04D8   (0x0008)  
	USolarTextBlock*                                   Txt_Map;                                                    // 0x04E0   (0x0008)  
	USolarTextBlock*                                   Txt_Map;                                                    // 0x04E8   (0x0008)  
	USolarTextBlock*                                   Txt_Mode;                                                   // 0x04F0   (0x0008)  
	USolarTextBlock*                                   Txt_Number;                                                 // 0x04F8   (0x0008)  
	UTextBlock*                                        Txt_OBCurr;                                                 // 0x0500   (0x0008)  
	UTextBlock*                                        Txt_OBCurr;                                                 // 0x0508   (0x0008)  
	UTextBlock*                                        Txt_OBCurr;                                                 // 0x0510   (0x0008)  
	USolarTextBlock*                                   Txt_OBTotal;                                                // 0x0518   (0x0008)  
	USolarTextBlock*                                   Txt_PlayerIn;                                               // 0x0520   (0x0008)  
	UTextBlock*                                        Txt_PlayerName;                                             // 0x0528   (0x0008)  
	USolarTextBlock*                                   Txt_Progress_Des;                                           // 0x0530   (0x0008)  
	USolarTextBlock*                                   Txt_Progress_Time;                                          // 0x0538   (0x0008)  
	USolarTextBlock*                                   Txt_RoomName;                                               // 0x0540   (0x0008)  
	USolarTextBlock*                                   Txt_Watch;                                                  // 0x0548   (0x0008)  
	UUI_Component_Close_C*                             UI_Component_Close;                                         // 0x0550   (0x0008)  
	UUI_Component_Platform_C*                          UI_Component_Platform;                                      // 0x0558   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0560   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0568   (0x0008)  
	UVerticalBox*                                      VerticalBox_League;                                         // 0x0570   (0x0008)  
	TEnumAsByte<E_Type_CreateRoom_Gender>              Gender;                                                     // 0x0578   (0x0001)  
	TEnumAsByte<T_Type_System_Push>                    Pop_Type;                                                   // 0x0579   (0x0001)  
	TEnumAsByte<T_Type_Button>                         Btn_Type;                                                   // 0x057A   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.Update_Btn
	void Update_Btn(TEnumAsByte<T_Type_Button> NewParam);                                                                    // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.SetType
	void SetType(TEnumAsByte<T_Type_System_Push> NewParam);                                                                  // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.ExecuteUbergraph_UI_Lobby_RoomInvite_Popup
	void ExecuteUbergraph_UI_Lobby_RoomInvite_Popup(int32_t EntryPoint);                                                     // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Bubble_Container.UI_Lobby_Bubble_Container_C
/// Size: 0x0020 (0x000348 - 0x000368)
class UUI_Lobby_Bubble_Container_C : public USolarUserWidget
{ 
public:
	UCanvasPanel*                                      Adapter;                                                    // 0x0348   (0x0008)  
	UCanvasPanel*                                      CanvasPanel_Container;                                      // 0x0350   (0x0008)  
	UUI_Lobby_RoomInvite_Popup_C*                      UI_Lobby_RoomInvite_Popup;                                  // 0x0358   (0x0008)  
	UUI_Lobby_TeamInvite_Popup_C*                      UI_Lobby_TeamInvite_Popup;                                  // 0x0360   (0x0008)  
};

/// Class /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C
/// Size: 0x0151 (0x000348 - 0x000499)
class UUI_Lobby_TeamInvite_Mini_Popup_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Enter;                                                 // 0x0350   (0x0008)  
	USolarButton*                                      Btn_Join_Common;                                            // 0x0358   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x0360   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x0368   (0x0008)  
	UHorizontalBox*                                    HorizentalBox_Spectator;                                    // 0x0370   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_CreateRoom_Invitation;                        // 0x0378   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Home_Invitation;                              // 0x0380   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Player;                                       // 0x0388   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Skydiving_Invitation;                         // 0x0390   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Skydiving_Transfer;                           // 0x0398   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Team_Application;                             // 0x03A0   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Team_Invitation;                              // 0x03A8   (0x0008)  
	UImage*                                            Img_Btn_Join;                                               // 0x03B0   (0x0008)  
	UImage*                                            Img_GameMode_Icon;                                          // 0x03B8   (0x0008)  
	UImage*                                            Img_Join_Common_Light;                                      // 0x03C0   (0x0008)  
	UImage*                                            Img_Team_Num;                                               // 0x03C8   (0x0008)  
	UImage*                                            Img_Title_BG;                                               // 0x03D0   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x03D8   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x03E0   (0x0008)  
	UCanvasPanel*                                      Panel_Info_CreateRoom_Invitation;                           // 0x03E8   (0x0008)  
	UCanvasPanel*                                      Panel_Info_Invitation;                                      // 0x03F0   (0x0008)  
	UCanvasPanel*                                      Panel_Pop_Common;                                           // 0x03F8   (0x0008)  
	UProgressBar*                                      ProgressBar_CountDown;                                      // 0x0400   (0x0008)  
	UOverlay*                                          SizeBox_Team_Num;                                           // 0x0408   (0x0008)  
	UTickerWidget_C*                                   Text_NickName;                                              // 0x0410   (0x0008)  
	USolarTextBlock*                                   Txt_Capacity;                                               // 0x0418   (0x0008)  
	USolarTextBlock*                                   Txt_GameMode;                                               // 0x0420   (0x0008)  
	USolarTextBlock*                                   Txt_Home;                                                   // 0x0428   (0x0008)  
	USolarTextBlock*                                   Txt_Invitation;                                             // 0x0430   (0x0008)  
	USolarTextBlock*                                   Txt_Join_Common;                                            // 0x0438   (0x0008)  
	UTextBlock*                                        Txt_OBCurr;                                                 // 0x0440   (0x0008)  
	USolarTextBlock*                                   Txt_OBTotal;                                                // 0x0448   (0x0008)  
	UTextBlock*                                        Txt_Player;                                                 // 0x0450   (0x0008)  
	USolarTextBlock*                                   Txt_PlayerIn;                                               // 0x0458   (0x0008)  
	USolarTextBlock*                                   Txt_Room_Name;                                              // 0x0460   (0x0008)  
	USolarTextBlock*                                   Txt_Skydiving;                                              // 0x0468   (0x0008)  
	USolarTextBlock*                                   Txt_Skydiving;                                              // 0x0470   (0x0008)  
	UUI_Component_Close_C*                             UI_Component_Close;                                         // 0x0478   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0480   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0488   (0x0008)  
	TEnumAsByte<T_Type_Invitation>                     Pop_Type;                                                   // 0x0490   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0491   (0x0003)  MISSED
	int32_t                                            Player;                                                     // 0x0494   (0x0004)  
	bool                                               IsNeedShow;                                                 // 0x0498   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.SetPlayer
	void SetPlayer(int32_t Num);                                                                                             // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.SetType
	void SetType(TEnumAsByte<T_Type_Invitation> Pop_Type);                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup
	void ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup(int32_t EntryPoint);                                                // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C
/// Size: 0x0233 (0x000260 - 0x000493)
class UUI_Lobby_RoomInvite_MIni_Popup_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0268   (0x0008)  
	UWidgetAnimation*                                  Anim_Enter;                                                 // 0x0270   (0x0008)  
	USolarButton*                                      Btn_Join_Common;                                            // 0x0278   (0x0008)  
	USolarButton*                                      Btn_Join_League;                                            // 0x0280   (0x0008)  
	USolarButton*                                      Btn_Joining;                                                // 0x0288   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x0290   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x0298   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x02A0   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x02A8   (0x0008)  
	UButton*                                           Btn_Player;                                                 // 0x02B0   (0x0008)  
	USolarButton*                                      Btn_Watch;                                                  // 0x02B8   (0x0008)  
	UHorizontalBox*                                    HorizentalBox_Match;                                        // 0x02C0   (0x0008)  
	UHorizontalBox*                                    HorizentalBox_Spectator;                                    // 0x02C8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Join;                                         // 0x02D0   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Joining;                                      // 0x02D8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Player;                                       // 0x02E0   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Progress_Time;                                // 0x02E8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Title_Common;                                 // 0x02F0   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Title_League;                                 // 0x02F8   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Watch;                                        // 0x0300   (0x0008)  
	UImage*                                            Img_BG_Invitation;                                          // 0x0308   (0x0008)  
	UImage*                                            Img_BG_Light;                                               // 0x0310   (0x0008)  
	UImage*                                            Img_BG_Light_01;                                            // 0x0318   (0x0008)  
	UImage*                                            Img_Btn_Join;                                               // 0x0320   (0x0008)  
	UImage*                                            Img_Btn_Join;                                               // 0x0328   (0x0008)  
	UImage*                                            Img_Btn_Joining_Close;                                      // 0x0330   (0x0008)  
	UImage*                                            Img_Btn_Watch;                                              // 0x0338   (0x0008)  
	UImage*                                            Img_Division;                                               // 0x0340   (0x0008)  
	UImage*                                            Img_Join_Common_Light;                                      // 0x0348   (0x0008)  
	UImage*                                            Img_Join_Light;                                             // 0x0350   (0x0008)  
	USolarImageURL*                                    Img_League_Icon;                                            // 0x0358   (0x0008)  
	UImage*                                            Img_Time_Icon;                                              // 0x0360   (0x0008)  
	UImage*                                            Img_Title_BG;                                               // 0x0368   (0x0008)  
	UImage*                                            Img_Title_BG;                                               // 0x0370   (0x0008)  
	UImage*                                            Img_Title_BG;                                               // 0x0378   (0x0008)  
	UImage*                                            Img_Watch_Light;                                            // 0x0380   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x0388   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x0390   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x0398   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x03A0   (0x0008)  
	UOverlay*                                          Overlay_Avatar;                                             // 0x03A8   (0x0008)  
	UOverlay*                                          Overlay_Cup;                                                // 0x03B0   (0x0008)  
	UCanvasPanel*                                      Panel_Info_CreateRoom;                                      // 0x03B8   (0x0008)  
	UCanvasPanel*                                      Panel_Info_Invitation;                                      // 0x03C0   (0x0008)  
	UCanvasPanel*                                      Panel_Pop_Common;                                           // 0x03C8   (0x0008)  
	UCanvasPanel*                                      Panel_Pop_League;                                           // 0x03D0   (0x0008)  
	USolarTextBlock*                                   Txt_Capacity;                                               // 0x03D8   (0x0008)  
	USolarTextBlock*                                   Txt_GameMode;                                               // 0x03E0   (0x0008)  
	UTickerWidget_C*                                   Txt_Invitation;                                             // 0x03E8   (0x0008)  
	USolarTextBlock*                                   Txt_Invitation;                                             // 0x03F0   (0x0008)  
	USolarTextBlock*                                   Txt_Join;                                                   // 0x03F8   (0x0008)  
	USolarTextBlock*                                   Txt_Join_Common;                                            // 0x0400   (0x0008)  
	USolarTextBlock*                                   Txt_Joining;                                                // 0x0408   (0x0008)  
	USolarTextBlock*                                   Txt_League_Name;                                            // 0x0410   (0x0008)  
	USolarTextBlock*                                   Txt_Map;                                                    // 0x0418   (0x0008)  
	UTextBlock*                                        Txt_OBCurr;                                                 // 0x0420   (0x0008)  
	UTextBlock*                                        Txt_OBCurr;                                                 // 0x0428   (0x0008)  
	UTextBlock*                                        Txt_OBCurr;                                                 // 0x0430   (0x0008)  
	USolarTextBlock*                                   Txt_OBTotal;                                                // 0x0438   (0x0008)  
	USolarTextBlock*                                   Txt_PlayerIn;                                               // 0x0440   (0x0008)  
	USolarTextBlock*                                   Txt_Progress_Time;                                          // 0x0448   (0x0008)  
	USolarTextBlock*                                   Txt_RoomName;                                               // 0x0450   (0x0008)  
	USolarTextBlock*                                   Txt_Watch;                                                  // 0x0458   (0x0008)  
	UUI_Component_Close_C*                             UI_Component_Close;                                         // 0x0460   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0468   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0470   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0478   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0480   (0x0008)  
	UUI_Component_PlayerHead_C*                        UI_Component_PlayerHead;                                    // 0x0488   (0x0008)  
	TEnumAsByte<T_Type_System_Push>                    Pop_Type;                                                   // 0x0490   (0x0001)  
	TEnumAsByte<T_Type_Button>                         Btn_Type;                                                   // 0x0491   (0x0001)  
	bool                                               IsNeedShow;                                                 // 0x0492   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.Update_Btn
	void Update_Btn(TEnumAsByte<T_Type_Button> NewParam);                                                                    // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.SetType
	void SetType(TEnumAsByte<T_Type_System_Push> Type);                                                                      // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Lobby/Lobby_Popup/UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup
	void ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup(int32_t EntryPoint);                                                // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Team/UI_TeamInvite_Container.UI_TeamInvite_Container_C
/// Size: 0x0028 (0x000348 - 0x000370)
class UUI_TeamInvite_Container_C : public USolarUserWidget
{ 
public:
	UCanvasPanel*                                      Adapter;                                                    // 0x0348   (0x0008)  
	UCanvasPanel*                                      CanvasPanel_Container;                                      // 0x0350   (0x0008)  
	UCanvasPanel*                                      Panel;                                                      // 0x0358   (0x0008)  
	UUI_Lobby_RoomInvite_MIni_Popup_C*                 UI_Lobby_RoomInvite_MIni_Popup;                             // 0x0360   (0x0008)  
	UUI_Lobby_TeamInvite_Mini_Popup_C*                 UI_Lobby_TeamInvite_Mini_Popup;                             // 0x0368   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Team/UI_TeamInvite_Container.UI_TeamInvite_Container_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Lobby/UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UUI_Lobby_Tips_Container_C : public USolarUserWidget
{ 
public:
	USolarButton*                                      Btn_BlockAllBtn;                                            // 0x0348   (0x0008)  
	USolarButton*                                      Btn_BlockBtn01;                                             // 0x0350   (0x0008)  
	USolarButton*                                      Btn_BlockBtn02;                                             // 0x0358   (0x0008)  
	USolarButton*                                      Btn_BlockBtn03;                                             // 0x0360   (0x0008)  
	USolarButton*                                      Btn_BlockBtn04;                                             // 0x0368   (0x0008)  
	UCanvasPanel*                                      CanvasPanel_Container;                                      // 0x0370   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Lobby/UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/13_UI/Blueprints/Task/UI_Task_Tips_Slot.UI_Task_Tips_Slot_C
/// Size: 0x0018 (0x000348 - 0x000360)
class UUI_Task_Tips_Slot_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UImage*                                            Img_Item;                                                   // 0x0350   (0x0008)  
	USolarTextBlock*                                   Txt_Item;                                                   // 0x0358   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Task/UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Task/UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Task/UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Task/UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Task/UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Task/UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.ExecuteUbergraph_UI_Task_Tips_Slot
	void ExecuteUbergraph_UI_Task_Tips_Slot(int32_t EntryPoint);                                                             // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Target/UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C
/// Size: 0x0019 (0x000348 - 0x000361)
class UUI_Target_Medal_Challenge_S_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UButton*                                           Btn_Medal;                                                  // 0x0350   (0x0008)  
	UImage*                                            Img_Medal_Icon;                                             // 0x0358   (0x0008)  
	bool                                               IsLock;                                                     // 0x0360   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.SetStateIsLocked
	void SetStateIsLocked(bool IsLock);                                                                                      // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Target/UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.ExecuteUbergraph_UI_Target_Medal_Challenge_S
	void ExecuteUbergraph_UI_Target_Medal_Challenge_S(int32_t EntryPoint);                                                   // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C
/// Size: 0x00F5 (0x000348 - 0x00043D)
class UUI_Component_Item_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Puzzle_Unlock_Anim;                                         // 0x0358   (0x0008)  
	UWidgetAnimation*                                  Sold_Anim;                                                  // 0x0360   (0x0008)  
	UWidgetAnimation*                                  Enter_Anim;                                                 // 0x0368   (0x0008)  
	UWidgetAnimation*                                  Receive_Anim;                                               // 0x0370   (0x0008)  
	UButton*                                           Btn_Item;                                                   // 0x0378   (0x0008)  
	UImage*                                            Image_TrialTag;                                             // 0x0380   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0388   (0x0008)  
	UImage*                                            Img_BG_Light;                                               // 0x0390   (0x0008)  
	UImage*                                            Img_BG_NoQuality;                                           // 0x0398   (0x0008)  
	UImage*                                            img_Equiped;                                                // 0x03A0   (0x0008)  
	UImage*                                            Img_Icon;                                                   // 0x03A8   (0x0008)  
	UImage*                                            Img_Light_Bg;                                               // 0x03B0   (0x0008)  
	UImage*                                            Img_Light_Lines;                                            // 0x03B8   (0x0008)  
	UImage*                                            Img_Light_Wipes;                                            // 0x03C0   (0x0008)  
	UImage*                                            Img_Light_Wipes;                                            // 0x03C8   (0x0008)  
	UImage*                                            Img_Loop_Light;                                             // 0x03D0   (0x0008)  
	UImage*                                            Img_Puzzle;                                                 // 0x03D8   (0x0008)  
	UImage*                                            Img_Selected;                                               // 0x03E0   (0x0008)  
	UImage*                                            Img_Sold_Mask;                                              // 0x03E8   (0x0008)  
	UCanvasPanel*                                      Panel_Claim;                                                // 0x03F0   (0x0008)  
	UOverlay*                                          Received;                                                   // 0x03F8   (0x0008)  
	USizeBox*                                          Size_Item;                                                  // 0x0400   (0x0008)  
	USolarRedHint_General_C*                           SolarRedHint_General;                                       // 0x0408   (0x0008)  
	USolarTextBlock*                                   Txt_Number;                                                 // 0x0410   (0x0008)  
	USolarTextBlock*                                   Txt_Owned;                                                  // 0x0418   (0x0008)  
	UOverlay*                                          Unlock;                                                     // 0x0420   (0x0008)  
	TEnumAsByte<E_Type_Item>                           ItemState;                                                  // 0x0428   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0429   (0x0003)  MISSED
	int32_t                                            __;                                                         // 0x042C   (0x0004)  
	TEnumAsByte<E_Item_Quality>                        Quality;                                                    // 0x0430   (0x0001)  
	bool                                               Select;                                                     // 0x0431   (0x0001)  
	bool                                               Experience;                                                 // 0x0432   (0x0001)  
	bool                                               Num;                                                        // 0x0433   (0x0001)  
	bool                                               Puzzle;                                                     // 0x0434   (0x0001)  
	bool                                               Equiped;                                                    // 0x0435   (0x0001)  
	bool                                               RedHint;                                                    // 0x0436   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0437   (0x0001)  MISSED
	int32_t                                            Txt_Size;                                                   // 0x0438   (0x0004)  
	bool                                               NoQuality;                                                  // 0x043C   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0xb43660] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0xb43660] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.ChangItemState
	void ChangItemState();                                                                                                   // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.PlayReceiveAnimEvent
	void PlayReceiveAnimEvent();                                                                                             // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.StopReceiveAnimEvent
	void StopReceiveAnimEvent();                                                                                             // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Item.UI_Component_Item_C.ExecuteUbergraph_UI_Component_Item
	void ExecuteUbergraph_UI_Component_Item(int32_t EntryPoint);                                                             // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C
/// Size: 0x00EC (0x000348 - 0x000434)
class UUI_Component_Tips_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_Exit;                                                  // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_Loop;                                                  // 0x0358   (0x0008)  
	UWidgetAnimation*                                  Anim_Enter;                                                 // 0x0360   (0x0008)  
	UOverlay*                                          Arrow_B;                                                    // 0x0368   (0x0008)  
	UOverlay*                                          Arrow_L;                                                    // 0x0370   (0x0008)  
	UOverlay*                                          Arrow_R;                                                    // 0x0378   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0380   (0x0008)  
	UImage*                                            Img_Light;                                                  // 0x0388   (0x0008)  
	UImage*                                            Img_Light;                                                  // 0x0390   (0x0008)  
	UImage*                                            Img_Mininum;                                                // 0x0398   (0x0008)  
	USolarListView*                                    List_Item;                                                  // 0x03A0   (0x0008)  
	UUI_Target_Medal_Challenge_S_C*                    Medal;                                                      // 0x03A8   (0x0008)  
	UUI_Target_Medal_Challenge_S_C*                    Medal;                                                      // 0x03B0   (0x0008)  
	UUI_Target_Medal_Challenge_S_C*                    Medal;                                                      // 0x03B8   (0x0008)  
	UUI_Target_Medal_Challenge_S_C*                    Medal;                                                      // 0x03C0   (0x0008)  
	UHorizontalBox*                                    Panel_Medal;                                                // 0x03C8   (0x0008)  
	USizeBox*                                          SizeBox;                                                    // 0x03D0   (0x0008)  
	USpacer*                                           Spacer;                                                     // 0x03D8   (0x0008)  
	USolarTextBlock*                                   Txt_Details;                                                // 0x03E0   (0x0008)  
	USolarTextBlock*                                   Txt_Num;                                                    // 0x03E8   (0x0008)  
	USolarTextBlock*                                   Txt_Title;                                                  // 0x03F0   (0x0008)  
	UUI_Component_Btn_C*                               UI_Component_Btn;                                           // 0x03F8   (0x0008)  
	UUI_Component_Item_C*                              UI_Component_Item;                                          // 0x0400   (0x0008)  
	UVerticalBox*                                      VerticalBox;                                                // 0x0408   (0x0008)  
	bool                                               Left;                                                       // 0x0410   (0x0001)  
	bool                                               Right;                                                      // 0x0411   (0x0001)  
	bool                                               Btn;                                                        // 0x0412   (0x0001)  
	bool                                               Num;                                                        // 0x0413   (0x0001)  
	bool                                               Item;                                                       // 0x0414   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0415   (0x0003)  MISSED
	float                                              Location;                                                   // 0x0418   (0x0004)  
	bool                                               Title;                                                      // 0x041C   (0x0001)  
	bool                                               Medal;                                                      // 0x041D   (0x0001)  
	bool                                               Task;                                                       // 0x041E   (0x0001)  
	bool                                               Detail;                                                     // 0x041F   (0x0001)  
	bool                                               Bottom;                                                     // 0x0420   (0x0001)  
	TEnumAsByte<ESlateColorStylingMode>                NewVar;                                                     // 0x0421   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0422   (0x0002)  MISSED
	FLinearColor                                       NewVar;                                                     // 0x0424   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C.ChangeTipStatus
	void ChangeTipStatus();                                                                                                  // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Tips.UI_Component_Tips_C.ExecuteUbergraph_UI_Component_Tips
	void ExecuteUbergraph_UI_Component_Tips(int32_t EntryPoint);                                                             // [0x2649560] Final|HasDefaults    
};

/// Class /Game/13_UI/Blueprints/HUD/Emoji/UI_Emoji_Container.UI_Emoji_Container_C
/// Size: 0x0000 (0x000398 - 0x000398)
class UUI_Emoji_Container_C : public UUIEmojiContainer
{ 
public:
};

/// Class /Game/13_UI/Blueprints/Component/UI_Component_Emoji.UI_Component_Emoji_C
/// Size: 0x0028 (0x000590 - 0x0005B8)
class UUI_Component_Emoji_C : public UEmojiBubbleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	UWidgetAnimation*                                  EmojiEnd_Anim;                                              // 0x0598   (0x0008)  
	UWidgetAnimation*                                  EmojiBegin_Anim;                                            // 0x05A0   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05A8   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05B0   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji.UI_Component_Emoji_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji.UI_Component_Emoji_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/UI_Component_Emoji.UI_Component_Emoji_C.ExecuteUbergraph_UI_Component_Emoji
	void ExecuteUbergraph_UI_Component_Emoji(int32_t EntryPoint);                                                            // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Polar_UR_001.UI_Emote_Polar_UR_001_C
/// Size: 0x0030 (0x000590 - 0x0005C0)
class UUI_Emote_Polar_UR_001_C : public UEmojiBubbleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	UWidgetAnimation*                                  EmojiEnd_Anim;                                              // 0x0598   (0x0008)  
	UWidgetAnimation*                                  EmojiBegin_Anim;                                            // 0x05A0   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05A8   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_Emoji;                                                // 0x05B8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Polar_UR_001.UI_Emote_Polar_UR_001_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Polar_UR_001.UI_Emote_Polar_UR_001_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Polar_UR_001.UI_Emote_Polar_UR_001_C.ExecuteUbergraph_UI_Emote_Polar_UR_001
	void ExecuteUbergraph_UI_Emote_Polar_UR_001(int32_t EntryPoint);                                                         // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_007.UI_Emote_Common_UR_007_C
/// Size: 0x0030 (0x000590 - 0x0005C0)
class UUI_Emote_Common_UR_007_C : public UEmojiBubbleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	UWidgetAnimation*                                  EmojiEnd_Anim;                                              // 0x0598   (0x0008)  
	UWidgetAnimation*                                  EmojiBegin_Anim;                                            // 0x05A0   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05A8   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_Emoji;                                                // 0x05B8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_007.UI_Emote_Common_UR_007_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_007.UI_Emote_Common_UR_007_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_007.UI_Emote_Common_UR_007_C.ExecuteUbergraph_UI_Emote_Common_UR_007
	void ExecuteUbergraph_UI_Emote_Common_UR_007(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_006.UI_Emote_Common_UR_006_C
/// Size: 0x0030 (0x000590 - 0x0005C0)
class UUI_Emote_Common_UR_006_C : public UEmojiBubbleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	UWidgetAnimation*                                  EmojiEnd_Anim;                                              // 0x0598   (0x0008)  
	UWidgetAnimation*                                  EmojiBegin_Anim;                                            // 0x05A0   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05A8   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_Emoji;                                                // 0x05B8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_006.UI_Emote_Common_UR_006_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_006.UI_Emote_Common_UR_006_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_006.UI_Emote_Common_UR_006_C.ExecuteUbergraph_UI_Emote_Common_UR_006
	void ExecuteUbergraph_UI_Emote_Common_UR_006(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_005.UI_Emote_Common_UR_005_C
/// Size: 0x0030 (0x000590 - 0x0005C0)
class UUI_Emote_Common_UR_005_C : public UEmojiBubbleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	UWidgetAnimation*                                  EmojiEnd_Anim;                                              // 0x0598   (0x0008)  
	UWidgetAnimation*                                  EmojiBegin_Anim;                                            // 0x05A0   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05A8   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_Emoji;                                                // 0x05B8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_005.UI_Emote_Common_UR_005_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_005.UI_Emote_Common_UR_005_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_005.UI_Emote_Common_UR_005_C.ExecuteUbergraph_UI_Emote_Common_UR_005
	void ExecuteUbergraph_UI_Emote_Common_UR_005(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_004.UI_Emote_Common_UR_004_C
/// Size: 0x0030 (0x000590 - 0x0005C0)
class UUI_Emote_Common_UR_004_C : public UEmojiBubbleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	UWidgetAnimation*                                  EmojiEnd_Anim;                                              // 0x0598   (0x0008)  
	UWidgetAnimation*                                  EmojiBegin_Anim;                                            // 0x05A0   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05A8   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_Emoji;                                                // 0x05B8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_004.UI_Emote_Common_UR_004_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_004.UI_Emote_Common_UR_004_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_004.UI_Emote_Common_UR_004_C.ExecuteUbergraph_UI_Emote_Common_UR_004
	void ExecuteUbergraph_UI_Emote_Common_UR_004(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_002.UI_Emote_Common_UR_002_C
/// Size: 0x0030 (0x000590 - 0x0005C0)
class UUI_Emote_Common_UR_002_C : public UEmojiBubbleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	UWidgetAnimation*                                  EmojiEnd_Anim;                                              // 0x0598   (0x0008)  
	UWidgetAnimation*                                  EmojiBegin_Anim;                                            // 0x05A0   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05A8   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_Emoji;                                                // 0x05B8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_002.UI_Emote_Common_UR_002_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_002.UI_Emote_Common_UR_002_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_002.UI_Emote_Common_UR_002_C.ExecuteUbergraph_UI_Emote_Common_UR_002
	void ExecuteUbergraph_UI_Emote_Common_UR_002(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_001.UI_Emote_Common_UR_001_C
/// Size: 0x0030 (0x000590 - 0x0005C0)
class UUI_Emote_Common_UR_001_C : public UEmojiBubbleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0590   (0x0008)  
	UWidgetAnimation*                                  EmojiEnd_Anim;                                              // 0x0598   (0x0008)  
	UWidgetAnimation*                                  EmojiBegin_Anim;                                            // 0x05A0   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05A8   (0x0008)  
	UImage*                                            img_Emoji_Bg;                                               // 0x05B0   (0x0008)  
	UCanvasPanel*                                      Panel_Emoji;                                                // 0x05B8   (0x0008)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_001.UI_Emote_Common_UR_001_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_001.UI_Emote_Common_UR_001_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Component/Emote/UI_Emote_Common_UR_001.UI_Emote_Common_UR_001_C.ExecuteUbergraph_UI_Emote_Common_UR_001
	void ExecuteUbergraph_UI_Emote_Common_UR_001(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C
/// Size: 0x00CA (0x000348 - 0x000412)
class UUI_Activity_NewPlayer_Item_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Set_Loop_Anim;                                              // 0x0350   (0x0008)  
	UImage*                                            check;                                                      // 0x0358   (0x0008)  
	UButton*                                           ClickBtn;                                                   // 0x0360   (0x0008)  
	UTextBlock*                                        count;                                                      // 0x0368   (0x0008)  
	UImage*                                            Image_TrialTag;                                             // 0x0370   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0378   (0x0008)  
	UImage*                                            Img_BGBlack;                                                // 0x0380   (0x0008)  
	UImage*                                            Img_CanGet;                                                 // 0x0388   (0x0008)  
	UImage*                                            Img_Check_Bg;                                               // 0x0390   (0x0008)  
	UImage*                                            Img_Day_NormalBG;                                           // 0x0398   (0x0008)  
	UImage*                                            Img_Day_NormalBG;                                           // 0x03A0   (0x0008)  
	UImage*                                            Img_Item;                                                   // 0x03A8   (0x0008)  
	UImage*                                            Img_Item_Quaitly_Light;                                     // 0x03B0   (0x0008)  
	UImage*                                            Img_Item_Quaitly_Line;                                      // 0x03B8   (0x0008)  
	UImage*                                            Img_Quaitly_BG;                                             // 0x03C0   (0x0008)  
	URetainerBox*                                      Item_Normal;                                                // 0x03C8   (0x0008)  
	UOverlay*                                          Overlay_CanGet;                                             // 0x03D0   (0x0008)  
	UOverlay*                                          Overlay_NormalDate;                                         // 0x03D8   (0x0008)  
	UOverlay*                                          Overlay_NormalDate;                                         // 0x03E0   (0x0008)  
	UOverlay*                                          Panel_Get;                                                  // 0x03E8   (0x0008)  
	UWidgetSwitcher*                                   Switcher_ItemStatus;                                        // 0x03F0   (0x0008)  
	USolarTextBlock*                                   Txt_Day_Normal;                                             // 0x03F8   (0x0008)  
	USolarTextBlock*                                   Txt_Day_Normal;                                             // 0x0400   (0x0008)  
	USolarTextBlock*                                   Txt_Day_Normal;                                             // 0x0408   (0x0008)  
	ESigninItemState                                   State;                                                      // 0x0410   (0x0001)  
	bool                                               bPlayAnim;                                                  // 0x0411   (0x0001)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.CanGetItem
	void CanGetItem(int32_t NumLoopsToPlay);                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.SetSigninState
	void SetSigninState(ESigninItemState State);                                                                             // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.ExecuteUbergraph_UI_Activity_NewPlayer_Item
	void ExecuteUbergraph_UI_Activity_NewPlayer_Item(int32_t EntryPoint);                                                    // [0x2649560] Final                
};

/// Class /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer.UI_Activity_NewPlayer_C
/// Size: 0x00A8 (0x000348 - 0x0003F0)
class UUI_Activity_NewPlayer_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Appear_Anim;                                                // 0x0350   (0x0008)  
	USolarButton*                                      Btn_Cancel;                                                 // 0x0358   (0x0008)  
	UHorizontalBox*                                    HorizontalBox_Items;                                        // 0x0360   (0x0008)  
	UImage*                                            Image;                                                      // 0x0368   (0x0008)  
	UImage*                                            Img_Bg;                                                     // 0x0370   (0x0008)  
	UImage*                                            Img_Exit;                                                   // 0x0378   (0x0008)  
	UImage*                                            Img_Title01_BG;                                             // 0x0380   (0x0008)  
	UCanvasPanel*                                      Panel;                                                      // 0x0388   (0x0008)  
	USolarTextBlock*                                   Txt_LeftTime;                                               // 0x0390   (0x0008)  
	USolarTextBlock*                                   Txt_Title01;                                                // 0x0398   (0x0008)  
	UUI_Activity_NewPlayer_Item_C*                     UI_Activity_NewPlayer_Item;                                 // 0x03A0   (0x0008)  
	UUI_Activity_NewPlayer_Item_C*                     UI_Activity_NewPlayer_Item;                                 // 0x03A8   (0x0008)  
	UUI_Activity_NewPlayer_Item_C*                     UI_Activity_NewPlayer_Item;                                 // 0x03B0   (0x0008)  
	UUI_Activity_NewPlayer_Item_C*                     UI_Activity_NewPlayer_Item;                                 // 0x03B8   (0x0008)  
	UUI_Activity_NewPlayer_Item_C*                     UI_Activity_NewPlayer_Item;                                 // 0x03C0   (0x0008)  
	UUI_Activity_NewPlayer_Item_C*                     UI_Activity_NewPlayer_Item;                                 // 0x03C8   (0x0008)  
	UUI_Activity_NewPlayer_Item_C*                     UI_Activity_NewPlayer_Item;                                 // 0x03D0   (0x0008)  
	UUI_Activity_NewPlayer_Item_C*                     UI_Activity_NewPlayer_Item;                                 // 0x03D8   (0x0008)  
	TArray<UUI_Activity_NewPlayer_Item_C*>             NewPlayerRewardList;                                        // 0x03E0   (0x0010)  


	/// Functions
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer.UI_Activity_NewPlayer_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer.UI_Activity_NewPlayer_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer.UI_Activity_NewPlayer_C.Construct
	void Construct();                                                                                                        // [0xb43660] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/13_UI/Blueprints/Activity/NewPlayer/UI_Activity_NewPlayer.UI_Activity_NewPlayer_C.ExecuteUbergraph_UI_Activity_NewPlayer
	void ExecuteUbergraph_UI_Activity_NewPlayer(int32_t EntryPoint);                                                         // [0x2649560] Final                
};

/// Struct /Game/13_UI/Blueprints/Component/S_VIP_TxtINfo.S_VIP_TxtInfo
/// Size: 0x0088 (0x000000 - 0x000088)
struct FS_VIP_TxtInfo
{ 
	FSlateColor                                        TxtColor_5_A6B51141413091A415CEED8A906D4D30;                // 0x0000   (0x0028)  
	FSlateFontInfo                                     TxtFontInfo_8_E2A2CC3F4902DE6BD87CA899D6EBD7E5;             // 0x0028   (0x0060)  
};

/// Struct /Game/13_UI/Blueprints/Settings/Customize/S_Customize_Element.S_Customize_Element
/// Size: 0x0058 (0x000000 - 0x000058)
struct FS_Customize_Element
{ 
	FString                                            PanelConfigName_30_C8EA5888448C1065B4C67D8ED7184138;        // 0x0000   (0x0010)  
	UCanvasPanel*                                      PanelWidget_49_2577B04D4032F2C407CAA48E62966365;            // 0x0010   (0x0008)  
	UWidget*                                           DragWidget_32_625CBF2246B0278CD18809971563076C;             // 0x0018   (0x0008)  
	UWidget*                                           SelectedWidget_34_8DEE1E594AE75D45FD35AAA7EBB6FF14;         // 0x0020   (0x0008)  
	int32_t                                            NoticeId_45_FD5E6E5C45B1A0B2786E3B9107BABFFA;               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<UWidget*>                                   SelectedHideWidgets_40_E56A7010459F7BE4121B739202DA1058;    // 0x0030   (0x0010)  
	TArray<UWidget*>                                   SelectedShowWidgets_41_3DB1ACF94FF26528168047A9A05881A1;    // 0x0040   (0x0010)  
	UWidget*                                           PanelDisableWidget_48_9C396A2343CA316E853BC7B06F9F2901;     // 0x0050   (0x0008)  
};

/// Enum /Game/13_UI/Blueprints/Component/E_Type_Btn.E_Type_Btn
/// Size: 0x09
enum E_Type_Btn : uint8_t
{
	E_Type_Btn__MainBtn                                                              = 0,
	E_Type_Btn__SecondaryBtn                                                         = 1,
	E_Type_Btn__ShopBtn                                                              = 2,
	E_Type_Btn__StrongBtn                                                            = 3,
	E_Type_Btn__WeakBtn                                                              = 4,
	E_Type_Btn__LeagueBtn                                                            = 5,
	E_Type_Btn__ThirdlyBtn                                                           = 6,
	E_Type_Btn__ThirdlyStrongBtn                                                     = 7,
	E_Type_Btn__E Type MAX                                                           = 8
};

/// Enum /Game/13_UI/Blueprints/Component/E_State_Btn.E_State_Btn
/// Size: 0x05
enum E_State_Btn : uint8_t
{
	E_State_Btn__Normal                                                              = 0,
	E_State_Btn__hovered                                                             = 1,
	E_State_Btn__Pressed                                                             = 2,
	E_State_Btn__disabled                                                            = 3,
	E_State_Btn__E State MAX                                                         = 4
};

/// Enum /Game/13_UI/Blueprints/HUD/SubWidgetOfBattleUI/E_PassiveBuff.E_PassiveBuff
/// Size: 0x03
enum E_PassiveBuff : uint8_t
{
	E_PassiveBuff__Normal                                                            = 0,
	E_PassiveBuff__Buff                                                              = 1,
	E_PassiveBuff__E MAX                                                             = 2
};

/// Enum /Game/13_UI/Blueprints/Component/Component_C/E_FlagType.E_FlagType
/// Size: 0x03
enum E_FlagType : uint8_t
{
	E_FlagType__NationalFlag                                                         = 0,
	E_FlagType__ClanFlag                                                             = 1,
	E_FlagType__E MAX                                                                = 2
};

/// Enum /Game/13_UI/Blueprints/Component/E_Type_RedHint.E_Type_RedHint
/// Size: 0x03
enum E_Type_RedHint : uint8_t
{
	E_Type_RedHint__NewEnumerator0                                                   = 0,
	E_Type_RedHint__NewEnumerator1                                                   = 1,
	E_Type_RedHint__E Type MAX                                                       = 2
};

/// Enum /Game/13_UI/Blueprints/Component/E_Item_Quality.E_Item_Quality
/// Size: 0x07
enum E_Item_Quality : uint8_t
{
	E_Item_Quality__N                                                                = 0,
	E_Item_Quality__R                                                                = 1,
	E_Item_Quality__SR                                                               = 2,
	E_Item_Quality__SSR                                                              = 3,
	E_Item_Quality__SSR+                                                             = 4,
	E_Item_Quality__UR                                                               = 5,
	E_Item_Quality__E Item MAX                                                       = 6
};

/// Enum /Game/13_UI/Blueprints/Component/E_Type_Social.E_Type_Social
/// Size: 0x04
enum E_Type_Social : uint8_t
{
	E_Type_Social__None                                                              = 0,
	E_Type_Social__Twitter                                                           = 1,
	E_Type_Social__Facebook                                                          = 2,
	E_Type_Social__E Type MAX                                                        = 3
};

/// Enum /Game/13_UI/Blueprints/Component/E_Type_Gender.E_Type_Gender
/// Size: 0x05
enum E_Type_Gender : uint8_t
{
	E_Type_Gender__NewEnumerator5                                                    = 0,
	E_Type_Gender__NewEnumerator0                                                    = 1,
	E_Type_Gender__NewEnumerator1                                                    = 2,
	E_Type_Gender__None                                                              = 3,
	E_Type_Gender__E Type MAX                                                        = 4
};

/// Enum /Game/13_UI/Blueprints/Lobby/E_ProfessionType.E_ProfessionType
/// Size: 0x05
enum E_ProfessionType : uint8_t
{
	E_ProfessionType__Assault                                                        = 0,
	E_ProfessionType__Umbra                                                          = 1,
	E_ProfessionType__Pulse                                                          = 2,
	E_ProfessionType__Position                                                       = 3,
	E_ProfessionType__E MAX                                                          = 4
};

/// Enum /Game/13_UI/Blueprints/Component/E_Platform.E_Platform
/// Size: 0x06
enum E_Platform : uint8_t
{
	E_Platform__None                                                                 = 0,
	E_Platform__Pc                                                                   = 1,
	E_Platform__Phone                                                                = 2,
	E_Platform__Console                                                              = 3,
	E_Platform__Other                                                                = 4,
	E_Platform__E MAX                                                                = 5
};

/// Enum /Game/13_UI/Blueprints/Component/E_Type_PlayerName_Vip_Color.E_Type_PlayerName_Vip_Color
/// Size: 0x05
enum E_Type_PlayerName_Vip_Color : uint8_t
{
	E_Type_PlayerName_Vip_Color__None                                                = 0,
	E_Type_PlayerName_Vip_Color__Week                                                = 1,
	E_Type_PlayerName_Vip_Color__Month                                               = 2,
	E_Type_PlayerName_Vip_Color__Super                                               = 3,
	E_Type_PlayerName_Vip_Color__E Type Player Name Vip MAX                          = 4
};

/// Enum /Game/13_UI/Blueprints/Lobby/Lobby_Popup/T_Type_System_Push.T_Type_System_Push
/// Size: 0x07
enum T_Type_System_Push : uint8_t
{
	T_Type_System_Push__Recruit                                                      = 0,
	T_Type_System_Push__Room                                                         = 1,
	T_Type_System_Push__Elimination1                                                 = 2,
	T_Type_System_Push__Elimination2                                                 = 3,
	T_Type_System_Push__BO1                                                          = 4,
	T_Type_System_Push__Points                                                       = 5,
	T_Type_System_Push__T Type System MAX                                            = 6
};

/// Enum /Game/13_UI/Blueprints/Lobby/Lobby_Popup/T_Type_Button.T_Type_Button
/// Size: 0x05
enum T_Type_Button : uint8_t
{
	T_Type_Button__Join                                                              = 0,
	T_Type_Button__Join_Icon                                                         = 1,
	T_Type_Button__Joining                                                           = 2,
	T_Type_Button__Watch                                                             = 3,
	T_Type_Button__T Type MAX                                                        = 4
};

/// Enum /Game/13_UI/Blueprints/CreateRoom/E_Type_CreateRoom_Gender.E_Type_CreateRoom_Gender
/// Size: 0x05
enum E_Type_CreateRoom_Gender : uint8_t
{
	E_Type_CreateRoom_Gender__NewEnumerator0                                         = 0,
	E_Type_CreateRoom_Gender__NewEnumerator1                                         = 1,
	E_Type_CreateRoom_Gender__NewEnumerator2                                         = 2,
	E_Type_CreateRoom_Gender__None                                                   = 3,
	E_Type_CreateRoom_Gender__E Type Create Room MAX                                 = 4
};

/// Enum /Game/13_UI/Blueprints/Lobby/Lobby_Popup/T_Type_Invitation.T_Type_Invitation
/// Size: 0x07
enum T_Type_Invitation : uint8_t
{
	T_Type_Invitation__Team Application                                              = 0,
	T_Type_Invitation__Team Invitation                                               = 1,
	T_Type_Invitation__Home Invitation                                               = 2,
	T_Type_Invitation__CreateRoom Invitation                                         = 3,
	T_Type_Invitation__Skydiving Invitation                                          = 4,
	T_Type_Invitation__Skydiving Transfer                                            = 5,
	T_Type_Invitation__T Type MAX                                                    = 6
};

/// Enum /Game/13_UI/Blueprints/Component/E_Type_Item.E_Type_Item
/// Size: 0x06
enum E_Type_Item : uint8_t
{
	E_Type_Item__NewEnumerator0                                                      = 0,
	E_Type_Item__NewEnumerator1                                                      = 1,
	E_Type_Item__NewEnumerator2                                                      = 2,
	E_Type_Item__NewEnumerator3                                                      = 3,
	E_Type_Item__NewEnumerator5                                                      = 4,
	E_Type_Item__E Type MAX                                                          = 5
};

