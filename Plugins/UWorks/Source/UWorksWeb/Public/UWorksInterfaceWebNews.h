#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "GetNewsForAppMinimalDelegateDelegate.h"
#include "GetNewsForAppAuthedMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebNews.generated.h"

class UUWorksRequestWebGetNewsForAppAuthed;
class UUWorksRequestWebGetNewsForApp;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebNews : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebNews();
    UFUNCTION(BlueprintCallable)
    static void GetNewsForAppMinimal(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds, const FGetNewsForAppMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void GetNewsForAppAuthedMinimal(const FString& Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds, const FGetNewsForAppAuthedMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetNewsForAppAuthed* GetNewsForAppAuthed();
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetNewsForApp* GetNewsForApp();
    
};

