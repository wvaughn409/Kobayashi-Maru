// Copyright 2020 DmVergasov All Rights Reserved.

#include "AITasks/UPSAITask_AIRotateToTarget.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameplayTasksComponent.h"

UUPSAITask_AIRotateToTarget::UUPSAITask_AIRotateToTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bTickingTask = true;
}

UUPSAITask_AIRotateToTarget* UUPSAITask_AIRotateToTarget::RotateAIToTargetActor(AAIController* AIController, AActor* RotationTarget, bool bUseCustomRotationSpeed /*= false*/, float CustomRotationSpeed /*= 0.f*/, float ErrorTolerance /*= 1.f*/)
{
	UUPSAITask_AIRotateToTarget* newTask = nullptr;

	if (AIController != nullptr && RotationTarget != nullptr)
	{
		newTask = NewTask<UUPSAITask_AIRotateToTarget>(AIController);

		if (newTask != nullptr)
		{
			newTask->AIC = AIController;
			newTask->TargetActor = RotationTarget;
			newTask->CustomRotationSpeed = CustomRotationSpeed;
		}
	}

	return newTask;
}

UUPSAITask_AIRotateToTarget* UUPSAITask_AIRotateToTarget::RotateAIToTargetRotation(AAIController* AIController, FRotator TargetRotation, bool bUseCustomRotationSpeed /*= false*/, float CustomRotationSpeed /*= 0.f*/, float ErrorTolerance /*= 1.f*/)
{
	UUPSAITask_AIRotateToTarget* newTask = nullptr;

	if (AIController != nullptr)
	{
		newTask = NewTask<UUPSAITask_AIRotateToTarget>(AIController);

		if (newTask != nullptr)
		{
			newTask->AIC = AIController;
			newTask->TargetRotation = TargetRotation;
			newTask->CustomRotationSpeed = CustomRotationSpeed;
		}
	}

	return newTask;
}

void UUPSAITask_AIRotateToTarget::Activate()
{
	Super::Activate();
	
	Character = Cast<ACharacter>(AIC->GetPawn());

	if (Character == nullptr)
	{
		FinishTask();
		return;
	}

	if (bCustomSpeed)
	{
		OriginRotationSpeed = Character->GetCharacterMovement()->RotationRate.Yaw;
		Character->GetCharacterMovement()->RotationRate.Yaw = CustomRotationSpeed;
	}
	
	bSetControlRotationFromPawnOrientation = AIC->bSetControlRotationFromPawnOrientation;
	AIC->bSetControlRotationFromPawnOrientation = false;
	
	bOrientRotationToMovement = Character->GetCharacterMovement()->bOrientRotationToMovement;
	bUseControllerDesiredRotation = Character->GetCharacterMovement()->bUseControllerDesiredRotation;
	bUseControllerRotationYaw = Character->bUseControllerRotationYaw;

	Character->GetCharacterMovement()->bOrientRotationToMovement = false;
	Character->GetCharacterMovement()->bUseControllerDesiredRotation = true;
	Character->bUseControllerRotationYaw = false;

	auto controlRotation = TargetActor ? UKismetMathLibrary::FindLookAtRotation(Character->GetActorLocation(), TargetActor->GetActorLocation()) : TargetRotation;
	controlRotation.Pitch = 0.f;
	controlRotation.Roll = 0.f;
	AIC->SetControlRotation(controlRotation);

	if (TaskState != EGameplayTaskState::Active)
	{
		TaskState = EGameplayTaskState::Active;
		
		if (IsFinished() == false)
		{
			TasksComponent->OnGameplayTaskActivated(*this);
		}
	}
}

void UUPSAITask_AIRotateToTarget::TickTask(float DeltaTime)
{
	Super::TickTask(DeltaTime);

	if (Character != nullptr && !bFinished)
	{
		if (TargetActor != nullptr)
		{
			TargetRotation = UKismetMathLibrary::FindLookAtRotation(Character->GetActorLocation(), TargetActor->GetActorLocation());
			TargetRotation.Pitch = 0.f;
			TargetRotation.Roll = 0.f;
			Character->GetController()->SetControlRotation(TargetRotation);
		}

		auto characterRotation = Character->GetActorRotation();

		if (FMath::Abs(UKismetMathLibrary::NormalizedDeltaRotator(characterRotation, TargetRotation).Yaw) <= ErrorTolerance)
		{
			FinishTask();
		}
	}
}

void UUPSAITask_AIRotateToTarget::OnDestroy(bool bInOwnerFinished)
{
	if (!bFinished)
	{
		RestoreVariables();
		bFinished = true;
	}
	
	Super::OnDestroy(bInOwnerFinished);
}

void UUPSAITask_AIRotateToTarget::FinishTask()
{
	if (!bFinished)
	{
		bFinished = true;
		OnRotationTaskFinished.Broadcast(AIC, this);
		RestoreVariables();
		EndTask();
	}
}

void UUPSAITask_AIRotateToTarget::RestoreVariables()
{
	if (Character != nullptr)
	{
		if (bCustomSpeed)
		{
			Character->GetCharacterMovement()->RotationRate.Yaw = OriginRotationSpeed;
		}
		Character->GetCharacterMovement()->bOrientRotationToMovement = bOrientRotationToMovement;
		Character->GetCharacterMovement()->bUseControllerDesiredRotation = bUseControllerDesiredRotation;
		Character->bUseControllerRotationYaw = bUseControllerRotationYaw;
	}

	AIC->bSetControlRotationFromPawnOrientation = bSetControlRotationFromPawnOrientation;
}
