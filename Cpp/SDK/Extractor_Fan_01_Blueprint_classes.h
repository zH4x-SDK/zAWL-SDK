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

// BlueprintGeneratedClass Extractor_Fan_01_Blueprint.Extractor_Fan_01_Blueprint_C
// 0x0000
class AExtractor_Fan_01_Blueprint_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Extractor_Fan_01_Blueprint.Extractor_Fan_01_Blueprint_C");
		return ptr;
	}



	void ReceiveTick();
	void ExecuteUbergraph_Extractor_Fan_01_Blueprint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
