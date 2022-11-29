#pragma once
#include "CoreMinimal.h"
#include "EUWorksP2PSend.generated.h"

UENUM(BlueprintType)
enum class EUWorksP2PSend : uint8 {
    Unreliable,
    UnreliableNoDelay,
    Reliable,
    ReliableWithBuffering,
};

