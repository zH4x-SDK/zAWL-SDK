// Name: AWL, Version: 4.24.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Wiki.Wiki_C.Load
// ()
void UWiki_C::Load()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wiki.Wiki_C.Load");

	UWiki_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wiki.Wiki_C.Save
// ()
void UWiki_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Wiki.Wiki_C.Save");

	UWiki_C_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
