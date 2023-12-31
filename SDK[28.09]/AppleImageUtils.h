/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AppleImageUtils.

/// Class /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
/// Size: 0x0068 (0x000028 - 0x000090)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0028   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnFailure;                                                  // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0058   (0x0010)  MISSED
	FAppleImageUtilsImageConversionResult              ConversionResult;                                           // 0x0068   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0088   (0x0008)  MISSED


	/// Functions
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x17c18c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x17c1700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x17c1520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate); // [0x17c1340] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AppleImageUtils.AppleImageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAppleImageInterface : public UInterface
{ 
public:
};

/// Struct /Script/AppleImageUtils.AppleImageUtilsImageConversionResult
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAppleImageUtilsImageConversionResult
{ 
	FString                                            Error;                                                      // 0x0000   (0x0010)  
	TArray<char>                                       ImageData;                                                  // 0x0010   (0x0010)  
};

/// Enum /Script/AppleImageUtils.EAppleTextureType
/// Size: 0x06
enum EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown                                                       = 0,
	EAppleTextureType__Image                                                         = 1,
	EAppleTextureType__PixelBuffer                                                   = 2,
	EAppleTextureType__Surface                                                       = 3,
	EAppleTextureType__MetalTexture                                                  = 4,
	EAppleTextureType__EAppleTextureType_MAX                                         = 5
};

/// Enum /Script/AppleImageUtils.ETextureRotationDirection
/// Size: 0x05
enum ETextureRotationDirection : uint8_t
{
	ETextureRotationDirection__None                                                  = 0,
	ETextureRotationDirection__Left                                                  = 1,
	ETextureRotationDirection__Right                                                 = 2,
	ETextureRotationDirection__Down                                                  = 3,
	ETextureRotationDirection__ETextureRotationDirection_MAX                         = 4
};

