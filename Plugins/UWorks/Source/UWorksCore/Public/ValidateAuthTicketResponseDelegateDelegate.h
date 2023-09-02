#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksAuthSessionResponse.h"
#include "ValidateAuthTicketResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FValidateAuthTicketResponseDelegate, FUWorksSteamID, SteamID, EUWorksAuthSessionResponse, AuthSessionResponse, FUWorksSteamID, OwnerSteamID);

