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

#pragma once

#include "ScillApiBaseModel.h"
#include "ScillApiLeaderboardsV2Api.h"

#include "ScillApiActionResponse.h"
#include "ScillApiError.h"
#include "ScillApiLeaderboardV2MemberRanking.h"
#include "ScillApiLeaderboardV2Results.h"

namespace ScillSDK
{

/* Retrieve Leaderboard
 *
 * Provides the selected leaderboard V2 rankings for a specific leaderboard.
*/
class SCILLSDK_API ScillApiLeaderboardsV2Api::GetLeaderboardV2Request : public Request
{
public:
    virtual ~GetLeaderboardV2Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The id of the leaderboard */
	FString LeaderboardId;
	/* The starting date for fetching results. */
	TOptional<FString> StartDate;
	/* The ending date for fetching results. */
	TOptional<FString> EndDate;
	/* The aggregate function for the calculation of the results - can be BEST (returns a single score - either the lowest if ASC sorting is used, or the highest if DESC is used) or SUM (default value - increments (sums up) the scores). */
	TOptional<FString> Aggregate;
	/* The page index starting at 1. The number of pageSize elements are returned for each page. Default value is 1 */
	TOptional<int32> CurrentPage;
	/* The starting leaderboard position from which the results should be loaded. The number of results is controlled via the pageSize variable. This parameter overrides the currentPage parameter. */
	TOptional<int32> CurrentPosition;
	/* The number of elements per page. Default is 25. */
	TOptional<int32> PageSize;
	/* Set the language. Content can be translated in the Admin Panel. Values can be international language codes like de, en, fr, it, ... */
	TOptional<FString> Language;
};

class SCILLSDK_API ScillApiLeaderboardsV2Api::GetLeaderboardV2Response : public Response
{
public:
    virtual ~GetLeaderboardV2Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    ScillApiLeaderboardV2Results Content;
};

/* Retrieve user ranking for a single leaderboard V2
 *
 * Returns a LeaderboardV2MemberRanking item for the specified leaderboard. Use this route to get the position of a user of team in a specified leaderboard.
*/
class SCILLSDK_API ScillApiLeaderboardsV2Api::GetLeaderboardV2RankingRequest : public Request
{
public:
    virtual ~GetLeaderboardV2RankingRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The member type, can be user or team (right now) and sets which leaderboards should be selected. */
	FString MemberType;
	/* Either the user_id or team_id you used when sending the events. The memberType flag identifies which one is used. */
	FString MemberId;
	/* The id of the leaderboard */
	FString LeaderboardId;
	/* The starting date for fetching results. */
	TOptional<FString> StartDate;
	/* The ending date for fetching results. */
	TOptional<FString> EndDate;
	/* The aggregate function for the calculation of the results - can be BEST (returns a single score - either the lowest if ASC sorting is used, or the highest if DESC is used) or SUM (default value - increments (sums up) the scores). */
	TOptional<FString> Aggregate;
	/* Set the language. Content can be translated in the Admin Panel. Values can be international language codes like de, en, fr, it, ... */
	TOptional<FString> Language;
};

class SCILLSDK_API ScillApiLeaderboardsV2Api::GetLeaderboardV2RankingResponse : public Response
{
public:
    virtual ~GetLeaderboardV2RankingResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    ScillApiLeaderboardV2MemberRanking Content;
};

/* Retrieve user rankings across all leaderboards
 *
 * Returns an array of LeaderboardV2MemberRanking items defined for all leaderboards in the application specified for the user. If the member is not in the leaderboard, the rank will be -1 in the LeaderboardRanking object.
*/
class SCILLSDK_API ScillApiLeaderboardsV2Api::GetLeaderboardV2RankingsRequest : public Request
{
public:
    virtual ~GetLeaderboardV2RankingsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The member type, can be user or team (right now) and sets which leaderboards should be selected. */
	FString MemberType;
	/* Either the user_id or team_id you used when sending the events. The memberType flag identifies which one is used. */
	FString MemberId;
	/* The starting date for fetching results. */
	TOptional<FString> StartDate;
	/* The ending date for fetching results. */
	TOptional<FString> EndDate;
	/* The aggregate function for the calculation of the results - can be BEST (returns a single score - either the lowest if ASC sorting is used, or the highest if DESC is used) or SUM (default value - increments (sums up) the scores). */
	TOptional<FString> Aggregate;
	/* Set the language. Content can be translated in the Admin Panel. Values can be international language codes like de, en, fr, it, ... */
	TOptional<FString> Language;
};

class SCILLSDK_API ScillApiLeaderboardsV2Api::GetLeaderboardV2RankingsResponse : public Response
{
public:
    virtual ~GetLeaderboardV2RankingsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<ScillApiLeaderboardV2MemberRanking> Content;
};

/* Retrieve Leaderboards
 *
 * Returns an array of LeaderboardV2Results items defined for the application.
*/
class SCILLSDK_API ScillApiLeaderboardsV2Api::GetLeaderboardsV2Request : public Request
{
public:
    virtual ~GetLeaderboardsV2Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The starting date for fetching results. */
	TOptional<FString> StartDate;
	/* The ending date for fetching results. */
	TOptional<FString> EndDate;
	/* The aggregate function for the calculation of the results - can be BEST (returns a single score - either the lowest if ASC sorting is used, or the highest if DESC is used) or SUM (default value - increments (sums up) the scores). */
	TOptional<FString> Aggregate;
	/* The page index starting at 1. The number of pageSize elements are returned for each page. Default value is 1 */
	TOptional<int32> CurrentPage;
	/* The starting leaderboard position from which the results should be loaded. The number of results is controlled via the pageSize variable. This parameter overrides the currentPage parameter. */
	TOptional<int32> CurrentPosition;
	/* The number of elements per page. Default is 25. */
	TOptional<int32> PageSize;
	/* Set the language. Content can be translated in the Admin Panel. Values can be international language codes like de, en, fr, it, ... */
	TOptional<FString> Language;
};

class SCILLSDK_API ScillApiLeaderboardsV2Api::GetLeaderboardsV2Response : public Response
{
public:
    virtual ~GetLeaderboardsV2Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<ScillApiLeaderboardV2Results> Content;
};

/* Reset user leaderboard data
 *
 * Deletes all leaderboard V2 data, i.e. reset the leaderboard V2.
*/
class SCILLSDK_API ScillApiLeaderboardsV2Api::ResetLeaderboardV2RankingsRequest : public Request
{
public:
    virtual ~ResetLeaderboardV2RankingsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* The application ID */
	FString AppId;
	/* The leaderboard ID */
	FString LeaderboardId;
};

class SCILLSDK_API ScillApiLeaderboardsV2Api::ResetLeaderboardV2RankingsResponse : public Response
{
public:
    virtual ~ResetLeaderboardV2RankingsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    ScillApiActionResponse Content;
};

}
