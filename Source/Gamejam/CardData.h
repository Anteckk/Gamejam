// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CardData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class GAMEJAM_API UCardData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int nbRessource;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float multiplicator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<APawn*> participants;
	//TArray<bool> participants;
		
};
