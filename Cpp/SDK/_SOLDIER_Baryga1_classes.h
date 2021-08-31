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

// BlueprintGeneratedClass _SOLDIER_Baryga1._SOLDIER_Baryga1_C
// 0x0000
class A_SOLDIER_Baryga1_C : public A_SOLDIER_EMPTY_Actor_Survival_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass _SOLDIER_Baryga1._SOLDIER_Baryga1_C");
		return ptr;
	}



	void Unhover();
	void hover();
	void Action();
	void ExecuteUbergraph__SOLDIER_Baryga1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
