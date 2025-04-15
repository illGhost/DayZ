class CfgPatches 
{
	class xKrak3nsRaptorPelts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgMods
{
	class xKrak3nsRaptorPelts
	{
		dir = "RaptorPelts";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "xKrak3nsRaptorPelts";
		credits = "DeanosBeano/Vanmag/liquidrock/Tree";
		author = "xKrak3n";
		authorID = "999";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"RaptorPelts/xKrak3nsRaptorPelts/scripts/4_world"};
			};
		};
	};
};