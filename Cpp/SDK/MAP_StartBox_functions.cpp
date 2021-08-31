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

// Function MAP_StartBox.MAP_StartBox_C.SetBrushROOT
// ()
void UMAP_StartBox_C::SetBrushROOT()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MAP_StartBox.MAP_StartBox_C.SetBrushROOT");

	UMAP_StartBox_C_SetBrushROOT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MAP_StartBox.MAP_StartBox_C.ExecuteUbergraph_MAP_StartBox
// ()
void UMAP_StartBox_C::ExecuteUbergraph_MAP_StartBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MAP_StartBox.MAP_StartBox_C.ExecuteUbergraph_MAP_StartBox");

	UMAP_StartBox_C_ExecuteUbergraph_MAP_StartBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
