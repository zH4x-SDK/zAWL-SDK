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

// WidgetBlueprintGeneratedClass Map_Overlay.Map_Overlay_C
// 0x0000
class UMap_Overlay_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Map_Overlay.Map_Overlay_C");
		return ptr;
	}



	void GetMarkers();
	void Add_actor_on_Map();
	void Add_Terminals();
	void Add_Place();
	void PrintMapParametrs();
	void DrawStep3();
	void DrawStep2();
	void DrawStep0();
	void DrawStep1();
	void SetZoomStep();
	void MapToRange();
	void Zoom();
	void OnMouseWheel();
	void SetMapPARAMETRS();
	void MoveMap();
	void OnMouseButtonDoubleClick();
	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void SetProportionAndScale();
	void GetSize();
	void RemoveActorFromMap();
	void ADD_My();
	void GoToCharacter();
	void GetStartInformation();
	void CheckActorArrayValid();
	void AddCharacterActorOnMap();
	void ADD_DYNAMIC_ACTORS();
	void UpdateCoordinates();
	void GetSelfSize();
	void Construct();
	void Tick();
	void Destruct();
	void OnMouseLeave();
	void ExecuteUbergraph_Map_Overlay();
	void AddSpawns__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
