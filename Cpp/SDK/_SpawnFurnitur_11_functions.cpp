﻿// Name: AWL, Version: 4.24.3

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

// Function _SpawnFurnitur_11._SpawnFurnitur_10_C.UserConstructionScript
// ()
void A_SpawnFurnitur_10_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function _SpawnFurnitur_11._SpawnFurnitur_10_C.UserConstructionScript");

	A_SpawnFurnitur_10_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
