#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "StartTradeDelegateDelegate.h"
#include "StartTradeMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebStartTrade.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebStartTrade : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartTradeDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartTradeMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebStartTrade();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

