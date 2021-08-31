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

// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.StopLoadingScreen
// ()
void UAsyncLoadingScreenLibrary::StopLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.StopLoadingScreen");

	UAsyncLoadingScreenLibrary_StopLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex
// ()
void UAsyncLoadingScreenLibrary::SetDisplayTipTextIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex");

	UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex
// ()
void UAsyncLoadingScreenLibrary::SetDisplayMovieIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex");

	UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex
// ()
void UAsyncLoadingScreenLibrary::SetDisplayBackgroundIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex");

	UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
