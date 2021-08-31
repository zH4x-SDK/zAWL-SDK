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

// WidgetBlueprintGeneratedClass Asset_PanelResource.Asset_PanelResource_C
// 0x0000
class UAsset_PanelResource_C : public UAsset_Panel_Root_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Asset_PanelResource.Asset_PanelResource_C");
		return ptr;
	}



	void Construct();
	void Root_ChildDraw();
	void Root_SetState();
	void UpdateValues();
	void Tick();
	void BndEvt__AssetStartStop_K2Node_ComponentBoundEvent_0_ChangeState__DelegateSignature();
	void RootOnChangeState();
	void ExecuteUbergraph_Asset_PanelResource();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
