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

// WidgetBlueprintGeneratedClass PointerOverlay_BASE.PointerOverlay_BASE_C
// 0x0000
class UPointerOverlay_BASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PointerOverlay_BASE.PointerOverlay_BASE_C");
		return ptr;
	}



	void GetPointersByType();
	void CheckShkafPionters();
	void CheckIsActorExist();
	void DeleteByActor();
	void DeleteByType();
	void Construct();
	void Tick();
	void Add_pointer();
	void Destruct();
	void ExecuteUbergraph_PointerOverlay_BASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
