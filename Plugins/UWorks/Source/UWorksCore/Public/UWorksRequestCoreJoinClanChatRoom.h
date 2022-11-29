#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "JoinClanChatRoomDelegateDelegate.h"
#include "JoinClanChatRoomMinimalDelegateDelegate.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "UWorksSteamID.h"
#include "UWorksRequestCoreJoinClanChatRoom.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreJoinClanChatRoom : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinClanChatRoomDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinClanChatRoomMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreJoinClanChatRoom();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamID& SteamIDClanChat, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

