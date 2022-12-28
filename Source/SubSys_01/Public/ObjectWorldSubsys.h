#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ObjectWorldSubsys.generated.h"


UCLASS()
class SUBSYS_01_API UObjectWorldSubsys : public UWorldSubsystem{
	GENERATED_BODY()
	
public:
	void ShowValue();
	int GetCounter();

	UFUNCTION(BlueprintCallable, Category = "WorldSubsys Functions")
		void SetVale(int value);

	UFUNCTION(BlueprintCallable, Category = "WorldSubsys Functions")
		int GetValue();

private:
	int value_Counter = 12;

};
