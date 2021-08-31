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

// WidgetBlueprintGeneratedClass Info_AWL_WeaponSlot.Info_AWL_WeaponSlot_C
// 0x0000
class UInfo_AWL_WeaponSlot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Info_AWL_WeaponSlot.Info_AWL_WeaponSlot_C");
		return ptr;
	}



	void SetSelectedStyle();
	void SetUnselectedStyle();
	void Construct();
	void PreConstruct();
	void Draw();
	void Draw_Ammo();
	void SetEmptyStyle();
	void ExecuteUbergraph_Info_AWL_WeaponSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
