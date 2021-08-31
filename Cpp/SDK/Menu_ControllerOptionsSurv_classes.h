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

// WidgetBlueprintGeneratedClass Menu_ControllerOptionsSurv.Menu_ControllerOptionsSurv_C
// 0x0000
class UMenu_ControllerOptionsSurv_C : public UMenu_InGame_Panel_ROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_ControllerOptionsSurv.Menu_ControllerOptionsSurv_C");
		return ptr;
	}



	void On_Open();
	void RestoreKeyboardDefault();
	void RestoreAzerty();
	void ExecuteUbergraph_Menu_ControllerOptionsSurv();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
