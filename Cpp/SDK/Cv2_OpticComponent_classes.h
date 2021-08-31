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

// BlueprintGeneratedClass Cv2_OpticComponent.Cv2_OpticComponent_C
// 0x0000
class UCv2_OpticComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_OpticComponent.Cv2_OpticComponent_C");
		return ptr;
	}



	void HideOptic();
	void ShowOptic();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
