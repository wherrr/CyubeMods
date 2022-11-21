#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EWeather.h"
#include "WeatherStateData.h"
#include "WeatherManager.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API AWeatherManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeather CurrentWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeather PreviousWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherInterp;
    
    AWeatherManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadWeatherState(FWeatherStateData WeatherStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetWeatherState(FWeatherStateData& WeatherStateData);
    
};

