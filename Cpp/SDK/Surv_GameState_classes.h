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

// BlueprintGeneratedClass Surv_GameState.Surv_GameState_C
// 0x0000
class ASurv_GameState_C : public AGameState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Surv_GameState.Surv_GameState_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Surv_GameState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
