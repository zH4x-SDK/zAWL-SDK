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

// WidgetBlueprintGeneratedClass InfoAsset_panel.InfoAsset_panel_C
// 0x0000
class UInfoAsset_panel_C : public UInfoPanelRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfoAsset_panel.InfoAsset_panel_C");
		return ptr;
	}



	void ShowMessage();
	void ShowTerminalFind();
	void ExecuteUbergraph_InfoAsset_panel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
