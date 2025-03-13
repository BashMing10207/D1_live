// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "D1MyPawn.generated.h"

UCLASS()
class D1_API AD1MyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AD1MyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<class UCapsuleComponent> Capsule;
UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;

UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<class USpringArmComponent> springArm;
UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<class UCameraComponent> CamCamMing;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
