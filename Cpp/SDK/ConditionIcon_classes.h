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

// WidgetBlueprintGeneratedClass ConditionIcon.ConditionIcon_C
// 0x0000
class UConditionIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConditionIcon.ConditionIcon_C");
		return ptr;
	}



	void CheckState();
	void PreConstruct();
	void Construct();
	void Destruct();
	void Draw();
	void ExecuteUbergraph_ConditionIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
