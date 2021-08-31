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

// BlueprintGeneratedClass LightningPreset.LightningPreset_C
// 0x0000
class ULightningPreset_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LightningPreset.LightningPreset_C");
		return ptr;
	}



	void ApplyOnMaterial();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
