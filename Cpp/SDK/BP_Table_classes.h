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

// BlueprintGeneratedClass BP_Table.BP_Table_C
// 0x0000
class ABP_Table_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Table.BP_Table_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateView();
	void ExecuteUbergraph_BP_Table();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
