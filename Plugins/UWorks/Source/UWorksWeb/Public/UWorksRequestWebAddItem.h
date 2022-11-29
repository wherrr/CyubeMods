#pragma once
#include "CoreMinimal.h"
#include "AddItemMinimalDelegateDelegate.h"
#include "AddItemDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamItemDef.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebAddItem.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebAddItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAddItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, TArray<FUWorksSteamItemDef> ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

