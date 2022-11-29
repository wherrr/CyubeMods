#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetTradeHistoryDelegateDelegate.h"
#include "GetTradeHistoryNode.generated.h"

class UGetTradeHistoryNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetTradeHistoryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTradeHistoryDelegate Completed;
    
    UGetTradeHistoryNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetTradeHistoryNode* GetTradeHistoryNode(const FString& Key, int32 MaxTrades, int32 StartAfterTime, const FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const FString& Language, bool bIncludeFailed, bool bIncludeTotal);
    
};

