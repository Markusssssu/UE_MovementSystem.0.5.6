#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerCharacter.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnDebugEvent);

UCLASS()
class UEMOVEMENTSYSTEM_API APlayerControllerCharacter : public APlayerController
{
	GENERATED_BODY()

	APlayerControllerCharacter();

public:
	FOnDebugEvent OnDebugEnable;
	FOnDebugEvent OnDebugDisable;
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void DebugEnable();
	void DebugDisable();

	void DebugPrint(const FString& Message);

private:
	static constexpr FLinearColor DebugGreen{0, 300, 0, 0};
	static constexpr FLinearColor DebugRed{300, 0, 0, 0};

	static constexpr float TimeDelta = 2.0f;	
};
