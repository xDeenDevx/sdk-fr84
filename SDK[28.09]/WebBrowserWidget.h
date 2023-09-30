/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WebBrowserWidget.

/// Class /Script/WebBrowserWidget.WebBrowser
/// Size: 0x0068 (0x000138 - 0x0001A0)
class UWebBrowser : public UWidget
{ 
public:
	FMulticastInlineDelegate                           OnUrlChanged;                                               // 0x0138   (0x0010)  
	FMulticastInlineDelegate                           OnBeforePopup;                                              // 0x0148   (0x0010)  
	FMulticastInlineDelegate                           OnBeforeNavigation;                                         // 0x0158   (0x0010)  
	TArray<FString>                                    URLKeywordWithoutNavigation;                                // 0x0168   (0x0010)  
	FString                                            InitialURL;                                                 // 0x0178   (0x0010)  
	bool                                               bSupportsTransparency;                                      // 0x0188   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0189   (0x0017)  MISSED


	/// Functions
	// Function /Script/WebBrowserWidget.WebBrowser.StopLoad
	void StopLoad();                                                                                                         // [0xbcc890] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.SetURLWithoutNavigation
	void SetURLWithoutNavigation(TArray<FString>& URLs);                                                                     // [0xbcc7c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.Reload
	void Reload();                                                                                                           // [0xbcc7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	void OnUrlChanged__DelegateSignature(FText& Text);                                                                       // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	void OnBeforePopup__DelegateSignature(FString URL, FString Frame);                                                       // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/WebBrowserWidget.WebBrowser.OnBeforeNavigation__DelegateSignature
	void OnBeforeNavigation__DelegateSignature(FString URL);                                                                 // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadURL
	void LoadURL(FString NewURL);                                                                                            // [0xbcc6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadString
	void LoadString(FString Contents, FString DummyURL);                                                                     // [0xbcc530] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.GetUrl
	FString GetUrl();                                                                                                        // [0xbcc4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.GetTitleText
	FText GetTitleText();                                                                                                    // [0xbcc410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.ExecuteJavascript
	void ExecuteJavascript(FString ScriptText);                                                                              // [0xbcc370] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.CloseSelf
	void CloseSelf();                                                                                                        // [0xbcc350] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.BindUObject
	void BindUObject(FString Name, UObject* Object, bool bIsPermanent);                                                      // [0xbcc220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WebBrowserWidget.WebBrowserAssetManager
/// Size: 0x0050 (0x000028 - 0x000078)
class UWebBrowserAssetManager : public UObject
{ 
public:
	TWeakObjectPtr<UMaterial*>                         DefaultMaterial;                                            // 0x0028   (0x0028)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED
};

