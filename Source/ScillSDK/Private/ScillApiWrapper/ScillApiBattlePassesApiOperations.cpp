/**
 * SCILL API
 * SCILL gives you the tools to activate, retain and grow your user base in your app or game by bringing you features well known in the gaming industry: Gamification. We take care of the services and technology involved so you can focus on your game and content.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@scillgame.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "ScillApiWrapper/ScillApiBattlePassesApiOperations.h"

#include "ScillSDKModule.h"
#include "ScillApiWrapper/ScillApiHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace ScillSDK
{

FString ScillApiBattlePassesApi::ActivateBattlePassLevelRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) },
	{ TEXT("levelId"), ToStringFormatArg(LevelId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-pass-levels/{appId}/activate/{levelId}"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::ActivateBattlePassLevelRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::ActivateBattlePassLevelResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The action has been successful"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::ActivateBattlePassLevelResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiBattlePassesApi::ClaimBattlePassLevelRewardRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) },
	{ TEXT("levelId"), ToStringFormatArg(LevelId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-pass-levels/{appId}/claim/{levelId}"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::ClaimBattlePassLevelRewardRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::ClaimBattlePassLevelRewardResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The action has been successful"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::ClaimBattlePassLevelRewardResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiBattlePassesApi::GetActiveBattlePassesRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-passes/{appId}/active"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::GetActiveBattlePassesRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::GetActiveBattlePassesResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("An array of BattlePass objects"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::GetActiveBattlePassesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiBattlePassesApi::GetAllBattlePassLevelsRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-pass-levels/{appId}"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::GetAllBattlePassLevelsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::GetAllBattlePassLevelsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("An array of BattlePassLevel objects"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::GetAllBattlePassLevelsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiBattlePassesApi::GetBattlePassRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) },
	{ TEXT("battlePassId"), ToStringFormatArg(BattlePassId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-passes/{appId}/single/{battlePassId}"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::GetBattlePassRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::GetBattlePassResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("A BattlePass object"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::GetBattlePassResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiBattlePassesApi::GetBattlePassLevelsRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) },
	{ TEXT("battlePassId"), ToStringFormatArg(BattlePassId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-pass-levels/{appId}/{battlePassId}"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::GetBattlePassLevelsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::GetBattlePassLevelsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("An array of BattlePassLevel objects"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::GetBattlePassLevelsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiBattlePassesApi::GetBattlePassesRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-passes/{appId}"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::GetBattlePassesRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::GetBattlePassesResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("An array of BattlePass objects"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::GetBattlePassesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiBattlePassesApi::GetUnlockedBattlePassesRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-passes/{appId}/unlocked"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::GetUnlockedBattlePassesRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::GetUnlockedBattlePassesResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("An array of BattlePass objects"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::GetUnlockedBattlePassesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiBattlePassesApi::UnlockBattlePassRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("appId"), ToStringFormatArg(AppId) },
	{ TEXT("battlePassId"), ToStringFormatArg(BattlePassId) } };

	FString Path = FString::Format(TEXT("/api/v1/battle-passes/{appId}/unlock/{battlePassId}"), PathParams);

	TArray<FString> QueryParams;
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiBattlePassesApi::UnlockBattlePassRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		if (ScillApiBattlePassUnlockPayload.IsSet())
		{
			WriteJsonValue(Writer, ScillApiBattlePassUnlockPayload.GetValue());
		}
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogScillSDK, Error, TEXT("Body parameter (ScillApiBattlePassUnlockPayload) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogScillSDK, Error, TEXT("Body parameter (ScillApiBattlePassUnlockPayload) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogScillSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void ScillApiBattlePassesApi::UnlockBattlePassResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Returns unlock info about a battle pass"));
		break;
	case 402:
		SetResponseString(TEXT("This request could not be performed. Most of the time this happens if the action already has been executed before."));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiBattlePassesApi::UnlockBattlePassResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
