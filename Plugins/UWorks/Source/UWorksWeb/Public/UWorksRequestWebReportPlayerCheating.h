#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ReportPlayerCheatingDelegateDelegate.h"
#include "ReportPlayerCheatingMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebReportPlayerCheating.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebReportPlayerCheating : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportPlayerCheatingDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportPlayerCheatingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebReportPlayerCheating();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

