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

// BlueprintGeneratedClass Cv4_ExitZoneClientOnly.Cv4_ExitZoneClientOnly_C
// 0x0000
class ACv4_ExitZoneClientOnly_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_ExitZoneClientOnly.Cv4_ExitZoneClientOnly_C");
		return ptr;
	}



	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void SavePlayerStateToGameInstance();
	void ExecuteUbergraph_Cv4_ExitZoneClientOnly();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
