#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "Engine/DataAsset.h"
#include "DNEAnimRigAssetData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DNEANIMATION_API UDNEAnimRigAssetData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataAsset*> RigList;
    
    UDNEAnimRigAssetData();
};