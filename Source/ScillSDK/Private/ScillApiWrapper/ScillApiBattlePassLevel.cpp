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

#include "ScillApiWrapper/ScillApiBattlePassLevel.h"

#include "ScillSDKModule.h"
#include "ScillApiWrapper/ScillApiHelpers.h"

#include "Templates/SharedPointer.h"

namespace ScillSDK
{

void ScillApiBattlePassLevel::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (LevelId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("level_id")); WriteJsonValue(Writer, LevelId.GetValue());
	}
	if (AppId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("app_id")); WriteJsonValue(Writer, AppId.GetValue());
	}
	if (BattlePassId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("battle_pass_id")); WriteJsonValue(Writer, BattlePassId.GetValue());
	}
	if (RewardAmount.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("reward_amount")); WriteJsonValue(Writer, RewardAmount.GetValue());
	}
	if (RewardTypeName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("reward_type_name")); WriteJsonValue(Writer, RewardTypeName.GetValue());
	}
	if (LevelRewardType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("level_reward_type")); WriteJsonValue(Writer, LevelRewardType.GetValue());
	}
	if (LevelCompleted.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("level_completed")); WriteJsonValue(Writer, LevelCompleted.GetValue());
	}
	if (LevelPriority.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("level_priority")); WriteJsonValue(Writer, LevelPriority.GetValue());
	}
	if (RewardClaimed.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("reward_claimed")); WriteJsonValue(Writer, RewardClaimed.GetValue());
	}
	if (ActivatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("activated_at")); WriteJsonValue(Writer, ActivatedAt.GetValue());
	}
	if (Challenges.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("challenges")); WriteJsonValue(Writer, Challenges.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool ScillApiBattlePassLevel::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("level_id"), LevelId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("app_id"), AppId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("battle_pass_id"), BattlePassId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("reward_amount"), RewardAmount);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("reward_type_name"), RewardTypeName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("level_reward_type"), LevelRewardType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("level_completed"), LevelCompleted);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("level_priority"), LevelPriority);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("reward_claimed"), RewardClaimed);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("activated_at"), ActivatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("challenges"), Challenges);

	return ParseSuccess;
}

}
