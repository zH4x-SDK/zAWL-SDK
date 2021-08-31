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

// WidgetBlueprintGeneratedClass Place_Card.Place_Card_C
// 0x0000
class UPlace_Card_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Place_Card.Place_Card_C");
		return ptr;
	}



	void Draw();
	void ExecuteUbergraph_Place_Card();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
