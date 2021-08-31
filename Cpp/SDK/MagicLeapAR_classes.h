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

// Class MagicLeapAR.LuminARUObjectManager
// 0x0000
class ULuminARUObjectManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARUObjectManager");
		return ptr;
	}



};

// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionFunctionLibrary");
		return ptr;
	}



	void StartLuminARSession();
};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARFrameFunctionLibrary");
		return ptr;
	}



	void LuminARLineTrace();
	void GetTrackingState();
	void GetLightEstimation();
};

// Class MagicLeapAR.LuminARSessionConfig
// 0x0000
class ULuminARSessionConfig : public UARSessionConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionConfig");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
