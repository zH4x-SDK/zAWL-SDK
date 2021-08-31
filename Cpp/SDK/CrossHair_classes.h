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

// WidgetBlueprintGeneratedClass CrossHair.CrossHair_C
// 0x0000
class UCrossHair_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CrossHair.CrossHair_C");
		return ptr;
	}



	void SetPointTexture();
	void HideAllTypes();
	void SET_TYPE();
	void SetSpace();
	void ShowMainCrosshairs();
	void HideMainCrosshairs();
	void ShowHitToEnemy();
	void Construct();
	void Tick();
	void ExecuteUbergraph_CrossHair();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
