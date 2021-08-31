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

// WidgetBlueprintGeneratedClass Info_ArtileryPanel.Info_ArtileryPanel_C
// 0x0000
class UInfo_ArtileryPanel_C : public UInfoPanelRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Info_ArtileryPanel.Info_ArtileryPanel_C");
		return ptr;
	}



	void CheckVariables();
	void PreConstruct();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Info_ArtileryPanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
