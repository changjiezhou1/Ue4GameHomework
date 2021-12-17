// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include"Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "GunCamo.generated.h"

USTRUCT(BlueprintType)
struct FGunCamo :public FTableRowBase{
	GENERATED_BODY()

public:

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 CamoPrice;//存放价格
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* CamoMaterial;//存放材质

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* CamoThumbnail;//存放缩略图

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString CamoName;//存放皮肤的名字

		FGunCamo() {//初始化
			CamoPrice = 0;
			CamoMaterial = nullptr;
			CamoThumbnail = nullptr;
			CamoName = "";
		}
};