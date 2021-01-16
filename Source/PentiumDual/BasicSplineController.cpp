// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicSplineController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Containers/Array.h"
#include "DrawDebugHelpers.h"
#include "Math/Quat.h"
#include "Math/Vector.h"
#include "Math/Plane.h"
#include "Math/UnrealMathUtility.h"
#include "GenericPlatform/GenericPlatformMath.h"

ABasicSplineController::ABasicSplineController()
{
	PrimaryActorTick.bCanEverTick = true;

	//SplineComponent = CreateDefaultSubobject<USplineComponent>("Spline");
	//if (SplineComponent)
	//{
	//	SetRootComponent(SplineComponent);
	//}

	//creer tous le spoints, puis update la position
	//SplineComponent->ClearSplinePoints(true);
	//CreateTreeTrunk();
	//CreateBranch(3);
}

void ABasicSplineController::OnConstruction(const FTransform& Transform)
{

}

void ABasicSplineController::CreateTreeTrunk()
{

	for (float i = 0; i < (treeNumberSection + offset); i += offset)
	{
		//SplineComponent->AddSplineLocalPoint(FVector(i*100,Curve(i,1)*100, 0));
	}

	//AddPoint(SplineComponent, 1, 2);
}

void ABasicSplineController::CreateBranch(int startIndex)
{
	//USplineComponent* Branch = CreateDefaultSubobject<USplineComponent>("SplineBranch");
	//Branch->ClearSplinePoints(true);

	//TArray<FVector> Points; 
	//Points.Add(FVector(5, 5, 0));
	//Points.Add(FVector(6, 8, 0));
	////Points.Add(FVector(5, 5, 0));
	////Points.Add(FVector(5, 5, 0));
	//Branch->SetSplinePoints(Points,ESplineCoordinateSpace::Local);

	//
	//for (float i = 0; i < 10; i += offset)
	//{
	//	//Branch->AddSplineLocalPoint(FVector(SplineComponent->GetLocationAtSplinePoint(3, ESplineCoordinateSpace::Local).X + i * 100,
	//	//	Curve(SplineComponent->GetLocationAtSplinePoint(3, ESplineCoordinateSpace::Local).Y + i, 3) * 100, 0));
	//	//
	//}

}

void ABasicSplineController::AddPoint(USplineComponent* splineComponent, int firstIndex, int secondIndex)
{
	FVector temp = splineComponent->GetLocationAtSplinePoint(firstIndex, ESplineCoordinateSpace::Local) +
		splineComponent->GetLocationAtSplinePoint(secondIndex, ESplineCoordinateSpace::Local);
	temp /= 2;
	splineComponent->AddSplinePointAtIndex(temp, secondIndex, ESplineCoordinateSpace::Local);
}

float ABasicSplineController::Curve(float x, float y)
{
	return (y * sqrt(x));
}

void ABasicSplineController::BeginPlay()
{
	Super::BeginPlay();
	//TrianglePointCallRecursiv(point, treeNumberSection);
}

void ABasicSplineController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//TriangulateNewPoint(point, angleX, angleY, angleZ, false);
	DrawDebugLine(GetWorld(), FVector(0, 0, 0), FVector(0, 0, 100), FColor::Red);
	FVector(0, 0, 100).RotateAngleAxis(10, FVector(1, 0, 0));
	DrawDebugLine(GetWorld(), FVector(0, 0, 100), FVector(0, 0, 100)+FVector(0, 0, 100).RotateAngleAxis(10, FVector(1, 0, 0)), FColor::Red);
}

FVector ABasicSplineController::TriangulateNewPoint(FVector startPoint, float _angleX, float _angleY, float _angleZ, bool isPersistent)
{
	FVector xy(cos(_angleX) * 100, sin(_angleX) * 100, 0);
	DrawDebugLine(GetWorld(), startPoint, (xy + startPoint), FColor::Green, isPersistent);

	FVector xz(cos(_angleY) * 100, 0, sin(_angleY) * 100);
	DrawDebugLine(GetWorld(), startPoint, (xz + startPoint), FColor::Orange, isPersistent);

	FVector yz(0, cos(_angleZ) * 100, sin(_angleZ) * 100);
	DrawDebugLine(GetWorld(), startPoint, (yz + startPoint), FColor::Silver, isPersistent);

	DrawDebugLine(GetWorld(), xy + startPoint, xz + startPoint, FColor::Purple, isPersistent);
	DrawDebugLine(GetWorld(), xz + startPoint, yz + startPoint, FColor::Purple, isPersistent);
	DrawDebugLine(GetWorld(), yz + startPoint, xy + startPoint, FColor::Purple, isPersistent);


	FVector centroid = FVector((xy + startPoint).X + (xz + startPoint).X + (yz + startPoint).X,
		(xy + startPoint).Y + (xz + startPoint).Y + (yz + startPoint).Y,
		(xy + startPoint).Z + (xz + startPoint).Z + (yz + startPoint).Z) / 3;

	DrawDebugLine(GetWorld(), startPoint, centroid, FColor::Red, isPersistent);

	  
	return centroid;
}

void ABasicSplineController::TriangulatePointsRecursiv(FVector startPoint, FVector direction, int recursionLevel)
{
	if (recursionLevel > 0)
	{
		FVector _newStartPoint =  (direction );
		float r = RandomOffset(1.0, 1.0);
		FVector _direction = TriangulateNewPoint(_newStartPoint, direction.X*r, direction.Y * r, angleZ, true);
		TriangulatePointsRecursiv(_newStartPoint, _direction, recursionLevel - 1);
	}

}

void ABasicSplineController::TrianglePointCallRecursiv(FVector startPoint, int recursionLevel)
{
	FVector _newStartPoint = startPoint;
	FVector _direction = FVector(PI, PI/2, 0);//TriangulateNewPoint(_newStartPoint, angleX, angleY, angleZ * (offset * recursionLevel), true);

	TriangulatePointsRecursiv(_newStartPoint, _direction, recursionLevel - 1);
}

float ABasicSplineController::RandomOffset(float min, float max)
{
	return FMath::RandRange(min, max);
}

