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

// WidgetBlueprintGeneratedClass CompasMarkerWidget.CompasMarkerWidget_C
// 0x0000
class UCompasMarkerWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompasMarkerWidget.CompasMarkerWidget_C");
		return ptr;
	}



	void Update();
	void Destruct();
	void Draw();
	void ExecuteUbergraph_CompasMarkerWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
