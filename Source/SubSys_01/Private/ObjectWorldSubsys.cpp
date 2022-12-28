// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectWorldSubsys.h"

// internal functions
void UObjectWorldSubsys::ShowValue(){
	UE_LOG(LogTemp, Warning, TEXT("x WorldSubsys x - internal - ShowValue()- : %i"), value_Counter);
}

int UObjectWorldSubsys::GetCounter(){
	UE_LOG(LogTemp, Warning, TEXT("x WorldSubsys x - internal - GetCounter()- : %i"), value_Counter);
	return value_Counter;
}

// BP functions
void UObjectWorldSubsys::SetVale(int value){
	UE_LOG(LogTemp, Warning, TEXT("x WorldSubsys x - BP SetVale()- : %i"), value);
	value_Counter = value;
	ShowValue();
}

int UObjectWorldSubsys::GetValue(){
	UE_LOG(LogTemp, Warning, TEXT("x WorldSubsys x - BP GetValue()"));
	return GetCounter();
}
