class CfgPatches
{
	class Krak3nsChallengerTextures
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MBM_DodgeChallenger"};
	};
};
class CfgMods
{
	class Krak3nsChallengerTextures
	{
		dir = "Krak3nsChallengerTextures";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Krak3nsChallengerTextures";
		credits = "mebrad";
		author = "xKrak3n";
		authorID = "999";
		version = 1;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Krak3nsChallengerTextures\scripts\4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class MBM_DodgeChallenger_Red;
	class MBM_DodgeChallenger_Camo: MBM_DodgeChallenger_Red
	{
		scope = 2;
		displayname = "Dodge Challenger White";
		descriptionShort = "";
		Model = "MBM_DodgeChallenger\DodgeChallengerWhite.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {"","","","","","","","",""};
		hiddenSelectionsMaterials[] = {"MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat","MBM_DodgeChallenger\data\generic.rvmat"};
	};
};