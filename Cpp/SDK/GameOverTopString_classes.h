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

// WidgetBlueprintGeneratedClass GameOverTopString.GameOverTopString_C
// 0x0000
class UGameOverTopString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameOverTopString.GameOverTopString_C");
		return ptr;
	}



	void Draw();
	void ShowMe();
	void MiniDraw();
	void ExecuteUbergraph_GameOverTopString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
