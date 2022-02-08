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

#include "ScillApiWrapper/ScillApiBattlePass.h"

#include "ScillSDKModule.h"
#include "ScillApiWrapper/ScillApiHelpers.h"

#include "Templates/SharedPointer.h"

namespace ScillSDK
{

void ScillApiBattlePass::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (BattlePassId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("battle_pass_id")); WriteJsonValue(Writer, BattlePassId.GetValue());
	}
	if (AppId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("app_id")); WriteJsonValue(Writer, AppId.GetValue());
	}
	if (BattlePassName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("battle_pass_name")); WriteJsonValue(Writer, BattlePassName.GetValue());
	}
	if (BattlePassDescription.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("battle_pass_description")); WriteJsonValue(Writer, BattlePassDescription.GetValue());
	}
	if (BattlePassShortDescription.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("battle_pass_short_description")); WriteJsonValue(Writer, BattlePassShortDescription.GetValue());
	}
	if (BattlePassDisclaimer.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("battle_pass_disclaimer")); WriteJsonValue(Writer, BattlePassDisclaimer.GetValue());
	}
	if (BattlePassPriority.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("battle_pass_priority")); WriteJsonValue(Writer, BattlePassPriority.GetValue());
	}
	if (PackageSkuIos.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("package_sku_ios")); WriteJsonValue(Writer, PackageSkuIos.GetValue());
	}
	if (PackageSkuAndroid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("package_sku_android")); WriteJsonValue(Writer, PackageSkuAndroid.GetValue());
	}
	if (ImageXs.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("image_xs")); WriteJsonValue(Writer, ImageXs.GetValue());
	}
	if (ImageS.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("image_s")); WriteJsonValue(Writer, ImageS.GetValue());
	}
	if (ImageM.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("image_m")); WriteJsonValue(Writer, ImageM.GetValue());
	}
	if (ImageL.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("image_l")); WriteJsonValue(Writer, ImageL.GetValue());
	}
	if (ImageXl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("image_xl")); WriteJsonValue(Writer, ImageXl.GetValue());
	}
	if (StartDate.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("start_date")); WriteJsonValue(Writer, StartDate.GetValue());
	}
	if (EndDate.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("end_date")); WriteJsonValue(Writer, EndDate.GetValue());
	}
	if (ReadMoreLink.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("read_more_link")); WriteJsonValue(Writer, ReadMoreLink.GetValue());
	}
	if (IsUnlockedIncrementally.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_unlocked_incrementally")); WriteJsonValue(Writer, IsUnlockedIncrementally.GetValue());
	}
	if (IsActive.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_active")); WriteJsonValue(Writer, IsActive.GetValue());
	}
	if (UnlockedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("unlocked_at")); WriteJsonValue(Writer, UnlockedAt.GetValue());
	}
	if (CanPurchaseWithMoney.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("can_purchase_with_money")); WriteJsonValue(Writer, CanPurchaseWithMoney.GetValue());
	}
	if (CanPurchaseWithCoins.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("can_purchase_with_coins")); WriteJsonValue(Writer, CanPurchaseWithCoins.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool ScillApiBattlePass::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("battle_pass_id"), BattlePassId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("app_id"), AppId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("battle_pass_name"), BattlePassName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("battle_pass_description"), BattlePassDescription);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("battle_pass_short_description"), BattlePassShortDescription);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("battle_pass_disclaimer"), BattlePassDisclaimer);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("battle_pass_priority"), BattlePassPriority);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("package_sku_ios"), PackageSkuIos);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("package_sku_android"), PackageSkuAndroid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("image_xs"), ImageXs);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("image_s"), ImageS);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("image_m"), ImageM);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("image_l"), ImageL);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("image_xl"), ImageXl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("start_date"), StartDate);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("end_date"), EndDate);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("read_more_link"), ReadMoreLink);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_unlocked_incrementally"), IsUnlockedIncrementally);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_active"), IsActive);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("unlocked_at"), UnlockedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("can_purchase_with_money"), CanPurchaseWithMoney);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("can_purchase_with_coins"), CanPurchaseWithCoins);

	return ParseSuccess;
}

}
