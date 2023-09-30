// Class GooglePAD.GooglePADFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary {

	enum class EGooglePADErrorCode ShowCellularDataConfirmation(); // Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17ccf00
	enum class EGooglePADErrorCode RequestRemoval(struct FString Name); // Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17cce60
	enum class EGooglePADErrorCode RequestInfo(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17cc870
	enum class EGooglePADErrorCode RequestDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17cc870
	void ReleaseDownloadState(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17ccde0
	void ReleaseAssetPackLocation(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17ccde0
	int32_t GetTotalBytesToDownload(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17ccba0
	enum class EGooglePADStorageMethod GetStorageMethod(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17ccd50
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus& status); // Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17cccc0
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17ccc30
	enum class EGooglePADErrorCode GetDownloadState(struct FString Name, int32_t& State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17cc9e0
	int32_t GetBytesDownloaded(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17ccba0
	struct FString GetAssetsPath(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17ccad0
	enum class EGooglePADErrorCode GetAssetPackLocation(struct FString Name, int32_t& Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x17cc9e0
	enum class EGooglePADErrorCode CancelDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.CancelDownload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17cc870
};

