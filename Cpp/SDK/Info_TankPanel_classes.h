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

// WidgetBlueprintGeneratedClass Info_TankPanel.Info_TankPanel_C
// 0x0000
class UInfo_TankPanel_C : public UInfoPanelRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Info_TankPanel.Info_TankPanel_C");
		return ptr;
	}



	void GetText_1();
	void CheckVariables();
	void Construct();
	void Destruct();
	void OnPanelBeginShow();
	void CheckALL();
	void ExecuteUbergraph_Info_TankPanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
