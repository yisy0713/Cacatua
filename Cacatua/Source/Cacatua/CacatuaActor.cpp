 // Fill out your copyright notice in the Description page of Project Settings.


#include "CacatuaActor.h"

// Sets default values
ACacatuaActor::ACacatuaActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACacatuaActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACacatuaActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

