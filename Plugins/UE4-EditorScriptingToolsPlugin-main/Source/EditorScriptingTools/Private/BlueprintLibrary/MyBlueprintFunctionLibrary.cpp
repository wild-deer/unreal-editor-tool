// Fill out your copyright notice in the Description page of Project Settings.
#include "Kismet/GameplayStatics.h"
#include "BlueprintLibrary/MyBlueprintFunctionLibrary.h"

AActor* UMyBlueprintFunctionLibrary::findClassByString(const FString& BlueprintName, const FVector& Location, const FRotator& Rotation, UObject* WorldContextObject)
{
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    UClass* Class = FindObject<UClass>(ANY_PACKAGE, *BlueprintName);
    if (Class)
    {
        FActorSpawnParameters SpawnParams;
      
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        AActor* Actor = World->SpawnActor<AActor>(Class, Location, Rotation, SpawnParams);
        return Actor;
    }
    return nullptr;
}
