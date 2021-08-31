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

// BlueprintGeneratedClass AssetTerminal.AssetTerminal_C
// 0x0000
class AAssetTerminal_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AssetTerminal.AssetTerminal_C");
		return ptr;
	}



	void IsMyPoint();
	void DecodeObjectsData();
	void GenerateDataInformation();
	void GetAssetObjects();
	void Produce();
	void SellGoods();
	void Get_LootCount();
	void LoadData();
	void UserConstructionScript();
	void UpdateScreenWidget();
	void GetComplite();
	void PostComplite();
	void StopProduce();
	void StartProduce();
	void ReceiveBeginPlay();
	void ShowAssetGUI();
	void ExecuteUbergraph_AssetTerminal();
	void UpdateAssetObjects__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
