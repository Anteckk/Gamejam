// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Participant.generated.h"

/**
 * 
*/
UCLASS(Blueprintable)
class GAMEJAM_API UParticipant : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int fishing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int wood;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int water;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int moral;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> relationships;
		
};