// BlueprintGeneratedClass Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C
// Size: 0x319 (Inherited: 0x310)
struct AAbility_Anti-vehicle_Weapon01_C : ASolarAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	bool HasExploded; // 0x318(0x01)

	void ReceiveBeginPlay(); // Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ReceiveTick(float DeltaSeconds); // Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Ability_Anti-vehicle_Weapon01(int32_t EntryPoint); // Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ExecuteUbergraph_Ability_Anti-vehicle_Weapon01 // (Final|UbergraphFunction) // @ game+0x2649560
};

