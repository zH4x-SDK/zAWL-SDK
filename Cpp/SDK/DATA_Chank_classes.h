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

// BlueprintGeneratedClass DATA_Chank.DATA_Chank_C
// 0x0000
class UDATA_Chank_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DATA_Chank.DATA_Chank_C");
		return ptr;
	}



	void String_TO_DATA();
	void DATA_TO_String();
	void GET_SINGLE_PARAMETRS_BY_All_Chanks();
	void GetVarestValuesArray();
	void GET_SINGLE_PARAMETR();
	void SET_SINGLE_PARAMETR();
	void SET_CHANK_DATA();
	void GET_ALL_DATA();
	void ini();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
