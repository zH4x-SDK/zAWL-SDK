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

// WidgetBlueprintGeneratedClass GameOverHonor.GameOverHonor_C
// 0x0000
class UGameOverHonor_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameOverHonor.GameOverHonor_C");
		return ptr;
	}



	void Construct();
	void ShowMe();
	void ExecuteUbergraph_GameOverHonor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
