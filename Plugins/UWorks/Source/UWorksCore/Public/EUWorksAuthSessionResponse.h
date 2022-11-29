#pragma once
#include "CoreMinimal.h"
#include "EUWorksAuthSessionResponse.generated.h"

UENUM(BlueprintType)
enum class EUWorksAuthSessionResponse : uint8 {
    OK,
    UserNotConnectedToSteam,
    NoLicenseOrExpired,
    VACBanned,
    LoggedInElseWhere,
    VACCheckTimedOut,
    AuthTicketCanceled,
    AuthTicketInvalidAlreadyUsed,
    AuthTicketInvalid,
    PublisherIssuedBan,
};

