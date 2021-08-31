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

// BlueprintGeneratedClass BTT_GetTagetPoints.BTT_GetTagetPoints_C
// 0x0000
class UBTT_GetTagetPoints_C : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_GetTagetPoints.BTT_GetTagetPoints_C");
		return ptr;
	}



	void ReceiveExecuteAI();
	void ExecuteUbergraph_BTT_GetTagetPoints();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
