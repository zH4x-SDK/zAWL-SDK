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

// WidgetBlueprintGeneratedClass RoomInterfaceBASE.RoomInterfaceBASE_C
// 0x0000
class URoomInterfaceBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RoomInterfaceBASE.RoomInterfaceBASE_C");
		return ptr;
	}



	void DrawFurniture();
	void Construct();
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Draw();
	void ExecuteUbergraph_RoomInterfaceBASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
