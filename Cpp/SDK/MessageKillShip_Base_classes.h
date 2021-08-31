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

// WidgetBlueprintGeneratedClass MessageKillShip_Base.MessageKillShip_Base_C
// 0x0000
class UMessageKillShip_Base_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MessageKillShip_Base.MessageKillShip_Base_C");
		return ptr;
	}



	void Construct();
	void Add_message();
	void ExecuteUbergraph_MessageKillShip_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
