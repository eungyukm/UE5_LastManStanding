// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LASTMANSTANDING_API ALobbyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_HandleReadyButton();
	
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_HandleChangeUsername(const FText& InNickName);
};
