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
// Classes
//---------------------------------------------------------------------------

// Class VaRest.VaRestJsonObject
// 0x0000
class UVaRestJsonObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VaRest.VaRestJsonObject");
		return ptr;
	}



	void WriteToFilePath();
	void SetStringField();
	void SetStringArrayField();
	void SetObjectField();
	void SetObjectArrayField();
	void SetNumberField();
	void SetNumberArrayField();
	void SetMapFields_uint8();
	void SetMapFields_string();
	void SetMapFields_int64();
	void SetMapFields_int32();
	void SetMapFields_bool();
	void SetIntegerField();
	void SetField();
	void SetBoolField();
	void SetBoolArrayField();
	void SetArrayField();
	void Reset();
	void RemoveField();
	void MergeJsonObject();
	void HasField();
	void GetStringField();
	void GetStringArrayField();
	void GetObjectField();
	void GetObjectArrayField();
	void GetNumberField();
	void GetNumberArrayField();
	void GetIntegerField();
	void GetFieldNames();
	void GetField();
	void GetBoolField();
	void GetBoolArrayField();
	void GetArrayField();
	void EncodeJsonToSingleString();
	void EncodeJson();
	void DecodeJson();
};

// Class VaRest.VaRestJsonValue
// 0x0000
class UVaRestJsonValue : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VaRest.VaRestJsonValue");
		return ptr;
	}



	void IsNull();
	void GetTypeString();
	void GetType();
	void AsString();
	void AsObject();
	void AsNumber();
	void AsBool();
	void AsArray();
};

// Class VaRest.VaRestLibrary
// 0x0000
class UVaRestLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VaRest.VaRestLibrary");
		return ptr;
	}



	void StringToSha1();
	void StringToMd5();
	void PercentEncode();
	void HTTPStatusIntToEnum();
	void GetVaRestSettings();
	void Base64EncodeData();
	void Base64Encode();
	void Base64DecodeData();
	void Base64Decode();
};

// Class VaRest.VaRestRequestJSON
// 0x0000
class UVaRestRequestJSON : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VaRest.VaRestRequestJSON");
		return ptr;
	}



	void SetVerb();
	void SetURL();
	void SetStringRequestContent();
	void SetResponseObject();
	void SetRequestObject();
	void SetHeader();
	void SetCustomVerb();
	void SetContentType();
	void SetBinaryRequestContent();
	void SetBinaryContentType();
	void ResetResponseData();
	void ResetRequestData();
	void ResetData();
	void RemoveTag();
	void ProcessURL();
	void HasTag();
	void GetURL();
	void GetStatus();
	void GetResponseObject();
	void GetResponseHeader();
	void GetResponseContentAsString();
	void GetResponseCode();
	void GetRequestObject();
	void GetAllResponseHeaders();
	void ExecuteProcessRequest();
	void Cancel();
	void ApplyURL();
	void AddTag();
};

// Class VaRest.VaRestSettings
// 0x0000
class UVaRestSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VaRest.VaRestSettings");
		return ptr;
	}



};

// Class VaRest.VaRestSubsystem
// 0x0000
class UVaRestSubsystem : public UEngineSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VaRest.VaRestSubsystem");
		return ptr;
	}



	void StaticConstructVaRestJsonObject();
	void LoadJsonFromFile();
	void ConstructVaRestRequestExt();
	void ConstructVaRestRequest();
	void ConstructVaRestJsonObject();
	void ConstructJsonValueString();
	void ConstructJsonValueObject();
	void ConstructJsonValueNumber();
	void ConstructJsonValueBool();
	void ConstructJsonValueArray();
	void CallURL();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
