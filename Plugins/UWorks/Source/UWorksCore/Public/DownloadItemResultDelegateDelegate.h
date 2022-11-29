#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "DownloadItemResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDownloadItemResultDelegate, int32, AppID, FUWorksPublishedFileID, PublishedFileID, EUWorksResult, Result);

