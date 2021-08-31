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

// WidgetBlueprintGeneratedClass Info_TurrelPanel.Info_TurrelPanel_C
// 0x0000
class UInfo_TurrelPanel_C : public UInfoPanelRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Info_TurrelPanel.Info_TurrelPanel_C");
		return ptr;
	}



	void CheckVariables();
	void PreConstruct();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Info_TurrelPanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
