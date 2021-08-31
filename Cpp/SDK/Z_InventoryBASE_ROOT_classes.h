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

// WidgetBlueprintGeneratedClass Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C
// 0x0000
class UZ_InventoryBASE_ROOT_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Z_InventoryBASE_ROOT.Z_InventoryBASE_ROOT_C");
		return ptr;
	}



	void Construct();
	void ROOT_CreateMenu();
	void ROOT_ShowInvtory();
	void ROOT_ShowCraft();
	void ROOT_ShowActorCraft();
	void ROOT_ShowPrOpticPart();
	void ROOT_ShowInformation();
	void ROOT_HideInformation();
	void ROOT_respawnMode();
	void ROOT_OnClose();
	void ROOT_ShowPrSilencerPart();
	void ROOT_ShowSecSilencerPart();
	void ROOT_ShowSecOpticPart();
	void ExecuteUbergraph_Z_InventoryBASE_ROOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
