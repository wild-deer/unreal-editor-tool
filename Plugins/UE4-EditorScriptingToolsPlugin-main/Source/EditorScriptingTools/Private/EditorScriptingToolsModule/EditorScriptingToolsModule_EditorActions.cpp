//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "EditorScriptingToolsModule.h"

#include "EditorUserDefinedActions.h"
#include "EditorUserDefinedCommands.h"


#define LOCTEXT_NAMESPACE "EditorScriptingToolsModule_EditorActions"


void FEditorScriptingToolsModule::RegisterEditorUserDefinedActions(UEditorUserDefinedActions* UserDefinedActionsAsset)
{
	check(!FEditorUserDefinedCommands::IsEditorUserDefinedActionsRegistered(UserDefinedActionsAsset));
	FEditorUserDefinedCommands::RegisterActions(UserDefinedActionsAsset);
}

void FEditorScriptingToolsModule::RefreshEditorUserDefinedActions(UEditorUserDefinedActions* UserDefinedActionsAsset)
{
	check(FEditorUserDefinedCommands::IsEditorUserDefinedActionsRegistered(UserDefinedActionsAsset));
	FEditorUserDefinedCommands::RefreshCurrentMappings();
}

void FEditorScriptingToolsModule::UnregisterEditorUserDefinedActions(UEditorUserDefinedActions* UserDefinedActionsAsset)
{
	check(FEditorUserDefinedCommands::IsEditorUserDefinedActionsRegistered(UserDefinedActionsAsset));
	FEditorUserDefinedCommands::UnregisterActions(true);
}

bool FEditorScriptingToolsModule::CanRegisterEditorUserDefinedActions(const UEditorUserDefinedActions* UserDefinedActionsAsset) const
{
	return !FEditorUserDefinedCommands::IsEditorUserDefinedActionsRegistered(UserDefinedActionsAsset) && UserDefinedActionsAsset->GetActionsNum() > 0;
}

bool FEditorScriptingToolsModule::IsEditorUserDefinedActionsRegistered(const UEditorUserDefinedActions* UserDefinedActionsAsset) const
{
	return FEditorUserDefinedCommands::IsEditorUserDefinedActionsRegistered(UserDefinedActionsAsset);
}

#undef LOCTEXT_NAMESPACE	