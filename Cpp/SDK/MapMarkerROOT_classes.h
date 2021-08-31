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

// WidgetBlueprintGeneratedClass MapMarkerROOT.MapMarkerROOT_C
// 0x0000
class UMapMarkerROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapMarkerROOT.MapMarkerROOT_C");
		return ptr;
	}



	void RootShowMarker();
	void RootHideMarker();
	void SetBrushROOT();
	void CheckActorValid();
	void Construct();
	void RemoveMe();
	void ExecuteUbergraph_MapMarkerROOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
