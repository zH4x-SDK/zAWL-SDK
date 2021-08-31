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

// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// 0x0000
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapSecureStorage.MagicLeapSecureStorage");
		return ptr;
	}



	void PutSecureVector();
	void PutSecureTransform();
	void PutSecureString();
	void PutSecureSaveGame();
	void PutSecureRotator();
	void PutSecureInt64();
	void PutSecureInt();
	void PutSecureFloat();
	void PutSecureByte();
	void PutSecureBool();
	void PutSecureArray();
	void GetSecureVector();
	void GetSecureTransform();
	void GetSecureString();
	void GetSecureSaveGame();
	void GetSecureRotator();
	void GetSecureInt64();
	void GetSecureInt();
	void GetSecureFloat();
	void GetSecureByte();
	void GetSecureBool();
	void GetSecureArray();
	void DeleteSecureData();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
