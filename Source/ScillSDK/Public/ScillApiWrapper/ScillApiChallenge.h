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

namespace ScillSDK
{

/*
 * ScillApiChallenge
 *
 * The challenge object holds all information about a users challenge. It contains information like the duration, the type, progress states like counter and the goal and various other info.
 */
class SCILLSDK_API ScillApiChallenge : public Model
{
public:
    virtual ~ScillApiChallenge() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The unique id of this challenge. Every challenge is linked to a product. */
	TOptional<FString> ChallengeId;
	/* The name of the challenge in the language set by the language parameter. */
	TOptional<FString> ChallengeName;
	/* An optional multi-language description that can be set in the Admin Panel. Used to describe exactly what the user has to do. */
	TOptional<FString> ChallengeDescription;
	/* The duration of the challenge in seconds. Challenges auto lock after time-out and need to be unlocked again. */
	TOptional<double> ChallengeDurationTime;
	/* The date this challenge should start. Use that field to create challenges that start in the future. */
	TOptional<FString> LiveDate;
	/* Indicates how many “tasks” must be completed or done to complete this challenge. */
	TOptional<int32> ChallengeGoal;
	/* Indicates how many tasks the user already has completed. Use this in combination with challenge_goal to render a nice progress bar. */
	TOptional<int32> UserChallengeCurrentScore;
	/* In the admin panel you can set a string representing an image. This can be a URL, but it can also be an image or texture that you have in your games asset database. */
	TOptional<FString> ChallengeIcon;
	/* This is the HD variant of the challenge icon image. If you have a game, that runs on multiple platforms that could come in handy. Otherwise just leave blank. */
	TOptional<FString> ChallengeIconHd;
	/* If you purchase the challenge, you can set a price. */
	TOptional<int32> ChallengePrice;
	/* Set a reward for this challenge. This is a string value that you can map to anything in your code. Use in combination with challenge_reward_type. */
	TOptional<FString> ChallengeReward;
	/* The reward type can be set to various different settings. Use it to implement different reward types on your side and use challenge_reward to set the value or amount of this reward. */
	TOptional<FString> ChallengeRewardType;
	/* With this you can set the way how the SCILL system approaches the challenges state. 0 means, that the counter of the challenge must be brought above the goal. If this is 1, then the counter must be kept below the goal. This is often useful for challenges that include times, like: Manage the level in under 50 seconds. */
	TOptional<int32> ChallengeGoalCondition;
	/* If you have experience, player rankings whatever, you can use this field to set the gain in that when this challenge is rewarded. */
	TOptional<int32> ChallengeXp;
	/* If this challenge can be only activated once per user this will be false. Otherwise this challenge will always be added to list of available challenges (see personal or alliance challenges). */
	TOptional<bool> Repeatable;
	/* Indicates the status of the challenge. This can be one of the following unlock: Challenge does not track anything. in-progress: Challenge is active and tracking. overtime: User did not manage to finish the challenge in time. unclaimed: The challenge has been completed but the reward has not yet been claimed. finished: The challenge has been successfully be completed and the reward has been claimed */
	TOptional<FString> Type;
	/* Indicates if the challenges lifecycle is handled automatically by the SCILL backend. Use this flag to decide when to show action buttons for unlocking, activating, claiming or canceling challenges. Hide the buttons if this flag is true, and let the user manage challenges manually if this flag is false. */
	TOptional<bool> ChallengeAutoActivated;
	/* If the challenge reward has been claimed this is true otherwise its false. */
	TOptional<bool> IsClaimed;
	/* This is the timestamp the challenge has been unlocked. */
	TOptional<FString> UserChallengeUnlockedAt;
	/* This is the timestamp the challenge has been activated. */
	TOptional<FString> UserChallengeActivatedAt;
	/* Indicates if this challenge has been claimed. */
	TOptional<bool> UserChallengeIsClaimed;
	/* Gives indication in what state the challenge is. */
	TOptional<int32> UserChallengeStatus;
};

}
