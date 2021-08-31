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

// BlueprintGeneratedClass Z_TradeInterface.Z_TradeInterface_C
// 0x0000
class UZ_TradeInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_TradeInterface.Z_TradeInterface_C");
		return ptr;
	}



	void ShowTradeInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
