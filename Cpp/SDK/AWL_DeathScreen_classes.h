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

// WidgetBlueprintGeneratedClass AWL_DeathScreen.AWL_DeathScreen_C
// 0x0000
class UAWL_DeathScreen_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_DeathScreen.AWL_DeathScreen_C");
		return ptr;
	}



	void GetNearestSpawnLocation();
	void OnKeyDown();
	void Update();
	void BndEvt__AWL_Respawn_K2Node_ComponentBoundEvent_3_OnClick_button__DelegateSignature();
	void BndEvt__AWL_RespawnNear_K2Node_ComponentBoundEvent_4_OnClick_button__DelegateSignature();
	void BndEvt__AWL_RespawnNear_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature();
	void BndEvt__AWL_RespawnNear_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature();
	void ExecuteUbergraph_AWL_DeathScreen();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
