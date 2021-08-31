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

// WidgetBlueprintGeneratedClass Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C
// 0x0000
class UMenu_MainMenu_ServersList_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_MainMenu_ServersList.Menu_MainMenu_ServersList_C");
		return ptr;
	}



	void RefreshList();
	void OnFailure_399DA7EF494AEE85CDB407AAB186BFAB();
	void OnSuccess_399DA7EF494AEE85CDB407AAB186BFAB();
	void Construct();
	void BndEvt__Menu_Item_2_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__Connectbyip_K2Node_ComponentBoundEvent_105_OnClick__DelegateSignature();
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature();
	void On_Open();
	void BndEvt__SurvMainMenuButton_K2Node_ComponentBoundEvent_86_OnClick__DelegateSignature();
	void Update();
	void ExecuteUbergraph_Menu_MainMenu_ServersList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
