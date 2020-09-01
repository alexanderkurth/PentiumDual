// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "HealthBar.generated.h"

/**
 * 
 */
UCLASS()
class PENTIUMDUAL_API UHealthBar : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;
	void set_bar_value_percent(float const value);
protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UProgressBar* health_value = nullptr;
};
