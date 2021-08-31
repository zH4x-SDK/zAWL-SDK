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

// WidgetBlueprintGeneratedClass DamageDirectionBase.DamageDirectionBase_C
// 0x0000
class UDamageDirectionBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DamageDirectionBase.DamageDirectionBase_C");
		return ptr;
	}



	void Get_angle();
	void RotateImage();
	void Construct();
	void ShowDamage();
	void ExecuteUbergraph_DamageDirectionBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
