// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "XmlDocument.h"
#include "XmlCppExample.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class KOBAYASHI_MARU_API UXmlCppExample : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UXmlCppExample();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



};
