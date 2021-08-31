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

// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// 0x0000
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory");
		return ptr;
	}



};

// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// 0x0000
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary");
		return ptr;
	}



	void SetStaticGestureConfidenceThreshold();
	void SetConfiguration();
	void GetStaticGestureConfidenceThreshold();
	void GetMagicLeapHandTrackingLiveLinkSource();
	void GetHandThumbTip();
	void GetHandIndexFingerTip();
	void GetHandCenterNormalized();
	void GetHandCenter();
	void GetGestureKeypointTransform();
	void GetGestureKeypoints();
	void GetCurrentGestureConfidence();
	void GetCurrentGesture();
	void GetConfiguration();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
