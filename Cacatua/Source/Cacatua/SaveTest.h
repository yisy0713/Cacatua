// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveTest.generated.h"

/**
 * 
 */
UCLASS()
class CACATUA_API USaveTest : public USaveGame
{
	GENERATED_BODY()

public:
    // 플레이어 위치 저장
    UPROPERTY(VisibleAnywhere, Category = "SaveData")
    FVector PlayerLocation;

    // 플레이어의 체력 등 상태 저장
    //UPROPERTY(VisibleAnywhere, Category = "SaveData")
    //float PlayerHealth;

    // 퍼즐 진행 상태 등 추가 데이터 저장
    //UPROPERTY(VisibleAnywhere, Category = "SaveData")
    //TArray<int32> PuzzleStates;
	
};
