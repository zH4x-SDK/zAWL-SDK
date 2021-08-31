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

// Class MagicLeapIdentity.MagicLeapIdentity
// 0x0000
class UMagicLeapIdentity : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapIdentity.MagicLeapIdentity");
		return ptr;
	}



	void RequestIdentityAttributeValueDelegate__DelegateSignature();
	void RequestAttributeValueAsync();
	void RequestAttributeValue();
	void ModifyIdentityAttributeValueDelegate__DelegateSignature();
	void GetAllAvailableAttributesAsync();
	void GetAllAvailableAttributes();
	void AvailableIdentityAttributesDelegate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
