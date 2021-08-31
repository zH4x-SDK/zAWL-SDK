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

// Enum AdvancedSessions.EBPOnlinePresenceState
enum class AdvancedSessions_EBPOnlinePresenceState : uint8_t
{
	EBPOnlinePresenceState__Online = 0,
	EBPOnlinePresenceState__Offline = 1,
	EBPOnlinePresenceState__Away   = 2,
	EBPOnlinePresenceState__ExtendedAway = 3,
	EBPOnlinePresenceState__DoNotDisturb = 4,
	EBPOnlinePresenceState__Chat   = 5,
	EBPOnlinePresenceState__EBPOnlinePresenceState_MAX = 6,

};

// Enum AdvancedSessions.EBPUserPrivileges
enum class AdvancedSessions_EBPUserPrivileges : uint8_t
{
	EBPUserPrivileges__CanPlay     = 0,
	EBPUserPrivileges__CanPlayOnline = 1,
	EBPUserPrivileges__CanCommunicateOnline = 2,
	EBPUserPrivileges__CanUseUserGeneratedContent = 3,
	EBPUserPrivileges__EBPUserPrivileges_MAX = 4,

};

// Enum AdvancedSessions.EOnlineComparisonOpRedux
enum class AdvancedSessions_EOnlineComparisonOpRedux : uint8_t
{
	EOnlineComparisonOpRedux__Equals = 0,
	EOnlineComparisonOpRedux__NotEquals = 1,
	EOnlineComparisonOpRedux__GreaterThan = 2,
	EOnlineComparisonOpRedux__GreaterThanEquals = 3,
	EOnlineComparisonOpRedux__LessThan = 4,
	EOnlineComparisonOpRedux__LessThanEquals = 5,
	EOnlineComparisonOpRedux__EOnlineComparisonOpRedux_MAX = 6,

};

// Enum AdvancedSessions.EBPOnlineSessionState
enum class AdvancedSessions_EBPOnlineSessionState : uint8_t
{
	EBPOnlineSessionState__NoSession = 0,
	EBPOnlineSessionState__Creating = 1,
	EBPOnlineSessionState__Pending = 2,
	EBPOnlineSessionState__Starting = 3,
	EBPOnlineSessionState__InProgress = 4,
	EBPOnlineSessionState__Ending  = 5,
	EBPOnlineSessionState__Ended   = 6,
	EBPOnlineSessionState__Destroying = 7,
	EBPOnlineSessionState__EBPOnlineSessionState_MAX = 8,

};

// Enum AdvancedSessions.EBPServerPresenceSearchType
enum class AdvancedSessions_EBPServerPresenceSearchType : uint8_t
{
	EBPServerPresenceSearchType__AllServers = 0,
	EBPServerPresenceSearchType__ClientServersOnly = 1,
	EBPServerPresenceSearchType__DedicatedServersOnly = 2,
	EBPServerPresenceSearchType__EBPServerPresenceSearchType_MAX = 3,

};

// Enum AdvancedSessions.EBlueprintAsyncResultSwitch
enum class AdvancedSessions_EBlueprintAsyncResultSwitch : uint8_t
{
	EBlueprintAsyncResultSwitch__OnSuccess = 0,
	EBlueprintAsyncResultSwitch__AsyncLoading = 1,
	EBlueprintAsyncResultSwitch__OnFailure = 2,
	EBlueprintAsyncResultSwitch__EBlueprintAsyncResultSwitch_MAX = 3,

};

// Enum AdvancedSessions.EBlueprintResultSwitch
enum class AdvancedSessions_EBlueprintResultSwitch : uint8_t
{
	EBlueprintResultSwitch__OnSuccess = 0,
	EBlueprintResultSwitch__OnFailure = 1,
	EBlueprintResultSwitch__EBlueprintResultSwitch_MAX = 2,

};

// Enum AdvancedSessions.ESessionSettingSearchResult
enum class AdvancedSessions_ESessionSettingSearchResult : uint8_t
{
	ESessionSettingSearchResult__Found = 0,
	ESessionSettingSearchResult__NotFound = 1,
	ESessionSettingSearchResult__WrongType = 2,
	ESessionSettingSearchResult__ESessionSettingSearchResult_MAX = 3,

};

// Enum AdvancedSessions.EBPLoginStatus
enum class AdvancedSessions_EBPLoginStatus : uint8_t
{
	EBPLoginStatus__NotLoggedIn    = 0,
	EBPLoginStatus__UsingLocalProfile = 1,
	EBPLoginStatus__LoggedIn       = 2,
	EBPLoginStatus__EBPLoginStatus_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AdvancedSessions.BPFriendInfo
// 0x0000
struct FBPFriendInfo
{

};

// ScriptStruct AdvancedSessions.BPFriendPresenceInfo
// 0x0000
struct FBPFriendPresenceInfo
{

};

// ScriptStruct AdvancedSessions.BPUniqueNetId
// 0x0000
struct FBPUniqueNetId
{

};

// ScriptStruct AdvancedSessions.BPOnlineUser
// 0x0000
struct FBPOnlineUser
{

};

// ScriptStruct AdvancedSessions.BPOnlineRecentPlayer
// 0x0000
struct FBPOnlineRecentPlayer : public FBPOnlineUser
{

};

// ScriptStruct AdvancedSessions.SessionsSearchSetting
// 0x0000
struct FSessionsSearchSetting
{

};

// ScriptStruct AdvancedSessions.SessionPropertyKeyPair
// 0x0000
struct FSessionPropertyKeyPair
{

};

// ScriptStruct AdvancedSessions.BPUserOnlineAccount
// 0x0000
struct FBPUserOnlineAccount
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
