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

#include "ScillApiWrapper/ScillApiEventMetaData.h"

#include "ScillSDKModule.h"
#include "ScillApiWrapper/ScillApiHelpers.h"

#include "Templates/SharedPointer.h"

namespace ScillSDK
{

void ScillApiEventMetaData::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ActionObject.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("action_object")); WriteJsonValue(Writer, ActionObject.GetValue());
	}
	if (ActionSubject.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("action_subject")); WriteJsonValue(Writer, ActionSubject.GetValue());
	}
	if (ActionType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("action_type")); WriteJsonValue(Writer, ActionType.GetValue());
	}
	if (AmmoUsed.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ammo_used")); WriteJsonValue(Writer, AmmoUsed.GetValue());
	}
	if (Amount.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("amount")); WriteJsonValue(Writer, Amount.GetValue());
	}
	if (AmountGained.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("amount_gained")); WriteJsonValue(Writer, AmountGained.GetValue());
	}
	if (AmountGiven.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("amount_given")); WriteJsonValue(Writer, AmountGiven.GetValue());
	}
	if (AnimalName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("animal_name")); WriteJsonValue(Writer, AnimalName.GetValue());
	}
	if (Armor.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("armor")); WriteJsonValue(Writer, Armor.GetValue());
	}
	if (AwayTeamId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("away_team_id")); WriteJsonValue(Writer, AwayTeamId.GetValue());
	}
	if (AwayScore.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("away_score")); WriteJsonValue(Writer, AwayScore.GetValue());
	}
	if (BattleStatus.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("battle_status")); WriteJsonValue(Writer, BattleStatus.GetValue());
	}
	if (BountyName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bounty_name")); WriteJsonValue(Writer, BountyName.GetValue());
	}
	if (BuildingId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("building_id")); WriteJsonValue(Writer, BuildingId.GetValue());
	}
	if (BuildingLevel.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("building_level")); WriteJsonValue(Writer, BuildingLevel.GetValue());
	}
	if (CardType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("card_type")); WriteJsonValue(Writer, CardType.GetValue());
	}
	if (CharacterName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("character_name")); WriteJsonValue(Writer, CharacterName.GetValue());
	}
	if (CheckpointId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("checkpoint_id")); WriteJsonValue(Writer, CheckpointId.GetValue());
	}
	if (CoordinateX.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("coordinate_x")); WriteJsonValue(Writer, CoordinateX.GetValue());
	}
	if (CoordinateY.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("coordinate_y")); WriteJsonValue(Writer, CoordinateY.GetValue());
	}
	if (CrewName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("crew_name")); WriteJsonValue(Writer, CrewName.GetValue());
	}
	if (DamageAmount.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("damage_amount")); WriteJsonValue(Writer, DamageAmount.GetValue());
	}
	if (Distance.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("distance")); WriteJsonValue(Writer, Distance.GetValue());
	}
	if (Duration.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("duration")); WriteJsonValue(Writer, Duration.GetValue());
	}
	if (EffectId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("effect_id")); WriteJsonValue(Writer, EffectId.GetValue());
	}
	if (EnemyCharacter.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("enemy_character")); WriteJsonValue(Writer, EnemyCharacter.GetValue());
	}
	if (EnemyType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("enemy_type")); WriteJsonValue(Writer, EnemyType.GetValue());
	}
	if (EventType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("event_type")); WriteJsonValue(Writer, EventType.GetValue());
	}
	if (FuelConsumed.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("fuel_consumed")); WriteJsonValue(Writer, FuelConsumed.GetValue());
	}
	if (Health.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("health")); WriteJsonValue(Writer, Health.GetValue());
	}
	if (HitType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("hit_type")); WriteJsonValue(Writer, HitType.GetValue());
	}
	if (HomeTeamId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("home_team_id")); WriteJsonValue(Writer, HomeTeamId.GetValue());
	}
	if (HomeScore.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("home_score")); WriteJsonValue(Writer, HomeScore.GetValue());
	}
	if (ItemId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("item_id")); WriteJsonValue(Writer, ItemId.GetValue());
	}
	if (ItemName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("item_name")); WriteJsonValue(Writer, ItemName.GetValue());
	}
	if (ItemType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("item_type")); WriteJsonValue(Writer, ItemType.GetValue());
	}
	if (KillType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("kill_type")); WriteJsonValue(Writer, KillType.GetValue());
	}
	if (LapPosition.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("lap_position")); WriteJsonValue(Writer, LapPosition.GetValue());
	}
	if (LevelId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("level_id")); WriteJsonValue(Writer, LevelId.GetValue());
	}
	if (MapName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("map_name")); WriteJsonValue(Writer, MapName.GetValue());
	}
	if (MapSectionName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("map_section_name")); WriteJsonValue(Writer, MapSectionName.GetValue());
	}
	if (MissionId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("mission_id")); WriteJsonValue(Writer, MissionId.GetValue());
	}
	if (PlayerCharacter.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("player_character")); WriteJsonValue(Writer, PlayerCharacter.GetValue());
	}
	if (PuzzleId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("puzzle_id")); WriteJsonValue(Writer, PuzzleId.GetValue());
	}
	if (RacePosition.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("race_position")); WriteJsonValue(Writer, RacePosition.GetValue());
	}
	if (Realm.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("realm")); WriteJsonValue(Writer, Realm.GetValue());
	}
	if (RequiredTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("required_time")); WriteJsonValue(Writer, RequiredTime.GetValue());
	}
	if (ResourceGained.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("resource_gained")); WriteJsonValue(Writer, ResourceGained.GetValue());
	}
	if (ResourceGiven.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("resource_given")); WriteJsonValue(Writer, ResourceGiven.GetValue());
	}
	if (ResourceName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("resource_name")); WriteJsonValue(Writer, ResourceName.GetValue());
	}
	if (RoundId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("round_id")); WriteJsonValue(Writer, RoundId.GetValue());
	}
	if (RoundType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("round_type")); WriteJsonValue(Writer, RoundType.GetValue());
	}
	if (Score.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("score")); WriteJsonValue(Writer, Score.GetValue());
	}
	if (StatType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("stat_type")); WriteJsonValue(Writer, StatType.GetValue());
	}
	if (TimeCondition.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("time_condition")); WriteJsonValue(Writer, TimeCondition.GetValue());
	}
	if (TransportId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("transport_id")); WriteJsonValue(Writer, TransportId.GetValue());
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());
	}
	if (UnitType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("unit_type")); WriteJsonValue(Writer, UnitType.GetValue());
	}
	if (UpgradeType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("upgrade_type")); WriteJsonValue(Writer, UpgradeType.GetValue());
	}
	if (WeaponAction.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("weapon_action")); WriteJsonValue(Writer, WeaponAction.GetValue());
	}
	if (WeaponId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("weapon_id")); WriteJsonValue(Writer, WeaponId.GetValue());
	}
	if (WeaponType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("weapon_type")); WriteJsonValue(Writer, WeaponType.GetValue());
	}
	if (WeaponUsed.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("weapon_used")); WriteJsonValue(Writer, WeaponUsed.GetValue());
	}
	if (ZoneName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("zone_name")); WriteJsonValue(Writer, ZoneName.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool ScillApiEventMetaData::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("action_object"), ActionObject);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("action_subject"), ActionSubject);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("action_type"), ActionType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ammo_used"), AmmoUsed);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amount"), Amount);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amount_gained"), AmountGained);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amount_given"), AmountGiven);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("animal_name"), AnimalName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("armor"), Armor);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("away_team_id"), AwayTeamId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("away_score"), AwayScore);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("battle_status"), BattleStatus);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bounty_name"), BountyName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("building_id"), BuildingId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("building_level"), BuildingLevel);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("card_type"), CardType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("character_name"), CharacterName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("checkpoint_id"), CheckpointId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("coordinate_x"), CoordinateX);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("coordinate_y"), CoordinateY);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("crew_name"), CrewName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("damage_amount"), DamageAmount);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("distance"), Distance);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("duration"), Duration);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("effect_id"), EffectId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("enemy_character"), EnemyCharacter);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("enemy_type"), EnemyType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("event_type"), EventType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("fuel_consumed"), FuelConsumed);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("health"), Health);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("hit_type"), HitType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("home_team_id"), HomeTeamId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("home_score"), HomeScore);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_id"), ItemId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_name"), ItemName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_type"), ItemType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("kill_type"), KillType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("lap_position"), LapPosition);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("level_id"), LevelId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("map_name"), MapName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("map_section_name"), MapSectionName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("mission_id"), MissionId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("player_character"), PlayerCharacter);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("puzzle_id"), PuzzleId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("race_position"), RacePosition);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("realm"), Realm);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("required_time"), RequiredTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("resource_gained"), ResourceGained);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("resource_given"), ResourceGiven);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("resource_name"), ResourceName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("round_id"), RoundId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("round_type"), RoundType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("score"), Score);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("stat_type"), StatType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("time_condition"), TimeCondition);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("transport_id"), TransportId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("unit_type"), UnitType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("upgrade_type"), UpgradeType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("weapon_action"), WeaponAction);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("weapon_id"), WeaponId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("weapon_type"), WeaponType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("weapon_used"), WeaponUsed);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("zone_name"), ZoneName);

	return ParseSuccess;
}

}
