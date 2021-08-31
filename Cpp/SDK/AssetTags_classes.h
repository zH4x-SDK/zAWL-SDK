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

// Class AssetTags.AssetTagsSubsystem
// 0x0000
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AssetTags.AssetTagsSubsystem");
		return ptr;
	}



	void GetCollectionsContainingAssetPtr();
	void GetCollectionsContainingAssetData();
	void GetCollectionsContainingAsset();
	void GetCollections();
	void GetAssetsInCollection();
	void CollectionExists();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
