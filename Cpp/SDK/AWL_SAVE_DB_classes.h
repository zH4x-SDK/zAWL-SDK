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

// BlueprintGeneratedClass AWL_SAVE_DB.AWL_SAVE_DB_C
// 0x0000
class UAWL_SAVE_DB_C : public USaveGame
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_SAVE_DB.AWL_SAVE_DB_C");
		return ptr;
	}



	void SaveDB();
	void LoadDB();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
