// Copyright 2017-2021 Rexocrates. All Rights Reserved.
#include "AnimGraphNodeTable_Mirror.h"
#include "MirrorAnimationSystemEditor.h"


#define LOCTEXT_NAMESPACE "A3Nodes"

UAnimGraphNodeTable_Mirror::UAnimGraphNodeTable_Mirror(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

FLinearColor UAnimGraphNodeTable_Mirror::GetNodeTitleColor() const
{
	return FLinearColor::Red;
}

FText UAnimGraphNodeTable_Mirror::GetTooltipText() const
{
	return LOCTEXT("Mirrors_the_designated_bones", "Mirrors the pose based on the designated Mirror Table");
}

FText UAnimGraphNodeTable_Mirror::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("Mirror_Pose", "Mirror Pose");
}

FString UAnimGraphNodeTable_Mirror::GetNodeCategory() const
{
	return TEXT("Tools");
}

#undef LOCTEXT_NAMESPACE
