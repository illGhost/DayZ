class CfgPatches
{
	class ZombieDespawn
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
    class Krak3nZombieDespawn
    {
        type = "mod";
        dependencies[] = {"Game","World","Mission"};
        class defs
        {
            class missionScriptModule
            {
                value = "";
                files[] = {"Your_Mod_Folder/scripts/5_Mission"};
            };
        };
    };
};