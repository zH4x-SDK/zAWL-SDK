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

// BlueprintGeneratedClass OutlineInterface.OutlineInterface_C
// 0x0000
class UOutlineInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass OutlineInterface.OutlineInterface_C");
		return ptr;
	}



	void SetIsFocusedNow();
	void GetIsFocusedNow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
