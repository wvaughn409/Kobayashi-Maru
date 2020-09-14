/*=================================================
* Copyright notices:
* FileName: TinyXml.Build.cs
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/2
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

using System.IO;
using UnrealBuildTool;

public class TinyXml : ModuleRules
{
    public TinyXml(ReadOnlyTargetRules Target):base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
			new string[] {
                Path.Combine(ModuleDirectory, "Public"),
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
            Path.Combine(ModuleDirectory, "Private"),
				// ... add other private include paths required here ...
			}
            );
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",

				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
