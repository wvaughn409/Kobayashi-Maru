//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"

#define DECLARE_FLOW_TAB_FACTORY(NAME)			\
class FFlowEditorTabFactory_##NAME : public FWorkflowTabFactory {	\
public:	\
	FFlowEditorTabFactory_##NAME(TSharedPtr<class FDungeonFlowEditor> InFlowEditor, TSharedPtr<SWidget> InWidget);	\
	virtual TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;	\
	virtual FText GetTabToolTipText(const FWorkflowTabSpawnInfo& Info) const override;	\
	virtual TSharedRef<SDockTab> SpawnTab(const FWorkflowTabSpawnInfo& Info) const override;	\
protected:	\
	TWeakPtr<class FDungeonFlowEditor> FlowEditorPtr;	\
	TWeakPtr<SWidget> WidgetPtr;	\
};

///////////////////////////////////////////////////////////////
#define DEFINE_FLOW_TAB_FACTORY_BASE(NAME, CAPTION, ICON, TOOLTIP_MENU, TOOLTIP_TAB)	\
FFlowEditorTabFactory_##NAME::FFlowEditorTabFactory_##NAME(TSharedPtr<FDungeonFlowEditor> InFlowEditor, TSharedPtr<SWidget> InWidget)		\
	: FWorkflowTabFactory(FDungeonFlowEditorTabs::NAME##ID, InFlowEditor)		\
	, FlowEditorPtr(InFlowEditor)		\
	, WidgetPtr(InWidget)		\
{		\
	bIsSingleton = true;		\
	TabLabel = CAPTION;		\
	TabIcon = FSlateIcon(FEditorStyle::GetStyleSetName(), ICON);		\
	ViewMenuDescription = CAPTION;		\
	ViewMenuTooltip = TOOLTIP_MENU;		\
}		\
TSharedRef<SWidget> FFlowEditorTabFactory_##NAME::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const		\
{		\
	check (WidgetPtr.IsValid());	\
	return WidgetPtr.Pin().ToSharedRef();		\
}		\
FText FFlowEditorTabFactory_##NAME::GetTabToolTipText(const FWorkflowTabSpawnInfo& Info) const		\
{		\
	return TOOLTIP_TAB;		\
}
///////////////////////////////////////////////////////////////
#define DEFINE_FLOW_TAB_FACTORY(NAME, CAPTION, ICON, TOOLTIP_MENU, TOOLTIP_TAB)	\
	DEFINE_FLOW_TAB_FACTORY_BASE(NAME, CAPTION, ICON, TOOLTIP_MENU, TOOLTIP_TAB)	\
	TSharedRef<SDockTab> FFlowEditorTabFactory_##NAME::SpawnTab(const FWorkflowTabSpawnInfo& Info) const { return FWorkflowTabFactory::SpawnTab(Info); }

///////////////////////////////////////////////////////////////
#define DEFINE_FLOW_TAB_FACTORY_CUSTOM_WIDGET(NAME, CAPTION, ICON, TOOLTIP_MENU, TOOLTIP_TAB)	\
	DEFINE_FLOW_TAB_FACTORY_BASE(NAME, CAPTION, ICON, TOOLTIP_MENU, TOOLTIP_TAB)


	