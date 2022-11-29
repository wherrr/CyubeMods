#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "RecordOfflinePlaytimeDelegateDelegate.h"
#include "RecordOfflinePlaytimeMinimalDelegateDelegate.h"
#include "UWorksPlaySessions.h"
#include "UWorksRequestWebRecordOfflinePlaytime.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebRecordOfflinePlaytime : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordOfflinePlaytimeDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordOfflinePlaytimeMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRecordOfflinePlaytime();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID, const FString& Ticket, FUWorksPlaySessions PlaySessions);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

