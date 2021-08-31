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

// Function TradeWidget.TradeWidget_C.Draw
// ()
void UTradeWidget_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TradeWidget.TradeWidget_C.Draw");

	UTradeWidget_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TradeWidget.TradeWidget_C.ExecuteUbergraph_TradeWidget
// ()
void UTradeWidget_C::ExecuteUbergraph_TradeWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TradeWidget.TradeWidget_C.ExecuteUbergraph_TradeWidget");

	UTradeWidget_C_ExecuteUbergraph_TradeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
