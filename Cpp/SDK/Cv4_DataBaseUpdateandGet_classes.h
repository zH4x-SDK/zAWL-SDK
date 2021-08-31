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

// BlueprintGeneratedClass Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C
// 0x0000
class UCv4_DataBaseUpdateAndGet_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_DataBaseUpdateandGet.Cv4_DataBaseUpdateAndGet_C");
		return ptr;
	}



	void ClearSaveState();
	void CheckIsValidSaveState();
	void UpdateSaveState();
	void ReturnSaveState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
