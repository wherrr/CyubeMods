#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestVacStatusForUserDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "RequestVacStatusForUserNode.generated.h"

class URequestVacStatusForUserNode;

UCLASS(Blueprintable)
class UWORKSWEB_API URequestVacStatusForUserNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestVacStatusForUserDelegate Completed;
    
    URequestVacStatusForUserNode();
    UFUNCTION(BlueprintCallable)
    static URequestVacStatusForUserNode* RequestVacStatusForUserNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

