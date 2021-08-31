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

// Function Cv3_LootLibrary.Cv3_LootLibrary_C.CheckCountLoot
// ()
void UCv3_LootLibrary_C::CheckCountLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv3_LootLibrary.Cv3_LootLibrary_C.CheckCountLoot");

	UCv3_LootLibrary_C_CheckCountLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv3_LootLibrary.Cv3_LootLibrary_C.GenerateLoot
// ()
void UCv3_LootLibrary_C::GenerateLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv3_LootLibrary.Cv3_LootLibrary_C.GenerateLoot");

	UCv3_LootLibrary_C_GenerateLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
