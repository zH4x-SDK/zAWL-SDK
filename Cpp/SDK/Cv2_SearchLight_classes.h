﻿#pragma once

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

// BlueprintGeneratedClass Cv2_SearchLight.Cv2_SearchLight_C
// 0x0000
class ACv2_SearchLight_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_SearchLight.Cv2_SearchLight_C");
		return ptr;
	}



	void OnRep_isDestroy();
	void OnRep_Light();
	void SetLight();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif