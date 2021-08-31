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

// WidgetBlueprintGeneratedClass Menu_InGameMenuBase.Menu_InGameMenuBase_C
// 0x0000
class UMenu_InGameMenuBase_C : public UMENU_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_InGameMenuBase.Menu_InGameMenuBase_C");
		return ptr;
	}



	void SetParentInPanel();
	void Open_Menu();
	void Construct();
	void ExecuteUbergraph_Menu_InGameMenuBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
