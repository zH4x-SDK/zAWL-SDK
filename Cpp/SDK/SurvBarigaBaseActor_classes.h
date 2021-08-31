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

// BlueprintGeneratedClass SurvBarigaBaseActor.SurvBarigaBaseActor_C
// 0x0000
class ASurvBarigaBaseActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvBarigaBaseActor.SurvBarigaBaseActor_C");
		return ptr;
	}



	void GetBariga();
	void CreateBarigs();
	void ini();
	void CreateAllTrade();
	void IniToAll();
	void ExecuteUbergraph_SurvBarigaBaseActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
