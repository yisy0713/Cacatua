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
    // �÷��̾� ��ġ ����
    UPROPERTY(VisibleAnywhere, Category = "SaveData")
    FVector PlayerLocation;

    // �÷��̾��� ü�� �� ���� ����
    //UPROPERTY(VisibleAnywhere, Category = "SaveData")
    //float PlayerHealth;

    // ���� ���� ���� �� �߰� ������ ����
    //UPROPERTY(VisibleAnywhere, Category = "SaveData")
    //TArray<int32> PuzzleStates;
	
};
