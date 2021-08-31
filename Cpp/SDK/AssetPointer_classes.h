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

// WidgetBlueprintGeneratedClass AssetPointer.AssetPointer_C
// 0x0000
class UAssetPointer_C : public UPointer_Root_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetPointer.AssetPointer_C");
		return ptr;
	}



	void PreConstruct();
	void UpdateState();
	void ExecuteUbergraph_AssetPointer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
