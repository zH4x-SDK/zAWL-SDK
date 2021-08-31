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

// BlueprintGeneratedClass DataBaseActor.DataBaseActor_C
// 0x0000
class ADataBaseActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DataBaseActor.DataBaseActor_C");
		return ptr;
	}



	void ReturnSaveState();
	void CreateInventory();
	void Ini_Inventory();
	void SetDataBaseInfo();
	void ClearDataBaseInfo();
	void CreateInventory_ServerFunc_();
	void ExecuteUbergraph_DataBaseActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
