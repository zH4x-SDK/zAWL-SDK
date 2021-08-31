#pragma once

// Name: AWL, Version: 4.24.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AsyncLoadingScreen.ELoadingWidgetType
enum class AsyncLoadingScreen_ELoadingWidgetType : uint8_t
{
	ELoadingWidgetType__LWT_Horizontal = 0,
	ELoadingWidgetType__LWT_Vertical = 1,
	ELoadingWidgetType__LWT_MAX    = 2,

};

// Enum AsyncLoadingScreen.ELoadingIconType
enum class AsyncLoadingScreen_ELoadingIconType : uint8_t
{
	ELoadingIconType__LIT_Throbber = 0,
	ELoadingIconType__LIT_CircularThrobber = 1,
	ELoadingIconType__LIT_ImageSequence = 2,
	ELoadingIconType__LIT_MAX      = 3,

};

// Enum AsyncLoadingScreen.EAsyncLoadingScreenLayout
enum class AsyncLoadingScreen_EAsyncLoadingScreenLayout : uint8_t
{
	EAsyncLoadingScreenLayout__ALSL_Classic = 0,
	EAsyncLoadingScreenLayout__ALSL_Center = 1,
	EAsyncLoadingScreenLayout__ALSL_Letterbox = 2,
	EAsyncLoadingScreenLayout__ALSL_Sidebar = 3,
	EAsyncLoadingScreenLayout__ALSL_DualSidebar = 4,
	EAsyncLoadingScreenLayout__ALSL_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AsyncLoadingScreen.DualSidebarLayoutSettings
// 0x0000
struct FDualSidebarLayoutSettings
{

};

// ScriptStruct AsyncLoadingScreen.SidebarLayoutSettings
// 0x0000
struct FSidebarLayoutSettings
{

};

// ScriptStruct AsyncLoadingScreen.WidgetAlignment
// 0x0000
struct FWidgetAlignment
{

};

// ScriptStruct AsyncLoadingScreen.LetterboxLayoutSettings
// 0x0000
struct FLetterboxLayoutSettings
{

};

// ScriptStruct AsyncLoadingScreen.CenterLayoutSettings
// 0x0000
struct FCenterLayoutSettings
{

};

// ScriptStruct AsyncLoadingScreen.ClassicLayoutSettings
// 0x0000
struct FClassicLayoutSettings
{

};

// ScriptStruct AsyncLoadingScreen.ALoadingScreenSettings
// 0x0000
struct FALoadingScreenSettings
{

};

// ScriptStruct AsyncLoadingScreen.LoadingWidgetSettings
// 0x0000
struct FLoadingWidgetSettings
{

};

// ScriptStruct AsyncLoadingScreen.ImageSequenceSettings
// 0x0000
struct FImageSequenceSettings
{

};

// ScriptStruct AsyncLoadingScreen.CircularThrobberSettings
// 0x0000
struct FCircularThrobberSettings
{

};

// ScriptStruct AsyncLoadingScreen.ThrobberSettings
// 0x0000
struct FThrobberSettings
{

};

// ScriptStruct AsyncLoadingScreen.TextAppearance
// 0x0000
struct FTextAppearance
{

};

// ScriptStruct AsyncLoadingScreen.TipSettings
// 0x0000
struct FTipSettings
{

};

// ScriptStruct AsyncLoadingScreen.BackgroundSettings
// 0x0000
struct FBackgroundSettings
{

};

// ScriptStruct AsyncLoadingScreen.LoadingCompleteTextSettings
// 0x0000
struct FLoadingCompleteTextSettings
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
