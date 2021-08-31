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

// WidgetBlueprintGeneratedClass Pointer_Root.Pointer_Root_C
// 0x0000
class UPointer_Root_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Pointer_Root.Pointer_Root_C");
		return ptr;
	}



	void CheckVisibleDistance();
	void UpdateState();
	void UpdatePositionInViewport();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
