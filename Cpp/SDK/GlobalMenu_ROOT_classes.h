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

// WidgetBlueprintGeneratedClass GlobalMenu_ROOT.GlobalMenu_ROOT_C
// 0x0000
class UGlobalMenu_ROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalMenu_ROOT.GlobalMenu_ROOT_C");
		return ptr;
	}



	void Root_ini_Buttons_IsValid_();
	void RootHideAllPanels();
	void RootUnselectAll();
	void Root_ShowInventory();
	void ROOT_ShowCraft();
	void Root_ShowMap();
	void Root_ShowOptions();
	void ROOT_ShowActorCraft();
	void Root_ShowExitMenu();
	void RootShowInventory_NoAnim();
	void Root_MinimalMode();
	void Root_HideBlur();
	void Root_RespanwMenu();
	void Root_OnOpen();
	void ROOT_OnClose();
	void ExecuteUbergraph_GlobalMenu_ROOT();
	void Click_EXIT_Button__DelegateSignature();
	void Click_RESPAWN_Button__DelegateSignature();
	void Click_CLOSE_Button__DelegateSignature();
	void Click_Options_Button__DelegateSignature();
	void Click_MAP_Button__DelegateSignature();
	void Click_CRAFT_Button__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
