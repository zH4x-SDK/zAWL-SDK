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

// BlueprintGeneratedClass Cv3_Wolf_AI_Controller.Cv3_Wolf_AI_Controller_C
// 0x0000
class ACv3_Wolf_AI_Controller_C : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_Wolf_AI_Controller.Cv3_Wolf_AI_Controller_C");
		return ptr;
	}



	void MoveTo();
	void ExecuteUbergraph_Cv3_Wolf_AI_Controller();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
