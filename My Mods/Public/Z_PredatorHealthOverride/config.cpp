class CfgPatches
{
	class Z_Predator_Health_Override
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
	class Z_Predator_Health_Override
	{
		dir="Z_Predator_Health_Override";
		hideName=0;
		hidePicture=0;
		name="Z_Predator_Health_Override";
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
	class Predator_Dog;
	class Predator_Dog_02;
	class Predator_Dog_03;

	class PredatorsDarkInv;
	class PredatorsDark;
	class PredatorClaw;


	// --- 500 HP
	class Predator_Dog_500HP: Predator_Dog
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
	class Predator_Dog_02_500HP: Predator_Dog_02
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
	class Predator_Dog_03_500HP: Predator_Dog_03
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
	class PredatorsDarkInv_500HP: PredatorsDarkInv
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
	class PredatorsDark_500HP: PredatorsDark
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
	class PredatorClaw_500HP: PredatorClaw
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
	class Predator_Dog_1000HP: Predator_Dog
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
	class Predator_Dog_02_1000HP: Predator_Dog_02
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
	class Predator_Dog_03_1000HP: Predator_Dog_03
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
	class PredatorsDarkInv_1000HP: PredatorsDarkInv
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
	class PredatorsDark_1000HP: PredatorsDark
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
	class PredatorClaw_1000HP: PredatorClaw
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
	class Predator_Dog_1500HP: Predator_Dog
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
	class Predator_Dog_02_1500HP: Predator_Dog_02
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
	class Predator_Dog_03_1500HP: Predator_Dog_03
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
	class PredatorsDarkInv_1500HP: PredatorsDarkInv
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
	class PredatorsDark_1500HP: PredatorsDark
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
	class PredatorClaw_1500HP: PredatorClaw
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
	class Predator_Dog_2500HP: Predator_Dog
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
	class Predator_Dog_02_2500HP: Predator_Dog_02
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
	class Predator_Dog_03_2500HP: Predator_Dog_03
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
	class PredatorsDarkInv_2500HP: PredatorsDarkInv
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
	class PredatorsDark_2500HP: PredatorsDark
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
	class PredatorClaw_2500HP: PredatorClaw
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
	class Predator_Dog_5000HP: Predator_Dog
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
	class Predator_Dog_02_5000HP: Predator_Dog_02
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
	class Predator_Dog_03_5000HP: Predator_Dog_03
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
	class PredatorsDarkInv_5000HP: PredatorsDarkInv
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
	class PredatorsDark_5000HP: PredatorsDark
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
	class PredatorClaw_5000HP: PredatorClaw
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
	class Predator_Dog_7500HP: Predator_Dog
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
	class Predator_Dog_02_7500HP: Predator_Dog_02
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
	class Predator_Dog_03_7500HP: Predator_Dog_03
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
	class PredatorsDarkInv_7500HP: PredatorsDarkInv
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
	class PredatorsDark_7500HP: PredatorsDark
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
	class PredatorClaw_7500HP: PredatorClaw
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
	class Predator_Dog_10000HP: Predator_Dog
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
	class Predator_Dog_02_10000HP: Predator_Dog_02
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
	class Predator_Dog_03_10000HP: Predator_Dog_03
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
	class PredatorsDarkInv_10000HP: PredatorsDarkInv
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
	class PredatorsDark_10000HP: PredatorsDark
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
	class PredatorClaw_10000HP: PredatorClaw
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
	class Predator_Dog_15000HP: Predator_Dog
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
	class Predator_Dog_02_15000HP: Predator_Dog_02
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
	class Predator_Dog_03_15000HP: Predator_Dog_03
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
	class PredatorsDarkInv_15000HP: PredatorsDarkInv
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
	class PredatorsDark_15000HP: PredatorsDark
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
	class PredatorClaw_15000HP: PredatorClaw
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
	class Predator_Dog_30000HP: Predator_Dog
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
	class Predator_Dog_02_30000HP: Predator_Dog_02
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
	class Predator_Dog_03_30000HP: Predator_Dog_03
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
	class PredatorsDarkInv_30000HP: PredatorsDarkInv
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
	class PredatorsDark_30000HP: PredatorsDark
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
	class PredatorClaw_30000HP: PredatorClaw
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
	class Predator_Dog_50000HP: Predator_Dog
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
	class Predator_Dog_02_50000HP: Predator_Dog_02
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
	class Predator_Dog_03_50000HP: Predator_Dog_03
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
	class PredatorsDarkInv_50000HP: PredatorsDarkInv
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
	class PredatorsDark_50000HP: PredatorsDark
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
	class PredatorClaw_50000HP: PredatorClaw
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
	class Predator_Dog_75000HP: Predator_Dog
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
	class Predator_Dog_02_75000HP: Predator_Dog_02
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
	class Predator_Dog_03_75000HP: Predator_Dog_03
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
	class PredatorsDarkInv_75000HP: PredatorsDarkInv
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
	class PredatorsDark_75000HP: PredatorsDark
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
	class PredatorClaw_75000HP: PredatorClaw
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
	class Predator_Dog_100000HP: Predator_Dog
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
	class Predator_Dog_02_100000HP: Predator_Dog_02
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
	class Predator_Dog_03_100000HP: Predator_Dog_03
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
	class PredatorsDarkInv_100000HP: PredatorsDarkInv
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
	class PredatorsDark_100000HP: PredatorsDark
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
	class PredatorClaw_100000HP: PredatorClaw
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