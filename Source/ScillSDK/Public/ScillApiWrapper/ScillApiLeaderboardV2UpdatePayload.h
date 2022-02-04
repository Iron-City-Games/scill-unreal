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
#include "ScillApiLeaderboardScore.h"
#include "ScillApiLeaderboardV2Info.h"
#include "ScillApiLeaderboardV2Member.h"

namespace ScillSDK
{

/*
 * ScillApiLeaderboardV2UpdatePayload
 *
 * The payload used for realtime updates and webhooks if a leaderboard is updated.
 */
class SCILLSDK_API ScillApiLeaderboardV2UpdatePayload : public Model
{
public:
    virtual ~ScillApiLeaderboardV2UpdatePayload() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The type of the webhook, in this case it is leaderboard-ranking-changed */
	TOptional<FString> WebhookType;
	TOptional<ScillApiLeaderboardV2Info> LeaderboardData;
	TOptional<ScillApiLeaderboardV2Member> MemberData;
	TOptional<ScillApiLeaderboardScore> OldLeaderboardRanking;
	TOptional<ScillApiLeaderboardScore> NewLeaderboardRanking;
};

}
