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

// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.Draw
// ()
void UInventory_SlotType_Equip_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.Draw");

	UInventory_SlotType_Equip_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.SetAmmoInfo
// ()
void UInventory_SlotType_Equip_C::SetAmmoInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.SetAmmoInfo");

	UInventory_SlotType_Equip_C_SetAmmoInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.ExecuteUbergraph_Inventory_SlotType_Equip
// ()
void UInventory_SlotType_Equip_C::ExecuteUbergraph_Inventory_SlotType_Equip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Inventory_SlotType_Equip.Inventory_SlotType_Equip_C.ExecuteUbergraph_Inventory_SlotType_Equip");

	UInventory_SlotType_Equip_C_ExecuteUbergraph_Inventory_SlotType_Equip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
