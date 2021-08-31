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

// BlueprintGeneratedClass Pass_Keypad.Pass_Keypad_C
// 0x0000
class APass_Keypad_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Pass_Keypad.Pass_Keypad_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void Action();
	void hover();
	void Unhover();
	void ExecuteUbergraph_Pass_Keypad();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
