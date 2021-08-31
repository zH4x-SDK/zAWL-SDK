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

// BlueprintGeneratedClass Cv4_StartMusic.Cv4_StartMusic_C
// 0x0000
class ACv4_StartMusic_C : public AAmbientSound
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_StartMusic.Cv4_StartMusic_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cv4_StartMusic();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
