#include "Components/PlayerControllerCharacter.h"
#include "Kismet/KismetSystemLibrary.h"

/*============Constructor(Setup)==============*/


APlayerControllerCharacter::APlayerControllerCharacter()
{
	
}

/*===============================================*/


/*============PlayerController(Super)==============*/

void APlayerControllerCharacter::BeginPlay()
{
	Super::BeginPlay();

	DebugPrint("DEBUG[]: Begin Start C++");

}

void APlayerControllerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/*===============================================*/

/*============PlayerController(DebugSystem)==============*/

void APlayerControllerCharacter::DebugPrint(const FString& Message)
{
	if (!GetWorld()) return;

	UKismetSystemLibrary::PrintString(
		GetWorld(),
		Message,
		true,
		true,
		DebugGreen,
		TimeDelta
	);
}

void APlayerControllerCharacter::DebugEnable()
{
	OnDebugEnable.Broadcast();
}

void APlayerControllerCharacter::DebugDisable()
{
	OnDebugDisable.Broadcast();
}

/*===============================================*/



