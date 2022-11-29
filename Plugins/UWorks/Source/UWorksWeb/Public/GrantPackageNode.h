#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GrantPackageDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GrantPackageNode.generated.h"

class UGrantPackageNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGrantPackageNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrantPackageDelegate Completed;
    
    UGrantPackageNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGrantPackageNode* GrantPackageNode(const FString& Key, FUWorksSteamID SteamID, int32 PackageID, const FString& IPAddress, const FString& ThirdPartyKey, int32 ThirdPartyAppID);
    
};

