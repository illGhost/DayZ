class CfgPatches
{
	class xKrak3nsRadiantAnimals
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Data_Bliss",
			"DZ_AI_Bliss",
			"DZ_Animals",
			"DZ_Animals_Bliss",
			"DZ_Weapons_Melee"
		};
	};
};

class CfgMods
{
	class xKrak3nsRadiantAnimals
	{
		dir = "RadiantAnimals";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "RadiantAnimals";
		author = "xKrak3n";
		authorID = "999";
		version = "0.1";
		extra = 0;
		type = "mod";

		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"RadiantAnimals/scripts"};
			};
		};

		dependencies[] = {
			"Game",
			"World",
			"Mission"
		};
	};
};

class CfgVehicles
{
	class Animal_UrsusArctos;

	
	class xKrkn_RadiantBearGreen: Animal_UrsusArctos
	{
		scope = 2;
		hiddenSelections[]=
		{
			"body_injury"
		};
		hiddenSelectionsTextures[]=
		{
			"RadiantAnimals\data\xKrknRadiantBearGreen_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RadiantAnimals\data\green-eyes.rvmat"
		};
	};

};