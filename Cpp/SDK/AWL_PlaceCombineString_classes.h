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

// WidgetBlueprintGeneratedClass AWL_PlaceCombineString.AWL_PlaceCombineString_C
// 0x0000
class UAWL_PlaceCombineString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_PlaceCombineString.AWL_PlaceCombineString_C");
		return ptr;
	}



	void Draw();
	void Hide();
	void ExecuteUbergraph_AWL_PlaceCombineString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
