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

// BlueprintGeneratedClass ZCHAT_ZChatInterface.ZCHAT_ZChatInterface_C
// 0x0000
class UZCHAT_ZChatInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ZCHAT_ZChatInterface.ZCHAT_ZChatInterface_C");
		return ptr;
	}



	void ZCHAT_ShowMessage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
