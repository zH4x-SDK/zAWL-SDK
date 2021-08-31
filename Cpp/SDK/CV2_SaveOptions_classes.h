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

// BlueprintGeneratedClass CV2_SaveOptions.CV2_SaveOptions_C
// 0x0000
class UCV2_SaveOptions_C : public USaveGame
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CV2_SaveOptions.CV2_SaveOptions_C");
		return ptr;
	}



	void CheckSettingsCorrect();
	void GetSettings();
	void SaveSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
