#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SubscribePublishedFileDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "SubscribePublishedFileNode.generated.h"

class USubscribePublishedFileNode;

UCLASS(Blueprintable)
class UWORKSWEB_API USubscribePublishedFileNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubscribePublishedFileDelegate Completed;
    
    USubscribePublishedFileNode();
    UFUNCTION(BlueprintCallable)
    static USubscribePublishedFileNode* SubscribePublishedFileNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

