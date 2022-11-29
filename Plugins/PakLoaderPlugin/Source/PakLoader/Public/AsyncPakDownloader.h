#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DownloadPakDelegateDelegate.h"
#include "AsyncPakDownloader.generated.h"

class UAsyncPakDownloader;

UCLASS(Blueprintable)
class PAKLOADER_API UAsyncPakDownloader : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadPakDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadPakDelegate OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadPakDelegate OnProgress;
    
    UAsyncPakDownloader();
    UFUNCTION(BlueprintCallable)
    static UAsyncPakDownloader* DownloadPak(const FString& URL, const FString& SavePath);
    
};

