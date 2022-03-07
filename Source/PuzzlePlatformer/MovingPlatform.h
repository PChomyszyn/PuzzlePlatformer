// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMER_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovingPlatform();

	UPROPERTY(EditAnywhere)
	float Speed = 20.0f;

	UPROPERTY(EditAnywhere, META = (MakeEditWidget = true))
	FVector TargetLocation;


protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

private:
	FVector GlobalStartLocation;

	FVector GlobalTargetLocation;

};
