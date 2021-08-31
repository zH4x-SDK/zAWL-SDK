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

// BlueprintGeneratedClass Wiki.Wiki_C
// 0x0000
class UWiki_C : public USaveGame
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Wiki.Wiki_C");
		return ptr;
	}



	void Load();
	void Save();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
