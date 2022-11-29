#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnUpdateWorkshopItemStartedDelegate.h"
#include "SteamDelegateOnUpdateWorkshopItemDelegate.h"
#include "SteamUGCItemId.h"
#include "SteamWorkshopUpdateDetails.h"
#include "CallbackProxyUpdateWorkshopItem.generated.h"

class UCallbackProxyUpdateWorkshopItem;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyUpdateWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItem OnUpdateComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyUpdateWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyUpdateWorkshopItem* SteamWorkshop_UpdateItem(const FSteamUGCItemId& ItemId, const FSteamWorkshopUpdateDetails& updateDetails, const FSteamDelegateOnUpdateWorkshopItemStarted& onUpdateStarted);
    
};

