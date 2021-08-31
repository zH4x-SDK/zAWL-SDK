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

// WidgetBlueprintGeneratedClass EndGame_TopString.EndGame_TopString_C
// 0x0000
class UEndGame_TopString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EndGame_TopString.EndGame_TopString_C");
		return ptr;
	}



	void SetGreenStyle();
	void PreConstruct();
	void SetNormalStyle();
	void DrawString();
	void Clear();
	void ExecuteUbergraph_EndGame_TopString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
