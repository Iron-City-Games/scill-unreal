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

#include "ScillApiWrapper/ScillApiBaseModel.h"
#include "ScillApiWrapper/ScillApiEventProperty.h"

namespace ScillSDK 
{

/*
 * ScillApiEventDescription
 *
 * Describes an available event structure
 */
class SCILLSDK_API ScillApiEventDescription : public Model
{
public:
    virtual ~ScillApiEventDescription() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The name of the event, i.e kill-enemy. This will be used in the EventPayload as event_name. */
	TOptional<FString> EventName;
	/* A list of required properties - properties that must be set */
	TOptional<TArray<ScillApiEventProperty>> RequiredProperties;
	/* A list of optional properties */
	TOptional<TArray<ScillApiEventProperty>> OptionalProperties;
};

}