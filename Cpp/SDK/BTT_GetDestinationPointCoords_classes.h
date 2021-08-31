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

// BlueprintGeneratedClass BTT_GetDestinationPointCoords.BTT_GetDestinationPointCoords_C
// 0x0000
class UBTT_GetDestinationPointCoords_C : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_GetDestinationPointCoords.BTT_GetDestinationPointCoords_C");
		return ptr;
	}



	void IsPlayerSeeThis();
	void ReceiveExecuteAI();
	void ExecuteUbergraph_BTT_GetDestinationPointCoords();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
