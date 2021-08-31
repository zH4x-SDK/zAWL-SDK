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

// WidgetBlueprintGeneratedClass PlayerHeader.PlayerHeader_C
// 0x0000
class UPlayerHeader_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHeader.PlayerHeader_C");
		return ptr;
	}



	void Construct();
	void ResetSortStyle();
	void SetSort();
	void ExecuteUbergraph_PlayerHeader();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
