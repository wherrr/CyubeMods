#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAppPriceInfoDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetAppPriceInfoNode.generated.h"

class UGetAppPriceInfoNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAppPriceInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppPriceInfoDelegate Completed;
    
    UGetAppPriceInfoNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppPriceInfoNode* GetAppPriceInfoNode(const FString& Key, FUWorksSteamID SteamID, const FString& AppIDs);
    
};

