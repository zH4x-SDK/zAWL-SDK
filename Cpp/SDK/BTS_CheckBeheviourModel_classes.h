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

// BlueprintGeneratedClass BTS_CheckBeheviourModel.BTS_CheckBeheviourModel_C
// 0x0000
class UBTS_CheckBeheviourModel_C : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTS_CheckBeheviourModel.BTS_CheckBeheviourModel_C");
		return ptr;
	}



	void ReceiveTick();
	void ExecuteUbergraph_BTS_CheckBeheviourModel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
