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

// BlueprintGeneratedClass AssetProduce.AssetProduce_C
// 0x0000
class AAssetProduce_C : public AAssetObject_Root_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AssetProduce.AssetProduce_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ProduceTick();
	void ExecuteUbergraph_AssetProduce();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
