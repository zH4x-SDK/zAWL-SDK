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

// BlueprintGeneratedClass BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C
// 0x0000
class ABOT_CreatureAI_Controller_C : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BOT_CreatureAI_Controller.BOT_CreatureAI_Controller_C");
		return ptr;
	}



	void OnFail_3A0E037844FC0342739A088A9204102B();
	void OnSuccess_3A0E037844FC0342739A088A9204102B();
	void ReceiveBeginPlay();
	void MoveTo();
	void ExecuteUbergraph_BOT_CreatureAI_Controller();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
