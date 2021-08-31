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

// WidgetBlueprintGeneratedClass AWL_CharacterPanel.AWL_CharacterPanel_C
// 0x0000
class UAWL_CharacterPanel_C : public UInfoPanelRoot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_CharacterPanel.AWL_CharacterPanel_C");
		return ptr;
	}



	void UpdateWeapon();
	void Construct();
	void UpdateCharState();
	void SetAmmoInformation();
	void ShowDamage();
	void ExecuteUbergraph_AWL_CharacterPanel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
