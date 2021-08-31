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

// BlueprintGeneratedClass Fow_Bot_CheckPoint.Fow_Bot_CheckPoint_C
// 0x0000
class AFow_Bot_CheckPoint_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Fow_Bot_CheckPoint.Fow_Bot_CheckPoint_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Fow_Bot_CheckPoint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
