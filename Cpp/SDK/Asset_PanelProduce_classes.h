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

// WidgetBlueprintGeneratedClass Asset_PanelProduce.Asset_PanelProduce_C
// 0x0000
class UAsset_PanelProduce_C : public UAsset_Panel_Root_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Asset_PanelProduce.Asset_PanelProduce_C");
		return ptr;
	}



	void Root_ChildDraw();
	void Root_SetState();
	void UpdateValues();
	void Tick();
	void BndEvt__AssetStartStop_K2Node_ComponentBoundEvent_0_ChangeState__DelegateSignature();
	void RootOnChangeState();
	void Construct();
	void ExecuteUbergraph_Asset_PanelProduce();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
