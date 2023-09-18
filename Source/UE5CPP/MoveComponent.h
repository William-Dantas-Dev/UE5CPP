// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MoveComponent.generated.h"


UCLASS( ClassGroup=(MovementComponent), meta=(BlueprintSpawnableComponent) )
class UE5CPP_API UMoveComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoveComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Offset to Move
	UPROPERTY(EditAnywhere)
	FVector MoveOffSet;
	// Speed
	UPROPERTY(EditAnywhere)
	float Speed = 1.0f;

	// Computed Locations
	FVector StartRelativeLocation;
	FVector MoveOffSetNorm;
	float MaxDistance = 0.0f;
	float CurDistance = 0.0f;
	int MoveDirection = 1;

};
