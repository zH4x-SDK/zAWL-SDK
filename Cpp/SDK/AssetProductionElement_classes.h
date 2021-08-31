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

// WidgetBlueprintGeneratedClass AssetProductionElement.AssetProductionElement_C
// 0x0000
class UAssetProductionElement_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetProductionElement.AssetProductionElement_C");
		return ptr;
	}



	void PreConstruct();
	void SetStatus();
	void Draw();
	void OnUpdate_Event_1();
	void Tick();
	void ExecuteUbergraph_AssetProductionElement();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
