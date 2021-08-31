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

// BlueprintGeneratedClass BTT_SetIsAim.BTT_SetIsAim_C
// 0x0000
class UBTT_SetIsAim_C : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_SetIsAim.BTT_SetIsAim_C");
		return ptr;
	}



	void ReceiveExecuteAI();
	void ExecuteUbergraph_BTT_SetIsAim();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
