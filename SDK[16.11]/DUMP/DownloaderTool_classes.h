// Class DownloaderTool.DownloaderHttpTask
// Size: 0xc8 (Inherited: 0x28)
struct UDownloaderHttpTask : UObject {
	struct FMulticastInlineDelegate OnTaskProgress; // 0x28(0x10)
	struct FMulticastInlineDelegate OnTaskSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTaskFailed; // 0x48(0x10)
	char pad_58[0x70]; // 0x58(0x70)
};

// Class DownloaderTool.DownloaderUtils
// Size: 0x28 (Inherited: 0x28)
struct UDownloaderUtils : UObject {

	struct FString StringFileRawData(struct FDownloaderResponse& InResponse); // Function DownloaderTool.DownloaderUtils.StringFileRawData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xcd64d0
	void SaveResponseToCache(struct FDownloaderResponse& InResponse, struct FString CachePath); // Function DownloaderTool.DownloaderUtils.SaveResponseToCache // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xcd6290
	struct FString GetVerbFromJsonRequestStr(struct FString JsonRequestStr); // Function DownloaderTool.DownloaderUtils.GetVerbFromJsonRequestStr // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xcd6130
	struct FDownloaderResponse GetResponseFromCache(struct FString InUrl, struct FString CachePath); // Function DownloaderTool.DownloaderUtils.GetResponseFromCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xcd5ee0
	struct TMap<struct FString, struct FString> GetHeadersFromJsonRequestStr(struct FString JsonRequestStr); // Function DownloaderTool.DownloaderUtils.GetHeadersFromJsonRequestStr // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xcd5d50
	struct UTexture2DDynamic* execConvertRawDataToTexture(struct TArray<char>& Data, int32_t& DataLength); // Function DownloaderTool.DownloaderUtils.execConvertRawDataToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xcd6650
	struct FString DecodeFileRawData(struct FDownloaderResponse& InResponse); // Function DownloaderTool.DownloaderUtils.DecodeFileRawData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xcd5bd0
};

