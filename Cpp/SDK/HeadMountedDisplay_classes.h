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

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0000
class UVRNotificationsComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}



};

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}



	void UpdateExternalTrackingHMDPosition();
	void SetWorldToMetersScale();
	void SetTrackingOrigin();
	void SetSpectatorScreenTexture();
	void SetSpectatorScreenModeTexturePlusEyeLayout();
	void SetSpectatorScreenMode();
	void SetClippingPlanes();
	void ResetOrientationAndPosition();
	void IsSpectatorScreenModeControllable();
	void IsInLowPersistenceMode();
	void IsHeadMountedDisplayEnabled();
	void IsHeadMountedDisplayConnected();
	void IsDeviceTracking();
	void HasValidTrackingPosition();
	void GetWorldToMetersScale();
	void GetVRFocusState();
	void GetTrackingToWorldTransform();
	void GetTrackingSensorParameters();
	void GetTrackingOrigin();
	void GetScreenPercentage();
	void GetPositionalTrackingCameraParameters();
	void GetPixelDensity();
	void GetOrientationAndPosition();
	void GetNumOfTrackingSensors();
	void GetHMDWornState();
	void GetHMDDeviceName();
	void GetDeviceWorldPose();
	void GetDevicePose();
	void EnumerateTrackedDevices();
	void EnableLowPersistenceMode();
	void EnableHMD();
	void CalibrateExternalTrackingToHMD();
};

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0000
class UMotionControllerComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}



	void SetTrackingSource();
	void SetTrackingMotionSource();
	void SetShowDeviceModel();
	void SetDisplayModelSource();
	void SetCustomDisplayMesh();
	void SetAssociatedPlayerIndex();
	void OnMotionControllerUpdated();
	void IsTracked();
	void GetTrackingSource();
	void GetParameterValue();
	void GetHandJointPosition();
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}



	void SetIsControllerMotionTrackingEnabledByDefault();
	void IsMotionTrackingEnabledForSource();
	void IsMotionTrackingEnabledForDevice();
	void IsMotionTrackingEnabledForComponent();
	void IsMotionTrackedDeviceCountManagementNecessary();
	void IsMotionSourceTracking();
	void GetMotionTrackingEnabledControllerCount();
	void GetMaximumMotionTrackedControllerCount();
	void GetActiveTrackingSystemName();
	void EnumerateMotionSources();
	void EnableMotionTrackingOfSource();
	void EnableMotionTrackingOfDevice();
	void EnableMotionTrackingForComponent();
	void DisableMotionTrackingOfSource();
	void DisableMotionTrackingOfDevice();
	void DisableMotionTrackingOfControllersForPlayer();
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent();
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}



	void AddNamedDeviceVisualizationComponentBlocking();
	void AddDeviceVisualizationComponentBlocking();
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0000
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}



	void AddNamedDeviceVisualizationComponentAsync();
	void AddDeviceVisualizationComponentAsync();
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// 0x0000
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary");
		return ptr;
	}



	void ShowLoadingScreen();
	void SetLoadingScreen();
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	void AddLoadingScreenSplash();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
