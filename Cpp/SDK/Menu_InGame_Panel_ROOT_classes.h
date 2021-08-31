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

// WidgetBlueprintGeneratedClass Menu_InGame_Panel_ROOT.Menu_InGame_Panel_ROOT_C
// 0x0000
class UMenu_InGame_Panel_ROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_InGame_Panel_ROOT.Menu_InGame_Panel_ROOT_C");
		return ptr;
	}



	void On_Open();
	void ExecuteUbergraph_Menu_InGame_Panel_ROOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
