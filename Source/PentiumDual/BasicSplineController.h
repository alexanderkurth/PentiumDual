// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Math/Vector.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "BasicSplineController.generated.h"

UCLASS()
class PENTIUMDUAL_API ABasicSplineController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicSplineController();

	void OnConstruction(const FTransform& Transform);

	void CreateTreeTrunk();

	void CreateBranch(int startIndex);

	void AddPoint(USplineComponent* splineComponent, int firstIndex, int secondIndex);

	float Curve(float x, float y);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
	int radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
		float angleY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
		float angleZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
		float angleX;

	UPROPERTY(EditAnywhere, Category = "Locations")
		FMatrix CircleMatrix;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
	FVector point;
	  
	float t = 0;

	float po = 0;
protected:

	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
	int treeNumberSection = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
	float offset = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
	TArray<FVector> pointArray;

public:	
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SplineController")
	//USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SplineController")
	USplineComponent* SplineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineController")
	UStaticMesh* Mesh;

	FVector TriangulateNewPoint(FVector startPoint, float angleX, float angleY, float angleZ, bool isPersistent);

	void TriangulatePointsRecursiv(FVector startPoint, FVector direction, int recursionLevel);

	void TrianglePointCallRecursiv(FVector startPoint, int recursionLevel);

	float RandomOffset(float min, float max);
};
