// Copyright 2018 by Dream Powered. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "StickyNote.generated.h"

//
// Different color representing the different materials for the note
//
UENUM(BlueprintType)
enum class EStikyNoteColor :uint8
{
	Yellow   UMETA(DisplayName = "Yellow"),
	Green UMETA(DisplayName = "Green"),
	Pink UMETA(DisplayName = "Pink"),
	Blue UMETA(DisplayName = "Blue"),
};

//
// Helper struct representing the parsed data from User passed to the TextRenderer
//
USTRUCT()
struct FSplitTextResult
{
	GENERATED_USTRUCT_BODY()
public:
	FSplitTextResult()
	{
		WidestLine = 0;
		Lines = TArray<FString>();
	}

	UPROPERTY(EditDefaultsOnly, Category = "StickyNote")
		TArray<FString> Lines;
	UPROPERTY(EditDefaultsOnly, Category = "StickyNote")
		int WidestLine;

};

//
// Actual Sticky note actor
//
UCLASS(HideCategories = (AActor, Actor, LOD, Input,Rendering))
class STICKYNOTES_API AStickyNote : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStickyNote(const FObjectInitializer& ObjectInitializer);
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents()  override;
	//
	// the Text displayed on the Note
	//
	UPROPERTY(EditAnywhere, Category = "StickyNote", meta = (MultiLine = true))
		FString Text;
	//
	// Color of the note
	//
	UPROPERTY(EditAnywhere, Category = "StickyNote")
		EStikyNoteColor Color;


	//
	// if true, text will be mirrored on the other side on the note
	//
	UPROPERTY(EditAnywhere, Category = "StickyNote")
		bool TowSided = false;

	//
	// Hide the note when in game
	//
	UPROPERTY(EditAnywhere, Category = "StickyNote")
		bool HiddenInGame = true;

	//
	// Allow player and everything to pass through the note
	//
	UPROPERTY(EditAnywhere, Category = "StickyNote")
		bool NoColission = true;

	//
	// Control the line splitting function
	//
	UPROPERTY(EditAnywhere, Category = "StickyNoteSetup")
		int CharactersPerLines = 20;

	//
	// Setting to get fancy Note even with very small text 
	//
	UPROPERTY(EditAnywhere, Category = "StickyNoteSetup")
		FVector2D MinScale = FVector2D::UnitVector;


	UPROPERTY()
		FText processedText;

protected:

	UPROPERTY(EditAnywhere, Category = "StickyNoteInternal")
		UTextRenderComponent* textRenderer;
	UPROPERTY(EditAnywhere, Category = "StickyNoteInternal")
		UTextRenderComponent* textRenderer2;
	UPROPERTY(EditAnywhere, Category = "StickyNoteInternal")
		UStaticMeshComponent* mesh;
public :
	//
	//Reparse Text and add it to the Text renderes 
	//
	void RefreshTextComponents();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	//
	// Responsible of parsing and splitting the text into corectly size chunks of letters
	//
	static FSplitTextResult SplitToLine(FString input, int maxCharPerLines, int maxLines)
	{
		FSplitTextResult result;

		TArray<FString> Lines;
		input.ParseIntoArrayLines(Lines, false);
		for (auto line : Lines)
		{
			TArray<FString> Words;
			const FString Delimiter = FString(TEXT(" "));

			line.ParseIntoArray(Words, *Delimiter, false);

			int32 charCounter = 0;
			int32 globalLineCharCounter = 0;
			FString TempLine;
			for (auto word : Words)
			{
				// if we can add, all good, else, add on a new line
				if (charCounter + word.Len() <= maxCharPerLines || charCounter == 0)
				{
					if (charCounter!=0)
					{
						TempLine.AppendChar(' ');
						charCounter++;
						globalLineCharCounter++;
					}
					TempLine.Append(word);
					charCounter += word.Len();
					globalLineCharCounter += word.Len();
				} else 
				{
					charCounter = 0;
					result.Lines.Add(TempLine);
					result.WidestLine = FMath::Max(result.WidestLine, TempLine.Len());
					TempLine.Empty();

					TempLine.Append(word);
					charCounter += word.Len();
					globalLineCharCounter += word.Len();
				}
			}

			if (!TempLine.IsEmpty() || globalLineCharCounter==0) // add Empty lines aswell
			{
				result.Lines.Add(TempLine);
				result.WidestLine = FMath::Max(result.WidestLine, TempLine.Len());
			}
		}
		return result;
	}
};
