// Class FarlightPatchRuntime.PakHelper
// Size: 0x28 (Inherited: 0x28)
struct UPakHelper : UObject {

	bool ReloadIniFile(struct FString StrippedConfigFileName, struct FString FilePath); // Function FarlightPatchRuntime.PakHelper.ReloadIniFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e8280
	void ReloadGameUserSettings(); // Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e8260
	void ReloadDeviceProfiles(); // Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e8240
	void ReloadCVarSettingsFromIni(); // Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e8220
	void OpenShaderPatchLibrary(struct FString ShaderPatchLibraryName, struct FString LibraryDir, bool& bShaderPatchLibUnique); // Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16e80f0
	bool MountPak(struct FString InPakFilename, int32_t PakOrder); // Function FarlightPatchRuntime.PakHelper.MountPak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e8010
	struct FString GetStrippedConfigFileName(struct FString IniName); // Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e7f10
	struct FString GetProjectName(); // Function FarlightPatchRuntime.PakHelper.GetProjectName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e7e90
	struct UPakWriter* CreatePakWriter(struct FString InFilename, struct FString InMountPoint); // Function FarlightPatchRuntime.PakHelper.CreatePakWriter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e7c70
	struct UPakReader* CreatePakReader(struct FString InFilename, bool bLoadIndex); // Function FarlightPatchRuntime.PakHelper.CreatePakReader // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16e7b90
};

// Class FarlightPatchRuntime.PakReader
// Size: 0x50 (Inherited: 0x28)
struct UPakReader : UObject {
	char pad_28[0x28]; // 0x28(0x28)

	int64_t GetTotalSize(); // Function FarlightPatchRuntime.PakReader.GetTotalSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16e7ff0
	struct TArray<struct FPakEntryInfo> GetPakIndex(); // Function FarlightPatchRuntime.PakReader.GetPakIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16e7d70
	void Close(); // Function FarlightPatchRuntime.PakReader.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x16e7b70
};

// Class FarlightPatchRuntime.PakWriter
// Size: 0xc0 (Inherited: 0x28)
struct UPakWriter : UObject {
	char pad_28[0x98]; // 0x28(0x98)
};

