#pragma once
#include "CoreMinimal.h"
#include "UWorksLanguages.h"
#include "UWorksRequestWeb.h"
#include "PopulateItemDescriptionsDelegateDelegate.h"
#include "PopulateItemDescriptionsMinimalDelegateDelegate.h"
#include "UWorksRequestWebPopulateItemDescriptions.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebPopulateItemDescriptions : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopulateItemDescriptionsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopulateItemDescriptionsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebPopulateItemDescriptions();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksLanguages Languages);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

