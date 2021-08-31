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

// BlueprintGeneratedClass INTERACTIVE_Component.INTERACTIVE_Component_C
// 0x0000
class UINTERACTIVE_Component_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass INTERACTIVE_Component.INTERACTIVE_Component_C");
		return ptr;
	}



	void ActivateInteractiveIfNeed();
	void CheckElectricity();
	void CheckInteractive();
	void Add_timer();
	void HaveInteractLoot();
	void INTERACTIVE_F();
	void ACTIVATION();
	void HaveActivateLoot();
	void CheckActivate();
	void StringToLoot();
	void ini();
	void OnLootAdded();
	void Try_Interact();
	void ACTIVATE_ON_COMPONENT();
	void OnLoot_Remove();
	void TIME_OUT_Event_1();
	void ConnectToGenerator();
	void AddConsumer_If_Generator_();
	void OnLootAdded_ServerOnly__Event_1();
	void OnLootRemove_Event_1();
	void STOP_On_Component();
	void ElectricityActivate();
	void ElectricityStop();
	void ExecuteUbergraph_INTERACTIVE_Component();
	void Electrycity_Stop_Event__DelegateSignature();
	void Electricity_Activate_Event__DelegateSignature();
	void STOP_EVENT__DelegateSignature();
	void ACTIVATE_EVENT__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
