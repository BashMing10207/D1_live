// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn/D1MyPawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AD1MyPawn::AD1MyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	RootComponent = Capsule;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	SkeletalMeshComponent->SetupAttachment(RootComponent);
	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	CamCamMing = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));

	springArm->SetupAttachment(RootComponent);

	CamCamMing->SetupAttachment(springArm);
	
}

// Called when the game starts or when spawned
void AD1MyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AD1MyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AD1MyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

