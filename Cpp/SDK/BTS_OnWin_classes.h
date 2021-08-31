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

// BlueprintGeneratedClass BTS_OnWin.BTS_OnWin_C
// 0x0000
class UBTS_OnWin_C : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTS_OnWin.BTS_OnWin_C");
		return ptr;
	}



	void ReceiveActivation();
	void ExecuteUbergraph_BTS_OnWin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
