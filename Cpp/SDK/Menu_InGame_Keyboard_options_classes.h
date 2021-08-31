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

// WidgetBlueprintGeneratedClass Menu_InGame_Keyboard_options.Menu_InGame_Keyboard_options_C
// 0x0000
class UMenu_InGame_Keyboard_options_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_InGame_Keyboard_options.Menu_InGame_Keyboard_options_C");
		return ptr;
	}



	void GetAxis();
	void GetActions();
	void Construct();
	void UpdateKeys();
	void PreConstruct();
	void RestoreDefault();
	void RestoreAzerty();
	void ExecuteUbergraph_Menu_InGame_Keyboard_options();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
