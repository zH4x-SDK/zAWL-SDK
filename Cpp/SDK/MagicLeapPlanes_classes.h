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

// Class MagicLeapPlanes.MagicLeapPlanesComponent
// 0x0000
class UMagicLeapPlanesComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesComponent");
		return ptr;
	}



	void RequestPlanesAsync();
};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// 0x0000
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary");
		return ptr;
	}



	void ReorderPlaneFlags();
	void RemoveFlagsNotInQuery();
	void PlanesQueryBeginAsync();
	void IsTrackerValid();
	void GetContentScale();
	void DestroyTracker();
	void CreateTracker();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
