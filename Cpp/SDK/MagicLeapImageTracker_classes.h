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

// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// 0x0000
class UMagicLeapImageTrackerComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerComponent");
		return ptr;
	}



	void SetTargetAsync();
	void RemoveTargetAsync();
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// 0x0000
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary");
		return ptr;
	}



	void SetMaxSimultaneousTargets();
	void IsImageTrackingEnabled();
	void GetMaxSimultaneousTargets();
	void EnableImageTracking();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
