// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "D1PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class D1_API AD1PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
AD1PlayerController();	

protected:

virtual void BeginPlay() override;
void Input_Move(const FInputActionValue& InputActionValue);

};
