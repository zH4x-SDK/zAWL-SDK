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

// WidgetBlueprintGeneratedClass Asset_PriborLamp.Asset_PriborLamp_C
// 0x0000
class UAsset_PriborLamp_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Asset_PriborLamp.Asset_PriborLamp_C");
		return ptr;
	}



	void PreConstruct();
	void SetState();
	void ExecuteUbergraph_Asset_PriborLamp();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
