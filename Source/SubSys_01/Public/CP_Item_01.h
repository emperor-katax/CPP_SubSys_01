#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CP_Item_01.generated.h"

UCLASS()
class SUBSYS_01_API ACP_Item_01 : public AActor{
	GENERATED_BODY()
	
public:	
	ACP_Item_01();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
