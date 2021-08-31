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

// WidgetBlueprintGeneratedClass MAP_Terminal.MAP_Terminal_C
// 0x0000
class UMAP_Terminal_C : public UMapMarkerROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MAP_Terminal.MAP_Terminal_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void Construct();
	void Update();
	void ExecuteUbergraph_MAP_Terminal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
