// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();


	if (!GEngine) return;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta, *Message);

	ShowUI();
}


bool AMyGameModeBase::ShowUI()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	
	if (!UI || !PC) return false;
	UBaseUserWidget* CreatedWidget = CreateWidget<UBaseUserWidget>(PC, UI);
	
	if (!CreatedWidget) return false;
	CreatedWidget->AddToViewport();

	return true;
}