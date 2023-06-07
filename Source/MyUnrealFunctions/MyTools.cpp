// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTools.h"

//bool UMyTools::StartCapture(USceneComponent actorToSet1)
//{
//	actorToSet1 & -> SetAbsolute(false, false, false); //SetAbsolute();
//}

void UMyTools::StartCapture(USceneComponent* actorToSet1)
{
	actorToSet1->SetAbsolute(false, false, false); //SetAbsolute(false, false, false); //SetAbsolute();
}
