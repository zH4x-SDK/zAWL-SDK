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

// WidgetBlueprintGeneratedClass Info_VehicleInfoBar.Info_VehicleInfoBar_C
// 0x0000
class UInfo_VehicleInfoBar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Info_VehicleInfoBar.Info_VehicleInfoBar_C");
		return ptr;
	}



	void ShowNoFuel();
	void ShowNoBattery();
	void ExecuteUbergraph_Info_VehicleInfoBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
