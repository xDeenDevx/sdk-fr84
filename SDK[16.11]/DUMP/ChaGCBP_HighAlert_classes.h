// BlueprintGeneratedClass ChaGCBP_HighAlert.ChaGCBP_HighAlert_C
// Size: 0x320 (Inherited: 0x310)
struct AChaGCBP_HighAlert_C : AChaGC_HighAlert {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)

	void ReceiveAlertEvent(enum class EAlertDirection InDirection); // Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ReceiveAlertEvent // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_ChaGCBP_HighAlert(int32_t EntryPoint); // Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ExecuteUbergraph_ChaGCBP_HighAlert // (Final|UbergraphFunction) // @ game+0x2d656b0
};

