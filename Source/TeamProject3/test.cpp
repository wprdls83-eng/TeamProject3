// Fill out your copyright notice in the Description page of Project Settings.


#include "test.h"

// Sets default values
Atest::Atest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atest::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(TempLog, Log, TEXT("테스트입니다~~~~~~"));
	UE_LOG(TempLog, Log, TEXT("테스트입니다!!!!!"));
	
}

// Called every frame
void Atest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

