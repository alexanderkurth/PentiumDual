// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

UCLASS()
class PENTIUMDUAL_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACharacterBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float get_health() const;
	float get_max_health() const;
	void set_health(float const new_health);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float const max_health = 100.0f;
	float health;

	class UWidgetComponent* widget_component;

};
