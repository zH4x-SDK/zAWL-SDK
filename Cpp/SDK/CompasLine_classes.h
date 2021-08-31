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

// WidgetBlueprintGeneratedClass CompasLine.CompasLine_C
// 0x0000
class UCompasLine_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompasLine.CompasLine_C");
		return ptr;
	}



	void Update();
	void Tick();
	void AddCompasActor();
	void PositionActors();
	void AddCompasMarker();
	void PositionLocations();
	void DeleteCompasMarker();
	void ExecuteUbergraph_CompasLine();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
