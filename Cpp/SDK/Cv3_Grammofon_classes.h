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

// BlueprintGeneratedClass Cv3_Grammofon.Cv3_Grammofon_C
// 0x0000
class ACv3_Grammofon_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_Grammofon.Cv3_Grammofon_C");
		return ptr;
	}



	void OnRep_MusicWav();
	void OnRep_isDestroy();
	void OnRep_isPlay();
	void ReceiveBeginPlay();
	void CheckPlayMusic();
	void ExecuteUbergraph_Cv3_Grammofon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
