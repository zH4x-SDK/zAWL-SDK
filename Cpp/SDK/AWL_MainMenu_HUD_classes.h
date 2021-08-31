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

// BlueprintGeneratedClass AWL_MainMenu_HUD.AWL_MainMenu_HUD_C
// 0x0000
class AAWL_MainMenu_HUD_C : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_MainMenu_HUD.AWL_MainMenu_HUD_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ShowMainMenu();
	void ShowOptions();
	void ExecuteUbergraph_AWL_MainMenu_HUD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
