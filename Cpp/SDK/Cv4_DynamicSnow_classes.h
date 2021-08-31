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

// BlueprintGeneratedClass Cv4_DynamicSnow.Cv4_DynamicSnow_C
// 0x0000
class ACv4_DynamicSnow_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_DynamicSnow.Cv4_DynamicSnow_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void SetActorPosition();
	void ExecuteUbergraph_Cv4_DynamicSnow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
