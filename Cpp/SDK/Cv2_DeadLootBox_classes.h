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

// BlueprintGeneratedClass Cv2_DeadLootBox.Cv2_DeadLootBox_C
// 0x0000
class ACv2_DeadLootBox_C : public ACv2_AirDropBox_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_DeadLootBox.Cv2_DeadLootBox_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cv2_DeadLootBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
