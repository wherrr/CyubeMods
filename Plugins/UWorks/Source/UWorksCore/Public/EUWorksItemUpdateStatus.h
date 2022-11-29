#pragma once
#include "CoreMinimal.h"
#include "EUWorksItemUpdateStatus.generated.h"

UENUM(BlueprintType)
enum class EUWorksItemUpdateStatus : uint8 {
    Invalid,
    PreparingConfig,
    PreparingContent,
    UploadingContent,
    UploadingPreviewFile,
    CommittingChanges,
};

