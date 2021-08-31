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

// WidgetBlueprintGeneratedClass GameOverStatisticString.GameOverStatisticString_C
// 0x0000
class UGameOverStatisticString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameOverStatisticString.GameOverStatisticString_C");
		return ptr;
	}



	void PreConstruct();
	void Draw();
	void ShowMe();
	void ExecuteUbergraph_GameOverStatisticString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
