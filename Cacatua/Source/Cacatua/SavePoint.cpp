// Fill out your copyright notice in the Description page of Project Settings.

#include "SavePoint.h"
#include "SaveTest.h"
#include "Kismet/GameplayStatics.h"
//#include "ThirdPersonCppCharacter.generated.h" // �⺻ 3��Ī ĳ���� Ŭ����

// Sets default values
ASavePoint::ASavePoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASavePoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASavePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ASavePoint::NotifyActorBeginOverLap(AActor* OtherActor)
//{
//    
//}

