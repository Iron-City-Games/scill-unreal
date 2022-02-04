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

#include "ScillApiWrapper/ScillApiLeaderboardsApiOperations.h"

#include "ScillSDKModule.h"
#include "ScillApiWrapper/ScillApiHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace ScillSDK
{

FString ScillApiLeaderboardsApi::GetLeaderboardRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("leaderboardId"), ToStringFormatArg(LeaderboardId) } };

	FString Path = FString::Format(TEXT("/api/v1/leaderboards/{leaderboardId}"), PathParams);

	TArray<FString> QueryParams;
	if(CurrentPage.IsSet())
	{
		QueryParams.Add(FString(TEXT("currentPage=")) + ToUrlString(CurrentPage.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("pageSize=")) + ToUrlString(PageSize.GetValue()));
	}
	if(StartDate.IsSet())
	{
		QueryParams.Add(FString(TEXT("startDate=")) + ToUrlString(StartDate.GetValue()));
	}
	if(EndDate.IsSet())
	{
		QueryParams.Add(FString(TEXT("endDate=")) + ToUrlString(EndDate.GetValue()));
	}
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiLeaderboardsApi::GetLeaderboardRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

void ScillApiLeaderboardsApi::GetLeaderboardResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("A Leaderboard object with information about the leaderboard and current rankings"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiLeaderboardsApi::GetLeaderboardResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiLeaderboardsApi::GetLeaderboardRankingRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("memberType"), ToStringFormatArg(MemberType) },
	{ TEXT("memberId"), ToStringFormatArg(MemberId) },
	{ TEXT("leaderboardId"), ToStringFormatArg(LeaderboardId) } };

	FString Path = FString::Format(TEXT("/api/v1/leaderboards-members/{memberType}/{memberId}/{leaderboardId}"), PathParams);

	TArray<FString> QueryParams;
	if(StartDate.IsSet())
	{
		QueryParams.Add(FString(TEXT("startDate=")) + ToUrlString(StartDate.GetValue()));
	}
	if(EndDate.IsSet())
	{
		QueryParams.Add(FString(TEXT("endDate=")) + ToUrlString(EndDate.GetValue()));
	}
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiLeaderboardsApi::GetLeaderboardRankingRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

void ScillApiLeaderboardsApi::GetLeaderboardRankingResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("A Leaderboard object with information about the leaderboard and current rankings"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiLeaderboardsApi::GetLeaderboardRankingResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiLeaderboardsApi::GetLeaderboardRankingsRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("memberType"), ToStringFormatArg(MemberType) },
	{ TEXT("memberId"), ToStringFormatArg(MemberId) } };

	FString Path = FString::Format(TEXT("/api/v1/leaderboards-members/{memberType}/{memberId}"), PathParams);

	TArray<FString> QueryParams;
	if(StartDate.IsSet())
	{
		QueryParams.Add(FString(TEXT("startDate=")) + ToUrlString(StartDate.GetValue()));
	}
	if(EndDate.IsSet())
	{
		QueryParams.Add(FString(TEXT("endDate=")) + ToUrlString(EndDate.GetValue()));
	}
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiLeaderboardsApi::GetLeaderboardRankingsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

void ScillApiLeaderboardsApi::GetLeaderboardRankingsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("A Leaderboard object with information about the leaderboard and current rankings"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiLeaderboardsApi::GetLeaderboardRankingsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiLeaderboardsApi::GetLeaderboardsRequest::ComputePath() const
{
	FString Path(TEXT("/api/v1/leaderboards"));
	TArray<FString> QueryParams;
	if(CurrentPage.IsSet())
	{
		QueryParams.Add(FString(TEXT("currentPage=")) + ToUrlString(CurrentPage.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("pageSize=")) + ToUrlString(PageSize.GetValue()));
	}
	if(StartDate.IsSet())
	{
		QueryParams.Add(FString(TEXT("startDate=")) + ToUrlString(StartDate.GetValue()));
	}
	if(EndDate.IsSet())
	{
		QueryParams.Add(FString(TEXT("endDate=")) + ToUrlString(EndDate.GetValue()));
	}
	if(Language.IsSet())
	{
		QueryParams.Add(FString(TEXT("language=")) + ToUrlString(Language.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void ScillApiLeaderboardsApi::GetLeaderboardsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

void ScillApiLeaderboardsApi::GetLeaderboardsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("A Leaderboard object with information about the leaderboard and current rankings"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized"));
		break;
	case 404:
		SetResponseString(TEXT("The specified resource was not found"));
		break;
	}
}

bool ScillApiLeaderboardsApi::GetLeaderboardsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString ScillApiLeaderboardsApi::ResetLeaderboardRankingsRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("memberType"), ToStringFormatArg(MemberType) },
	{ TEXT("appId"), ToStringFormatArg(AppId) },
	{ TEXT("memberId"), ToStringFormatArg(MemberId) } };

	FString Path = FString::Format(TEXT("/api/v1/reset-leaderboard/{memberType}/{appId}/{memberId}"), PathParams);

	return Path;
}

void ScillApiLeaderboardsApi::ResetLeaderboardRankingsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("DELETE"));

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

void ScillApiLeaderboardsApi::ResetLeaderboardRankingsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool ScillApiLeaderboardsApi::ResetLeaderboardRankingsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
