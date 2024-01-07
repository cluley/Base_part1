// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class CPPBASE_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBaseActor();

protected:
	UPROPERTY(VisibleAnywhere)
	FString PlayerName = this->GetActorNameOrLabel();

	UPROPERTY(EditInstanceOnly)
	int EnemyNum = 20;

	UPROPERTY(EditDefaultsOnly)
	float CurrentHealth = 54.29856;

	UPROPERTY(EditInstanceOnly)
	bool IsAlive = true;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void ShowInformation();
	void ShowActorInformation();
};
