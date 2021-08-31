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

// BlueprintGeneratedClass Cv3_RespawnVehicle.Cv3_RespawnVehicle_C
// 0x0000
class ACv3_RespawnVehicle_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv3_RespawnVehicle.Cv3_RespawnVehicle_C");
		return ptr;
	}



	void CheckSpawn();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RespawnVehicle_Timer();
	void ExecuteUbergraph_Cv3_RespawnVehicle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
