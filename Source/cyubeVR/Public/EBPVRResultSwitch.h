#pragma once
#include "CoreMinimal.h"
#include "EBPVRResultSwitch.generated.h"

UENUM(BlueprintType)
enum class EBPVRResultSwitch : uint8 {
    OnSucceeded,
    OnFailed,
};

