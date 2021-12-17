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
		int32 CamoPrice;//��ż۸�
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* CamoMaterial;//��Ų���

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* CamoThumbnail;//�������ͼ

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString CamoName;//���Ƥ��������

		FGunCamo() {//��ʼ��
			CamoPrice = 0;
			CamoMaterial = nullptr;
			CamoThumbnail = nullptr;
			CamoName = "";
		}
};