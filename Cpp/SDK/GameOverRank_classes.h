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

// WidgetBlueprintGeneratedClass GameOverRank.GameOverRank_C
// 0x0000
class UGameOverRank_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameOverRank.GameOverRank_C");
		return ptr;
	}



	void Construct();
	void Show();
	void ExecuteUbergraph_GameOverRank();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
