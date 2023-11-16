// Class FarlightPatchRuntime.PakHelper
// Size: 0x28 (Inherited: 0x28)
struct UPakHelper : UObject {

	void ReloadRedirectSettingsFromIni(struct FString IniPath); // Function FarlightPatchRuntime.PakHelper.ReloadRedirectSettingsFromIni // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb6d00
	bool ReloadIniFile(struct FString StrippedConfigFileName, struct FString FilePath); // Function FarlightPatchRuntime.PakHelper.ReloadIniFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb6c10
	void ReloadGameUserSettings(); // Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb6bf0
	void ReloadDeviceProfiles(); // Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb6bd0
	void ReloadCVarSettingsFromIni(); // Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb6bb0
	void OpenShaderPatchLibrary(struct FString ShaderPatchLibraryName, struct FString LibraryDir, bool& bShaderPatchLibUnique); // Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1cb6a80
	bool MountPak(struct FString InPakFilename, int32_t PakOrder); // Function FarlightPatchRuntime.PakHelper.MountPak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb69a0
	struct FString GetStrippedConfigFileName(struct FString IniName); // Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb68a0
	struct FString GetProjectName(); // Function FarlightPatchRuntime.PakHelper.GetProjectName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb6820
	struct UPakWriter* CreatePakWriter(struct FString InFilename, struct FString InMountPoint); // Function FarlightPatchRuntime.PakHelper.CreatePakWriter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb6600
	struct UPakReader* CreatePakReader(struct FString InFilename, bool bLoadIndex); // Function FarlightPatchRuntime.PakHelper.CreatePakReader // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1cb6520
};

// Class FarlightPatchRuntime.PakReader
// Size: 0x50 (Inherited: 0x28)
struct UPakReader : UObject {
	char pad_28[0x28]; // 0x28(0x28)

	int64_t GetTotalSize(); // Function FarlightPatchRuntime.PakReader.GetTotalSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb6980
	struct TArray<struct FPakEntryInfo> GetPakIndex(); // Function FarlightPatchRuntime.PakReader.GetPakIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cb6700
	void Close(); // Function FarlightPatchRuntime.PakReader.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x1cb6500
};

// Class FarlightPatchRuntime.PakWriter
// Size: 0xc0 (Inherited: 0x28)
struct UPakWriter : UObject {
	char pad_28[0x98]; // 0x28(0x98)
};

