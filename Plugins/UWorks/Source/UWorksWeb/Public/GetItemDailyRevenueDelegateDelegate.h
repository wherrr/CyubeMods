#pragma once
#include "CoreMinimal.h"
#include "GetItemDailyRevenueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetItemDailyRevenueDelegate, bool, bSuccessful, const FString&, Content);

