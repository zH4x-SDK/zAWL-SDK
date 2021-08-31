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

// WidgetBlueprintGeneratedClass GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C
// 0x0000
class UGlobalMenuButton_ROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalMenuButton_ROOT.GlobalMenuButton_ROOT_C");
		return ptr;
	}



	void Root_Set_SelectedStyle();
	void Root_SetUnselectedStyle();
	void Root_Set_HoveredStyle();
	void Root_ShowConfirm();
	void Root_HideConfirm();
	void ExecuteUbergraph_GlobalMenuButton_ROOT();
	void OnClick__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
