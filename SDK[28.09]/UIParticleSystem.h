/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UIParticleSystem.

/// Class /Script/UIParticleSystem.ParticleSystemWidget
/// Size: 0x0030 (0x000138 - 0x000168)
class UParticleSystemWidget : public UWidget
{ 
public:
	UParticleSystem*                                   ParticleSystemTemplate;                                     // 0x0138   (0x0008)  
	bool                                               bReactivate;                                                // 0x0140   (0x0001)  
	bool                                               bActiveSysWhenInit;                                         // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0142   (0x0006)  MISSED
	UParticleSystemComponent*                          WorldParticleComponent;                                     // 0x0148   (0x0008)  
	AActor*                                            WorldParticleActor;                                         // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0158   (0x0010)  MISSED


	/// Functions
	// Function /Script/UIParticleSystem.ParticleSystemWidget.SetReactivate
	void SetReactivate(bool bActivateAndReset);                                                                              // [0x81dca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticleSystem.ParticleSystemWidget.ActivateParticles
	void ActivateParticles(bool bActive, bool bReset);                                                                       // [0x81dbd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UIParticleSystem.UIParticleComponent
/// Size: 0x0000 (0x0007B0 - 0x0007B0)
class UUIParticleComponent : public UParticleSystemComponent
{ 
public:
};

/// Class /Script/UIParticleSystem.UIParticleActor
/// Size: 0x0000 (0x000228 - 0x000228)
class AUIParticleActor : public AActor
{ 
public:
};

