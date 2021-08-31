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

// WidgetBlueprintGeneratedClass Player_Condition_BASE.Player_Condition_BASE_C
// 0x0000
class UPlayer_Condition_BASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Player_Condition_BASE.Player_Condition_BASE_C");
		return ptr;
	}



	void GetVisibility_1();
	void HealthGradateText();
	void HungryGradateText();
	void TempiratureGradateText();
	void ThirstyGradateText();
	void HealthCountText();
	void TempiratureCountText();
	void HungryCountText();
	void ThyrstyCountText();
	void HealthColorAndOpacity();
	void TempiratureColorAndOpacity();
	void HungryColorAndOpacity();
	void ThirstColorAndOpacity();
	void Tick();
	void PlayBoostAnim();
	void Update();
	void ExecuteUbergraph_Player_Condition_BASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
