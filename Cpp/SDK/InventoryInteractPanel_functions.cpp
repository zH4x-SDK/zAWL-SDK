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

// Function InventoryInteractPanel.InventoryInteractPanel_C.Draw
// ()
void UInventoryInteractPanel_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InventoryInteractPanel.InventoryInteractPanel_C.Draw");

	UInventoryInteractPanel_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InventoryInteractPanel.InventoryInteractPanel_C.ExecuteUbergraph_InventoryInteractPanel
// ()
void UInventoryInteractPanel_C::ExecuteUbergraph_InventoryInteractPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InventoryInteractPanel.InventoryInteractPanel_C.ExecuteUbergraph_InventoryInteractPanel");

	UInventoryInteractPanel_C_ExecuteUbergraph_InventoryInteractPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
