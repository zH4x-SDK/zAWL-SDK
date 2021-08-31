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

// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// 0x0000
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		return ptr;
	}



	void SetMotionSourceForHand();
	void SetControllerTrackingMode();
	void PlayLEDPattern();
	void PlayLEDEffect();
	void PlayHapticPattern();
	void PlayControllerLEDEffect();
	void PlayControllerLED();
	void PlayControllerHapticFeedback();
	void MaxSupportedMagicLeapControllers();
	void IsMLControllerConnected();
	void InvertControllerMapping();
	void GetMotionSourceForHand();
	void GetMLControllerType();
	void GetHandForMotionSource();
	void GetControllerType();
	void GetControllerTrackingMode();
	void GetControllerMapping();
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// 0x0000
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
