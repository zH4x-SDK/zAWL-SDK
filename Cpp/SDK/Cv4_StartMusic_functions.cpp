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

// Function Cv4_StartMusic.Cv4_StartMusic_C.ReceiveBeginPlay
// ()
void ACv4_StartMusic_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv4_StartMusic.Cv4_StartMusic_C.ReceiveBeginPlay");

	ACv4_StartMusic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Cv4_StartMusic.Cv4_StartMusic_C.ExecuteUbergraph_Cv4_StartMusic
// ()
void ACv4_StartMusic_C::ExecuteUbergraph_Cv4_StartMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cv4_StartMusic.Cv4_StartMusic_C.ExecuteUbergraph_Cv4_StartMusic");

	ACv4_StartMusic_C_ExecuteUbergraph_Cv4_StartMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
