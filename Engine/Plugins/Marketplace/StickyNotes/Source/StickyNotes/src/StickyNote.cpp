// Copyright 2018 by Dream Powered. All Rights Reserved.

#include "StickyNote.h"
//#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Classes/Engine/StaticMesh.h"
#include "CoreUObject/Public/UObject/ConstructorHelpers.h"


// Sets default values
AStickyNote::AStickyNote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FText defaultText = NSLOCTEXT("StickyNotesPluggin", "defaultText", "My StickyNote");
	auto DummyRoot = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("RootComponent"));
	RootComponent = DummyRoot;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	mesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this,TEXT("Plane"));
	const ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	mesh->SetStaticMesh(MeshObj.Object);
	mesh->SetupAttachment(this->GetRootComponent());
	mesh->SetRelativeRotation(FRotator(-90, 0, 0));
	mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	mesh->SetRelativeScale3D(FVector(1, 2.316667f, 1));
	textRenderer = ObjectInitializer.CreateDefaultSubobject<UTextRenderComponent>(this, TEXT("TextRender") );
	textRenderer->SetupAttachment(this->GetRootComponent());
	textRenderer->HorizontalAlignment = EHTA_Center;
	textRenderer->VerticalAlignment = EVRTA_TextCenter;
	textRenderer->VertSpacingAdjust = -8;
	textRenderer->WorldSize = 35;
	textRenderer->SetRelativeLocation(FVector(1, 0, 0));
	textRenderer->SetTextRenderColor(FColor::Black);
	textRenderer->SetText(defaultText);

	textRenderer2 = ObjectInitializer.CreateDefaultSubobject<UTextRenderComponent>(this, TEXT("TextRender2"));
	textRenderer2->SetupAttachment(this->GetRootComponent());
	textRenderer2->HorizontalAlignment = EHTA_Center;
	textRenderer2->VerticalAlignment = EVRTA_TextCenter;
	textRenderer2->VertSpacingAdjust = -8;
	textRenderer2->WorldSize = 35;
	textRenderer2->SetRelativeLocation(FVector(-1, 0, 0));
	textRenderer2->SetRelativeRotation(FRotator(0, 180, 0));
	textRenderer2->SetTextRenderColor(FColor::Black);
	textRenderer2->SetVisibility(false);
	textRenderer2->SetText(defaultText);


	Color = EStikyNoteColor::Yellow;
	TowSided = false;
	CharactersPerLines = 20;
	HiddenInGame = true;
	NoColission = true;
	SetHidden(true);
	Text = defaultText.ToString();

	static ConstructorHelpers::FObjectFinder<UMaterial> FoundMaterial(TEXT("Material'/StickyNotes/StickyNoteMaterials/m_yellow.m_yellow'"));
	if (FoundMaterial.Succeeded())
	{
		mesh->SetMaterial(0, FoundMaterial.Object);
	}
}

// Called when the game starts or when spawned
void AStickyNote::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStickyNote::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStickyNote::RefreshTextComponents()
{
	
	auto splitResult = SplitToLine(Text, CharactersPerLines, 10);
	FTextBuilder builder;
	
	for (int i = 0; i < splitResult.Lines.Num(); ++i)
	{
		builder.AppendLine(splitResult.Lines[i]);
	}

	processedText = builder.ToText();
	textRenderer->SetText(processedText);
	textRenderer2->SetText(processedText);
	mesh->SetRelativeScale3D(FVector(FMath::Max(MinScale.X ,(1 * (splitResult.Lines.Num() / 3.75f)) + 0.15f), FMath::Max(MinScale.Y,(1 * (splitResult.WidestLine / 6.f)) + 0.15f), 1));
}

void AStickyNote::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

#if WITH_EDITOR
void AStickyNote::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.Property)
	{
		auto pName = PropertyChangedEvent.Property->GetNameCPP();
		if (pName == "Text" || pName=="CharactersPerLines" )
			RefreshTextComponents();
		else if (pName== "Color")
		{
			UMaterialInterface* newMat = nullptr;
			switch (Color)
			{
			case EStikyNoteColor::Yellow:
				newMat= LoadObject<UMaterialInterface>(NULL, TEXT("Material'/StickyNotes/StickyNoteMaterials/m_yellow.m_yellow'"));
				break;
			case EStikyNoteColor::Green:
				newMat = LoadObject<UMaterialInterface>(NULL, TEXT("Material'/StickyNotes/StickyNoteMaterials/m_green.m_green'"));
				break;
			case EStikyNoteColor::Pink:
				newMat = LoadObject<UMaterialInterface>(NULL, TEXT("Material'/StickyNotes/StickyNoteMaterials/m_pink.m_pink'"));
				break;
			case EStikyNoteColor::Blue:
				newMat = LoadObject<UMaterialInterface>(NULL, TEXT("Material'/StickyNotes/StickyNoteMaterials/m_blue.m_blue'"));
				break;
			default: ;
			}
			if(newMat)
				mesh->SetMaterial(0, newMat);
		}
		else if (pName == "TowSided")
		{
			textRenderer2->SetVisibility(TowSided);
		}
		else if(pName == "HiddenInGame")
		{
			SetActorHiddenInGame(HiddenInGame);
		}
		else if(pName=="NoColission")
		{
			mesh->SetCollisionEnabled(NoColission? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
		}
	}
}
#endif


