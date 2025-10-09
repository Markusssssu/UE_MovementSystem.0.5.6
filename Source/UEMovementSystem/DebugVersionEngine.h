#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugVersionEngine.generated.h"

/**
 * 
 */
UCLASS()
class UEMOVEMENTSYSTEM_API UDebugVersionEngine : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Engine")
	static void GetEngineVersionString();
	
};
