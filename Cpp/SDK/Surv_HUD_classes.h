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

// BlueprintGeneratedClass Surv_HUD.Surv_HUD_C
// 0x0000
class ASurv_HUD_C : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Surv_HUD.Surv_HUD_C");
		return ptr;
	}



	void SetAmmoStructures();
	void LoadInventoy();
	void CheckSlotsCreate();
	void ReceiveBeginPlay();
	void EnableRenderActors();
	void ShowInventory();
	void ShowTradeInfo();
	void HideInventory();
	void SetMoneyText();
	void ExecuteUbergraph_Surv_HUD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
