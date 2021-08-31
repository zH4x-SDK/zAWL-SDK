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

// BlueprintGeneratedClass AWL_MAINSPAWN_Component.AWL_MAINSPAWN_Component_C
// 0x0000
class UAWL_MAINSPAWN_Component_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_MAINSPAWN_Component.AWL_MAINSPAWN_Component_C");
		return ptr;
	}



	void CheckDistance();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AWL_MAINSPAWN_Component();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
