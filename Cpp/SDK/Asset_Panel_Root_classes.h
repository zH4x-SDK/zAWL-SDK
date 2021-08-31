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

// WidgetBlueprintGeneratedClass Asset_Panel_Root.Asset_Panel_Root_C
// 0x0000
class UAsset_Panel_Root_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Asset_Panel_Root.Asset_Panel_Root_C");
		return ptr;
	}



	void Root_ChildDraw();
	void Root_Draw();
	void Root_SetState();
	void Root_UpdateState();
	void RootOnChangeState();
	void ExecuteUbergraph_Asset_Panel_Root();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
