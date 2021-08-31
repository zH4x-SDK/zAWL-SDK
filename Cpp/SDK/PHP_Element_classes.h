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

// BlueprintGeneratedClass PHP_Element.PHP_Element_C
// 0x0000
class UPHP_Element_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PHP_Element.PHP_Element_C");
		return ptr;
	}



	void SetCustomId();
	void GetAuthKey();
	void SetBody();
	void POST();
	void OnRequestFail_Event_1();
	void OnRequestComplete_Event_1();
	void PUT();
	void PUT_Fail();
	void PUT_Comlite();
	void OnRequestComplete_Event();
	void Get();
	void ini();
	void OnRequestFail_Event();
	void ExecuteUbergraph_PHP_Element();
	void PHP_PUT__DelegateSignature();
	void PHP_POST__DelegateSignature();
	void PHP_GET__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
