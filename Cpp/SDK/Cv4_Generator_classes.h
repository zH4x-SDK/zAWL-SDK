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

// BlueprintGeneratedClass Cv4_Generator.Cv4_Generator_C
// 0x0000
class ACv4_Generator_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_Generator.Cv4_Generator_C");
		return ptr;
	}



	void AllLightWhite();
	void AllLightRed();
	void OnRep_isEnergyOn();
	void CheckEngine();
	void ReceiveBeginPlay();
	void LightCheck();
	void ExecuteUbergraph_Cv4_Generator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
