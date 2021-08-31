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

// BlueprintGeneratedClass AWL_CharacterAI_Logic.AWL_CharacterAI_Logic_C
// 0x0000
class UAWL_CharacterAI_Logic_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_CharacterAI_Logic.AWL_CharacterAI_Logic_C");
		return ptr;
	}



	void BeginLive();
	void OnDead();
	void ExecuteUbergraph_AWL_CharacterAI_Logic();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
