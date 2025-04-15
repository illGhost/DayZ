class CfgPatches
{
	class Z_Alien_Health_Override
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Animals_ursus_arctos",
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class Z_Alien_Health_Override
	{
		dir="Z_Alien_Health_Override";
		hideName=0;
		hidePicture=0;
		name="Z_Alien_Health_Override";
		credits="";
		author="xKrak3n";
		authorID="999";
		version="0.1";
		extra=0;
		type="mod";
		dependencies[]={};
		class defs {};
	};
};
class cfgVehicles
{
	class XenoAlien;
	class XenoAlienII;
	class ALIENSOLDIER;
	class QueenAlien;


// --- 500 HP
	class XenoAlien_500HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_500HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_500HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_500HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class Animal_Facehugger_500HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 1000 HP
	class Animal_Facehugger_1000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlien_1000HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_1000HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_1000HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_1000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 1500 HP
	class Animal_Facehugger_1500HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlien_1500HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_1500HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_1500HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_1500HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 2500 HP
	class Animal_Facehugger_2500HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlien_2500HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_2500HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_2500HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_2500HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 5000 HP
	class Animal_Facehugger_5000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlien_5000HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_5000HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_5000HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_5000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 7500 HP
	class Animal_Facehugger_7500HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 7500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlien_7500HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 7500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_7500HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 7500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_7500HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 7500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_7500HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 7500;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 10000 HP
	class Animal_Facehugger_10000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlien_10000HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_10000HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_10000HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_10000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 15000 HP
	class XenoAlien_15000HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_15000HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_15000HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_15000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 30000 HP
	class XenoAlien_30000HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_30000HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_30000HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_30000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 50000 HP
	class XenoAlien_50000HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_50000HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_50000HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_50000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 75000 HP
	class XenoAlien_75000HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 75000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_75000HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 75000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_75000HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 75000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_75000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 75000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};

// --- 100000 HP
	class XenoAlien_100000HP: XenoAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class XenoAlienII_100000HP: XenoAlienII
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class ALIENSOLDIER_100000HP: ALIENSOLDIER
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
	class QueenAlien_100000HP: QueenAlien
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5;
				};
				class Shock
				{
					hitpoints = 5;
				};
			};
		};
	};
};