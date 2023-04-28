//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//


namespace UnrealBuildTool.Rules
{
    public class EditorScriptingTools : ModuleRules
    {
        public EditorScriptingTools(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;   /*PCHUsage = ModuleRules.PCHUsageMode.NoPCHs; bUseUnity = false;*/

            PrivateIncludePaths.AddRange(new string[]
                {
                "EditorScriptingTools/Private",
                "EditorScriptingTools/Private/BlueprintLibrary",
                "EditorScriptingTools/Private/ComponentVisualizer",
                "EditorScriptingTools/Private/DetailCustomization",
                "EditorScriptingTools/Private/EditorContextMenu",
                "EditorScriptingTools/Private/EditorEventsSubsystem",
                "EditorScriptingTools/Private/EditorMode",
                "EditorScriptingTools/Private/EditorModeTool",
                "EditorScriptingTools/Private/EditorScriptingToolsCommon",
                "EditorScriptingTools/Private/EditorScriptingToolsCommon/AssetTypeActions",
                "EditorScriptingTools/Private/EditorScriptingToolsCommon/DetailCustomizations",
                "EditorScriptingTools/Private/EditorScriptingToolsModule",
                "EditorScriptingTools/Private/EditorScriptingToolsSubsystem",
                "EditorScriptingTools/Private/EditorUserDefinedActions",
                "EditorScriptingTools/Private/EditorUserDefinedPlacementCategories",
                "EditorScriptingTools/Private/EditorUserDefinedSettings",
                "EditorScriptingTools/Private/EditorUserWidget",
                "EditorScriptingTools/Private/Utils",
                "EditorScriptingTools/Private/Widgets",
                });


            PublicDependencyModuleNames.AddRange(new string[]
                    {
                    "Core",
                    });

            PrivateDependencyModuleNames.AddRange(new string[]
                {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "InputCore",
                "UnrealEd",
                "LevelEditor",
                "Projects",
                "PropertyEditor",
                "EditorStyle",
                "ComponentVisualizers",
                "DetailCustomizations",
                "Settings",
                "UMG",
                "UMGEditor",
                "KismetWidgets",
                "KismetCompiler",
                "BlueprintGraph",
                "GraphEditor",
                "Kismet",
                "ClassViewer",
                "EditorWidgets",
                "Blutility",
                "ProceduralMeshComponent",
                "RenderCore",
                "RHI",
                "MeshDescription",
                "MeshDescriptionOperations",
                "AssetRegistry",
                "EditorSubsystem",
                "NavigationSystem",
                "PlacementMode",
                "SettingsEditor",
                "ApplicationCore",
                "EditorFramework",
                });

            DynamicallyLoadedModuleNames.Add("AssetTools");
            PrivateIncludePathModuleNames.Add("AssetTools");


        }
    }
}