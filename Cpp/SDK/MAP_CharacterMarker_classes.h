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

// WidgetBlueprintGeneratedClass MAP_CharacterMarker.MAP_CharacterMarker_C
// 0x0000
class UMAP_CharacterMarker_C : public UMapMarkerROOT_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MAP_CharacterMarker.MAP_CharacterMarker_C");
		return ptr;
	}



	void Construct();
	void Tick();
	void SetBrushROOT();
	void ExecuteUbergraph_MAP_CharacterMarker();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
