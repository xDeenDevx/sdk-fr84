/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SolarTCPSocket.

/// Class /Script/SolarTCPSocket.SolarTCPSocketClient
/// Size: 0x0090 (0x000228 - 0x0002B8)
class ASolarTCPSocketClient : public AActor
{ 
public:
	int32_t                                            SendBufferSize;                                             // 0x0228   (0x0004)  
	int32_t                                            ReceiveBufferSize;                                          // 0x022C   (0x0004)  
	float                                              TimeBetweenTicks;                                           // 0x0230   (0x0004)  
	unsigned char                                      UnknownData00_6[0x84];                                      // 0x0234   (0x0084)  MISSED


	/// Functions
	// Function /Script/SolarTCPSocket.SolarTCPSocketClient.SendData
	bool SendData(int32_t ConnectionId, TArray<char> Data);                                                                  // [0x16cf120] Final|Native|Public|BlueprintCallable 
	// Function /Script/SolarTCPSocket.SolarTCPSocketClient.Disconnect
	void Disconnect(int32_t ConnectionId);                                                                                   // [0x16cf090] Final|Native|Public|BlueprintCallable 
	// Function /Script/SolarTCPSocket.SolarTCPSocketClient.Connect
	void Connect(FString IP, int32_t Port, FDelegateProperty& OnConnected, FDelegateProperty& OnDisconnected, FDelegateProperty& OnMessageReceived, int32_t& ConnectionId); // [0x16cee20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

