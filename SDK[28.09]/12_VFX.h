/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package 12_VFX.

/// Class /Game/12_VFX/Mobile/FX/Skill/Buff/BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C
/// Size: 0x0000 (0x000350 - 0x000350)
class UBP_SolarScreenEffectWidget_C : public USolarScreenEffectWidget
{ 
public:
};

/// Class /Game/12_VFX/Mobile/FX/Skill/Buff/Widget/FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C
/// Size: 0x002C (0x000350 - 0x00037C)
class UFX_Widget_Buff_AbilityIncrease_C : public UBP_SolarScreenEffectWidget_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Buff_AbilityIncrease;                                       // 0x0358   (0x0008)  
	UImage*                                            Left;                                                       // 0x0360   (0x0008)  
	UImage*                                            Right;                                                      // 0x0368   (0x0008)  
	UImage*                                            Up;                                                         // 0x0370   (0x0008)  
	float                                              Duartion;                                                   // 0x0378   (0x0004)  


	/// Functions
	// Function /Game/12_VFX/Mobile/FX/Skill/Buff/Widget/FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/12_VFX/Mobile/FX/Skill/Buff/Widget/FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C.ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease
	void ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease(int32_t EntryPoint);                                                // [0x2649560] Final                
};

