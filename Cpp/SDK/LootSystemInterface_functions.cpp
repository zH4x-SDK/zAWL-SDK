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

// Function LootSystemInterface.LootSystemInterface_C.UpdateLootArray
// ()
void ULootSystemInterface_C::UpdateLootArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootSystemInterface.LootSystemInterface_C.UpdateLootArray");

	ULootSystemInterface_C_UpdateLootArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
