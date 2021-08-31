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

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x0000
class UMagicLeapARPinComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		return ptr;
	}



	void UnPin();
	void PinSceneComponent();
	void PinRestoredOrSynced();
	void PinActor();
	void PersistentEntityPinned__DelegateSignature();
	void PersistentEntityPinLost__DelegateSignature();
	void IsPinned();
	void GetPinnedPinID();
	void GetPinData();
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		return ptr;
	}



	void IsTrackerValid();
	void GetNumAvailableARPins();
	void GetClosestARPin();
	void GetAvailableARPins();
	void GetARPinPositionAndOrientation();
	void DestroyTracker();
	void CreateTracker();
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0000
class UMagicLeapARPinSaveGame : public USaveGame
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
