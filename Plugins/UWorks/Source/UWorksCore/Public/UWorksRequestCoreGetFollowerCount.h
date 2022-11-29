#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "GetFollowerCountMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "UWorksSteamID.h"
#include "GetFollowerCountDelegateDelegate.h"
#include "UWorksRequestCoreGetFollowerCount.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreGetFollowerCount : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetFollowerCountDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetFollowerCountMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetFollowerCount();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& Count);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

