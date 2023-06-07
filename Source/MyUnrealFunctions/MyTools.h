// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyTools.generated.h"

/**
 * 
 */
UCLASS()
class MYUNREALFUNCTIONS_API UMyTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "MyTool")
		static void StartCapture(USceneComponent* actorToSet1);
	//UFUNCTION(BlueprintCallable, Category = "MyTool")
	//	static void GetView(USceneComponent* actorToSet1);
};
