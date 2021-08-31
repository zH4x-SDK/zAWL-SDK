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

// WidgetBlueprintGeneratedClass Clock.Clock_C
// 0x0000
class UClock_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Clock.Clock_C");
		return ptr;
	}



	void SetTime();
	void PreConstruct();
	void ExecuteUbergraph_Clock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
