#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksPersonaChange.h"
#include "PersonaStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPersonaStateChangeDelegate, FUWorksSteamID, SteamID, const TArray<EUWorksPersonaChange>&, ChangeFlags);

