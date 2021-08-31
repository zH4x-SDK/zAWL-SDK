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

// WidgetBlueprintGeneratedClass CompasActorWidget.CompasActorWidget_C
// 0x0000
class UCompasActorWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompasActorWidget.CompasActorWidget_C");
		return ptr;
	}



	void Construct();
	void Update();
	void Destruct();
	void ExecuteUbergraph_CompasActorWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
