#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetCollectionDetailsDelegateDelegate.h"
#include "GetCollectionDetailsNode.generated.h"

class UGetCollectionDetailsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetCollectionDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetCollectionDetailsDelegate Completed;
    
    UGetCollectionDetailsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetCollectionDetailsNode* GetCollectionDetailsNode(int32 CollectionCount, TArray<int32> PublishedFileIDs);
    
};

