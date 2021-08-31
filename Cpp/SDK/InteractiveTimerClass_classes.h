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

// BlueprintGeneratedClass InteractiveTimerClass.InteractiveTimerClass_C
// 0x0000
class UInteractiveTimerClass_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass InteractiveTimerClass.InteractiveTimerClass_C");
		return ptr;
	}



	void CALL_BACK();
	void ADD_TIMER();
	void TIME_OUT__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
