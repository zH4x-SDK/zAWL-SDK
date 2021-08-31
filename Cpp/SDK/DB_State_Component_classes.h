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

// BlueprintGeneratedClass DB_State_Component.DB_State_Component_C
// 0x0000
class UDB_State_Component_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DB_State_Component.DB_State_Component_C");
		return ptr;
	}



	void SetStateValue();
	void IncrementStateOnValue();
	void GetState();
	void Save_State();
	void LoadState();
	void RequestToStateMap();
	void CreateStateMap();
	void ini();
	void PHP_GET_Event_1();
	void ExecuteUbergraph_DB_State_Component();
	void OnUpdate__DelegateSignature();
	void PUT_COMPLITE_EVENT__DelegateSignature();
	void POST_COMPLITE_EVENT__DelegateSignature();
	void GET_COMPLITE_EVENT__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
