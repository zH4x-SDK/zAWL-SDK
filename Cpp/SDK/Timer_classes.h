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

// WidgetBlueprintGeneratedClass Timer.Timer_C
// 0x0000
class UTimer_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Timer.Timer_C");
		return ptr;
	}



	void TimerFnc();
	void StartTimer();
	void ExecuteUbergraph_Timer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
