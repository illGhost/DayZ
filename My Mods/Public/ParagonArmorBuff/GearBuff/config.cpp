class CfgPatches
{
	class ParagonArmorBuff
	{
		requiredAddons[] = 
        {
            "DZ_Data",
            "DZ_Characters_Vests",
            "DZ_Scripts",
            "Paragon_6B13",
            "Paragon_6B43",
            "Paragon_Altyn",
            "Paragon_Armored_Helmet",
            "Paragon_Combat_Helmet",
            "Paragon_Compact_6B43",
            "Paragon_DCS",
            "Paragon_DCS_L",
            "Paragon_IOTV",
            "Paragon_JPC",
            "Paragon_Killa",
            "Paragon_Mando",
            "Paragon_Maska",
            "Paragon_Scifi_Helmet",
            "Paragon_Slick",
            "Paragon_Soviet",
            "Paragon_Space_Helmet",
            "Paragon_TacTec",
            "Paragon_Tactical_Helmet",
            "Paragon_TacticalVest",
            "Paragon_US_Military_Bag"
        };
		units[] = {};
		weapons[] = {};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base;

	class 6B13_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The 6B13 Vest has 93% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2625;
					healthLevels[] = {{1,{"ParagonGear\6B13\data\6B13.rvmat"}},{0.7,{"ParagonGear\6B13\data\6B13.rvmat"}},{0.5,{"ParagonGear\6B13\data\6B13_damage.rvmat"}},{0.3,{"ParagonGear\6B13\data\6B13_damage.rvmat"}},{0,{"ParagonGear\6B13\data\6B13_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.07;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	};
    class 6B43_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Digital Flora 6B43 has 95% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2625;
					healthLevels[] = {{1,{"ParagonGear\6B43Vest\data\6B43Vest.rvmat"}},{0.7,{"ParagonGear\6B43Vest\data\6B43Vest.rvmat"}},{0.5,{"ParagonGear\6B43Vest\data\6B43Vest_damage.rvmat"}},{0.3,{"ParagonGear\6B43Vest\data\6B43Vest_damage.rvmat"}},{0,{"ParagonGear\6B43Vest\data\6B43Vest_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Altyn_Helmet_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Black Altyn Helmet has 90% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1315;
					healthLevels[] = {{1,{"ParagonGear\Altyn\data\Altyn.rvmat"}},{0.7,{"ParagonGear\Altyn\data\Altyn.rvmat"}},{0.5,{"ParagonGear\Altyn\data\Altyn_damage.rvmat"}},{0.3,{"ParagonGear\Altyn\data\Altyn_damage.rvmat"}},{0,{"ParagonGear\Altyn\data\Altyn_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Armored_Helmet_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Armored Helmet has 87% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1315;
					healthLevels[] = {{1,{"ParagonGear\Armored_Helmet\data\Armored_Helmet.rvmat"}},{0.7,{"ParagonGear\Armored_Helmet\data\Armored_Helmet.rvmat"}},{0.5,{"ParagonGear\Armored_Helmet\data\Armored_Helmet_damage.rvmat"}},{0.3,{"ParagonGear\Armored_Helmet\data\Armored_Helmet_damage.rvmat"}},{0,{"ParagonGear\Armored_Helmet\data\Armored_Helmet_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.13;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.13;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.13;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Combat_Helmet_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Combat Helmet has 83% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1315;
					healthLevels[] = {{1,{"ParagonGear\Combat_Helmet\data\Combat_Helmet.rvmat"}},{0.7,{"ParagonGear\Combat_Helmet\data\Combat_Helmet.rvmat"}},{0.5,{"ParagonGear\Combat_Helmet\data\Combat_Helmet_damage.rvmat"}},{0.3,{"ParagonGear\Combat_Helmet\data\Combat_Helmet_damage.rvmat"}},{0,{"ParagonGear\Combat_Helmet\data\Combat_Helmet_destruct.rvmat"}}};
				};
			};
        };
	};
    
    class Compact_6B43_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Compact 6B43 has 87% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2625;
					healthLevels[] = {{1,{"ParagonGear\6B43Vest\data\6B43Vest.rvmat"}},{0.7,{"ParagonGear\6B43Vest\data\6B43Vest.rvmat"}},{0.5,{"ParagonGear\6B43Vest\data\6B43Vest_damage.rvmat"}},{0.3,{"ParagonGear\6B43Vest\data\6B43Vest_damage.rvmat"}},{0,{"ParagonGear\6B43Vest\data\6B43Vest_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.13;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.13;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.13;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class DCS_V2_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The DCS Vest has 85% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1750;
					healthLevels[] = {{1,{"ParagonGear\DCS\data\Vest.rvmat","ParagonGear\DCS\data\Protection.rvmat"}},{0.7,{"ParagonGear\DCS\data\Vest.rvmat","ParagonGear\DCS\data\Protection.rvmat"}},{0.5,{"ParagonGear\DCS\data\Vest_damage.rvmat","ParagonGear\DCS\data\Protection_damage.rvmat"}},{0.3,{"ParagonGear\DCS\data\Vest_damage.rvmat","ParagonGear\DCS\data\Protection_damage.rvmat"}},{0,{"ParagonGear\DCS\data\Vest_destruct.rvmat","ParagonGear\DCS\data\Protection_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.15;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.15;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.15;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class DCS_L_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Light DCS has 76% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 875;
					healthLevels[] = {{1,{"ParagonGear\DCS\data\Vest.rvmat"}},{0.7,{"ParagonGear\DCS\data\Vest.rvmat"}},{0.5,{"ParagonGear\DCS\data\Vest_damage.rvmat"}},{0.3,{"ParagonGear\DCS\data\Vest_damage.rvmat"}},{0,{"ParagonGear\DCS\data\Vest_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class IOTV_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The IOTV has 89% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1750;
					healthLevels[] = {{1,{"ParagonGear\IOTV\data\IOTV.rvmat"}},{0.7,{"ParagonGear\IOTV\data\IOTV.rvmat"}},{0.5,{"ParagonGear\IOTV\data\IOTV_damage.rvmat"}},{0.3,{"ParagonGear\IOTV\data\IOTV_damage.rvmat"}},{0,{"ParagonGear\IOTV\data\IOTV_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class JPC_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The JPC Vest has 73% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 875;
					healthLevels[] = {{1,{"ParagonGear\JPC\data\JPC.rvmat"}},{0.7,{"ParagonGear\JPC\data\JPC.rvmat"}},{0.5,{"ParagonGear\JPC\data\JPC_damage.rvmat"}},{0.3,{"ParagonGear\JPC\data\JPC_damage.rvmat"}},{0,{"ParagonGear\JPC\data\JPC_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.26;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.29;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.29;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.45;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Killa_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Killa Helmet has 95% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2625;
					healthLevels[] = {{1,{"ParagonGear\Killa\data\Killa.rvmat"}},{0.7,{"ParagonGear\Killa\data\Killa.rvmat"}},{0.5,{"ParagonGear\Killa\data\Killa_damage.rvmat"}},{0.3,{"ParagonGear\Killa\data\Killa_damage.rvmat"}},{0,{"ParagonGear\Killa\data\Killa_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.05;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Mando_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Mando Helmet has 78% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1315;
					healthLevels[] = {{1,{"ParagonGear\Mando\data\Mando.rvmat"}},{0.7,{"ParagonGear\Mando\data\Mando.rvmat"}},{0.5,{"ParagonGear\Mando\data\Mando_damage.rvmat"}},{0.3,{"ParagonGear\Mando\data\Mando_damage.rvmat"}},{0,{"ParagonGear\Mando\data\Mando_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.21;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.21;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.21;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.55;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Maska_Helmet_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Maska Helmet has 81% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1315;
					healthLevels[] = {{1,{"ParagonGear\Maska\data\Maska.rvmat","ParagonGear\Maska\data\Maska_Mask.rvmat"}},{0.7,{"ParagonGear\Maska\data\Maska.rvmat","ParagonGear\Maska\data\Maska_Mask.rvmat"}},{0.5,{"ParagonGear\Maska\data\Maska_damage.rvmat","ParagonGear\Maska\data\Maska_Mask_damage.rvmat"}},{0.3,{"ParagonGear\Maska\data\Maska_damage.rvmat","ParagonGear\Maska\data\Maska_Mask_damage.rvmat"}},{0,{"ParagonGear\Maska\data\Maska_destruct.rvmat","ParagonGear\Maska\data\Maska_Mask_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Scifi_Helmet_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Scifi Helmet has 85% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1315;
					healthLevels[] = {{1,{"ParagonGear\Scifi_Helmet\data\Scifi_Helmet.rvmat"}},{0.7,{"ParagonGear\Scifi_Helmet\data\Scifi_Helmet.rvmat"}},{0.5,{"ParagonGear\Scifi_Helmet\data\Scifi_Helmet_damage.rvmat"}},{0.3,{"ParagonGear\Scifi_Helmet\data\Scifi_Helmet_damage.rvmat"}},{0,{"ParagonGear\Scifi_Helmet\data\Scifi_Helmet_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.15;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.15;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.15;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Slick_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Slick Vest is a light weight armor with a 90% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2625;
					healthLevels[] = {{1,{"ParagonGear\Slick\data\Slick.rvmat"}},{0.7,{"ParagonGear\Slick\data\Slick.rvmat"}},{0.5,{"ParagonGear\Slick\data\Slick_damage.rvmat"}},{0.3,{"ParagonGear\Slick\data\Slick_damage.rvmat"}},{0,{"ParagonGear\Slick\data\Slick_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.095;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.095;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.095;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.23;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Soviet_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Soviet Vest has 83% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1315;
					healthLevels[] = {{1,{"ParagonGear\Soviet\data\Soviet.rvmat"}},{0.7,{"ParagonGear\Soviet\data\Soviet.rvmat"}},{0.5,{"ParagonGear\Soviet\data\Soviet_damage.rvmat"}},{0.3,{"ParagonGear\Soviet\data\Soviet_damage.rvmat"}},{0,{"ParagonGear\Soviet\data\Soviet_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.17;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.17;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.17;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Space_Helmet_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Space Raider Helmet has 86% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 1315;
				healthLevels[] = {{1,{"ParagonGear\Space_Helmet\data\Space_Helmet.rvmat"}},{0.7,{"ParagonGear\Space_Helmet\data\Space_Helmet.rvmat"}},{0.5,{"ParagonGear\Space_Helmet\data\Space_Helmet_damage.rvmat"}},{0.3,{"ParagonGear\Space_Helmet\data\Space_Helmet_damage.rvmat"}},{0,{"ParagonGear\Space_Helmet\data\Space_Helmet_destruct.rvmat"}}};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.14;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.14;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.14;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.14;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class TacTec_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Tac Tec has 80% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1400;
					healthLevels[] = {{1,{"ParagonGear\TacTec\data\TacTec.rvmat"}},{0.7,{"ParagonGear\TacTec\data\TacTec.rvmat"}},{0.5,{"ParagonGear\TacTec\data\TacTec_damage.rvmat"}},{0.3,{"ParagonGear\TacTec\data\TacTec_damage.rvmat"}},{0,{"ParagonGear\TacTec\data\TacTec_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.37;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
    
    class Tactical_Helmet_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Tactical Helmet has 75% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				hitpoints = 950;
				healthLevels[] = {{1,{"ParagonGear\Tactical_Helmet\data\Tac_Helm.rvmat"}},{0.7{"ParagonGear\Tactical_Helmet\data\Tac_Helm.rvmat"}},{0.5,{"ParagonGear\Tactical_Helmet\data\Tac_Helm_damagervmat"}},{0.3,{"ParagonGear\Tactical_Helmet\data\Tac_Helm_damage.rvmat"}},{0{"ParagonGear\Tactical_Helmet\data\Tac_Helm_destruct.rvmat"}}};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.55;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
    };
    
    class TacticalVest_ColorBase: Clothing
	{
		scope = 0;
		descriptionShort = "The Tactical Vest has 92% damage reduction, Manufactured by Paragon";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2625;
					healthLevels[] = {{1,{"ParagonGear\TacticalVest\data\TacticalVest.rvmat"}},{0.7,{"ParagonGear\TacticalVest\data\TacticalVest.rvmat"}},{0.5,{"ParagonGear\TacticalVest\data\TacticalVest_damage.rvmat"}},{0.3,{"ParagonGear\TacticalVest\data\TacticalVest_damage.rvmat"}},{0,{"ParagonGear\TacticalVest\data\TacticalVest_destruct.rvmat"}}};
				};
			};
            class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.085;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.085;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.085;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
        };
	};
};