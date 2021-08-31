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

// BlueprintGeneratedClass AWL_CharacterAction.AWL_CharacterAction_C
// 0x0000
class UAWL_CharacterAction_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_CharacterAction.AWL_CharacterAction_C");
		return ptr;
	}



	void Unhover();
	void hover();
	void Action();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
