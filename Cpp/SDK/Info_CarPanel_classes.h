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

// WidgetBlueprintGeneratedClass Info_CarPanel.Info_CarPanel_C
// 0x0000
class UInfo_CarPanel_C : public UInfoPanelRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Info_CarPanel.Info_CarPanel_C");
		return ptr;
	}



	void GetText_1();
	void CheckVariables();
	void OnLootRemove_Event_1();
	void Tick();
	void Root_Check();
	void Destruct();
	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_Info_CarPanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
