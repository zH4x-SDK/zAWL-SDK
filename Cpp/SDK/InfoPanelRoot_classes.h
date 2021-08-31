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

// WidgetBlueprintGeneratedClass InfoPanelRoot.InfoPanelRoot_C
// 0x0000
class UInfoPanelRoot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfoPanelRoot.InfoPanelRoot_C");
		return ptr;
	}



	void Root_Check();
	void OnPanelEndShow();
	void OnPanelBeginShow();
	void ShowThisPanel();
	void HideThisPanel();
	void ExecuteUbergraph_InfoPanelRoot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
