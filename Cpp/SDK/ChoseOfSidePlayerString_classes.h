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

// WidgetBlueprintGeneratedClass ChoseOfSidePlayerString.ChoseOfSidePlayerString_C
// 0x0000
class UChoseOfSidePlayerString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChoseOfSidePlayerString.ChoseOfSidePlayerString_C");
		return ptr;
	}



	void CheckRankLock();
	void GetText_1();
	void Get_TimeLock_Visibility_1();
	void OnMouseButtonDown();
	void SetSeletedStyle();
	void SetUnselectedStyle();
	void OnMouseEnter();
	void OnMouseLeave();
	void DrawString();
	void Tick();
	void SetTimeLockStyle();
	void SetRankLockStyle();
	void Construct();
	void SetNormalStyle();
	void ExecuteUbergraph_ChoseOfSidePlayerString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
