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

// Class AsyncLoadingScreen.AsyncLoadingScreenLibrary
// 0x0000
class UAsyncLoadingScreenLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AsyncLoadingScreen.AsyncLoadingScreenLibrary");
		return ptr;
	}



	void StopLoadingScreen();
	void SetDisplayTipTextIndex();
	void SetDisplayMovieIndex();
	void SetDisplayBackgroundIndex();
};

// Class AsyncLoadingScreen.LoadingScreenSettings
// 0x0000
class ULoadingScreenSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AsyncLoadingScreen.LoadingScreenSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
