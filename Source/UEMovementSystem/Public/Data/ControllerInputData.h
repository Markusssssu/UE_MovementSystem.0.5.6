#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Texture2D.h"
#include "CommonInputBaseTypes.h"
#include "ControllerInputData.generated.h"

UCLASS(BlueprintType) 
class UEMOVEMENTSYSTEM_API UControllerInputData : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controller Info")
    ECommonInputType InputType;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controller Info")
    FName GamepadName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Icons")
    TMap<FName, TObjectPtr<UTexture2D>> ButtonIcons;

    UFUNCTION(BlueprintCallable, Category = "Controller Input")
    UTexture2D* GetButtonIcon(FName ButtonName) const;

};