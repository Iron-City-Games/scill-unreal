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
 * ScillApiBattlePassUnlockPayload
 *
 * Unlocking a battle pass requires some info to be sent so we can validate everything is ok
 */
class SCILLSDK_API ScillApiBattlePassUnlockPayload : public Model
{
public:
    virtual ~ScillApiBattlePassUnlockPayload() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The purchase price. Set to 0 if this was free. The idea behind this is to provide information via an Admin Panel on average purchase price and to also allow showing users purchase info in their user account. */
	double PurchasePrice;
	/* The currency (EUR, USD, etc) of the purchase price */
	FString PurchaseCurrency;
};

}
