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

// WidgetBlueprintGeneratedClass Z_Tooltip_Root.Z_Tooltip_Root_C
// 0x0000
class UZ_Tooltip_Root_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_Tooltip_Root.Z_Tooltip_Root_C");
		return ptr;
	}



	void RootIni();
	void Root_DrawFromZLoot();
	void Root_Hide();
	void Root_DrawFromCraft();
	void Root_SetMass();
	void ExecuteUbergraph_Z_Tooltip_Root();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
