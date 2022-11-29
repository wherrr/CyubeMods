#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "UWorksRequestCore.h"
#include "CreateItemDelegateDelegate.h"
#include "CreateItemMinimalDelegateDelegate.h"
#include "EUWorksWorkshopFileType.h"
#include "UWorksRequestCoreCreateItem.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreCreateItem : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreCreateItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID, bool& bUserNeedsToAcceptWorkshopLegalAgreement);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

