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

// BlueprintGeneratedClass Fow_TurretBot.Fow_TurretBot_C
// 0x0000
class AFow_TurretBot_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Fow_TurretBot.Fow_TurretBot_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void FireTurret();
	void ServerFire();
	void ExecuteUbergraph_Fow_TurretBot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
