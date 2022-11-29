#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FileWriteAsyncDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreFileWriteAsyncNode.generated.h"

class UCoreFileWriteAsyncNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreFileWriteAsyncNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFileWriteAsyncDelegate Completed;
    
    UCoreFileWriteAsyncNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
    UFUNCTION(BlueprintCallable)
    static UCoreFileWriteAsyncNode* FileWriteAsyncNode(const FString& File, TArray<uint8> Buffer);
    
};

