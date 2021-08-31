#pragma once

// Name: AWL, Version: 4.24.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MagicLeap.InAppPurchaseComponent
// 0x0000
class UInAppPurchaseComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.InAppPurchaseComponent");
		return ptr;
	}



	void TryPurchaseItemAsync();
	void TryGetPurchaseHistoryAsync();
	void TryGetItemsDetailsAsync();
	void PurchaseConfirmationSuccess__DelegateSignature();
	void PurchaseConfirmationFailure__DelegateSignature();
	void InAppPurchaseLogMessage__DelegateSignature();
	void GetPurchaseHistorySuccess__DelegateSignature();
	void GetPurchaseHistoryFailure__DelegateSignature();
	void GetItemsDetailsSuccess__DelegateSignature();
	void GetItemsDetailsFailure__DelegateSignature();
};

// Class MagicLeap.LuminApplicationLifecycleComponent
// 0x0000
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.LuminApplicationLifecycleComponent");
		return ptr;
	}



};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// 0x0000
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent");
		return ptr;
	}



};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// 0x0000
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.MagicLeapHMDFunctionLibrary");
		return ptr;
	}



	void SetStabilizationDepthActor();
	void SetFocusActor();
	void SetBaseRotation();
	void SetBasePosition();
	void SetBaseOrientation();
	void SetAppReady();
	void IsRunningOnMagicLeapHMD();
	void GetMLSDKVersionRevision();
	void GetMLSDKVersionMinor();
	void GetMLSDKVersionMajor();
	void GetMLSDKVersion();
	void GetHeadTrackingState();
	void GetHeadTrackingMapEvents();
};

// Class MagicLeap.MagicLeapSettings
// 0x0000
class UMagicLeapSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.MagicLeapSettings");
		return ptr;
	}



};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// 0x0000
class UMagicLeapMeshBlockSelectorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.MagicLeapMeshBlockSelectorInterface");
		return ptr;
	}



	void SelectMeshBlocks();
};

// Class MagicLeap.MeshTrackerComponent
// 0x0000
class UMeshTrackerComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.MeshTrackerComponent");
		return ptr;
	}



	void SelectMeshBlocks();
	void OnMeshTrackerUpdated__DelegateSignature();
	void GetNumQueuedBlockUpdates();
	void DisconnectMRMesh();
	void DisconnectBlockSelector();
	void ConnectMRMesh();
	void ConnectBlockSelector();
};

// Class MagicLeap.MagicLeapRaycastComponent
// 0x0000
class UMagicLeapRaycastComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.MagicLeapRaycastComponent");
		return ptr;
	}



	void RequestRaycast();
	void RaycastResultDelegate__DelegateSignature();
};

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// 0x0000
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeap.MagicLeapRaycastFunctionLibrary");
		return ptr;
	}



	void MakeRaycastQueryParams();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
