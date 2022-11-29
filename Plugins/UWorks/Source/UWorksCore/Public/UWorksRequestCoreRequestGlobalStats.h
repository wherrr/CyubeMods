#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksRequestCore.h"
#include "RequestGlobalStatsDelegateDelegate.h"
#include "RequestGlobalStatsMinimalDelegateDelegate.h"
#include "UWorksGameID.h"
#include "UWorksRequestCoreRequestGlobalStats.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreRequestGlobalStats : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestGlobalStatsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestGlobalStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestGlobalStats();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

