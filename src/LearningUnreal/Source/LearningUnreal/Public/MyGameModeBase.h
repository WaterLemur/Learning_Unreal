// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "BaseUserWidget.h"

#include "MyGameModeBase.generated.h"
/**
 * 
 */
UCLASS()
class LEARNINGUNREAL_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	FString Message { TEXT("Hello Math") };
	
	UPROPERTY(EditAnywhere, Category = "Variables")
	TSubclassOf<UBaseUserWidget> UI;

	virtual void BeginPlay() override;

	bool ShowUI();
};
