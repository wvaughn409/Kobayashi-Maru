// Fill out your copyright notice in the Description page of Project Settings.

#include "XmlCppExample.h"
#include "Utility.h"
#include "XmlElement.h"
#include "Misc/Paths.h"

// Sets default values for this component's properties
UXmlCppExample::UXmlCppExample()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UXmlCppExample::BeginPlay()
{
	Super::BeginPlay();
	UXmlDocument* doc = UUtility::CreateXmlDocument();
	if (doc->LoadFile(FPaths::ProjectDir().Append(TEXT("ExampleXml/Debug.xml"))))
	{
		FString value;
		value = doc->RootElement()->FirstChild()->LastChildElement("CMD")->Attribute("Value");
		UE_LOG(LogTemp, Warning, TEXT("Element Value:%s"), *value);

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Value"));
	}


	// ...

}


// Called every frame
void UXmlCppExample::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

