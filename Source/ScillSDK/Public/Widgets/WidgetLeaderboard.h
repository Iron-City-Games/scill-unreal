// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScillBlueprintClasses/ScillClient.h"
#include "Widgets/WidgetLeaderboardUserRank.h"
#include "WidgetLeaderboard.generated.h"

class UScillClient;
/**
 * 
 */
UCLASS()
class SCILLSDK_API UWidgetLeaderboard : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UWidgetLeaderboard(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidgetOptional))
		UPanelWidget* RankingsPanel;

	UPROPERTY(meta = (BindWidgetOptional))
		UTextBlock* LeaderboardName;

	UPROPERTY()
		UScillClient* ScillClient;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool GetLeaderboardsFromApi = true;

	/* Use this to determine which leaderboard to show.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int LeaderboardIndex;

	FLeaderboardsReceived LeaderboardsReceivedDelegate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FLeaderboard> CurrentLeaderboards;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FLeaderboardV2Results> CurrentLeaderboardsV2;

	UFUNCTION(BlueprintCallable)
		void PopulateLeaderboardsData(const TArray<FLeaderboard>& Leaderboards);

	UFUNCTION(BlueprintCallable)
		void PopulateLeaderboardsDataV2(const TArray<FLeaderboardV2Results>& Leaderboards);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class UWidgetLeaderboardUserRank> RankingWidgetType;

private:
	APlayerController* Controller;

	UFUNCTION()
		void ReceiveLeaderboardsResponse(const TArray<FLeaderboard>& Leaderboards, const TArray<FLeaderboardV2Results>& LeaderboardsV2, bool Success);

	void QueryLeaderboards();

	void PopulateLeaderboardDataToChildrenWidgets();

	void PopulateLeaderboardDataToChildrenWidgetsV2();

	void SubscribeToLeaderboardChanges();

	UFUNCTION()
		void ReceiveLeaderboardUpdate(FLeaderboardV2UpdatePayload LeaderboardChanged, FLeaderboardV2Changed LeaderboardInfoChanged);
};
