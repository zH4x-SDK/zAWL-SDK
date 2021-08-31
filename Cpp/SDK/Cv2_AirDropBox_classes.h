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

// BlueprintGeneratedClass Cv2_AirDropBox.Cv2_AirDropBox_C
// 0x0000
class ACv2_AirDropBox_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_AirDropBox.Cv2_AirDropBox_C");
		return ptr;
	}



	void GenerateRandoomLoot();
	void OnRep_isDestroy();
	void UpdateLootArray();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage();
	void ExecuteUbergraph_Cv2_AirDropBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
